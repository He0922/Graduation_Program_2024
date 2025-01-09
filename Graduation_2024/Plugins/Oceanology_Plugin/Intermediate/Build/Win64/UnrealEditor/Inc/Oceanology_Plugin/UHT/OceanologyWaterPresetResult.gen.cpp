// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Oceanology_Plugin/Public/Structs/OceanologyWaterPresetResult.h"
#include "Oceanology_Plugin/Public/Structs/OceanologyBaseOffset.h"
#include "Oceanology_Plugin/Public/Structs/OceanologyBubblesSettings.h"
#include "Oceanology_Plugin/Public/Structs/OceanologyCaustics.h"
#include "Oceanology_Plugin/Public/Structs/OceanologyFlipbook.h"
#include "Oceanology_Plugin/Public/Structs/OceanologyFoam.h"
#include "Oceanology_Plugin/Public/Structs/OceanologyFolding.h"
#include "Oceanology_Plugin/Public/Structs/OceanologyGGX.h"
#include "Oceanology_Plugin/Public/Structs/OceanologyGlobalDisplacement.h"
#include "Oceanology_Plugin/Public/Structs/OceanologyHorizonCorrection.h"
#include "Oceanology_Plugin/Public/Structs/OceanologyMask.h"
#include "Oceanology_Plugin/Public/Structs/OceanologyMaskUnderwater.h"
#include "Oceanology_Plugin/Public/Structs/OceanologyProcedural.h"
#include "Oceanology_Plugin/Public/Structs/OceanologyRefraction.h"
#include "Oceanology_Plugin/Public/Structs/OceanologyRVT.h"
#include "Oceanology_Plugin/Public/Structs/OceanologySurfaceScattering.h"
#include "Oceanology_Plugin/Public/Structs/OceanologyUnderwater.h"
#include "Oceanology_Plugin/Public/Structs/OceanologyVolumetricFog.h"
#include "Oceanology_Plugin/Public/Structs/OceanologyWaterProjection.h"
#include "Oceanology_Plugin/Public/Structs/OceanologyWaves.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOceanologyWaterPresetResult() {}

// Begin Cross Module References
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyBaseOffset();
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyBubblesSettings();
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyCaustics();
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyFlipbook();
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyFoam();
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyFolding();
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyGGX();
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyGlobalDisplacement();
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyHorizonCorrection();
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyMask();
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyMaskUnderwater();
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyProcedural();
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyRefraction();
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyRVT();
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologySurfaceScattering();
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyUnderwater();
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyVolumetricFog();
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyWaterPresetResult();
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyWaterProjection();
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyWave_1();
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyWave_2();
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyWave_3();
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyWave_4();
UPackage* Z_Construct_UPackage__Script_Oceanology_Plugin();
// End Cross Module References

// Begin ScriptStruct FOceanologyWaterPresetResult
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OceanologyWaterPresetResult;
class UScriptStruct* FOceanologyWaterPresetResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OceanologyWaterPresetResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OceanologyWaterPresetResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOceanologyWaterPresetResult, (UObject*)Z_Construct_UPackage__Script_Oceanology_Plugin(), TEXT("OceanologyWaterPresetResult"));
	}
	return Z_Registration_Info_UScriptStruct_OceanologyWaterPresetResult.OuterSingleton;
}
template<> OCEANOLOGY_PLUGIN_API UScriptStruct* StaticStruct<FOceanologyWaterPresetResult>()
{
	return FOceanologyWaterPresetResult::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOceanologyWaterPresetResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// has to be in SYNC with OceanologyWaterPreset fields\n" },
#endif
		{ "ModuleRelativePath", "Public/Structs/OceanologyWaterPresetResult.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "has to be in SYNC with OceanologyWaterPreset fields" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalDisplacement_MetaData[] = {
		{ "Category", "Gerstner Waves ( Global )" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyWaterPresetResult.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseOffset_MetaData[] = {
		{ "Category", "Gerstner Waves ( Custom )" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyWaterPresetResult.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Wave_1_MetaData[] = {
		{ "Category", "Gerstner Waves ( Custom )" },
		{ "DisplayName", "\xce\xa3""1" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyWaterPresetResult.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Wave_2_MetaData[] = {
		{ "Category", "Gerstner Waves ( Custom )" },
		{ "DisplayName", "\xce\xa3""2" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyWaterPresetResult.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Wave_3_MetaData[] = {
		{ "Category", "Gerstner Waves ( Custom )" },
		{ "DisplayName", "\xce\xa3""3" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyWaterPresetResult.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Wave_4_MetaData[] = {
		{ "Category", "Gerstner Waves ( Custom )" },
		{ "DisplayName", "\xce\xa3""4" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyWaterPresetResult.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceScattering_MetaData[] = {
		{ "Category", "Surface|Surface Scattering" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=\"Gerstner Waves\")\n// EOceanologyGerstnerWaveSummarize Summarize = EOceanologyGerstnerWaveSummarize::Waves_8;\n" },
#endif
		{ "ModuleRelativePath", "Public/Structs/OceanologyWaterPresetResult.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=\"Gerstner Waves\")\nEOceanologyGerstnerWaveSummarize Summarize = EOceanologyGerstnerWaveSummarize::Waves_8;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Caustics_MetaData[] = {
		{ "Category", "Surface|Caustics" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyWaterPresetResult.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Refraction_MetaData[] = {
		{ "Category", "Surface|Refraction" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyWaterPresetResult.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HorizonCorrection_MetaData[] = {
		{ "Category", "Surface|Normal Calculation" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyWaterPresetResult.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Flipbook_MetaData[] = {
		{ "Category", "Surface|Normal Calculation" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyWaterPresetResult.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Foam_MetaData[] = {
		{ "Category", "Foam" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyWaterPresetResult.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Folding_MetaData[] = {
		{ "Category", "Foam|Folding" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyWaterPresetResult.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Procedural_MetaData[] = {
		{ "Category", "Procedural" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyWaterPresetResult.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RVT_MetaData[] = {
		{ "Category", "RVT" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyWaterPresetResult.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mask_MetaData[] = {
		{ "Category", "Mask" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyWaterPresetResult.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GGX_MetaData[] = {
		{ "Category", "GGX" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyWaterPresetResult.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Underwater_MetaData[] = {
		{ "Category", "Underwater" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*,\n\x09\x09meta = (EditCondition = \"UnderwaterMode == EOceanologyUnderwaterMode::Underwater\")*/" },
#endif
		{ "ModuleRelativePath", "Public/Structs/OceanologyWaterPresetResult.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", ",\n               meta = (EditCondition = \"UnderwaterMode == EOceanologyUnderwaterMode::Underwater\")" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VolumetricFog_MetaData[] = {
		{ "Category", "Underwater|God Rays" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*,\n\x09\x09meta = (EditCondition = \"UnderwaterMode == EOceanologyUnderwaterMode::VolumetricFog\")*/" },
#endif
		{ "ModuleRelativePath", "Public/Structs/OceanologyWaterPresetResult.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", ",\n               meta = (EditCondition = \"UnderwaterMode == EOceanologyUnderwaterMode::VolumetricFog\")" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaskUnderwater_MetaData[] = {
		{ "Category", "Underwater" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyWaterPresetResult.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BubblesSettings_MetaData[] = {
		{ "Category", "Underwater|Bubbles Settings" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyWaterPresetResult.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaterProjection_MetaData[] = {
		{ "Category", "Caustics" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyWaterPresetResult.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GlobalDisplacement;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BaseOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Wave_1;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Wave_2;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Wave_3;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Wave_4;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SurfaceScattering;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Caustics;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Refraction;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HorizonCorrection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Flipbook;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Foam;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Folding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Procedural;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RVT;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Mask;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GGX;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Underwater;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VolumetricFog;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaskUnderwater;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BubblesSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WaterProjection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOceanologyWaterPresetResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOceanologyWaterPresetResult_Statics::NewProp_GlobalDisplacement = { "GlobalDisplacement", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyWaterPresetResult, GlobalDisplacement), Z_Construct_UScriptStruct_FOceanologyGlobalDisplacement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalDisplacement_MetaData), NewProp_GlobalDisplacement_MetaData) }; // 1342432749
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOceanologyWaterPresetResult_Statics::NewProp_BaseOffset = { "BaseOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyWaterPresetResult, BaseOffset), Z_Construct_UScriptStruct_FOceanologyBaseOffset, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseOffset_MetaData), NewProp_BaseOffset_MetaData) }; // 1128559501
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOceanologyWaterPresetResult_Statics::NewProp_Wave_1 = { "Wave_1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyWaterPresetResult, Wave_1), Z_Construct_UScriptStruct_FOceanologyWave_1, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Wave_1_MetaData), NewProp_Wave_1_MetaData) }; // 2882325646
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOceanologyWaterPresetResult_Statics::NewProp_Wave_2 = { "Wave_2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyWaterPresetResult, Wave_2), Z_Construct_UScriptStruct_FOceanologyWave_2, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Wave_2_MetaData), NewProp_Wave_2_MetaData) }; // 4048543760
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOceanologyWaterPresetResult_Statics::NewProp_Wave_3 = { "Wave_3", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyWaterPresetResult, Wave_3), Z_Construct_UScriptStruct_FOceanologyWave_3, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Wave_3_MetaData), NewProp_Wave_3_MetaData) }; // 150167157
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOceanologyWaterPresetResult_Statics::NewProp_Wave_4 = { "Wave_4", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyWaterPresetResult, Wave_4), Z_Construct_UScriptStruct_FOceanologyWave_4, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Wave_4_MetaData), NewProp_Wave_4_MetaData) }; // 1244214835
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOceanologyWaterPresetResult_Statics::NewProp_SurfaceScattering = { "SurfaceScattering", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyWaterPresetResult, SurfaceScattering), Z_Construct_UScriptStruct_FOceanologySurfaceScattering, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SurfaceScattering_MetaData), NewProp_SurfaceScattering_MetaData) }; // 2426833340
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOceanologyWaterPresetResult_Statics::NewProp_Caustics = { "Caustics", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyWaterPresetResult, Caustics), Z_Construct_UScriptStruct_FOceanologyCaustics, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Caustics_MetaData), NewProp_Caustics_MetaData) }; // 236567494
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOceanologyWaterPresetResult_Statics::NewProp_Refraction = { "Refraction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyWaterPresetResult, Refraction), Z_Construct_UScriptStruct_FOceanologyRefraction, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Refraction_MetaData), NewProp_Refraction_MetaData) }; // 3969240598
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOceanologyWaterPresetResult_Statics::NewProp_HorizonCorrection = { "HorizonCorrection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyWaterPresetResult, HorizonCorrection), Z_Construct_UScriptStruct_FOceanologyHorizonCorrection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HorizonCorrection_MetaData), NewProp_HorizonCorrection_MetaData) }; // 2772329432
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOceanologyWaterPresetResult_Statics::NewProp_Flipbook = { "Flipbook", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyWaterPresetResult, Flipbook), Z_Construct_UScriptStruct_FOceanologyFlipbook, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Flipbook_MetaData), NewProp_Flipbook_MetaData) }; // 1692283366
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOceanologyWaterPresetResult_Statics::NewProp_Foam = { "Foam", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyWaterPresetResult, Foam), Z_Construct_UScriptStruct_FOceanologyFoam, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Foam_MetaData), NewProp_Foam_MetaData) }; // 1484821047
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOceanologyWaterPresetResult_Statics::NewProp_Folding = { "Folding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyWaterPresetResult, Folding), Z_Construct_UScriptStruct_FOceanologyFolding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Folding_MetaData), NewProp_Folding_MetaData) }; // 1188334788
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOceanologyWaterPresetResult_Statics::NewProp_Procedural = { "Procedural", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyWaterPresetResult, Procedural), Z_Construct_UScriptStruct_FOceanologyProcedural, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Procedural_MetaData), NewProp_Procedural_MetaData) }; // 4058591009
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOceanologyWaterPresetResult_Statics::NewProp_RVT = { "RVT", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyWaterPresetResult, RVT), Z_Construct_UScriptStruct_FOceanologyRVT, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RVT_MetaData), NewProp_RVT_MetaData) }; // 1549818250
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOceanologyWaterPresetResult_Statics::NewProp_Mask = { "Mask", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyWaterPresetResult, Mask), Z_Construct_UScriptStruct_FOceanologyMask, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mask_MetaData), NewProp_Mask_MetaData) }; // 1049969195
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOceanologyWaterPresetResult_Statics::NewProp_GGX = { "GGX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyWaterPresetResult, GGX), Z_Construct_UScriptStruct_FOceanologyGGX, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GGX_MetaData), NewProp_GGX_MetaData) }; // 4287862550
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOceanologyWaterPresetResult_Statics::NewProp_Underwater = { "Underwater", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyWaterPresetResult, Underwater), Z_Construct_UScriptStruct_FOceanologyUnderwater, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Underwater_MetaData), NewProp_Underwater_MetaData) }; // 358567345
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOceanologyWaterPresetResult_Statics::NewProp_VolumetricFog = { "VolumetricFog", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyWaterPresetResult, VolumetricFog), Z_Construct_UScriptStruct_FOceanologyVolumetricFog, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VolumetricFog_MetaData), NewProp_VolumetricFog_MetaData) }; // 2655473889
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOceanologyWaterPresetResult_Statics::NewProp_MaskUnderwater = { "MaskUnderwater", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyWaterPresetResult, MaskUnderwater), Z_Construct_UScriptStruct_FOceanologyMaskUnderwater, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaskUnderwater_MetaData), NewProp_MaskUnderwater_MetaData) }; // 1394275457
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOceanologyWaterPresetResult_Statics::NewProp_BubblesSettings = { "BubblesSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyWaterPresetResult, BubblesSettings), Z_Construct_UScriptStruct_FOceanologyBubblesSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BubblesSettings_MetaData), NewProp_BubblesSettings_MetaData) }; // 2775026522
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOceanologyWaterPresetResult_Statics::NewProp_WaterProjection = { "WaterProjection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyWaterPresetResult, WaterProjection), Z_Construct_UScriptStruct_FOceanologyWaterProjection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaterProjection_MetaData), NewProp_WaterProjection_MetaData) }; // 1198342164
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOceanologyWaterPresetResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyWaterPresetResult_Statics::NewProp_GlobalDisplacement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyWaterPresetResult_Statics::NewProp_BaseOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyWaterPresetResult_Statics::NewProp_Wave_1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyWaterPresetResult_Statics::NewProp_Wave_2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyWaterPresetResult_Statics::NewProp_Wave_3,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyWaterPresetResult_Statics::NewProp_Wave_4,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyWaterPresetResult_Statics::NewProp_SurfaceScattering,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyWaterPresetResult_Statics::NewProp_Caustics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyWaterPresetResult_Statics::NewProp_Refraction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyWaterPresetResult_Statics::NewProp_HorizonCorrection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyWaterPresetResult_Statics::NewProp_Flipbook,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyWaterPresetResult_Statics::NewProp_Foam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyWaterPresetResult_Statics::NewProp_Folding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyWaterPresetResult_Statics::NewProp_Procedural,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyWaterPresetResult_Statics::NewProp_RVT,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyWaterPresetResult_Statics::NewProp_Mask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyWaterPresetResult_Statics::NewProp_GGX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyWaterPresetResult_Statics::NewProp_Underwater,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyWaterPresetResult_Statics::NewProp_VolumetricFog,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyWaterPresetResult_Statics::NewProp_MaskUnderwater,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyWaterPresetResult_Statics::NewProp_BubblesSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyWaterPresetResult_Statics::NewProp_WaterProjection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanologyWaterPresetResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOceanologyWaterPresetResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Oceanology_Plugin,
	nullptr,
	&NewStructOps,
	"OceanologyWaterPresetResult",
	Z_Construct_UScriptStruct_FOceanologyWaterPresetResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanologyWaterPresetResult_Statics::PropPointers),
	sizeof(FOceanologyWaterPresetResult),
	alignof(FOceanologyWaterPresetResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanologyWaterPresetResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOceanologyWaterPresetResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOceanologyWaterPresetResult()
{
	if (!Z_Registration_Info_UScriptStruct_OceanologyWaterPresetResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OceanologyWaterPresetResult.InnerSingleton, Z_Construct_UScriptStruct_FOceanologyWaterPresetResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OceanologyWaterPresetResult.InnerSingleton;
}
// End ScriptStruct FOceanologyWaterPresetResult

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEDocument_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyWaterPresetResult_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOceanologyWaterPresetResult::StaticStruct, Z_Construct_UScriptStruct_FOceanologyWaterPresetResult_Statics::NewStructOps, TEXT("OceanologyWaterPresetResult"), &Z_Registration_Info_UScriptStruct_OceanologyWaterPresetResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOceanologyWaterPresetResult), 1369265139U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEDocument_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyWaterPresetResult_h_3301199608(TEXT("/Script/Oceanology_Plugin"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UEDocument_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyWaterPresetResult_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEDocument_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyWaterPresetResult_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
