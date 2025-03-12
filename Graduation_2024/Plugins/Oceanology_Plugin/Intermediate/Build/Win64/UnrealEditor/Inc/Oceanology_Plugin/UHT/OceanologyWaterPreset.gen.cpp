// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Oceanology_Plugin/Public/DataAsset/OceanologyWaterPreset.h"
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
void EmptyLinkFunctionForGeneratedCodeOceanologyWaterPreset() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_UOceanologyWaterPreset();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_UOceanologyWaterPreset_NoRegister();
OCEANOLOGY_PLUGIN_API UEnum* Z_Construct_UEnum_Oceanology_Plugin_EOceanologyGerstnerWaveSummarize();
OCEANOLOGY_PLUGIN_API UEnum* Z_Construct_UEnum_Oceanology_Plugin_EOceanologyUnderwaterMode();
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
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyWaterProjection();
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyWave_1();
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyWave_2();
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyWave_3();
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyWave_4();
UPackage* Z_Construct_UPackage__Script_Oceanology_Plugin();
// End Cross Module References

// Begin Class UOceanologyWaterPreset
void UOceanologyWaterPreset::StaticRegisterNativesUOceanologyWaterPreset()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOceanologyWaterPreset);
UClass* Z_Construct_UClass_UOceanologyWaterPreset_NoRegister()
{
	return UOceanologyWaterPreset::StaticClass();
}
struct Z_Construct_UClass_UOceanologyWaterPreset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DataAsset/OceanologyWaterPreset.h" },
		{ "ModuleRelativePath", "Public/DataAsset/OceanologyWaterPreset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalDisplacement_MetaData[] = {
		{ "Category", "Gerstner Waves|Gerstner Waves ( Global )" },
		{ "ModuleRelativePath", "Public/DataAsset/OceanologyWaterPreset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseOffset_MetaData[] = {
		{ "Category", "Gerstner Waves|Gerstner Waves ( Custom )" },
		{ "ModuleRelativePath", "Public/DataAsset/OceanologyWaterPreset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Wave_1_MetaData[] = {
		{ "Category", "Gerstner Waves|Gerstner Waves ( Custom )" },
		{ "DisplayName", "\xce\xa3""1" },
		{ "ModuleRelativePath", "Public/DataAsset/OceanologyWaterPreset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Wave_2_MetaData[] = {
		{ "Category", "Gerstner Waves|Gerstner Waves ( Custom )" },
		{ "DisplayName", "\xce\xa3""2" },
		{ "ModuleRelativePath", "Public/DataAsset/OceanologyWaterPreset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Wave_3_MetaData[] = {
		{ "Category", "Gerstner Waves|Gerstner Waves ( Custom )" },
		{ "DisplayName", "\xce\xa3""3" },
		{ "ModuleRelativePath", "Public/DataAsset/OceanologyWaterPreset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Wave_4_MetaData[] = {
		{ "Category", "Gerstner Waves|Gerstner Waves ( Custom )" },
		{ "DisplayName", "\xce\xa3""4" },
		{ "ModuleRelativePath", "Public/DataAsset/OceanologyWaterPreset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Summarize_MetaData[] = {
		{ "Category", "Gerstner Waves" },
		{ "ModuleRelativePath", "Public/DataAsset/OceanologyWaterPreset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceScattering_MetaData[] = {
		{ "Category", "Surface|Surface Scattering" },
		{ "ModuleRelativePath", "Public/DataAsset/OceanologyWaterPreset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Caustics_MetaData[] = {
		{ "Category", "Surface|Caustics" },
		{ "ModuleRelativePath", "Public/DataAsset/OceanologyWaterPreset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Refraction_MetaData[] = {
		{ "Category", "Surface|Refraction" },
		{ "ModuleRelativePath", "Public/DataAsset/OceanologyWaterPreset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HorizonCorrection_MetaData[] = {
		{ "Category", "Surface|Normal Calculation" },
		{ "ModuleRelativePath", "Public/DataAsset/OceanologyWaterPreset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Flipbook_MetaData[] = {
		{ "Category", "Surface|Normal Calculation" },
		{ "ModuleRelativePath", "Public/DataAsset/OceanologyWaterPreset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Foam_MetaData[] = {
		{ "Category", "Foam" },
		{ "ModuleRelativePath", "Public/DataAsset/OceanologyWaterPreset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Folding_MetaData[] = {
		{ "Category", "Foam|Folding" },
		{ "ModuleRelativePath", "Public/DataAsset/OceanologyWaterPreset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Procedural_MetaData[] = {
		{ "Category", "Procedural" },
		{ "ModuleRelativePath", "Public/DataAsset/OceanologyWaterPreset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RVT_MetaData[] = {
		{ "Category", "RVT" },
		{ "ModuleRelativePath", "Public/DataAsset/OceanologyWaterPreset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mask_MetaData[] = {
		{ "Category", "Mask" },
		{ "ModuleRelativePath", "Public/DataAsset/OceanologyWaterPreset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GGX_MetaData[] = {
		{ "Category", "GGX" },
		{ "ModuleRelativePath", "Public/DataAsset/OceanologyWaterPreset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnderwaterMode_MetaData[] = {
		{ "Category", "Underwater" },
		{ "ModuleRelativePath", "Public/DataAsset/OceanologyWaterPreset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Underwater_MetaData[] = {
		{ "Category", "Underwater" },
		{ "EditCondition", "UnderwaterMode == EOceanologyUnderwaterMode::Underwater" },
		{ "ModuleRelativePath", "Public/DataAsset/OceanologyWaterPreset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VolumetricFog_MetaData[] = {
		{ "Category", "Underwater|God Rays" },
		{ "EditCondition", "UnderwaterMode == EOceanologyUnderwaterMode::VolumetricFog" },
		{ "ModuleRelativePath", "Public/DataAsset/OceanologyWaterPreset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaskUnderwater_MetaData[] = {
		{ "Category", "Underwater" },
		{ "ModuleRelativePath", "Public/DataAsset/OceanologyWaterPreset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BubblesSettings_MetaData[] = {
		{ "Category", "Underwater|Bubbles Settings" },
		{ "ModuleRelativePath", "Public/DataAsset/OceanologyWaterPreset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaterProjection_MetaData[] = {
		{ "Category", "Caustics" },
		{ "ModuleRelativePath", "Public/DataAsset/OceanologyWaterPreset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GlobalDisplacement;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BaseOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Wave_1;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Wave_2;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Wave_3;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Wave_4;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Summarize_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Summarize;
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
	static const UECodeGen_Private::FBytePropertyParams NewProp_UnderwaterMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_UnderwaterMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Underwater;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VolumetricFog;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaskUnderwater;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BubblesSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WaterProjection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOceanologyWaterPreset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOceanologyWaterPreset_Statics::NewProp_GlobalDisplacement = { "GlobalDisplacement", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyWaterPreset, GlobalDisplacement), Z_Construct_UScriptStruct_FOceanologyGlobalDisplacement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalDisplacement_MetaData), NewProp_GlobalDisplacement_MetaData) }; // 1342432749
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOceanologyWaterPreset_Statics::NewProp_BaseOffset = { "BaseOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyWaterPreset, BaseOffset), Z_Construct_UScriptStruct_FOceanologyBaseOffset, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseOffset_MetaData), NewProp_BaseOffset_MetaData) }; // 1128559501
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOceanologyWaterPreset_Statics::NewProp_Wave_1 = { "Wave_1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyWaterPreset, Wave_1), Z_Construct_UScriptStruct_FOceanologyWave_1, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Wave_1_MetaData), NewProp_Wave_1_MetaData) }; // 2882325646
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOceanologyWaterPreset_Statics::NewProp_Wave_2 = { "Wave_2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyWaterPreset, Wave_2), Z_Construct_UScriptStruct_FOceanologyWave_2, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Wave_2_MetaData), NewProp_Wave_2_MetaData) }; // 4048543760
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOceanologyWaterPreset_Statics::NewProp_Wave_3 = { "Wave_3", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyWaterPreset, Wave_3), Z_Construct_UScriptStruct_FOceanologyWave_3, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Wave_3_MetaData), NewProp_Wave_3_MetaData) }; // 150167157
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOceanologyWaterPreset_Statics::NewProp_Wave_4 = { "Wave_4", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyWaterPreset, Wave_4), Z_Construct_UScriptStruct_FOceanologyWave_4, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Wave_4_MetaData), NewProp_Wave_4_MetaData) }; // 1244214835
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOceanologyWaterPreset_Statics::NewProp_Summarize_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOceanologyWaterPreset_Statics::NewProp_Summarize = { "Summarize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyWaterPreset, Summarize), Z_Construct_UEnum_Oceanology_Plugin_EOceanologyGerstnerWaveSummarize, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Summarize_MetaData), NewProp_Summarize_MetaData) }; // 4070874922
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOceanologyWaterPreset_Statics::NewProp_SurfaceScattering = { "SurfaceScattering", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyWaterPreset, SurfaceScattering), Z_Construct_UScriptStruct_FOceanologySurfaceScattering, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SurfaceScattering_MetaData), NewProp_SurfaceScattering_MetaData) }; // 2426833340
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOceanologyWaterPreset_Statics::NewProp_Caustics = { "Caustics", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyWaterPreset, Caustics), Z_Construct_UScriptStruct_FOceanologyCaustics, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Caustics_MetaData), NewProp_Caustics_MetaData) }; // 236567494
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOceanologyWaterPreset_Statics::NewProp_Refraction = { "Refraction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyWaterPreset, Refraction), Z_Construct_UScriptStruct_FOceanologyRefraction, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Refraction_MetaData), NewProp_Refraction_MetaData) }; // 3969240598
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOceanologyWaterPreset_Statics::NewProp_HorizonCorrection = { "HorizonCorrection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyWaterPreset, HorizonCorrection), Z_Construct_UScriptStruct_FOceanologyHorizonCorrection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HorizonCorrection_MetaData), NewProp_HorizonCorrection_MetaData) }; // 2772329432
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOceanologyWaterPreset_Statics::NewProp_Flipbook = { "Flipbook", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyWaterPreset, Flipbook), Z_Construct_UScriptStruct_FOceanologyFlipbook, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Flipbook_MetaData), NewProp_Flipbook_MetaData) }; // 1692283366
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOceanologyWaterPreset_Statics::NewProp_Foam = { "Foam", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyWaterPreset, Foam), Z_Construct_UScriptStruct_FOceanologyFoam, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Foam_MetaData), NewProp_Foam_MetaData) }; // 1484821047
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOceanologyWaterPreset_Statics::NewProp_Folding = { "Folding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyWaterPreset, Folding), Z_Construct_UScriptStruct_FOceanologyFolding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Folding_MetaData), NewProp_Folding_MetaData) }; // 1188334788
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOceanologyWaterPreset_Statics::NewProp_Procedural = { "Procedural", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyWaterPreset, Procedural), Z_Construct_UScriptStruct_FOceanologyProcedural, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Procedural_MetaData), NewProp_Procedural_MetaData) }; // 4058591009
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOceanologyWaterPreset_Statics::NewProp_RVT = { "RVT", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyWaterPreset, RVT), Z_Construct_UScriptStruct_FOceanologyRVT, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RVT_MetaData), NewProp_RVT_MetaData) }; // 1549818250
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOceanologyWaterPreset_Statics::NewProp_Mask = { "Mask", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyWaterPreset, Mask), Z_Construct_UScriptStruct_FOceanologyMask, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mask_MetaData), NewProp_Mask_MetaData) }; // 1049969195
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOceanologyWaterPreset_Statics::NewProp_GGX = { "GGX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyWaterPreset, GGX), Z_Construct_UScriptStruct_FOceanologyGGX, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GGX_MetaData), NewProp_GGX_MetaData) }; // 4287862550
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOceanologyWaterPreset_Statics::NewProp_UnderwaterMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOceanologyWaterPreset_Statics::NewProp_UnderwaterMode = { "UnderwaterMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyWaterPreset, UnderwaterMode), Z_Construct_UEnum_Oceanology_Plugin_EOceanologyUnderwaterMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnderwaterMode_MetaData), NewProp_UnderwaterMode_MetaData) }; // 2998090531
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOceanologyWaterPreset_Statics::NewProp_Underwater = { "Underwater", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyWaterPreset, Underwater), Z_Construct_UScriptStruct_FOceanologyUnderwater, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Underwater_MetaData), NewProp_Underwater_MetaData) }; // 358567345
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOceanologyWaterPreset_Statics::NewProp_VolumetricFog = { "VolumetricFog", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyWaterPreset, VolumetricFog), Z_Construct_UScriptStruct_FOceanologyVolumetricFog, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VolumetricFog_MetaData), NewProp_VolumetricFog_MetaData) }; // 2655473889
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOceanologyWaterPreset_Statics::NewProp_MaskUnderwater = { "MaskUnderwater", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyWaterPreset, MaskUnderwater), Z_Construct_UScriptStruct_FOceanologyMaskUnderwater, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaskUnderwater_MetaData), NewProp_MaskUnderwater_MetaData) }; // 1394275457
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOceanologyWaterPreset_Statics::NewProp_BubblesSettings = { "BubblesSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyWaterPreset, BubblesSettings), Z_Construct_UScriptStruct_FOceanologyBubblesSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BubblesSettings_MetaData), NewProp_BubblesSettings_MetaData) }; // 2775026522
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOceanologyWaterPreset_Statics::NewProp_WaterProjection = { "WaterProjection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyWaterPreset, WaterProjection), Z_Construct_UScriptStruct_FOceanologyWaterProjection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaterProjection_MetaData), NewProp_WaterProjection_MetaData) }; // 1198342164
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOceanologyWaterPreset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyWaterPreset_Statics::NewProp_GlobalDisplacement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyWaterPreset_Statics::NewProp_BaseOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyWaterPreset_Statics::NewProp_Wave_1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyWaterPreset_Statics::NewProp_Wave_2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyWaterPreset_Statics::NewProp_Wave_3,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyWaterPreset_Statics::NewProp_Wave_4,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyWaterPreset_Statics::NewProp_Summarize_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyWaterPreset_Statics::NewProp_Summarize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyWaterPreset_Statics::NewProp_SurfaceScattering,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyWaterPreset_Statics::NewProp_Caustics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyWaterPreset_Statics::NewProp_Refraction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyWaterPreset_Statics::NewProp_HorizonCorrection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyWaterPreset_Statics::NewProp_Flipbook,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyWaterPreset_Statics::NewProp_Foam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyWaterPreset_Statics::NewProp_Folding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyWaterPreset_Statics::NewProp_Procedural,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyWaterPreset_Statics::NewProp_RVT,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyWaterPreset_Statics::NewProp_Mask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyWaterPreset_Statics::NewProp_GGX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyWaterPreset_Statics::NewProp_UnderwaterMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyWaterPreset_Statics::NewProp_UnderwaterMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyWaterPreset_Statics::NewProp_Underwater,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyWaterPreset_Statics::NewProp_VolumetricFog,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyWaterPreset_Statics::NewProp_MaskUnderwater,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyWaterPreset_Statics::NewProp_BubblesSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyWaterPreset_Statics::NewProp_WaterProjection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOceanologyWaterPreset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOceanologyWaterPreset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_Oceanology_Plugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOceanologyWaterPreset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOceanologyWaterPreset_Statics::ClassParams = {
	&UOceanologyWaterPreset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOceanologyWaterPreset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOceanologyWaterPreset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOceanologyWaterPreset_Statics::Class_MetaDataParams), Z_Construct_UClass_UOceanologyWaterPreset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOceanologyWaterPreset()
{
	if (!Z_Registration_Info_UClass_UOceanologyWaterPreset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOceanologyWaterPreset.OuterSingleton, Z_Construct_UClass_UOceanologyWaterPreset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOceanologyWaterPreset.OuterSingleton;
}
template<> OCEANOLOGY_PLUGIN_API UClass* StaticClass<UOceanologyWaterPreset>()
{
	return UOceanologyWaterPreset::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOceanologyWaterPreset);
UOceanologyWaterPreset::~UOceanologyWaterPreset() {}
// End Class UOceanologyWaterPreset

// Begin Registration
struct Z_CompiledInDeferFile_FID_BS_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_DataAsset_OceanologyWaterPreset_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOceanologyWaterPreset, UOceanologyWaterPreset::StaticClass, TEXT("UOceanologyWaterPreset"), &Z_Registration_Info_UClass_UOceanologyWaterPreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOceanologyWaterPreset), 3393159225U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BS_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_DataAsset_OceanologyWaterPreset_h_4131739388(TEXT("/Script/Oceanology_Plugin"),
	Z_CompiledInDeferFile_FID_BS_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_DataAsset_OceanologyWaterPreset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BS_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_DataAsset_OceanologyWaterPreset_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
