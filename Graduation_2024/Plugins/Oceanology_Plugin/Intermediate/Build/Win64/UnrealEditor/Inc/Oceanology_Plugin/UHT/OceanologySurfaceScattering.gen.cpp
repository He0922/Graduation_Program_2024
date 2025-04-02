// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Oceanology_Plugin/Public/Structs/OceanologySurfaceScattering.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOceanologySurfaceScattering() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_UOceanologySurfaceScatteringHelper();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_UOceanologySurfaceScatteringHelper_NoRegister();
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologySurfaceScattering();
UPackage* Z_Construct_UPackage__Script_Oceanology_Plugin();
// End Cross Module References

// Begin ScriptStruct FOceanologySurfaceScattering
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OceanologySurfaceScattering;
class UScriptStruct* FOceanologySurfaceScattering::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OceanologySurfaceScattering.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OceanologySurfaceScattering.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOceanologySurfaceScattering, (UObject*)Z_Construct_UPackage__Script_Oceanology_Plugin(), TEXT("OceanologySurfaceScattering"));
	}
	return Z_Registration_Info_UScriptStruct_OceanologySurfaceScattering.OuterSingleton;
}
template<> OCEANOLOGY_PLUGIN_API UScriptStruct* StaticStruct<FOceanologySurfaceScattering>()
{
	return FOceanologySurfaceScattering::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOceanologySurfaceScattering_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * This is an auto-generated class from Material Parameters via AOceanologyMaterialToStructConverter. DO NOT EDIT BY HAND EVER! Your changes will be lost. Edit the material itself instead!\n * Generated at: 10 March 2024\n **/" },
#endif
		{ "ModuleRelativePath", "Public/Structs/OceanologySurfaceScattering.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is an auto-generated class from Material Parameters via AOceanologyMaterialToStructConverter. DO NOT EDIT BY HAND EVER! Your changes will be lost. Edit the material itself instead!\nGenerated at: 10 March 2024" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraVectorPower_MetaData[] = {
		{ "Category", "SurfaceScattering" },
		{ "DisplayName", "CameraVectorPower" },
		{ "ModuleRelativePath", "Public/Structs/OceanologySurfaceScattering.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FadeLengthScattering_MetaData[] = {
		{ "Category", "SurfaceScattering" },
		{ "DisplayName", "FadeLengthScattering" },
		{ "ModuleRelativePath", "Public/Structs/OceanologySurfaceScattering.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FadeOffsetScattering_MetaData[] = {
		{ "Category", "SurfaceScattering" },
		{ "DisplayName", "FadeOffsetScattering" },
		{ "ModuleRelativePath", "Public/Structs/OceanologySurfaceScattering.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhaseGHigh_MetaData[] = {
		{ "Category", "SurfaceScattering" },
		{ "ClampMax", "1000.0" },
		{ "ClampMin", "-500.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Single layer water attribute. (HIGH) */" },
#endif
		{ "DisplayName", "PhaseGHigh" },
		{ "ModuleRelativePath", "Public/Structs/OceanologySurfaceScattering.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Single layer water attribute. (HIGH)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhaseGLow_MetaData[] = {
		{ "Category", "SurfaceScattering" },
		{ "ClampMax", "500.0" },
		{ "ClampMin", "-100.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Single layer water attribute. (LOW) */" },
#endif
		{ "DisplayName", "PhaseGLow" },
		{ "ModuleRelativePath", "Public/Structs/OceanologySurfaceScattering.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Single layer water attribute. (LOW)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScatterBoost_MetaData[] = {
		{ "Category", "SurfaceScattering" },
		{ "DisplayName", "ScatterBoost" },
		{ "ModuleRelativePath", "Public/Structs/OceanologySurfaceScattering.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceScatteringExponential_MetaData[] = {
		{ "Category", "SurfaceScattering" },
		{ "DisplayName", "SurfaceScatteringExponential" },
		{ "ModuleRelativePath", "Public/Structs/OceanologySurfaceScattering.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceScatteringIntensity_MetaData[] = {
		{ "Category", "SurfaceScattering" },
		{ "DisplayName", "SurfaceScatteringIntensity" },
		{ "ModuleRelativePath", "Public/Structs/OceanologySurfaceScattering.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceScatteringPower_MetaData[] = {
		{ "Category", "SurfaceScattering" },
		{ "DisplayName", "SurfaceScatteringPower" },
		{ "ModuleRelativePath", "Public/Structs/OceanologySurfaceScattering.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceScatteringRefractMax_MetaData[] = {
		{ "Category", "SurfaceScattering" },
		{ "DisplayName", "SurfaceScatteringRefractMax" },
		{ "ModuleRelativePath", "Public/Structs/OceanologySurfaceScattering.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceScatteringRefractMin_MetaData[] = {
		{ "Category", "SurfaceScattering" },
		{ "DisplayName", "SurfaceScatteringRefractMin" },
		{ "ModuleRelativePath", "Public/Structs/OceanologySurfaceScattering.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TopDownExp_MetaData[] = {
		{ "Category", "SurfaceScattering" },
		{ "DisplayName", "TopDownExp" },
		{ "ModuleRelativePath", "Public/Structs/OceanologySurfaceScattering.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaterFresnelExponenth_MetaData[] = {
		{ "Category", "SurfaceScattering" },
		{ "DisplayName", "Water Fresnel  Exponenth" },
		{ "ModuleRelativePath", "Public/Structs/OceanologySurfaceScattering.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaterFresnelRoughness_MetaData[] = {
		{ "Category", "SurfaceScattering" },
		{ "DisplayName", "Water Fresnel Roughness" },
		{ "ModuleRelativePath", "Public/Structs/OceanologySurfaceScattering.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaterFresnelSpecular_MetaData[] = {
		{ "Category", "SurfaceScattering" },
		{ "DisplayName", "Water Fresnel Specular" },
		{ "ModuleRelativePath", "Public/Structs/OceanologySurfaceScattering.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaterRoughness_MetaData[] = {
		{ "Category", "SurfaceScattering" },
		{ "DisplayName", "Water Roughness" },
		{ "ModuleRelativePath", "Public/Structs/OceanologySurfaceScattering.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaterSpecular_MetaData[] = {
		{ "Category", "SurfaceScattering" },
		{ "DisplayName", "Water Specular" },
		{ "ModuleRelativePath", "Public/Structs/OceanologySurfaceScattering.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Absorption_MetaData[] = {
		{ "Category", "SurfaceScattering" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** This is the surface absorption color of the water. */" },
#endif
		{ "DisplayName", "Absorption" },
		{ "ModuleRelativePath", "Public/Structs/OceanologySurfaceScattering.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is the surface absorption color of the water." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbsorptionFar_MetaData[] = {
		{ "Category", "SurfaceScattering" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** This is the surface far absorption color of the water. */" },
#endif
		{ "DisplayName", "Absorption Far" },
		{ "ModuleRelativePath", "Public/Structs/OceanologySurfaceScattering.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is the surface far absorption color of the water." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scattering_MetaData[] = {
		{ "Category", "SurfaceScattering" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** This is the surface scattering color of the water. */" },
#endif
		{ "DisplayName", "Scattering" },
		{ "ModuleRelativePath", "Public/Structs/OceanologySurfaceScattering.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is the surface scattering color of the water." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScatteringFar_MetaData[] = {
		{ "Category", "SurfaceScattering" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** This is the far surface scattering color of the water. */" },
#endif
		{ "DisplayName", "Scattering Far" },
		{ "ModuleRelativePath", "Public/Structs/OceanologySurfaceScattering.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is the far surface scattering color of the water." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_CameraVectorPower;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_FadeLengthScattering;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_FadeOffsetScattering;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_PhaseGHigh;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_PhaseGLow;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ScatterBoost;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_SurfaceScatteringExponential;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_SurfaceScatteringIntensity;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_SurfaceScatteringPower;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_SurfaceScatteringRefractMax;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_SurfaceScatteringRefractMin;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_TopDownExp;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_WaterFresnelExponenth;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_WaterFresnelRoughness;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_WaterFresnelSpecular;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_WaterRoughness;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_WaterSpecular;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Absorption;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbsorptionFar;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Scattering;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScatteringFar;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOceanologySurfaceScattering>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologySurfaceScattering_Statics::NewProp_CameraVectorPower = { "CameraVectorPower", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologySurfaceScattering, CameraVectorPower), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraVectorPower_MetaData), NewProp_CameraVectorPower_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologySurfaceScattering_Statics::NewProp_FadeLengthScattering = { "FadeLengthScattering", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologySurfaceScattering, FadeLengthScattering), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FadeLengthScattering_MetaData), NewProp_FadeLengthScattering_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologySurfaceScattering_Statics::NewProp_FadeOffsetScattering = { "FadeOffsetScattering", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologySurfaceScattering, FadeOffsetScattering), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FadeOffsetScattering_MetaData), NewProp_FadeOffsetScattering_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologySurfaceScattering_Statics::NewProp_PhaseGHigh = { "PhaseGHigh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologySurfaceScattering, PhaseGHigh), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhaseGHigh_MetaData), NewProp_PhaseGHigh_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologySurfaceScattering_Statics::NewProp_PhaseGLow = { "PhaseGLow", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologySurfaceScattering, PhaseGLow), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhaseGLow_MetaData), NewProp_PhaseGLow_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologySurfaceScattering_Statics::NewProp_ScatterBoost = { "ScatterBoost", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologySurfaceScattering, ScatterBoost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScatterBoost_MetaData), NewProp_ScatterBoost_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologySurfaceScattering_Statics::NewProp_SurfaceScatteringExponential = { "SurfaceScatteringExponential", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologySurfaceScattering, SurfaceScatteringExponential), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SurfaceScatteringExponential_MetaData), NewProp_SurfaceScatteringExponential_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologySurfaceScattering_Statics::NewProp_SurfaceScatteringIntensity = { "SurfaceScatteringIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologySurfaceScattering, SurfaceScatteringIntensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SurfaceScatteringIntensity_MetaData), NewProp_SurfaceScatteringIntensity_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologySurfaceScattering_Statics::NewProp_SurfaceScatteringPower = { "SurfaceScatteringPower", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologySurfaceScattering, SurfaceScatteringPower), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SurfaceScatteringPower_MetaData), NewProp_SurfaceScatteringPower_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologySurfaceScattering_Statics::NewProp_SurfaceScatteringRefractMax = { "SurfaceScatteringRefractMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologySurfaceScattering, SurfaceScatteringRefractMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SurfaceScatteringRefractMax_MetaData), NewProp_SurfaceScatteringRefractMax_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologySurfaceScattering_Statics::NewProp_SurfaceScatteringRefractMin = { "SurfaceScatteringRefractMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologySurfaceScattering, SurfaceScatteringRefractMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SurfaceScatteringRefractMin_MetaData), NewProp_SurfaceScatteringRefractMin_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologySurfaceScattering_Statics::NewProp_TopDownExp = { "TopDownExp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologySurfaceScattering, TopDownExp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TopDownExp_MetaData), NewProp_TopDownExp_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologySurfaceScattering_Statics::NewProp_WaterFresnelExponenth = { "WaterFresnelExponenth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologySurfaceScattering, WaterFresnelExponenth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaterFresnelExponenth_MetaData), NewProp_WaterFresnelExponenth_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologySurfaceScattering_Statics::NewProp_WaterFresnelRoughness = { "WaterFresnelRoughness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologySurfaceScattering, WaterFresnelRoughness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaterFresnelRoughness_MetaData), NewProp_WaterFresnelRoughness_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologySurfaceScattering_Statics::NewProp_WaterFresnelSpecular = { "WaterFresnelSpecular", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologySurfaceScattering, WaterFresnelSpecular), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaterFresnelSpecular_MetaData), NewProp_WaterFresnelSpecular_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologySurfaceScattering_Statics::NewProp_WaterRoughness = { "WaterRoughness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologySurfaceScattering, WaterRoughness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaterRoughness_MetaData), NewProp_WaterRoughness_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologySurfaceScattering_Statics::NewProp_WaterSpecular = { "WaterSpecular", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologySurfaceScattering, WaterSpecular), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaterSpecular_MetaData), NewProp_WaterSpecular_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOceanologySurfaceScattering_Statics::NewProp_Absorption = { "Absorption", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologySurfaceScattering, Absorption), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Absorption_MetaData), NewProp_Absorption_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOceanologySurfaceScattering_Statics::NewProp_AbsorptionFar = { "AbsorptionFar", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologySurfaceScattering, AbsorptionFar), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbsorptionFar_MetaData), NewProp_AbsorptionFar_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOceanologySurfaceScattering_Statics::NewProp_Scattering = { "Scattering", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologySurfaceScattering, Scattering), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scattering_MetaData), NewProp_Scattering_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOceanologySurfaceScattering_Statics::NewProp_ScatteringFar = { "ScatteringFar", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologySurfaceScattering, ScatteringFar), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScatteringFar_MetaData), NewProp_ScatteringFar_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOceanologySurfaceScattering_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologySurfaceScattering_Statics::NewProp_CameraVectorPower,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologySurfaceScattering_Statics::NewProp_FadeLengthScattering,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologySurfaceScattering_Statics::NewProp_FadeOffsetScattering,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologySurfaceScattering_Statics::NewProp_PhaseGHigh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologySurfaceScattering_Statics::NewProp_PhaseGLow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologySurfaceScattering_Statics::NewProp_ScatterBoost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologySurfaceScattering_Statics::NewProp_SurfaceScatteringExponential,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologySurfaceScattering_Statics::NewProp_SurfaceScatteringIntensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologySurfaceScattering_Statics::NewProp_SurfaceScatteringPower,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologySurfaceScattering_Statics::NewProp_SurfaceScatteringRefractMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologySurfaceScattering_Statics::NewProp_SurfaceScatteringRefractMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologySurfaceScattering_Statics::NewProp_TopDownExp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologySurfaceScattering_Statics::NewProp_WaterFresnelExponenth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologySurfaceScattering_Statics::NewProp_WaterFresnelRoughness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologySurfaceScattering_Statics::NewProp_WaterFresnelSpecular,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologySurfaceScattering_Statics::NewProp_WaterRoughness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologySurfaceScattering_Statics::NewProp_WaterSpecular,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologySurfaceScattering_Statics::NewProp_Absorption,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologySurfaceScattering_Statics::NewProp_AbsorptionFar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologySurfaceScattering_Statics::NewProp_Scattering,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologySurfaceScattering_Statics::NewProp_ScatteringFar,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanologySurfaceScattering_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOceanologySurfaceScattering_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Oceanology_Plugin,
	nullptr,
	&NewStructOps,
	"OceanologySurfaceScattering",
	Z_Construct_UScriptStruct_FOceanologySurfaceScattering_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanologySurfaceScattering_Statics::PropPointers),
	sizeof(FOceanologySurfaceScattering),
	alignof(FOceanologySurfaceScattering),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanologySurfaceScattering_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOceanologySurfaceScattering_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOceanologySurfaceScattering()
{
	if (!Z_Registration_Info_UScriptStruct_OceanologySurfaceScattering.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OceanologySurfaceScattering.InnerSingleton, Z_Construct_UScriptStruct_FOceanologySurfaceScattering_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OceanologySurfaceScattering.InnerSingleton;
}
// End ScriptStruct FOceanologySurfaceScattering

// Begin Class UOceanologySurfaceScatteringHelper Function LerpSurfaceScattering
struct Z_Construct_UFunction_UOceanologySurfaceScatteringHelper_LerpSurfaceScattering_Statics
{
	struct OceanologySurfaceScatteringHelper_eventLerpSurfaceScattering_Parms
	{
		FOceanologySurfaceScattering A;
		FOceanologySurfaceScattering B;
		double Alpha;
		FOceanologySurfaceScattering OutResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SurfaceScattering" },
		{ "ModuleRelativePath", "Public/Structs/OceanologySurfaceScattering.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologySurfaceScatteringHelper_LerpSurfaceScattering_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologySurfaceScatteringHelper_eventLerpSurfaceScattering_Parms, A), Z_Construct_UScriptStruct_FOceanologySurfaceScattering, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 2426833340
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologySurfaceScatteringHelper_LerpSurfaceScattering_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologySurfaceScatteringHelper_eventLerpSurfaceScattering_Parms, B), Z_Construct_UScriptStruct_FOceanologySurfaceScattering, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) }; // 2426833340
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UOceanologySurfaceScatteringHelper_LerpSurfaceScattering_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologySurfaceScatteringHelper_eventLerpSurfaceScattering_Parms, Alpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Alpha_MetaData), NewProp_Alpha_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologySurfaceScatteringHelper_LerpSurfaceScattering_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologySurfaceScatteringHelper_eventLerpSurfaceScattering_Parms, OutResult), Z_Construct_UScriptStruct_FOceanologySurfaceScattering, METADATA_PARAMS(0, nullptr) }; // 2426833340
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanologySurfaceScatteringHelper_LerpSurfaceScattering_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologySurfaceScatteringHelper_LerpSurfaceScattering_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologySurfaceScatteringHelper_LerpSurfaceScattering_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologySurfaceScatteringHelper_LerpSurfaceScattering_Statics::NewProp_Alpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologySurfaceScatteringHelper_LerpSurfaceScattering_Statics::NewProp_OutResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologySurfaceScatteringHelper_LerpSurfaceScattering_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologySurfaceScatteringHelper_LerpSurfaceScattering_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologySurfaceScatteringHelper, nullptr, "LerpSurfaceScattering", nullptr, nullptr, Z_Construct_UFunction_UOceanologySurfaceScatteringHelper_LerpSurfaceScattering_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologySurfaceScatteringHelper_LerpSurfaceScattering_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOceanologySurfaceScatteringHelper_LerpSurfaceScattering_Statics::OceanologySurfaceScatteringHelper_eventLerpSurfaceScattering_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologySurfaceScatteringHelper_LerpSurfaceScattering_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologySurfaceScatteringHelper_LerpSurfaceScattering_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOceanologySurfaceScatteringHelper_LerpSurfaceScattering_Statics::OceanologySurfaceScatteringHelper_eventLerpSurfaceScattering_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanologySurfaceScatteringHelper_LerpSurfaceScattering()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologySurfaceScatteringHelper_LerpSurfaceScattering_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologySurfaceScatteringHelper::execLerpSurfaceScattering)
{
	P_GET_STRUCT_REF(FOceanologySurfaceScattering,Z_Param_Out_A);
	P_GET_STRUCT_REF(FOceanologySurfaceScattering,Z_Param_Out_B);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Alpha);
	P_GET_STRUCT_REF(FOceanologySurfaceScattering,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOceanologySurfaceScatteringHelper::LerpSurfaceScattering(Z_Param_Out_A,Z_Param_Out_B,Z_Param_Alpha,Z_Param_Out_OutResult);
	P_NATIVE_END;
}
// End Class UOceanologySurfaceScatteringHelper Function LerpSurfaceScattering

// Begin Class UOceanologySurfaceScatteringHelper Function SetMaterialParameters
struct Z_Construct_UFunction_UOceanologySurfaceScatteringHelper_SetMaterialParameters_Statics
{
	struct OceanologySurfaceScatteringHelper_eventSetMaterialParameters_Parms
	{
		UMaterialInstanceDynamic* MID;
		FOceanologySurfaceScattering SurfaceScattering;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SurfaceScattering" },
		{ "ModuleRelativePath", "Public/Structs/OceanologySurfaceScattering.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceScattering_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SurfaceScattering;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOceanologySurfaceScatteringHelper_SetMaterialParameters_Statics::NewProp_MID = { "MID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologySurfaceScatteringHelper_eventSetMaterialParameters_Parms, MID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologySurfaceScatteringHelper_SetMaterialParameters_Statics::NewProp_SurfaceScattering = { "SurfaceScattering", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologySurfaceScatteringHelper_eventSetMaterialParameters_Parms, SurfaceScattering), Z_Construct_UScriptStruct_FOceanologySurfaceScattering, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SurfaceScattering_MetaData), NewProp_SurfaceScattering_MetaData) }; // 2426833340
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanologySurfaceScatteringHelper_SetMaterialParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologySurfaceScatteringHelper_SetMaterialParameters_Statics::NewProp_MID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologySurfaceScatteringHelper_SetMaterialParameters_Statics::NewProp_SurfaceScattering,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologySurfaceScatteringHelper_SetMaterialParameters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologySurfaceScatteringHelper_SetMaterialParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologySurfaceScatteringHelper, nullptr, "SetMaterialParameters", nullptr, nullptr, Z_Construct_UFunction_UOceanologySurfaceScatteringHelper_SetMaterialParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologySurfaceScatteringHelper_SetMaterialParameters_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOceanologySurfaceScatteringHelper_SetMaterialParameters_Statics::OceanologySurfaceScatteringHelper_eventSetMaterialParameters_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologySurfaceScatteringHelper_SetMaterialParameters_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologySurfaceScatteringHelper_SetMaterialParameters_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOceanologySurfaceScatteringHelper_SetMaterialParameters_Statics::OceanologySurfaceScatteringHelper_eventSetMaterialParameters_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanologySurfaceScatteringHelper_SetMaterialParameters()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologySurfaceScatteringHelper_SetMaterialParameters_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologySurfaceScatteringHelper::execSetMaterialParameters)
{
	P_GET_OBJECT(UMaterialInstanceDynamic,Z_Param_MID);
	P_GET_STRUCT_REF(FOceanologySurfaceScattering,Z_Param_Out_SurfaceScattering);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOceanologySurfaceScatteringHelper::SetMaterialParameters(Z_Param_MID,Z_Param_Out_SurfaceScattering);
	P_NATIVE_END;
}
// End Class UOceanologySurfaceScatteringHelper Function SetMaterialParameters

// Begin Class UOceanologySurfaceScatteringHelper
void UOceanologySurfaceScatteringHelper::StaticRegisterNativesUOceanologySurfaceScatteringHelper()
{
	UClass* Class = UOceanologySurfaceScatteringHelper::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "LerpSurfaceScattering", &UOceanologySurfaceScatteringHelper::execLerpSurfaceScattering },
		{ "SetMaterialParameters", &UOceanologySurfaceScatteringHelper::execSetMaterialParameters },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOceanologySurfaceScatteringHelper);
UClass* Z_Construct_UClass_UOceanologySurfaceScatteringHelper_NoRegister()
{
	return UOceanologySurfaceScatteringHelper::StaticClass();
}
struct Z_Construct_UClass_UOceanologySurfaceScatteringHelper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * This is an auto-generated class from Material Parameters via AOceanologyMaterialToStructConverter. DO NOT EDIT BY HAND EVER! Your changes will be lost. Edit the material itself instead!\n * Generated at: 10 March 2024\n **/" },
#endif
		{ "IncludePath", "Structs/OceanologySurfaceScattering.h" },
		{ "ModuleRelativePath", "Public/Structs/OceanologySurfaceScattering.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is an auto-generated class from Material Parameters via AOceanologyMaterialToStructConverter. DO NOT EDIT BY HAND EVER! Your changes will be lost. Edit the material itself instead!\nGenerated at: 10 March 2024" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOceanologySurfaceScatteringHelper_LerpSurfaceScattering, "LerpSurfaceScattering" }, // 4161690114
		{ &Z_Construct_UFunction_UOceanologySurfaceScatteringHelper_SetMaterialParameters, "SetMaterialParameters" }, // 3458779932
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOceanologySurfaceScatteringHelper>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOceanologySurfaceScatteringHelper_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Oceanology_Plugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOceanologySurfaceScatteringHelper_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOceanologySurfaceScatteringHelper_Statics::ClassParams = {
	&UOceanologySurfaceScatteringHelper::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOceanologySurfaceScatteringHelper_Statics::Class_MetaDataParams), Z_Construct_UClass_UOceanologySurfaceScatteringHelper_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOceanologySurfaceScatteringHelper()
{
	if (!Z_Registration_Info_UClass_UOceanologySurfaceScatteringHelper.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOceanologySurfaceScatteringHelper.OuterSingleton, Z_Construct_UClass_UOceanologySurfaceScatteringHelper_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOceanologySurfaceScatteringHelper.OuterSingleton;
}
template<> OCEANOLOGY_PLUGIN_API UClass* StaticClass<UOceanologySurfaceScatteringHelper>()
{
	return UOceanologySurfaceScatteringHelper::StaticClass();
}
UOceanologySurfaceScatteringHelper::UOceanologySurfaceScatteringHelper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOceanologySurfaceScatteringHelper);
UOceanologySurfaceScatteringHelper::~UOceanologySurfaceScatteringHelper() {}
// End Class UOceanologySurfaceScatteringHelper

// Begin Registration
struct Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologySurfaceScattering_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOceanologySurfaceScattering::StaticStruct, Z_Construct_UScriptStruct_FOceanologySurfaceScattering_Statics::NewStructOps, TEXT("OceanologySurfaceScattering"), &Z_Registration_Info_UScriptStruct_OceanologySurfaceScattering, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOceanologySurfaceScattering), 2426833340U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOceanologySurfaceScatteringHelper, UOceanologySurfaceScatteringHelper::StaticClass, TEXT("UOceanologySurfaceScatteringHelper"), &Z_Registration_Info_UClass_UOceanologySurfaceScatteringHelper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOceanologySurfaceScatteringHelper), 338326072U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologySurfaceScattering_h_3695940066(TEXT("/Script/Oceanology_Plugin"),
	Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologySurfaceScattering_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologySurfaceScattering_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologySurfaceScattering_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologySurfaceScattering_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
