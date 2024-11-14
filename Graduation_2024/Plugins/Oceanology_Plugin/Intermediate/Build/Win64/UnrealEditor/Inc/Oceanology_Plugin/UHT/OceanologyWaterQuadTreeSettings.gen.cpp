// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Oceanology_Plugin/Public/Structs/OceanologyWaterQuadTreeSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOceanologyWaterQuadTreeSettings() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyWaterQuadTreeSettings();
UPackage* Z_Construct_UPackage__Script_Oceanology_Plugin();
// End Cross Module References

// Begin ScriptStruct FOceanologyWaterQuadTreeSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OceanologyWaterQuadTreeSettings;
class UScriptStruct* FOceanologyWaterQuadTreeSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OceanologyWaterQuadTreeSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OceanologyWaterQuadTreeSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOceanologyWaterQuadTreeSettings, (UObject*)Z_Construct_UPackage__Script_Oceanology_Plugin(), TEXT("OceanologyWaterQuadTreeSettings"));
	}
	return Z_Registration_Info_UScriptStruct_OceanologyWaterQuadTreeSettings.OuterSingleton;
}
template<> OCEANOLOGY_PLUGIN_API UScriptStruct* StaticStruct<FOceanologyWaterQuadTreeSettings>()
{
	return FOceanologyWaterQuadTreeSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOceanologyWaterQuadTreeSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyWaterQuadTreeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileSize_MetaData[] = {
		{ "Category", "QuadTree" },
		{ "ClampMin", "100" },
		{ "Comment", "/** World size of the water tiles at LOD0. Multiply this with the ExtentInTiles to get the world extents of the system */" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyWaterQuadTreeSettings.h" },
		{ "ToolTip", "World size of the water tiles at LOD0. Multiply this with the ExtentInTiles to get the world extents of the system" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExtentInTiles_MetaData[] = {
		{ "Category", "QuadTree" },
		{ "ClampMin", "1" },
		{ "Comment", "/** The extent of the system in number of tiles. Maximum number of tiles for this system will be ExtentInTiles.X*2*ExtentInTiles.Y*2 */" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyWaterQuadTreeSettings.h" },
		{ "ToolTip", "The extent of the system in number of tiles. Maximum number of tiles for this system will be ExtentInTiles.X*2*ExtentInTiles.Y*2" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TessellationFactor_MetaData[] = {
		{ "Category", "QuadTree" },
		{ "ClampMax", "12" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Highest tessellation factor of a water tile. Max number of verts on the side of a tile will be (2^TessellationFactor)+1)  */" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyWaterQuadTreeSettings.h" },
		{ "ToolTip", "Highest tessellation factor of a water tile. Max number of verts on the side of a tile will be (2^TessellationFactor)+1)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODScale_MetaData[] = {
		{ "Category", "QuadTree" },
		{ "ClampMin", "0.5" },
		{ "Comment", "/** World scale of the concentric LODs */" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyWaterQuadTreeSettings.h" },
		{ "ToolTip", "World scale of the concentric LODs" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForceUpdateCount_MetaData[] = {
		{ "Category", "QuadTree" },
		{ "ClampMax", "20" },
		{ "ClampMin", "1" },
		{ "Comment", "/** The count of force updates necessary after certain re-render requests. (Scale change, location change, and so.) */" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyWaterQuadTreeSettings.h" },
		{ "ToolTip", "The count of force updates necessary after certain re-render requests. (Scale change, location change, and so.)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheckForUpdateInterval_MetaData[] = {
		{ "Category", "QuadTree" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The interval to check for updates whether quad tree re-render requests are available and necessary. 0 = real time checking on event tick, but NOT real-time re-render. Re-render happens on-demand. */" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyWaterQuadTreeSettings.h" },
		{ "ToolTip", "The interval to check for updates whether quad tree re-render requests are available and necessary. 0 = real time checking on event tick, but NOT real-time re-render. Re-render happens on-demand." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForceCollapseDensityLevel_MetaData[] = {
		{ "Category", "QuadTree" },
		{ "ClampMin", "-1" },
		{ "Comment", "/** At above what density level a tile is allowed to force collapse even if not all leaf nodes in the subtree are present.\n\x09 *\x09""Collapsing will not occus if any child node in the subtree has different materials.\n\x09 *\x09Setting this to -1 means no collapsing is allowed and the water mesh will always keep it's silhouette at any distance.\n\x09 *\x09Setting this to 0 will allow every level to collapse\n\x09 *\x09Setting this to something higher than the LODCount will have no effect\n\x09 */" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyWaterQuadTreeSettings.h" },
		{ "ToolTip", "At above what density level a tile is allowed to force collapse even if not all leaf nodes in the subtree are present.\n    Collapsing will not occus if any child node in the subtree has different materials.\n    Setting this to -1 means no collapsing is allowed and the water mesh will always keep it's silhouette at any distance.\n    Setting this to 0 will allow every level to collapse\n    Setting this to something higher than the LODCount will have no effect" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxWaveHeightMultiplier_MetaData[] = {
		{ "Category", "QuadTree" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Used to multiply the Min and Max bounds on Z axis of the quad tree actor's quad tree mesh bounds. Bigger your waves are, the more you need to increase this value to prevent your water being frustum culled. */" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyWaterQuadTreeSettings.h" },
		{ "ToolTip", "Used to multiply the Min and Max bounds on Z axis of the quad tree actor's quad tree mesh bounds. Bigger your waves are, the more you need to increase this value to prevent your water being frustum culled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseFarMesh_MetaData[] = {
		{ "Category", "QuadTree|FarDistance" },
		{ "Comment", "/** Forces the water mesh to always render the far mesh, regardless if there is an ocean or not.*/" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyWaterQuadTreeSettings.h" },
		{ "ToolTip", "Forces the water mesh to always render the far mesh, regardless if there is an ocean or not." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FarDistanceMeshExtent_MetaData[] = {
		{ "Category", "QuadTree|FarDistance" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyWaterQuadTreeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FarDistanceCenterMeshExtent_MetaData[] = {
		{ "Category", "QuadTree|FarDistance" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyWaterQuadTreeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FarDistanceMeshHeightOffset_MetaData[] = {
		{ "Category", "QuadTree|FarDistance" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyWaterQuadTreeSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TileSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExtentInTiles;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TessellationFactor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LODScale;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ForceUpdateCount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CheckForUpdateInterval;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ForceCollapseDensityLevel;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MaxWaveHeightMultiplier;
	static void NewProp_bUseFarMesh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseFarMesh;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FarDistanceMeshExtent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FarDistanceCenterMeshExtent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FarDistanceMeshHeightOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOceanologyWaterQuadTreeSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOceanologyWaterQuadTreeSettings_Statics::NewProp_TileSize = { "TileSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyWaterQuadTreeSettings, TileSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileSize_MetaData), NewProp_TileSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOceanologyWaterQuadTreeSettings_Statics::NewProp_ExtentInTiles = { "ExtentInTiles", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyWaterQuadTreeSettings, ExtentInTiles), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExtentInTiles_MetaData), NewProp_ExtentInTiles_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOceanologyWaterQuadTreeSettings_Statics::NewProp_TessellationFactor = { "TessellationFactor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyWaterQuadTreeSettings, TessellationFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TessellationFactor_MetaData), NewProp_TessellationFactor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOceanologyWaterQuadTreeSettings_Statics::NewProp_LODScale = { "LODScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyWaterQuadTreeSettings, LODScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODScale_MetaData), NewProp_LODScale_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOceanologyWaterQuadTreeSettings_Statics::NewProp_ForceUpdateCount = { "ForceUpdateCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyWaterQuadTreeSettings, ForceUpdateCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForceUpdateCount_MetaData), NewProp_ForceUpdateCount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOceanologyWaterQuadTreeSettings_Statics::NewProp_CheckForUpdateInterval = { "CheckForUpdateInterval", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyWaterQuadTreeSettings, CheckForUpdateInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheckForUpdateInterval_MetaData), NewProp_CheckForUpdateInterval_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOceanologyWaterQuadTreeSettings_Statics::NewProp_ForceCollapseDensityLevel = { "ForceCollapseDensityLevel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyWaterQuadTreeSettings, ForceCollapseDensityLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForceCollapseDensityLevel_MetaData), NewProp_ForceCollapseDensityLevel_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyWaterQuadTreeSettings_Statics::NewProp_MaxWaveHeightMultiplier = { "MaxWaveHeightMultiplier", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyWaterQuadTreeSettings, MaxWaveHeightMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxWaveHeightMultiplier_MetaData), NewProp_MaxWaveHeightMultiplier_MetaData) };
void Z_Construct_UScriptStruct_FOceanologyWaterQuadTreeSettings_Statics::NewProp_bUseFarMesh_SetBit(void* Obj)
{
	((FOceanologyWaterQuadTreeSettings*)Obj)->bUseFarMesh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOceanologyWaterQuadTreeSettings_Statics::NewProp_bUseFarMesh = { "bUseFarMesh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FOceanologyWaterQuadTreeSettings), &Z_Construct_UScriptStruct_FOceanologyWaterQuadTreeSettings_Statics::NewProp_bUseFarMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseFarMesh_MetaData), NewProp_bUseFarMesh_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOceanologyWaterQuadTreeSettings_Statics::NewProp_FarDistanceMeshExtent = { "FarDistanceMeshExtent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyWaterQuadTreeSettings, FarDistanceMeshExtent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FarDistanceMeshExtent_MetaData), NewProp_FarDistanceMeshExtent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOceanologyWaterQuadTreeSettings_Statics::NewProp_FarDistanceCenterMeshExtent = { "FarDistanceCenterMeshExtent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyWaterQuadTreeSettings, FarDistanceCenterMeshExtent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FarDistanceCenterMeshExtent_MetaData), NewProp_FarDistanceCenterMeshExtent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOceanologyWaterQuadTreeSettings_Statics::NewProp_FarDistanceMeshHeightOffset = { "FarDistanceMeshHeightOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyWaterQuadTreeSettings, FarDistanceMeshHeightOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FarDistanceMeshHeightOffset_MetaData), NewProp_FarDistanceMeshHeightOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOceanologyWaterQuadTreeSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyWaterQuadTreeSettings_Statics::NewProp_TileSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyWaterQuadTreeSettings_Statics::NewProp_ExtentInTiles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyWaterQuadTreeSettings_Statics::NewProp_TessellationFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyWaterQuadTreeSettings_Statics::NewProp_LODScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyWaterQuadTreeSettings_Statics::NewProp_ForceUpdateCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyWaterQuadTreeSettings_Statics::NewProp_CheckForUpdateInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyWaterQuadTreeSettings_Statics::NewProp_ForceCollapseDensityLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyWaterQuadTreeSettings_Statics::NewProp_MaxWaveHeightMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyWaterQuadTreeSettings_Statics::NewProp_bUseFarMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyWaterQuadTreeSettings_Statics::NewProp_FarDistanceMeshExtent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyWaterQuadTreeSettings_Statics::NewProp_FarDistanceCenterMeshExtent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyWaterQuadTreeSettings_Statics::NewProp_FarDistanceMeshHeightOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanologyWaterQuadTreeSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOceanologyWaterQuadTreeSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Oceanology_Plugin,
	nullptr,
	&NewStructOps,
	"OceanologyWaterQuadTreeSettings",
	Z_Construct_UScriptStruct_FOceanologyWaterQuadTreeSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanologyWaterQuadTreeSettings_Statics::PropPointers),
	sizeof(FOceanologyWaterQuadTreeSettings),
	alignof(FOceanologyWaterQuadTreeSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanologyWaterQuadTreeSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOceanologyWaterQuadTreeSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOceanologyWaterQuadTreeSettings()
{
	if (!Z_Registration_Info_UScriptStruct_OceanologyWaterQuadTreeSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OceanologyWaterQuadTreeSettings.InnerSingleton, Z_Construct_UScriptStruct_FOceanologyWaterQuadTreeSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OceanologyWaterQuadTreeSettings.InnerSingleton;
}
// End ScriptStruct FOceanologyWaterQuadTreeSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyWaterQuadTreeSettings_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOceanologyWaterQuadTreeSettings::StaticStruct, Z_Construct_UScriptStruct_FOceanologyWaterQuadTreeSettings_Statics::NewStructOps, TEXT("OceanologyWaterQuadTreeSettings"), &Z_Registration_Info_UScriptStruct_OceanologyWaterQuadTreeSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOceanologyWaterQuadTreeSettings), 3621248554U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyWaterQuadTreeSettings_h_1079930887(TEXT("/Script/Oceanology_Plugin"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyWaterQuadTreeSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyWaterQuadTreeSettings_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
