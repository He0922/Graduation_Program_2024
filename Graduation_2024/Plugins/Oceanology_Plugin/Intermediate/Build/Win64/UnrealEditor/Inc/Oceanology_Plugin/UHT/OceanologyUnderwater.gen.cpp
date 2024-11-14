// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Oceanology_Plugin/Public/Structs/OceanologyUnderwater.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOceanologyUnderwater() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_UOceanologyUnderwaterHelper();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_UOceanologyUnderwaterHelper_NoRegister();
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyUnderwater();
UPackage* Z_Construct_UPackage__Script_Oceanology_Plugin();
// End Cross Module References

// Begin ScriptStruct FOceanologyUnderwater
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OceanologyUnderwater;
class UScriptStruct* FOceanologyUnderwater::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OceanologyUnderwater.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OceanologyUnderwater.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOceanologyUnderwater, (UObject*)Z_Construct_UPackage__Script_Oceanology_Plugin(), TEXT("OceanologyUnderwater"));
	}
	return Z_Registration_Info_UScriptStruct_OceanologyUnderwater.OuterSingleton;
}
template<> OCEANOLOGY_PLUGIN_API UScriptStruct* StaticStruct<FOceanologyUnderwater>()
{
	return FOceanologyUnderwater::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOceanologyUnderwater_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * This is an auto-generated class from Material Parameters via AOceanologyMaterialToStructConverter. DO NOT EDIT BY HAND EVER! Your changes will be lost. Edit the material itself instead!\n * Generated at: 10 March 2024\n **/" },
#endif
		{ "ModuleRelativePath", "Public/Structs/OceanologyUnderwater.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is an auto-generated class from Material Parameters via AOceanologyMaterialToStructConverter. DO NOT EDIT BY HAND EVER! Your changes will be lost. Edit the material itself instead!\nGenerated at: 10 March 2024" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AtmosphereLighting_MetaData[] = {
		{ "Category", "Underwater" },
		{ "DisplayName", "AtmosphereLighting" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyUnderwater.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BandOffset_MetaData[] = {
		{ "Category", "Underwater" },
		{ "DisplayName", "Band Offset" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyUnderwater.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BandOpacity_MetaData[] = {
		{ "Category", "Underwater" },
		{ "ClampMax", "2.0" },
		{ "DisplayName", "Band Opacity" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyUnderwater.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BandWidth_MetaData[] = {
		{ "Category", "Underwater" },
		{ "DisplayName", "Band Width" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyUnderwater.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DarknessFadeDepth_MetaData[] = {
		{ "Category", "Underwater" },
		{ "DisplayName", "DarknessFadeDepth" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyUnderwater.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeepColorDistance_MetaData[] = {
		{ "Category", "Underwater" },
		{ "DisplayName", "DeepColorDistance" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyUnderwater.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DepthColorAbsorption_MetaData[] = {
		{ "Category", "Underwater" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "1.0" },
		{ "DisplayName", "DepthColorAbsorption" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyUnderwater.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistortionIntensity_MetaData[] = {
		{ "Category", "Underwater" },
		{ "DisplayName", "DistortionIntensity" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyUnderwater.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistortionScale_MetaData[] = {
		{ "Category", "Underwater" },
		{ "DisplayName", "DistortionScale" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyUnderwater.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistortionSpeed_MetaData[] = {
		{ "Category", "Underwater" },
		{ "DisplayName", "DistortionSpeed" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyUnderwater.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FogDensity_MetaData[] = {
		{ "Category", "Underwater" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.01" },
		{ "DisplayName", "FogDensity" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyUnderwater.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalPosition_MetaData[] = {
		{ "Category", "Underwater" },
		{ "DisplayName", "LocalPosition" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyUnderwater.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SunPower_MetaData[] = {
		{ "Category", "Underwater" },
		{ "ClampMax", "20.0" },
		{ "ClampMin", "1.0" },
		{ "DisplayName", "SunPower" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyUnderwater.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnderwaterLightDepth_MetaData[] = {
		{ "Category", "Underwater" },
		{ "ClampMax", "50000.0" },
		{ "ClampMin", "100.0" },
		{ "DisplayName", "UnderwaterLightDepth" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyUnderwater.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnderwaterNoLightDepth_MetaData[] = {
		{ "Category", "Underwater" },
		{ "DisplayName", "UnderwaterNoLightDepth" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyUnderwater.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VignetteDark_MetaData[] = {
		{ "Category", "Underwater" },
		{ "DisplayName", "VignetteDark" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyUnderwater.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VignetteDistortion_MetaData[] = {
		{ "Category", "Underwater" },
		{ "DisplayName", "VignetteDistortion" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyUnderwater.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VignetteEdge_MetaData[] = {
		{ "Category", "Underwater" },
		{ "DisplayName", "VignetteEdge" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyUnderwater.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaterLineColorIntensity_MetaData[] = {
		{ "Category", "Underwater" },
		{ "DisplayName", "WaterLineColorIntensity" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyUnderwater.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaterLineDistanceFalloff_MetaData[] = {
		{ "Category", "Underwater" },
		{ "DisplayName", "WaterLineDistanceFalloff" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyUnderwater.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaterLineRefraction_MetaData[] = {
		{ "Category", "Underwater" },
		{ "DisplayName", "WaterLineRefraction" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyUnderwater.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaterLineRefractionWidth_MetaData[] = {
		{ "Category", "Underwater" },
		{ "DisplayName", "WaterLineRefractionWidth" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyUnderwater.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WetAlpha_MetaData[] = {
		{ "Category", "Underwater" },
		{ "DisplayName", "Wet Alpha" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyUnderwater.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WetHardness_MetaData[] = {
		{ "Category", "Underwater" },
		{ "DisplayName", "Wet Hardness" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyUnderwater.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WetLocation_MetaData[] = {
		{ "Category", "Underwater" },
		{ "DisplayName", "Wet Location" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyUnderwater.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WetRadius_MetaData[] = {
		{ "Category", "Underwater" },
		{ "DisplayName", "Wet Radius" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyUnderwater.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExponentialFogColorHigh_MetaData[] = {
		{ "Category", "Underwater" },
		{ "DisplayName", "ExponentialFogColorHigh" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyUnderwater.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExponentialFogColorLow_MetaData[] = {
		{ "Category", "Underwater" },
		{ "DisplayName", "ExponentialFogColorLow" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyUnderwater.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneColorDeep_MetaData[] = {
		{ "Category", "Underwater" },
		{ "DisplayName", "SceneColorDeep" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyUnderwater.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneColorShallow_MetaData[] = {
		{ "Category", "Underwater" },
		{ "DisplayName", "SceneColorShallow" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyUnderwater.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistortionTexture_MetaData[] = {
		{ "Category", "Underwater" },
		{ "DisplayName", "DistortionTexture" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyUnderwater.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_AtmosphereLighting;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_BandOffset;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_BandOpacity;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_BandWidth;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_DarknessFadeDepth;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_DeepColorDistance;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_DepthColorAbsorption;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_DistortionIntensity;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_DistortionScale;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_DistortionSpeed;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_FogDensity;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_LocalPosition;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_SunPower;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_UnderwaterLightDepth;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_UnderwaterNoLightDepth;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_VignetteDark;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_VignetteDistortion;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_VignetteEdge;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_WaterLineColorIntensity;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_WaterLineDistanceFalloff;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_WaterLineRefraction;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_WaterLineRefractionWidth;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_WetAlpha;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_WetHardness;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_WetLocation;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_WetRadius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExponentialFogColorHigh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExponentialFogColorLow;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SceneColorDeep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SceneColorShallow;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DistortionTexture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOceanologyUnderwater>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyUnderwater_Statics::NewProp_AtmosphereLighting = { "AtmosphereLighting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyUnderwater, AtmosphereLighting), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AtmosphereLighting_MetaData), NewProp_AtmosphereLighting_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyUnderwater_Statics::NewProp_BandOffset = { "BandOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyUnderwater, BandOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BandOffset_MetaData), NewProp_BandOffset_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyUnderwater_Statics::NewProp_BandOpacity = { "BandOpacity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyUnderwater, BandOpacity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BandOpacity_MetaData), NewProp_BandOpacity_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyUnderwater_Statics::NewProp_BandWidth = { "BandWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyUnderwater, BandWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BandWidth_MetaData), NewProp_BandWidth_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyUnderwater_Statics::NewProp_DarknessFadeDepth = { "DarknessFadeDepth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyUnderwater, DarknessFadeDepth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DarknessFadeDepth_MetaData), NewProp_DarknessFadeDepth_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyUnderwater_Statics::NewProp_DeepColorDistance = { "DeepColorDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyUnderwater, DeepColorDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeepColorDistance_MetaData), NewProp_DeepColorDistance_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyUnderwater_Statics::NewProp_DepthColorAbsorption = { "DepthColorAbsorption", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyUnderwater, DepthColorAbsorption), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DepthColorAbsorption_MetaData), NewProp_DepthColorAbsorption_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyUnderwater_Statics::NewProp_DistortionIntensity = { "DistortionIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyUnderwater, DistortionIntensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistortionIntensity_MetaData), NewProp_DistortionIntensity_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyUnderwater_Statics::NewProp_DistortionScale = { "DistortionScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyUnderwater, DistortionScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistortionScale_MetaData), NewProp_DistortionScale_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyUnderwater_Statics::NewProp_DistortionSpeed = { "DistortionSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyUnderwater, DistortionSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistortionSpeed_MetaData), NewProp_DistortionSpeed_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyUnderwater_Statics::NewProp_FogDensity = { "FogDensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyUnderwater, FogDensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FogDensity_MetaData), NewProp_FogDensity_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyUnderwater_Statics::NewProp_LocalPosition = { "LocalPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyUnderwater, LocalPosition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalPosition_MetaData), NewProp_LocalPosition_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyUnderwater_Statics::NewProp_SunPower = { "SunPower", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyUnderwater, SunPower), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SunPower_MetaData), NewProp_SunPower_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyUnderwater_Statics::NewProp_UnderwaterLightDepth = { "UnderwaterLightDepth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyUnderwater, UnderwaterLightDepth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnderwaterLightDepth_MetaData), NewProp_UnderwaterLightDepth_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyUnderwater_Statics::NewProp_UnderwaterNoLightDepth = { "UnderwaterNoLightDepth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyUnderwater, UnderwaterNoLightDepth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnderwaterNoLightDepth_MetaData), NewProp_UnderwaterNoLightDepth_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyUnderwater_Statics::NewProp_VignetteDark = { "VignetteDark", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyUnderwater, VignetteDark), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VignetteDark_MetaData), NewProp_VignetteDark_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyUnderwater_Statics::NewProp_VignetteDistortion = { "VignetteDistortion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyUnderwater, VignetteDistortion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VignetteDistortion_MetaData), NewProp_VignetteDistortion_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyUnderwater_Statics::NewProp_VignetteEdge = { "VignetteEdge", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyUnderwater, VignetteEdge), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VignetteEdge_MetaData), NewProp_VignetteEdge_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyUnderwater_Statics::NewProp_WaterLineColorIntensity = { "WaterLineColorIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyUnderwater, WaterLineColorIntensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaterLineColorIntensity_MetaData), NewProp_WaterLineColorIntensity_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyUnderwater_Statics::NewProp_WaterLineDistanceFalloff = { "WaterLineDistanceFalloff", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyUnderwater, WaterLineDistanceFalloff), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaterLineDistanceFalloff_MetaData), NewProp_WaterLineDistanceFalloff_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyUnderwater_Statics::NewProp_WaterLineRefraction = { "WaterLineRefraction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyUnderwater, WaterLineRefraction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaterLineRefraction_MetaData), NewProp_WaterLineRefraction_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyUnderwater_Statics::NewProp_WaterLineRefractionWidth = { "WaterLineRefractionWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyUnderwater, WaterLineRefractionWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaterLineRefractionWidth_MetaData), NewProp_WaterLineRefractionWidth_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyUnderwater_Statics::NewProp_WetAlpha = { "WetAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyUnderwater, WetAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WetAlpha_MetaData), NewProp_WetAlpha_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyUnderwater_Statics::NewProp_WetHardness = { "WetHardness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyUnderwater, WetHardness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WetHardness_MetaData), NewProp_WetHardness_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyUnderwater_Statics::NewProp_WetLocation = { "WetLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyUnderwater, WetLocation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WetLocation_MetaData), NewProp_WetLocation_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyUnderwater_Statics::NewProp_WetRadius = { "WetRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyUnderwater, WetRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WetRadius_MetaData), NewProp_WetRadius_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOceanologyUnderwater_Statics::NewProp_ExponentialFogColorHigh = { "ExponentialFogColorHigh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyUnderwater, ExponentialFogColorHigh), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExponentialFogColorHigh_MetaData), NewProp_ExponentialFogColorHigh_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOceanologyUnderwater_Statics::NewProp_ExponentialFogColorLow = { "ExponentialFogColorLow", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyUnderwater, ExponentialFogColorLow), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExponentialFogColorLow_MetaData), NewProp_ExponentialFogColorLow_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOceanologyUnderwater_Statics::NewProp_SceneColorDeep = { "SceneColorDeep", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyUnderwater, SceneColorDeep), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneColorDeep_MetaData), NewProp_SceneColorDeep_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOceanologyUnderwater_Statics::NewProp_SceneColorShallow = { "SceneColorShallow", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyUnderwater, SceneColorShallow), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneColorShallow_MetaData), NewProp_SceneColorShallow_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOceanologyUnderwater_Statics::NewProp_DistortionTexture = { "DistortionTexture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyUnderwater, DistortionTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistortionTexture_MetaData), NewProp_DistortionTexture_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOceanologyUnderwater_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyUnderwater_Statics::NewProp_AtmosphereLighting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyUnderwater_Statics::NewProp_BandOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyUnderwater_Statics::NewProp_BandOpacity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyUnderwater_Statics::NewProp_BandWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyUnderwater_Statics::NewProp_DarknessFadeDepth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyUnderwater_Statics::NewProp_DeepColorDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyUnderwater_Statics::NewProp_DepthColorAbsorption,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyUnderwater_Statics::NewProp_DistortionIntensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyUnderwater_Statics::NewProp_DistortionScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyUnderwater_Statics::NewProp_DistortionSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyUnderwater_Statics::NewProp_FogDensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyUnderwater_Statics::NewProp_LocalPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyUnderwater_Statics::NewProp_SunPower,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyUnderwater_Statics::NewProp_UnderwaterLightDepth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyUnderwater_Statics::NewProp_UnderwaterNoLightDepth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyUnderwater_Statics::NewProp_VignetteDark,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyUnderwater_Statics::NewProp_VignetteDistortion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyUnderwater_Statics::NewProp_VignetteEdge,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyUnderwater_Statics::NewProp_WaterLineColorIntensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyUnderwater_Statics::NewProp_WaterLineDistanceFalloff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyUnderwater_Statics::NewProp_WaterLineRefraction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyUnderwater_Statics::NewProp_WaterLineRefractionWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyUnderwater_Statics::NewProp_WetAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyUnderwater_Statics::NewProp_WetHardness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyUnderwater_Statics::NewProp_WetLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyUnderwater_Statics::NewProp_WetRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyUnderwater_Statics::NewProp_ExponentialFogColorHigh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyUnderwater_Statics::NewProp_ExponentialFogColorLow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyUnderwater_Statics::NewProp_SceneColorDeep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyUnderwater_Statics::NewProp_SceneColorShallow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyUnderwater_Statics::NewProp_DistortionTexture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanologyUnderwater_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOceanologyUnderwater_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Oceanology_Plugin,
	nullptr,
	&NewStructOps,
	"OceanologyUnderwater",
	Z_Construct_UScriptStruct_FOceanologyUnderwater_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanologyUnderwater_Statics::PropPointers),
	sizeof(FOceanologyUnderwater),
	alignof(FOceanologyUnderwater),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanologyUnderwater_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOceanologyUnderwater_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOceanologyUnderwater()
{
	if (!Z_Registration_Info_UScriptStruct_OceanologyUnderwater.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OceanologyUnderwater.InnerSingleton, Z_Construct_UScriptStruct_FOceanologyUnderwater_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OceanologyUnderwater.InnerSingleton;
}
// End ScriptStruct FOceanologyUnderwater

// Begin Class UOceanologyUnderwaterHelper Function LerpUnderwater
struct Z_Construct_UFunction_UOceanologyUnderwaterHelper_LerpUnderwater_Statics
{
	struct OceanologyUnderwaterHelper_eventLerpUnderwater_Parms
	{
		FOceanologyUnderwater A;
		FOceanologyUnderwater B;
		double Alpha;
		FOceanologyUnderwater OutResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Underwater" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyUnderwater.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Alpha;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyUnderwaterHelper_LerpUnderwater_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyUnderwaterHelper_eventLerpUnderwater_Parms, A), Z_Construct_UScriptStruct_FOceanologyUnderwater, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 358567345
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyUnderwaterHelper_LerpUnderwater_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyUnderwaterHelper_eventLerpUnderwater_Parms, B), Z_Construct_UScriptStruct_FOceanologyUnderwater, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) }; // 358567345
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UOceanologyUnderwaterHelper_LerpUnderwater_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyUnderwaterHelper_eventLerpUnderwater_Parms, Alpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Alpha_MetaData), NewProp_Alpha_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyUnderwaterHelper_LerpUnderwater_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyUnderwaterHelper_eventLerpUnderwater_Parms, OutResult), Z_Construct_UScriptStruct_FOceanologyUnderwater, METADATA_PARAMS(0, nullptr) }; // 358567345
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanologyUnderwaterHelper_LerpUnderwater_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyUnderwaterHelper_LerpUnderwater_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyUnderwaterHelper_LerpUnderwater_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyUnderwaterHelper_LerpUnderwater_Statics::NewProp_Alpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyUnderwaterHelper_LerpUnderwater_Statics::NewProp_OutResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyUnderwaterHelper_LerpUnderwater_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologyUnderwaterHelper_LerpUnderwater_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologyUnderwaterHelper, nullptr, "LerpUnderwater", nullptr, nullptr, Z_Construct_UFunction_UOceanologyUnderwaterHelper_LerpUnderwater_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyUnderwaterHelper_LerpUnderwater_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOceanologyUnderwaterHelper_LerpUnderwater_Statics::OceanologyUnderwaterHelper_eventLerpUnderwater_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyUnderwaterHelper_LerpUnderwater_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologyUnderwaterHelper_LerpUnderwater_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOceanologyUnderwaterHelper_LerpUnderwater_Statics::OceanologyUnderwaterHelper_eventLerpUnderwater_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanologyUnderwaterHelper_LerpUnderwater()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologyUnderwaterHelper_LerpUnderwater_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologyUnderwaterHelper::execLerpUnderwater)
{
	P_GET_STRUCT_REF(FOceanologyUnderwater,Z_Param_Out_A);
	P_GET_STRUCT_REF(FOceanologyUnderwater,Z_Param_Out_B);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Alpha);
	P_GET_STRUCT_REF(FOceanologyUnderwater,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOceanologyUnderwaterHelper::LerpUnderwater(Z_Param_Out_A,Z_Param_Out_B,Z_Param_Alpha,Z_Param_Out_OutResult);
	P_NATIVE_END;
}
// End Class UOceanologyUnderwaterHelper Function LerpUnderwater

// Begin Class UOceanologyUnderwaterHelper Function SetMaterialParameters
struct Z_Construct_UFunction_UOceanologyUnderwaterHelper_SetMaterialParameters_Statics
{
	struct OceanologyUnderwaterHelper_eventSetMaterialParameters_Parms
	{
		UMaterialInstanceDynamic* MID;
		FOceanologyUnderwater Underwater;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Underwater" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyUnderwater.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Underwater_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Underwater;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOceanologyUnderwaterHelper_SetMaterialParameters_Statics::NewProp_MID = { "MID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyUnderwaterHelper_eventSetMaterialParameters_Parms, MID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyUnderwaterHelper_SetMaterialParameters_Statics::NewProp_Underwater = { "Underwater", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyUnderwaterHelper_eventSetMaterialParameters_Parms, Underwater), Z_Construct_UScriptStruct_FOceanologyUnderwater, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Underwater_MetaData), NewProp_Underwater_MetaData) }; // 358567345
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanologyUnderwaterHelper_SetMaterialParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyUnderwaterHelper_SetMaterialParameters_Statics::NewProp_MID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyUnderwaterHelper_SetMaterialParameters_Statics::NewProp_Underwater,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyUnderwaterHelper_SetMaterialParameters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologyUnderwaterHelper_SetMaterialParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologyUnderwaterHelper, nullptr, "SetMaterialParameters", nullptr, nullptr, Z_Construct_UFunction_UOceanologyUnderwaterHelper_SetMaterialParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyUnderwaterHelper_SetMaterialParameters_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOceanologyUnderwaterHelper_SetMaterialParameters_Statics::OceanologyUnderwaterHelper_eventSetMaterialParameters_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyUnderwaterHelper_SetMaterialParameters_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologyUnderwaterHelper_SetMaterialParameters_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOceanologyUnderwaterHelper_SetMaterialParameters_Statics::OceanologyUnderwaterHelper_eventSetMaterialParameters_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanologyUnderwaterHelper_SetMaterialParameters()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologyUnderwaterHelper_SetMaterialParameters_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologyUnderwaterHelper::execSetMaterialParameters)
{
	P_GET_OBJECT(UMaterialInstanceDynamic,Z_Param_MID);
	P_GET_STRUCT_REF(FOceanologyUnderwater,Z_Param_Out_Underwater);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOceanologyUnderwaterHelper::SetMaterialParameters(Z_Param_MID,Z_Param_Out_Underwater);
	P_NATIVE_END;
}
// End Class UOceanologyUnderwaterHelper Function SetMaterialParameters

// Begin Class UOceanologyUnderwaterHelper
void UOceanologyUnderwaterHelper::StaticRegisterNativesUOceanologyUnderwaterHelper()
{
	UClass* Class = UOceanologyUnderwaterHelper::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "LerpUnderwater", &UOceanologyUnderwaterHelper::execLerpUnderwater },
		{ "SetMaterialParameters", &UOceanologyUnderwaterHelper::execSetMaterialParameters },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOceanologyUnderwaterHelper);
UClass* Z_Construct_UClass_UOceanologyUnderwaterHelper_NoRegister()
{
	return UOceanologyUnderwaterHelper::StaticClass();
}
struct Z_Construct_UClass_UOceanologyUnderwaterHelper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * This is an auto-generated class from Material Parameters via AOceanologyMaterialToStructConverter. DO NOT EDIT BY HAND EVER! Your changes will be lost. Edit the material itself instead!\n * Generated at: 10 March 2024\n **/" },
#endif
		{ "IncludePath", "Structs/OceanologyUnderwater.h" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyUnderwater.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is an auto-generated class from Material Parameters via AOceanologyMaterialToStructConverter. DO NOT EDIT BY HAND EVER! Your changes will be lost. Edit the material itself instead!\nGenerated at: 10 March 2024" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOceanologyUnderwaterHelper_LerpUnderwater, "LerpUnderwater" }, // 1604042704
		{ &Z_Construct_UFunction_UOceanologyUnderwaterHelper_SetMaterialParameters, "SetMaterialParameters" }, // 1586820863
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOceanologyUnderwaterHelper>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOceanologyUnderwaterHelper_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Oceanology_Plugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOceanologyUnderwaterHelper_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOceanologyUnderwaterHelper_Statics::ClassParams = {
	&UOceanologyUnderwaterHelper::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOceanologyUnderwaterHelper_Statics::Class_MetaDataParams), Z_Construct_UClass_UOceanologyUnderwaterHelper_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOceanologyUnderwaterHelper()
{
	if (!Z_Registration_Info_UClass_UOceanologyUnderwaterHelper.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOceanologyUnderwaterHelper.OuterSingleton, Z_Construct_UClass_UOceanologyUnderwaterHelper_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOceanologyUnderwaterHelper.OuterSingleton;
}
template<> OCEANOLOGY_PLUGIN_API UClass* StaticClass<UOceanologyUnderwaterHelper>()
{
	return UOceanologyUnderwaterHelper::StaticClass();
}
UOceanologyUnderwaterHelper::UOceanologyUnderwaterHelper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOceanologyUnderwaterHelper);
UOceanologyUnderwaterHelper::~UOceanologyUnderwaterHelper() {}
// End Class UOceanologyUnderwaterHelper

// Begin Registration
struct Z_CompiledInDeferFile_FID_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyUnderwater_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOceanologyUnderwater::StaticStruct, Z_Construct_UScriptStruct_FOceanologyUnderwater_Statics::NewStructOps, TEXT("OceanologyUnderwater"), &Z_Registration_Info_UScriptStruct_OceanologyUnderwater, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOceanologyUnderwater), 358567345U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOceanologyUnderwaterHelper, UOceanologyUnderwaterHelper::StaticClass, TEXT("UOceanologyUnderwaterHelper"), &Z_Registration_Info_UClass_UOceanologyUnderwaterHelper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOceanologyUnderwaterHelper), 4218939863U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyUnderwater_h_800131216(TEXT("/Script/Oceanology_Plugin"),
	Z_CompiledInDeferFile_FID_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyUnderwater_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyUnderwater_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyUnderwater_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyUnderwater_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
