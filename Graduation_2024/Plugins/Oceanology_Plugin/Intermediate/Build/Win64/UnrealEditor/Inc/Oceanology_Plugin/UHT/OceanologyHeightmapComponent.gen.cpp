// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Oceanology_Plugin/Public/Components/OceanologyHeightmapComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOceanologyHeightmapComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_UOceanologyHeightmapComponent();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_UOceanologyHeightmapComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Oceanology_Plugin();
// End Cross Module References

// Begin Class UOceanologyHeightmapComponent Function Init
struct Z_Construct_UFunction_UOceanologyHeightmapComponent_Init_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/OceanologyHeightmapComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologyHeightmapComponent_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologyHeightmapComponent, nullptr, "Init", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyHeightmapComponent_Init_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologyHeightmapComponent_Init_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UOceanologyHeightmapComponent_Init()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologyHeightmapComponent_Init_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologyHeightmapComponent::execInit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Init();
	P_NATIVE_END;
}
// End Class UOceanologyHeightmapComponent Function Init

// Begin Class UOceanologyHeightmapComponent Function SaveHeightmap
struct Z_Construct_UFunction_UOceanologyHeightmapComponent_SaveHeightmap_Statics
{
	struct OceanologyHeightmapComponent_eventSaveHeightmap_Parms
	{
		UTexture2D* NewHeightmap;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/OceanologyHeightmapComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewHeightmap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOceanologyHeightmapComponent_SaveHeightmap_Statics::NewProp_NewHeightmap = { "NewHeightmap", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyHeightmapComponent_eventSaveHeightmap_Parms, NewHeightmap), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanologyHeightmapComponent_SaveHeightmap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyHeightmapComponent_SaveHeightmap_Statics::NewProp_NewHeightmap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyHeightmapComponent_SaveHeightmap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologyHeightmapComponent_SaveHeightmap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologyHeightmapComponent, nullptr, "SaveHeightmap", nullptr, nullptr, Z_Construct_UFunction_UOceanologyHeightmapComponent_SaveHeightmap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyHeightmapComponent_SaveHeightmap_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOceanologyHeightmapComponent_SaveHeightmap_Statics::OceanologyHeightmapComponent_eventSaveHeightmap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyHeightmapComponent_SaveHeightmap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologyHeightmapComponent_SaveHeightmap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOceanologyHeightmapComponent_SaveHeightmap_Statics::OceanologyHeightmapComponent_eventSaveHeightmap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanologyHeightmapComponent_SaveHeightmap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologyHeightmapComponent_SaveHeightmap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologyHeightmapComponent::execSaveHeightmap)
{
	P_GET_OBJECT(UTexture2D,Z_Param_NewHeightmap);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SaveHeightmap(Z_Param_NewHeightmap);
	P_NATIVE_END;
}
// End Class UOceanologyHeightmapComponent Function SaveHeightmap

// Begin Class UOceanologyHeightmapComponent Function SaveHeightmapRenderTarget
struct Z_Construct_UFunction_UOceanologyHeightmapComponent_SaveHeightmapRenderTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Oceanology" },
		{ "ModuleRelativePath", "Public/Components/OceanologyHeightmapComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologyHeightmapComponent_SaveHeightmapRenderTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologyHeightmapComponent, nullptr, "SaveHeightmapRenderTarget", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyHeightmapComponent_SaveHeightmapRenderTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologyHeightmapComponent_SaveHeightmapRenderTarget_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UOceanologyHeightmapComponent_SaveHeightmapRenderTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologyHeightmapComponent_SaveHeightmapRenderTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologyHeightmapComponent::execSaveHeightmapRenderTarget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SaveHeightmapRenderTarget();
	P_NATIVE_END;
}
// End Class UOceanologyHeightmapComponent Function SaveHeightmapRenderTarget

// Begin Class UOceanologyHeightmapComponent Function SetupLandscapeOrGroundMesh
struct Z_Construct_UFunction_UOceanologyHeightmapComponent_SetupLandscapeOrGroundMesh_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/OceanologyHeightmapComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologyHeightmapComponent_SetupLandscapeOrGroundMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologyHeightmapComponent, nullptr, "SetupLandscapeOrGroundMesh", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyHeightmapComponent_SetupLandscapeOrGroundMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologyHeightmapComponent_SetupLandscapeOrGroundMesh_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UOceanologyHeightmapComponent_SetupLandscapeOrGroundMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologyHeightmapComponent_SetupLandscapeOrGroundMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologyHeightmapComponent::execSetupLandscapeOrGroundMesh)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetupLandscapeOrGroundMesh();
	P_NATIVE_END;
}
// End Class UOceanologyHeightmapComponent Function SetupLandscapeOrGroundMesh

// Begin Class UOceanologyHeightmapComponent Function SetupWater
struct Z_Construct_UFunction_UOceanologyHeightmapComponent_SetupWater_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/OceanologyHeightmapComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologyHeightmapComponent_SetupWater_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologyHeightmapComponent, nullptr, "SetupWater", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyHeightmapComponent_SetupWater_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologyHeightmapComponent_SetupWater_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UOceanologyHeightmapComponent_SetupWater()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologyHeightmapComponent_SetupWater_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologyHeightmapComponent::execSetupWater)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetupWater();
	P_NATIVE_END;
}
// End Class UOceanologyHeightmapComponent Function SetupWater

// Begin Class UOceanologyHeightmapComponent Function SetupWaterMinMax
struct Z_Construct_UFunction_UOceanologyHeightmapComponent_SetupWaterMinMax_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/OceanologyHeightmapComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologyHeightmapComponent_SetupWaterMinMax_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologyHeightmapComponent, nullptr, "SetupWaterMinMax", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyHeightmapComponent_SetupWaterMinMax_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologyHeightmapComponent_SetupWaterMinMax_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UOceanologyHeightmapComponent_SetupWaterMinMax()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologyHeightmapComponent_SetupWaterMinMax_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologyHeightmapComponent::execSetupWaterMinMax)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetupWaterMinMax();
	P_NATIVE_END;
}
// End Class UOceanologyHeightmapComponent Function SetupWaterMinMax

// Begin Class UOceanologyHeightmapComponent
void UOceanologyHeightmapComponent::StaticRegisterNativesUOceanologyHeightmapComponent()
{
	UClass* Class = UOceanologyHeightmapComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Init", &UOceanologyHeightmapComponent::execInit },
		{ "SaveHeightmap", &UOceanologyHeightmapComponent::execSaveHeightmap },
		{ "SaveHeightmapRenderTarget", &UOceanologyHeightmapComponent::execSaveHeightmapRenderTarget },
		{ "SetupLandscapeOrGroundMesh", &UOceanologyHeightmapComponent::execSetupLandscapeOrGroundMesh },
		{ "SetupWater", &UOceanologyHeightmapComponent::execSetupWater },
		{ "SetupWaterMinMax", &UOceanologyHeightmapComponent::execSetupWaterMinMax },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOceanologyHeightmapComponent);
UClass* Z_Construct_UClass_UOceanologyHeightmapComponent_NoRegister()
{
	return UOceanologyHeightmapComponent::StaticClass();
}
struct Z_Construct_UClass_UOceanologyHeightmapComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "AssetUserData Activation Tags Cooking Navigation" },
		{ "IncludePath", "Components/OceanologyHeightmapComponent.h" },
		{ "ModuleRelativePath", "Public/Components/OceanologyHeightmapComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseRenderTarget_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Heightmap" },
		{ "ModuleRelativePath", "Public/Components/OceanologyHeightmapComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightmapTexture_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Heightmap" },
		{ "EditCondition", "!bUseRenderTarget" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Components/OceanologyHeightmapComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightmapRenderTarget_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Heightmap" },
		{ "EditCondition", "bUseRenderTarget" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Components/OceanologyHeightmapComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseCustomRVTBaker_MetaData[] = {
		{ "AdvancedDisplay", "" },
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Heightmap" },
		{ "ModuleRelativePath", "Public/Components/OceanologyHeightmapComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuildLevels_MetaData[] = {
		{ "Category", "Heightmap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Number of streaming low mips to build for the virtual texture. */" },
#endif
		{ "DisplayName", "Build Levels" },
		{ "ModuleRelativePath", "Public/Components/OceanologyHeightmapComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of streaming low mips to build for the virtual texture." },
#endif
		{ "UIMax", "12" },
		{ "UIMin", "0" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureSize_MetaData[] = {
		{ "Category", "Heightmap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Approximate size of built heightmap texture\n// After changing RVT settings, this will update after changing BuildLevels\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/OceanologyHeightmapComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Approximate size of built heightmap texture\nAfter changing RVT settings, this will update after changing BuildLevels" },
#endif
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BakedHeightmap_MetaData[] = {
		{ "Category", "Heightmap" },
		{ "ModuleRelativePath", "Public/Components/OceanologyHeightmapComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpFloodMaterialInstance_MetaData[] = {
		{ "Category", "Heightmap" },
		{ "ModuleRelativePath", "Public/Components/OceanologyHeightmapComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CopyUVsMaterialInstance_MetaData[] = {
		{ "Category", "Heightmap" },
		{ "ModuleRelativePath", "Public/Components/OceanologyHeightmapComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComputeSDFMaterialInstance_MetaData[] = {
		{ "Category", "Heightmap" },
		{ "ModuleRelativePath", "Public/Components/OceanologyHeightmapComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlurMaterialInstance_MetaData[] = {
		{ "Category", "Heightmap" },
		{ "ModuleRelativePath", "Public/Components/OceanologyHeightmapComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComposeMaterialInstance_MetaData[] = {
		{ "Category", "Heightmap" },
		{ "ModuleRelativePath", "Public/Components/OceanologyHeightmapComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bUseRenderTarget_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseRenderTarget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HeightmapTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HeightmapRenderTarget;
	static void NewProp_bUseCustomRVTBaker_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCustomRVTBaker;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BuildLevels;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TextureSize;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BakedHeightmap;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpFloodMaterialInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CopyUVsMaterialInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ComputeSDFMaterialInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlurMaterialInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ComposeMaterialInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOceanologyHeightmapComponent_Init, "Init" }, // 4059493073
		{ &Z_Construct_UFunction_UOceanologyHeightmapComponent_SaveHeightmap, "SaveHeightmap" }, // 618221806
		{ &Z_Construct_UFunction_UOceanologyHeightmapComponent_SaveHeightmapRenderTarget, "SaveHeightmapRenderTarget" }, // 3733495796
		{ &Z_Construct_UFunction_UOceanologyHeightmapComponent_SetupLandscapeOrGroundMesh, "SetupLandscapeOrGroundMesh" }, // 2080807344
		{ &Z_Construct_UFunction_UOceanologyHeightmapComponent_SetupWater, "SetupWater" }, // 1586818844
		{ &Z_Construct_UFunction_UOceanologyHeightmapComponent_SetupWaterMinMax, "SetupWaterMinMax" }, // 3760899895
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOceanologyHeightmapComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UOceanologyHeightmapComponent_Statics::NewProp_bUseRenderTarget_SetBit(void* Obj)
{
	((UOceanologyHeightmapComponent*)Obj)->bUseRenderTarget = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOceanologyHeightmapComponent_Statics::NewProp_bUseRenderTarget = { "bUseRenderTarget", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOceanologyHeightmapComponent), &Z_Construct_UClass_UOceanologyHeightmapComponent_Statics::NewProp_bUseRenderTarget_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseRenderTarget_MetaData), NewProp_bUseRenderTarget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOceanologyHeightmapComponent_Statics::NewProp_HeightmapTexture = { "HeightmapTexture", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyHeightmapComponent, HeightmapTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightmapTexture_MetaData), NewProp_HeightmapTexture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOceanologyHeightmapComponent_Statics::NewProp_HeightmapRenderTarget = { "HeightmapRenderTarget", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyHeightmapComponent, HeightmapRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightmapRenderTarget_MetaData), NewProp_HeightmapRenderTarget_MetaData) };
void Z_Construct_UClass_UOceanologyHeightmapComponent_Statics::NewProp_bUseCustomRVTBaker_SetBit(void* Obj)
{
	((UOceanologyHeightmapComponent*)Obj)->bUseCustomRVTBaker = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOceanologyHeightmapComponent_Statics::NewProp_bUseCustomRVTBaker = { "bUseCustomRVTBaker", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOceanologyHeightmapComponent), &Z_Construct_UClass_UOceanologyHeightmapComponent_Statics::NewProp_bUseCustomRVTBaker_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseCustomRVTBaker_MetaData), NewProp_bUseCustomRVTBaker_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOceanologyHeightmapComponent_Statics::NewProp_BuildLevels = { "BuildLevels", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyHeightmapComponent, BuildLevels), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuildLevels_MetaData), NewProp_BuildLevels_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOceanologyHeightmapComponent_Statics::NewProp_TextureSize = { "TextureSize", nullptr, (EPropertyFlags)0x0010000800022015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyHeightmapComponent, TextureSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureSize_MetaData), NewProp_TextureSize_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOceanologyHeightmapComponent_Statics::NewProp_BakedHeightmap = { "BakedHeightmap", nullptr, (EPropertyFlags)0x0114040000022001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyHeightmapComponent, BakedHeightmap), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BakedHeightmap_MetaData), NewProp_BakedHeightmap_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOceanologyHeightmapComponent_Statics::NewProp_JumpFloodMaterialInstance = { "JumpFloodMaterialInstance", nullptr, (EPropertyFlags)0x0114040000022001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyHeightmapComponent, JumpFloodMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpFloodMaterialInstance_MetaData), NewProp_JumpFloodMaterialInstance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOceanologyHeightmapComponent_Statics::NewProp_CopyUVsMaterialInstance = { "CopyUVsMaterialInstance", nullptr, (EPropertyFlags)0x0114040000022001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyHeightmapComponent, CopyUVsMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CopyUVsMaterialInstance_MetaData), NewProp_CopyUVsMaterialInstance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOceanologyHeightmapComponent_Statics::NewProp_ComputeSDFMaterialInstance = { "ComputeSDFMaterialInstance", nullptr, (EPropertyFlags)0x0114040000022001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyHeightmapComponent, ComputeSDFMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComputeSDFMaterialInstance_MetaData), NewProp_ComputeSDFMaterialInstance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOceanologyHeightmapComponent_Statics::NewProp_BlurMaterialInstance = { "BlurMaterialInstance", nullptr, (EPropertyFlags)0x0114040000022001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyHeightmapComponent, BlurMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlurMaterialInstance_MetaData), NewProp_BlurMaterialInstance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOceanologyHeightmapComponent_Statics::NewProp_ComposeMaterialInstance = { "ComposeMaterialInstance", nullptr, (EPropertyFlags)0x0114040000022001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyHeightmapComponent, ComposeMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComposeMaterialInstance_MetaData), NewProp_ComposeMaterialInstance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOceanologyHeightmapComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyHeightmapComponent_Statics::NewProp_bUseRenderTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyHeightmapComponent_Statics::NewProp_HeightmapTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyHeightmapComponent_Statics::NewProp_HeightmapRenderTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyHeightmapComponent_Statics::NewProp_bUseCustomRVTBaker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyHeightmapComponent_Statics::NewProp_BuildLevels,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyHeightmapComponent_Statics::NewProp_TextureSize,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyHeightmapComponent_Statics::NewProp_BakedHeightmap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyHeightmapComponent_Statics::NewProp_JumpFloodMaterialInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyHeightmapComponent_Statics::NewProp_CopyUVsMaterialInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyHeightmapComponent_Statics::NewProp_ComputeSDFMaterialInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyHeightmapComponent_Statics::NewProp_BlurMaterialInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyHeightmapComponent_Statics::NewProp_ComposeMaterialInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOceanologyHeightmapComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOceanologyHeightmapComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Oceanology_Plugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOceanologyHeightmapComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOceanologyHeightmapComponent_Statics::ClassParams = {
	&UOceanologyHeightmapComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOceanologyHeightmapComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOceanologyHeightmapComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOceanologyHeightmapComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UOceanologyHeightmapComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOceanologyHeightmapComponent()
{
	if (!Z_Registration_Info_UClass_UOceanologyHeightmapComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOceanologyHeightmapComponent.OuterSingleton, Z_Construct_UClass_UOceanologyHeightmapComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOceanologyHeightmapComponent.OuterSingleton;
}
template<> OCEANOLOGY_PLUGIN_API UClass* StaticClass<UOceanologyHeightmapComponent>()
{
	return UOceanologyHeightmapComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOceanologyHeightmapComponent);
UOceanologyHeightmapComponent::~UOceanologyHeightmapComponent() {}
// End Class UOceanologyHeightmapComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Data_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_OceanologyHeightmapComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOceanologyHeightmapComponent, UOceanologyHeightmapComponent::StaticClass, TEXT("UOceanologyHeightmapComponent"), &Z_Registration_Info_UClass_UOceanologyHeightmapComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOceanologyHeightmapComponent), 2985713217U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Data_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_OceanologyHeightmapComponent_h_2832794526(TEXT("/Script/Oceanology_Plugin"),
	Z_CompiledInDeferFile_FID_UE_Data_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_OceanologyHeightmapComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Data_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_OceanologyHeightmapComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
