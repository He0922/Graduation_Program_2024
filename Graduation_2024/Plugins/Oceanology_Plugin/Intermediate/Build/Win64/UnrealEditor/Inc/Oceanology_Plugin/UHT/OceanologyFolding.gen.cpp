// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Oceanology_Plugin/Public/Structs/OceanologyFolding.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOceanologyFolding() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_UOceanologyFoldingHelper();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_UOceanologyFoldingHelper_NoRegister();
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyFolding();
UPackage* Z_Construct_UPackage__Script_Oceanology_Plugin();
// End Cross Module References

// Begin ScriptStruct FOceanologyFolding
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OceanologyFolding;
class UScriptStruct* FOceanologyFolding::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OceanologyFolding.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OceanologyFolding.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOceanologyFolding, (UObject*)Z_Construct_UPackage__Script_Oceanology_Plugin(), TEXT("OceanologyFolding"));
	}
	return Z_Registration_Info_UScriptStruct_OceanologyFolding.OuterSingleton;
}
template<> OCEANOLOGY_PLUGIN_API UScriptStruct* StaticStruct<FOceanologyFolding>()
{
	return FOceanologyFolding::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOceanologyFolding_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * This is an auto-generated class from Material Parameters via AOceanologyMaterialToStructConverter. DO NOT EDIT BY HAND EVER! Your changes will be lost. Edit the material itself instead!\n * Generated at: 10 March 2024\n **/" },
#endif
		{ "ModuleRelativePath", "Public/Structs/OceanologyFolding.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is an auto-generated class from Material Parameters via AOceanologyMaterialToStructConverter. DO NOT EDIT BY HAND EVER! Your changes will be lost. Edit the material itself instead!\nGenerated at: 10 March 2024" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FoamBoost_MetaData[] = {
		{ "Category", "Folding" },
		{ "DisplayName", "FoamBoost" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyFolding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FoamContrast_MetaData[] = {
		{ "Category", "Folding" },
		{ "DisplayName", "FoamContrast" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyFolding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FoamDepthMin_MetaData[] = {
		{ "Category", "Folding" },
		{ "DisplayName", "FoamDepthMin" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyFolding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FoamOpacity_MetaData[] = {
		{ "Category", "Folding" },
		{ "DisplayName", "FoamOpacity" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyFolding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FoamPower_MetaData[] = {
		{ "Category", "Folding" },
		{ "DisplayName", "FoamPower" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyFolding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FoamRoughness_MetaData[] = {
		{ "Category", "Folding" },
		{ "DisplayName", "FoamRoughness" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyFolding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FoamScatterBias_MetaData[] = {
		{ "Category", "Folding" },
		{ "DisplayName", "FoamScatterBias" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyFolding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FoamTextureBlendMin_MetaData[] = {
		{ "Category", "Folding" },
		{ "DisplayName", "FoamTextureBlendMin" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyFolding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FoamTextureBlendWidth_MetaData[] = {
		{ "Category", "Folding" },
		{ "DisplayName", "FoamTextureBlendWidth" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyFolding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightBias_MetaData[] = {
		{ "Category", "Folding" },
		{ "DisplayName", "HeightBias" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyFolding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScatteredLuminance_MetaData[] = {
		{ "Category", "Folding" },
		{ "DisplayName", "ScatteredLuminance" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyFolding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmoothMax_MetaData[] = {
		{ "Category", "Folding" },
		{ "DisplayName", "SmoothMax" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyFolding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmoothMin_MetaData[] = {
		{ "Category", "Folding" },
		{ "DisplayName", "SmoothMin" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyFolding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FoamEmissiveHigh_MetaData[] = {
		{ "Category", "Folding" },
		{ "DisplayName", "FoamEmissiveHigh" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyFolding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FoamEmissiveLow_MetaData[] = {
		{ "Category", "Folding" },
		{ "DisplayName", "FoamEmissiveLow" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyFolding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FoamScattering_MetaData[] = {
		{ "Category", "Folding" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Determines the color of the foam. */" },
#endif
		{ "DisplayName", "FoamScattering" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyFolding.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Determines the color of the foam." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_FoamBoost;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_FoamContrast;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_FoamDepthMin;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_FoamOpacity;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_FoamPower;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_FoamRoughness;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_FoamScatterBias;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_FoamTextureBlendMin;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_FoamTextureBlendWidth;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_HeightBias;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ScatteredLuminance;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_SmoothMax;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_SmoothMin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FoamEmissiveHigh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FoamEmissiveLow;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FoamScattering;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOceanologyFolding>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyFolding_Statics::NewProp_FoamBoost = { "FoamBoost", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyFolding, FoamBoost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FoamBoost_MetaData), NewProp_FoamBoost_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyFolding_Statics::NewProp_FoamContrast = { "FoamContrast", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyFolding, FoamContrast), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FoamContrast_MetaData), NewProp_FoamContrast_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyFolding_Statics::NewProp_FoamDepthMin = { "FoamDepthMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyFolding, FoamDepthMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FoamDepthMin_MetaData), NewProp_FoamDepthMin_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyFolding_Statics::NewProp_FoamOpacity = { "FoamOpacity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyFolding, FoamOpacity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FoamOpacity_MetaData), NewProp_FoamOpacity_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyFolding_Statics::NewProp_FoamPower = { "FoamPower", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyFolding, FoamPower), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FoamPower_MetaData), NewProp_FoamPower_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyFolding_Statics::NewProp_FoamRoughness = { "FoamRoughness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyFolding, FoamRoughness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FoamRoughness_MetaData), NewProp_FoamRoughness_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyFolding_Statics::NewProp_FoamScatterBias = { "FoamScatterBias", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyFolding, FoamScatterBias), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FoamScatterBias_MetaData), NewProp_FoamScatterBias_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyFolding_Statics::NewProp_FoamTextureBlendMin = { "FoamTextureBlendMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyFolding, FoamTextureBlendMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FoamTextureBlendMin_MetaData), NewProp_FoamTextureBlendMin_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyFolding_Statics::NewProp_FoamTextureBlendWidth = { "FoamTextureBlendWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyFolding, FoamTextureBlendWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FoamTextureBlendWidth_MetaData), NewProp_FoamTextureBlendWidth_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyFolding_Statics::NewProp_HeightBias = { "HeightBias", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyFolding, HeightBias), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightBias_MetaData), NewProp_HeightBias_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyFolding_Statics::NewProp_ScatteredLuminance = { "ScatteredLuminance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyFolding, ScatteredLuminance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScatteredLuminance_MetaData), NewProp_ScatteredLuminance_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyFolding_Statics::NewProp_SmoothMax = { "SmoothMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyFolding, SmoothMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmoothMax_MetaData), NewProp_SmoothMax_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyFolding_Statics::NewProp_SmoothMin = { "SmoothMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyFolding, SmoothMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmoothMin_MetaData), NewProp_SmoothMin_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOceanologyFolding_Statics::NewProp_FoamEmissiveHigh = { "FoamEmissiveHigh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyFolding, FoamEmissiveHigh), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FoamEmissiveHigh_MetaData), NewProp_FoamEmissiveHigh_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOceanologyFolding_Statics::NewProp_FoamEmissiveLow = { "FoamEmissiveLow", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyFolding, FoamEmissiveLow), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FoamEmissiveLow_MetaData), NewProp_FoamEmissiveLow_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOceanologyFolding_Statics::NewProp_FoamScattering = { "FoamScattering", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyFolding, FoamScattering), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FoamScattering_MetaData), NewProp_FoamScattering_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOceanologyFolding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyFolding_Statics::NewProp_FoamBoost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyFolding_Statics::NewProp_FoamContrast,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyFolding_Statics::NewProp_FoamDepthMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyFolding_Statics::NewProp_FoamOpacity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyFolding_Statics::NewProp_FoamPower,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyFolding_Statics::NewProp_FoamRoughness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyFolding_Statics::NewProp_FoamScatterBias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyFolding_Statics::NewProp_FoamTextureBlendMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyFolding_Statics::NewProp_FoamTextureBlendWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyFolding_Statics::NewProp_HeightBias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyFolding_Statics::NewProp_ScatteredLuminance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyFolding_Statics::NewProp_SmoothMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyFolding_Statics::NewProp_SmoothMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyFolding_Statics::NewProp_FoamEmissiveHigh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyFolding_Statics::NewProp_FoamEmissiveLow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyFolding_Statics::NewProp_FoamScattering,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanologyFolding_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOceanologyFolding_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Oceanology_Plugin,
	nullptr,
	&NewStructOps,
	"OceanologyFolding",
	Z_Construct_UScriptStruct_FOceanologyFolding_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanologyFolding_Statics::PropPointers),
	sizeof(FOceanologyFolding),
	alignof(FOceanologyFolding),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanologyFolding_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOceanologyFolding_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOceanologyFolding()
{
	if (!Z_Registration_Info_UScriptStruct_OceanologyFolding.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OceanologyFolding.InnerSingleton, Z_Construct_UScriptStruct_FOceanologyFolding_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OceanologyFolding.InnerSingleton;
}
// End ScriptStruct FOceanologyFolding

// Begin Class UOceanologyFoldingHelper Function LerpFolding
struct Z_Construct_UFunction_UOceanologyFoldingHelper_LerpFolding_Statics
{
	struct OceanologyFoldingHelper_eventLerpFolding_Parms
	{
		FOceanologyFolding A;
		FOceanologyFolding B;
		double Alpha;
		FOceanologyFolding OutResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Folding" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyFolding.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyFoldingHelper_LerpFolding_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyFoldingHelper_eventLerpFolding_Parms, A), Z_Construct_UScriptStruct_FOceanologyFolding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 1188334788
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyFoldingHelper_LerpFolding_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyFoldingHelper_eventLerpFolding_Parms, B), Z_Construct_UScriptStruct_FOceanologyFolding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) }; // 1188334788
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UOceanologyFoldingHelper_LerpFolding_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyFoldingHelper_eventLerpFolding_Parms, Alpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Alpha_MetaData), NewProp_Alpha_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyFoldingHelper_LerpFolding_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyFoldingHelper_eventLerpFolding_Parms, OutResult), Z_Construct_UScriptStruct_FOceanologyFolding, METADATA_PARAMS(0, nullptr) }; // 1188334788
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanologyFoldingHelper_LerpFolding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyFoldingHelper_LerpFolding_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyFoldingHelper_LerpFolding_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyFoldingHelper_LerpFolding_Statics::NewProp_Alpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyFoldingHelper_LerpFolding_Statics::NewProp_OutResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyFoldingHelper_LerpFolding_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologyFoldingHelper_LerpFolding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologyFoldingHelper, nullptr, "LerpFolding", nullptr, nullptr, Z_Construct_UFunction_UOceanologyFoldingHelper_LerpFolding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyFoldingHelper_LerpFolding_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOceanologyFoldingHelper_LerpFolding_Statics::OceanologyFoldingHelper_eventLerpFolding_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyFoldingHelper_LerpFolding_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologyFoldingHelper_LerpFolding_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOceanologyFoldingHelper_LerpFolding_Statics::OceanologyFoldingHelper_eventLerpFolding_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanologyFoldingHelper_LerpFolding()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologyFoldingHelper_LerpFolding_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologyFoldingHelper::execLerpFolding)
{
	P_GET_STRUCT_REF(FOceanologyFolding,Z_Param_Out_A);
	P_GET_STRUCT_REF(FOceanologyFolding,Z_Param_Out_B);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Alpha);
	P_GET_STRUCT_REF(FOceanologyFolding,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOceanologyFoldingHelper::LerpFolding(Z_Param_Out_A,Z_Param_Out_B,Z_Param_Alpha,Z_Param_Out_OutResult);
	P_NATIVE_END;
}
// End Class UOceanologyFoldingHelper Function LerpFolding

// Begin Class UOceanologyFoldingHelper Function SetMaterialParameters
struct Z_Construct_UFunction_UOceanologyFoldingHelper_SetMaterialParameters_Statics
{
	struct OceanologyFoldingHelper_eventSetMaterialParameters_Parms
	{
		UMaterialInstanceDynamic* MID;
		FOceanologyFolding Folding;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Folding" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyFolding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Folding_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Folding;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOceanologyFoldingHelper_SetMaterialParameters_Statics::NewProp_MID = { "MID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyFoldingHelper_eventSetMaterialParameters_Parms, MID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyFoldingHelper_SetMaterialParameters_Statics::NewProp_Folding = { "Folding", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyFoldingHelper_eventSetMaterialParameters_Parms, Folding), Z_Construct_UScriptStruct_FOceanologyFolding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Folding_MetaData), NewProp_Folding_MetaData) }; // 1188334788
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanologyFoldingHelper_SetMaterialParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyFoldingHelper_SetMaterialParameters_Statics::NewProp_MID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyFoldingHelper_SetMaterialParameters_Statics::NewProp_Folding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyFoldingHelper_SetMaterialParameters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologyFoldingHelper_SetMaterialParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologyFoldingHelper, nullptr, "SetMaterialParameters", nullptr, nullptr, Z_Construct_UFunction_UOceanologyFoldingHelper_SetMaterialParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyFoldingHelper_SetMaterialParameters_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOceanologyFoldingHelper_SetMaterialParameters_Statics::OceanologyFoldingHelper_eventSetMaterialParameters_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyFoldingHelper_SetMaterialParameters_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologyFoldingHelper_SetMaterialParameters_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOceanologyFoldingHelper_SetMaterialParameters_Statics::OceanologyFoldingHelper_eventSetMaterialParameters_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanologyFoldingHelper_SetMaterialParameters()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologyFoldingHelper_SetMaterialParameters_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologyFoldingHelper::execSetMaterialParameters)
{
	P_GET_OBJECT(UMaterialInstanceDynamic,Z_Param_MID);
	P_GET_STRUCT_REF(FOceanologyFolding,Z_Param_Out_Folding);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOceanologyFoldingHelper::SetMaterialParameters(Z_Param_MID,Z_Param_Out_Folding);
	P_NATIVE_END;
}
// End Class UOceanologyFoldingHelper Function SetMaterialParameters

// Begin Class UOceanologyFoldingHelper
void UOceanologyFoldingHelper::StaticRegisterNativesUOceanologyFoldingHelper()
{
	UClass* Class = UOceanologyFoldingHelper::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "LerpFolding", &UOceanologyFoldingHelper::execLerpFolding },
		{ "SetMaterialParameters", &UOceanologyFoldingHelper::execSetMaterialParameters },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOceanologyFoldingHelper);
UClass* Z_Construct_UClass_UOceanologyFoldingHelper_NoRegister()
{
	return UOceanologyFoldingHelper::StaticClass();
}
struct Z_Construct_UClass_UOceanologyFoldingHelper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * This is an auto-generated class from Material Parameters via AOceanologyMaterialToStructConverter. DO NOT EDIT BY HAND EVER! Your changes will be lost. Edit the material itself instead!\n * Generated at: 10 March 2024\n **/" },
#endif
		{ "IncludePath", "Structs/OceanologyFolding.h" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyFolding.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is an auto-generated class from Material Parameters via AOceanologyMaterialToStructConverter. DO NOT EDIT BY HAND EVER! Your changes will be lost. Edit the material itself instead!\nGenerated at: 10 March 2024" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOceanologyFoldingHelper_LerpFolding, "LerpFolding" }, // 4158658601
		{ &Z_Construct_UFunction_UOceanologyFoldingHelper_SetMaterialParameters, "SetMaterialParameters" }, // 2542444941
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOceanologyFoldingHelper>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOceanologyFoldingHelper_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Oceanology_Plugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOceanologyFoldingHelper_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOceanologyFoldingHelper_Statics::ClassParams = {
	&UOceanologyFoldingHelper::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOceanologyFoldingHelper_Statics::Class_MetaDataParams), Z_Construct_UClass_UOceanologyFoldingHelper_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOceanologyFoldingHelper()
{
	if (!Z_Registration_Info_UClass_UOceanologyFoldingHelper.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOceanologyFoldingHelper.OuterSingleton, Z_Construct_UClass_UOceanologyFoldingHelper_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOceanologyFoldingHelper.OuterSingleton;
}
template<> OCEANOLOGY_PLUGIN_API UClass* StaticClass<UOceanologyFoldingHelper>()
{
	return UOceanologyFoldingHelper::StaticClass();
}
UOceanologyFoldingHelper::UOceanologyFoldingHelper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOceanologyFoldingHelper);
UOceanologyFoldingHelper::~UOceanologyFoldingHelper() {}
// End Class UOceanologyFoldingHelper

// Begin Registration
struct Z_CompiledInDeferFile_FID_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyFolding_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOceanologyFolding::StaticStruct, Z_Construct_UScriptStruct_FOceanologyFolding_Statics::NewStructOps, TEXT("OceanologyFolding"), &Z_Registration_Info_UScriptStruct_OceanologyFolding, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOceanologyFolding), 1188334788U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOceanologyFoldingHelper, UOceanologyFoldingHelper::StaticClass, TEXT("UOceanologyFoldingHelper"), &Z_Registration_Info_UClass_UOceanologyFoldingHelper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOceanologyFoldingHelper), 3190101085U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyFolding_h_2490815998(TEXT("/Script/Oceanology_Plugin"),
	Z_CompiledInDeferFile_FID_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyFolding_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyFolding_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyFolding_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyFolding_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
