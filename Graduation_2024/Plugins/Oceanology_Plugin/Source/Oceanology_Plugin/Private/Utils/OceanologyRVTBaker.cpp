// Copyright 1998-2023 Epic Games, Inc. All Rights Reserved.
// =================================================
// Created by: Galidar
// Project name: Oceanology
// Created on: 2023/12/15
//
// =================================================

#include "Utils/OceanologyRVTBaker.h"
#include "Async/Async.h"
#include "SceneInterface.h"
#include "TextureResource.h"
#include "ContentStreaming.h"
#include "Engine/Texture2D.h"
#include "RenderGraphBuilder.h"
#include "VT/RuntimeVirtualTexture.h"
#include "VT/RuntimeVirtualTextureRender.h"
#include "Components/RuntimeVirtualTextureComponent.h"

#if !WITH_EDITOR
namespace RuntimeVirtualTexture
{
	uint32 GetRuntimeVirtualTextureSceneIndex_GameThread(URuntimeVirtualTextureComponent* InComponent);
}
#endif

// Reference in RuntimeVirtualTextureBuildStreamingMips.cpp
namespace
{
	/** Container for render resources needed to render the runtime virtual texture. */
	class FTileRenderResources : public FRenderResource
	{
	public:
		FTileRenderResources(int32 InTileSize, int32 InNumTilesX, int32 InNumTilesY, int32 InNumLayers, TArrayView<EPixelFormat> const& InLayerFormats)
			: TileSize(InTileSize)
			, NumLayers(InNumLayers)
			, TotalSizeBytes(0)
		{
			LayerFormats.SetNumZeroed(InNumLayers);
			LayerOffsets.SetNumZeroed(InNumLayers);

			for (int32 Layer = 0; Layer < NumLayers; ++Layer)
			{
				check(InLayerFormats[Layer] == PF_G16 || InLayerFormats[Layer] == PF_B8G8R8A8 || InLayerFormats[Layer] == PF_DXT1 || InLayerFormats[Layer] == PF_DXT5 || InLayerFormats[Layer] == PF_BC5
					|| InLayerFormats[Layer] == PF_R5G6B5_UNORM || InLayerFormats[Layer] == PF_B5G5R5A1_UNORM);
				LayerFormats[Layer] = InLayerFormats[Layer] == PF_G16 ? PF_G16 : PF_B8G8R8A8;
				LayerOffsets[Layer] = TotalSizeBytes;
				TotalSizeBytes += CalculateImageBytes(InTileSize, InTileSize, 0, LayerFormats[Layer]) * InNumTilesX * InNumTilesY;
			}
		}

		//~ Begin FRenderResource Interface.
		virtual void InitRHI(FRHICommandListBase& RHICmdList) override
		{
			RenderTargets.Init(nullptr, NumLayers);
			StagingTextures.Init(nullptr, NumLayers);

			for (int32 Layer = 0; Layer < NumLayers; ++Layer)
			{
				FRHITextureCreateDesc Desc =
					FRHITextureCreateDesc::Create2D(TEXT("FTileRenderResources"), TileSize, TileSize, LayerFormats[Layer]);

				Desc.SetFlags(ETextureCreateFlags::RenderTargetable);
				RenderTargets[Layer] = RHICreateTexture(Desc);

				Desc.SetFlags(ETextureCreateFlags::CPUReadback);
				StagingTextures[Layer] = RHICreateTexture(Desc);
			}

			Fence = RHICreateGPUFence(TEXT("Runtime Virtual Texture Build"));
		}

		virtual void ReleaseRHI() override
		{
			RenderTargets.Empty();
			StagingTextures.Empty();
			Fence.SafeRelease();
		}
		//~ End FRenderResource Interface.

		int32 GetNumLayers() const { return NumLayers; }
		int64 GetTotalSizeBytes() const { return TotalSizeBytes; }

		EPixelFormat GetLayerFormat(int32 Index) const { return LayerFormats[Index]; }
		int64 GetLayerOffset(int32 Index) const { return LayerOffsets[Index]; }

		FRHITexture2D* GetRenderTarget(int32 Index) const { return Index < NumLayers ? RenderTargets[Index] : nullptr; }
		FRHITexture2D* GetStagingTexture(int32 Index) const { return Index < NumLayers ? StagingTextures[Index] : nullptr; }
		FRHIGPUFence* GetFence() const { return Fence; }

	private:
		int32 TileSize;
		int32 NumLayers;
		int64 TotalSizeBytes;

		TArray<EPixelFormat> LayerFormats;
		TArray<int64> LayerOffsets;

		TArray<FTexture2DRHIRef> RenderTargets;
		TArray<FTexture2DRHIRef> StagingTextures;
		FGPUFenceRHIRef Fence;
	};

	/** Templatized helper function for copying a rendered tile to the final composited image data. */
	template<typename T>
	void TCopyTile(T* SrcPixels, int32 TileSize, int32 SrcStride, T* DestPixels, int32 DestStride, int32 DestLayerStride, FIntPoint const& DestPos)
	{
		for (int32 y = 0; y < TileSize; y++)
		{
			memcpy(
				DestPixels + (SIZE_T)DestStride * ((SIZE_T)DestPos[1] + (SIZE_T)y) + DestPos[0],
				SrcPixels + SrcStride * y,
				TileSize * sizeof(T));
		}
	}

	/** Function for copying a rendered tile to the final composited image data. Needs ERuntimeVirtualTextureMaterialType to know what type of data is being copied. */
	void CopyTile(void* SrcPixels, int32 TileSize, int32 SrcStride, void* DestPixels, int32 DestStride, int32 DestLayerStride, FIntPoint const& DestPos, EPixelFormat Format)
	{
		check(Format == PF_G16 || Format == PF_B8G8R8A8);
		if (Format == PF_G16)
		{
			TCopyTile((uint16*)SrcPixels, TileSize, SrcStride, (uint16*)DestPixels, DestStride, DestLayerStride, DestPos);
		}
		else if (Format == PF_B8G8R8A8)
		{
			TCopyTile((FColor*)SrcPixels, TileSize, SrcStride, (FColor*)DestPixels, DestStride, DestLayerStride, DestPos);
		}
	}
}

void FOceanologyRVTBaker::BakeRVTIntoTexture(TObjectPtr<UTexture2D>& Texture, URuntimeVirtualTextureComponent* RVTComponent)
{
	// We need to bake out as G16 PixelFormat, since RVT WorldHeight uses this format
	static constexpr EPixelFormat PixelFormat = PF_G16;

	int32 SizeX = 0;
	int32 SizeY = 0;
	TArray64<uint8> Pixels;
	BuildMips(RVTComponent, Pixels, SizeX, SizeY);

	if (!Texture ||
		Texture->GetSizeX() != SizeX ||
		Texture->GetSizeY() != SizeY)
	{
		Texture = UTexture2D::CreateTransient(SizeX, SizeY, PixelFormat);
	}

	uint8* MipData = static_cast<uint8*>(Texture->GetPlatformData()->Mips[0].BulkData.Lock(LOCK_READ_WRITE));
	const int32 DataSize = SizeX * SizeY * GPixelFormats[PixelFormat].BlockBytes;
	FMemory::Memcpy(MipData, Pixels.GetData(), DataSize);
		
	Texture->GetPlatformData()->Mips[0].BulkData.Unlock();
	Texture->UpdateResource();
		
	FTexture2DRHIRef RHITexture2D;

	void* Data = Pixels.GetData();
	void** DataPtr = &Data;

	constexpr int32 NumMips = 1;

	Async(
		EAsyncExecution::Thread, 
		[&RHITexture2D, SizeX, SizeY, NumMips, DataPtr]
		{
			FGraphEventRef CompletionEvent;
			RHITexture2D = RHIAsyncCreateTexture2D(
				SizeX, SizeY,
				PixelFormat,
				NumMips,
				TexCreate_ShaderResource,
				ERHIAccess::Unknown,
				DataPtr,
				NumMips,
				TEXT("BakeRVTIntoTexture"),
				CompletionEvent
			);
		}
	).Wait();

	ENQUEUE_RENDER_COMMAND(UpdateTextureReference)(
		[RHITexture2D, Texture](FRHICommandListImmediate& RHICmdList)
		{
			RHIUpdateTextureReference(Texture->TextureReference.TextureReferenceRHI, RHITexture2D);
			Texture->RefreshSamplerStates();
		}
	);
}

// RuntimeVirtualTextureBuildStreamingMips::BuildStreamedMips
void FOceanologyRVTBaker::BuildMips(URuntimeVirtualTextureComponent* RVTComponent, TArray64<uint8>& OutPixels, int32& OutSizeX, int32& OutSizeY)
{
	URuntimeVirtualTexture* RuntimeVirtualTexture = RVTComponent->GetVirtualTexture();
	FSceneInterface* Scene = RVTComponent->GetScene();
	uint32 VirtualTextureSceneIndex = RuntimeVirtualTexture::GetRuntimeVirtualTextureSceneIndex_GameThread(RVTComponent);
	const FTransform Transform = RVTComponent->GetComponentTransform();
	const FBox Bounds = RVTComponent->Bounds.GetBox();

	FVTProducerDescription VTDesc;
	RuntimeVirtualTexture->GetProducerDescription(VTDesc, URuntimeVirtualTexture::FInitSettings(), Transform);

	const int32 TileSize = VTDesc.TileSize;
	const int32 TileBorderSize = VTDesc.TileBorderSize;
	const int32 TextureSizeX = VTDesc.WidthInBlocks * VTDesc.BlockWidthInTiles * TileSize;
	const int32 TextureSizeY = VTDesc.HeightInBlocks * VTDesc.BlockHeightInTiles * TileSize;
	const int32 MaxLevel = (int32)FMath::CeilLogTwo(FMath::Max(VTDesc.BlockWidthInTiles, VTDesc.BlockHeightInTiles));
	const int32 RenderLevel = FMath::Max(MaxLevel - RVTComponent->NumStreamingMips() + 1, 0);
	const int32 ImageSizeX = FMath::Max(TileSize, TextureSizeX >> RenderLevel);
	const int32 ImageSizeY = FMath::Max(TileSize, TextureSizeY >> RenderLevel);
	const int32 NumTilesX = ImageSizeX / TileSize;
	const int32 NumTilesY = ImageSizeY / TileSize;
	const int32 NumLayers = RuntimeVirtualTexture->GetLayerCount();

	const ERuntimeVirtualTextureMaterialType MaterialType = RuntimeVirtualTexture->GetMaterialType();
	TArray<EPixelFormat, TInlineAllocator<4>> LayerFormats;
	for (int32 Layer = 0; Layer < NumLayers; ++Layer)
	{
		LayerFormats.Add(RuntimeVirtualTexture->GetLayerFormat(Layer));
	}

	// Spin up slow task UI
	const float TaskWorkRender = NumTilesX * NumTilesY;
	const float TextureBuildTaskMultiplier = 0.25f;
	const float TaskWorkBuildBulkData = TaskWorkRender * TextureBuildTaskMultiplier;

	// Allocate render targets for rendering out the runtime virtual texture tiles
	FTileRenderResources RenderTileResources(TileSize, NumTilesX, NumTilesY, NumLayers, LayerFormats);
	BeginInitResource(&RenderTileResources);

	int64 RenderTileResourcesBytes = RenderTileResources.GetTotalSizeBytes();

	UE_LOG(LogVirtualTexturing,Display,TEXT("Allocating %uMiB for RenderTileResourcesBytes"),(uint32)(RenderTileResourcesBytes/(1024*1024)));

	// Final pixels will contain image data for each virtual texture layer in order
	TArray64<uint8> FinalPixels;
	FinalPixels.SetNumUninitialized(RenderTileResourcesBytes);

	// Iterate over all tiles and render/store each one to the final image
	for (int32 TileY = 0; TileY < NumTilesY; TileY++)
	{
		for (int32 TileX = 0; TileX < NumTilesX; TileX++)
		{
			const FBox2D UVRange = FBox2D(
				FVector2D((float)TileX / (float)NumTilesX, (float)TileY / (float)NumTilesY),
				FVector2D((float)(TileX + 1) / (float)NumTilesX, (float)(TileY + 1) / (float)NumTilesY));

			// Stream textures for this tile. This triggers a render flush internally.
			//todo[vt]: Batch groups of streaming locations and render commands to reduce number of flushes.
			const FVector StreamingWorldPos = Transform.TransformPosition(FVector(UVRange.GetCenter(), 0.5f));
			IStreamingManager::Get().Tick(0.f);
			IStreamingManager::Get().AddViewLocation(StreamingWorldPos);
			IStreamingManager::Get().StreamAllResources(0);

			ENQUEUE_RENDER_COMMAND(BakeStreamingTextureTileCommand)([
				Scene, VirtualTextureSceneIndex, 
				&RenderTileResources,
				MaterialType, NumLayers,
				Transform, Bounds, UVRange,
				RenderLevel, MaxLevel, 
				TileX, TileY,
				TileSize, ImageSizeX, ImageSizeY, 
				&FinalPixels](FRHICommandListImmediate& RHICmdList)
			{
				const FBox2D TileBox(FVector2D(0, 0), FVector2D(TileSize, TileSize));
				const FIntRect TileRect(0, 0, TileSize, TileSize);

				// Transition render targets for writing
				for (int32 Layer = 0; Layer < NumLayers; Layer++)
				{
					RHICmdList.Transition(FRHITransitionInfo(RenderTileResources.GetRenderTarget(Layer), ERHIAccess::Unknown, ERHIAccess::RTV));
				}

				{
					FRDGBuilder GraphBuilder(RHICmdList);

					RuntimeVirtualTexture::FRenderPageBatchDesc Desc;
					Desc.Scene = Scene->GetRenderScene();
					Desc.RuntimeVirtualTextureMask = 1 << VirtualTextureSceneIndex;
					Desc.UVToWorld = Transform;
					Desc.WorldBounds = Bounds;
					Desc.MaterialType = MaterialType;
					Desc.MaxLevel = MaxLevel;
					Desc.bClearTextures = true;
					Desc.bIsThumbnails = false;
					// Desc.DebugType = ERuntimeVirtualTextureDebugType::None;
					Desc.NumPageDescs = 1;
					Desc.Targets[0].Texture = RenderTileResources.GetRenderTarget(0);
					Desc.Targets[1].Texture = RenderTileResources.GetRenderTarget(1);
					Desc.Targets[2].Texture = RenderTileResources.GetRenderTarget(2);
					Desc.PageDescs[0].DestBox[0] = TileBox;
					Desc.PageDescs[0].DestBox[1] = TileBox;
					Desc.PageDescs[0].DestBox[2] = TileBox;
					Desc.PageDescs[0].UVRange = UVRange;
					Desc.PageDescs[0].vLevel = RenderLevel;

					RuntimeVirtualTexture::RenderPagesStandAlone(GraphBuilder, Desc);

					GraphBuilder.Execute();
				}

				// Copy to staging
				for (int32 Layer = 0; Layer < NumLayers; Layer++)
				{
					RHICmdList.Transition(FRHITransitionInfo(RenderTileResources.GetRenderTarget(Layer), ERHIAccess::RTV, ERHIAccess::CopySrc));
					RHICmdList.CopyTexture(RenderTileResources.GetRenderTarget(Layer), RenderTileResources.GetStagingTexture(Layer), FRHICopyTextureInfo());
				}

				RenderTileResources.GetFence()->Clear();
				RHICmdList.WriteGPUFence(RenderTileResources.GetFence());

				// Read back tile data and copy into final destination
				for (int32 Layer = 0; Layer < NumLayers; Layer++)
				{
					void* TilePixels = nullptr;
					int32 OutWidth, OutHeight;
					RHICmdList.MapStagingSurface(RenderTileResources.GetStagingTexture(Layer), RenderTileResources.GetFence(), TilePixels, OutWidth, OutHeight);
					check(TilePixels != nullptr);
					check(OutHeight == TileSize);

					const int64 LayerOffset = RenderTileResources.GetLayerOffset(Layer);
					const EPixelFormat LayerFormat = RenderTileResources.GetLayerFormat(Layer);
					const FIntPoint DestPos(TileX * TileSize, TileY * TileSize);

					CopyTile(TilePixels, TileSize, OutWidth, FinalPixels.GetData() + LayerOffset, ImageSizeX, ImageSizeX * ImageSizeY, DestPos, LayerFormat);

					RHICmdList.UnmapStagingSurface(RenderTileResources.GetStagingTexture(Layer));
				}
			});
		}
	}

	BeginReleaseResource(&RenderTileResources);
	FlushRenderingCommands();

	OutPixels = FinalPixels;
	OutSizeX = ImageSizeX;
	OutSizeY = ImageSizeY;
}