// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Oceanology_Plugin/Public/Structs/OceanologyWetness.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOceanologyWetness() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_UOceanologyWetnessHelper();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_UOceanologyWetnessHelper_NoRegister();
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyWetness();
UPackage* Z_Construct_UPackage__Script_Oceanology_Plugin();
// End Cross Module References

// Begin ScriptStruct FOceanologyWetness
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OceanologyWetness;
class UScriptStruct* FOceanologyWetness::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OceanologyWetness.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OceanologyWetness.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOceanologyWetness, (UObject*)Z_Construct_UPackage__Script_Oceanology_Plugin(), TEXT("OceanologyWetness"));
	}
	return Z_Registration_Info_UScriptStruct_OceanologyWetness.OuterSingleton;
}
template<> OCEANOLOGY_PLUGIN_API UScriptStruct* StaticStruct<FOceanologyWetness>()
{
	return FOceanologyWetness::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOceanologyWetness_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * This is an auto-generated class from Material Parameters via AOceanologyMaterialToStructConverter. DO NOT EDIT BY HAND EVER! Your changes will be lost. Edit the material itself instead!\n * Generated at: 10 March 2024\n **/" },
#endif
		{ "ModuleRelativePath", "Public/Structs/OceanologyWetness.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is an auto-generated class from Material Parameters via AOceanologyMaterialToStructConverter. DO NOT EDIT BY HAND EVER! Your changes will be lost. Edit the material itself instead!\nGenerated at: 10 March 2024" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BandOpacity_MetaData[] = {
		{ "Category", "Wetness" },
		{ "ClampMax", "20.0" },
		{ "DisplayName", "Band Opacity" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyWetness.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoistureMetallic_MetaData[] = {
		{ "Category", "Wetness" },
		{ "DisplayName", "MoistureMetallic" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyWetness.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoistureRoughness_MetaData[] = {
		{ "Category", "Wetness" },
		{ "DisplayName", "MoistureRoughness" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyWetness.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WetHardness_MetaData[] = {
		{ "Category", "Wetness" },
		{ "DisplayName", "Wet Hardness" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyWetness.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WetLocation_MetaData[] = {
		{ "Category", "Wetness" },
		{ "DisplayName", "Wet Location" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyWetness.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WetRadius_MetaData[] = {
		{ "Category", "Wetness" },
		{ "DisplayName", "Wet Radius" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyWetness.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_BandOpacity;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MoistureMetallic;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MoistureRoughness;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_WetHardness;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_WetLocation;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_WetRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOceanologyWetness>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyWetness_Statics::NewProp_BandOpacity = { "BandOpacity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyWetness, BandOpacity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BandOpacity_MetaData), NewProp_BandOpacity_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyWetness_Statics::NewProp_MoistureMetallic = { "MoistureMetallic", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyWetness, MoistureMetallic), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoistureMetallic_MetaData), NewProp_MoistureMetallic_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyWetness_Statics::NewProp_MoistureRoughness = { "MoistureRoughness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyWetness, MoistureRoughness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoistureRoughness_MetaData), NewProp_MoistureRoughness_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyWetness_Statics::NewProp_WetHardness = { "WetHardness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyWetness, WetHardness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WetHardness_MetaData), NewProp_WetHardness_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyWetness_Statics::NewProp_WetLocation = { "WetLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyWetness, WetLocation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WetLocation_MetaData), NewProp_WetLocation_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyWetness_Statics::NewProp_WetRadius = { "WetRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyWetness, WetRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WetRadius_MetaData), NewProp_WetRadius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOceanologyWetness_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyWetness_Statics::NewProp_BandOpacity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyWetness_Statics::NewProp_MoistureMetallic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyWetness_Statics::NewProp_MoistureRoughness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyWetness_Statics::NewProp_WetHardness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyWetness_Statics::NewProp_WetLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyWetness_Statics::NewProp_WetRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanologyWetness_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOceanologyWetness_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Oceanology_Plugin,
	nullptr,
	&NewStructOps,
	"OceanologyWetness",
	Z_Construct_UScriptStruct_FOceanologyWetness_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanologyWetness_Statics::PropPointers),
	sizeof(FOceanologyWetness),
	alignof(FOceanologyWetness),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanologyWetness_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOceanologyWetness_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOceanologyWetness()
{
	if (!Z_Registration_Info_UScriptStruct_OceanologyWetness.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OceanologyWetness.InnerSingleton, Z_Construct_UScriptStruct_FOceanologyWetness_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OceanologyWetness.InnerSingleton;
}
// End ScriptStruct FOceanologyWetness

// Begin Class UOceanologyWetnessHelper Function LerpWetness
struct Z_Construct_UFunction_UOceanologyWetnessHelper_LerpWetness_Statics
{
	struct OceanologyWetnessHelper_eventLerpWetness_Parms
	{
		FOceanologyWetness A;
		FOceanologyWetness B;
		double Alpha;
		FOceanologyWetness OutResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Wetness" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyWetness.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyWetnessHelper_LerpWetness_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyWetnessHelper_eventLerpWetness_Parms, A), Z_Construct_UScriptStruct_FOceanologyWetness, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 2569763290
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyWetnessHelper_LerpWetness_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyWetnessHelper_eventLerpWetness_Parms, B), Z_Construct_UScriptStruct_FOceanologyWetness, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) }; // 2569763290
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UOceanologyWetnessHelper_LerpWetness_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyWetnessHelper_eventLerpWetness_Parms, Alpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Alpha_MetaData), NewProp_Alpha_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyWetnessHelper_LerpWetness_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyWetnessHelper_eventLerpWetness_Parms, OutResult), Z_Construct_UScriptStruct_FOceanologyWetness, METADATA_PARAMS(0, nullptr) }; // 2569763290
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanologyWetnessHelper_LerpWetness_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyWetnessHelper_LerpWetness_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyWetnessHelper_LerpWetness_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyWetnessHelper_LerpWetness_Statics::NewProp_Alpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyWetnessHelper_LerpWetness_Statics::NewProp_OutResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyWetnessHelper_LerpWetness_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologyWetnessHelper_LerpWetness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologyWetnessHelper, nullptr, "LerpWetness", nullptr, nullptr, Z_Construct_UFunction_UOceanologyWetnessHelper_LerpWetness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyWetnessHelper_LerpWetness_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOceanologyWetnessHelper_LerpWetness_Statics::OceanologyWetnessHelper_eventLerpWetness_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyWetnessHelper_LerpWetness_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologyWetnessHelper_LerpWetness_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOceanologyWetnessHelper_LerpWetness_Statics::OceanologyWetnessHelper_eventLerpWetness_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanologyWetnessHelper_LerpWetness()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologyWetnessHelper_LerpWetness_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologyWetnessHelper::execLerpWetness)
{
	P_GET_STRUCT_REF(FOceanologyWetness,Z_Param_Out_A);
	P_GET_STRUCT_REF(FOceanologyWetness,Z_Param_Out_B);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Alpha);
	P_GET_STRUCT_REF(FOceanologyWetness,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOceanologyWetnessHelper::LerpWetness(Z_Param_Out_A,Z_Param_Out_B,Z_Param_Alpha,Z_Param_Out_OutResult);
	P_NATIVE_END;
}
// End Class UOceanologyWetnessHelper Function LerpWetness

// Begin Class UOceanologyWetnessHelper Function SetMaterialParameters
struct Z_Construct_UFunction_UOceanologyWetnessHelper_SetMaterialParameters_Statics
{
	struct OceanologyWetnessHelper_eventSetMaterialParameters_Parms
	{
		UMaterialInstanceDynamic* MID;
		FOceanologyWetness Wetness;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Wetness" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyWetness.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Wetness_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Wetness;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOceanologyWetnessHelper_SetMaterialParameters_Statics::NewProp_MID = { "MID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyWetnessHelper_eventSetMaterialParameters_Parms, MID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyWetnessHelper_SetMaterialParameters_Statics::NewProp_Wetness = { "Wetness", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyWetnessHelper_eventSetMaterialParameters_Parms, Wetness), Z_Construct_UScriptStruct_FOceanologyWetness, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Wetness_MetaData), NewProp_Wetness_MetaData) }; // 2569763290
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanologyWetnessHelper_SetMaterialParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyWetnessHelper_SetMaterialParameters_Statics::NewProp_MID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyWetnessHelper_SetMaterialParameters_Statics::NewProp_Wetness,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyWetnessHelper_SetMaterialParameters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologyWetnessHelper_SetMaterialParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologyWetnessHelper, nullptr, "SetMaterialParameters", nullptr, nullptr, Z_Construct_UFunction_UOceanologyWetnessHelper_SetMaterialParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyWetnessHelper_SetMaterialParameters_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOceanologyWetnessHelper_SetMaterialParameters_Statics::OceanologyWetnessHelper_eventSetMaterialParameters_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyWetnessHelper_SetMaterialParameters_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologyWetnessHelper_SetMaterialParameters_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOceanologyWetnessHelper_SetMaterialParameters_Statics::OceanologyWetnessHelper_eventSetMaterialParameters_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanologyWetnessHelper_SetMaterialParameters()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologyWetnessHelper_SetMaterialParameters_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologyWetnessHelper::execSetMaterialParameters)
{
	P_GET_OBJECT(UMaterialInstanceDynamic,Z_Param_MID);
	P_GET_STRUCT_REF(FOceanologyWetness,Z_Param_Out_Wetness);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOceanologyWetnessHelper::SetMaterialParameters(Z_Param_MID,Z_Param_Out_Wetness);
	P_NATIVE_END;
}
// End Class UOceanologyWetnessHelper Function SetMaterialParameters

// Begin Class UOceanologyWetnessHelper
void UOceanologyWetnessHelper::StaticRegisterNativesUOceanologyWetnessHelper()
{
	UClass* Class = UOceanologyWetnessHelper::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "LerpWetness", &UOceanologyWetnessHelper::execLerpWetness },
		{ "SetMaterialParameters", &UOceanologyWetnessHelper::execSetMaterialParameters },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOceanologyWetnessHelper);
UClass* Z_Construct_UClass_UOceanologyWetnessHelper_NoRegister()
{
	return UOceanologyWetnessHelper::StaticClass();
}
struct Z_Construct_UClass_UOceanologyWetnessHelper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * This is an auto-generated class from Material Parameters via AOceanologyMaterialToStructConverter. DO NOT EDIT BY HAND EVER! Your changes will be lost. Edit the material itself instead!\n * Generated at: 10 March 2024\n **/" },
#endif
		{ "IncludePath", "Structs/OceanologyWetness.h" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyWetness.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is an auto-generated class from Material Parameters via AOceanologyMaterialToStructConverter. DO NOT EDIT BY HAND EVER! Your changes will be lost. Edit the material itself instead!\nGenerated at: 10 March 2024" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOceanologyWetnessHelper_LerpWetness, "LerpWetness" }, // 1763502183
		{ &Z_Construct_UFunction_UOceanologyWetnessHelper_SetMaterialParameters, "SetMaterialParameters" }, // 1771476045
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOceanologyWetnessHelper>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOceanologyWetnessHelper_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Oceanology_Plugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOceanologyWetnessHelper_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOceanologyWetnessHelper_Statics::ClassParams = {
	&UOceanologyWetnessHelper::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOceanologyWetnessHelper_Statics::Class_MetaDataParams), Z_Construct_UClass_UOceanologyWetnessHelper_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOceanologyWetnessHelper()
{
	if (!Z_Registration_Info_UClass_UOceanologyWetnessHelper.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOceanologyWetnessHelper.OuterSingleton, Z_Construct_UClass_UOceanologyWetnessHelper_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOceanologyWetnessHelper.OuterSingleton;
}
template<> OCEANOLOGY_PLUGIN_API UClass* StaticClass<UOceanologyWetnessHelper>()
{
	return UOceanologyWetnessHelper::StaticClass();
}
UOceanologyWetnessHelper::UOceanologyWetnessHelper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOceanologyWetnessHelper);
UOceanologyWetnessHelper::~UOceanologyWetnessHelper() {}
// End Class UOceanologyWetnessHelper

// Begin Registration
struct Z_CompiledInDeferFile_FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyWetness_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOceanologyWetness::StaticStruct, Z_Construct_UScriptStruct_FOceanologyWetness_Statics::NewStructOps, TEXT("OceanologyWetness"), &Z_Registration_Info_UScriptStruct_OceanologyWetness, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOceanologyWetness), 2569763290U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOceanologyWetnessHelper, UOceanologyWetnessHelper::StaticClass, TEXT("UOceanologyWetnessHelper"), &Z_Registration_Info_UClass_UOceanologyWetnessHelper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOceanologyWetnessHelper), 3543510690U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyWetness_h_1292406429(TEXT("/Script/Oceanology_Plugin"),
	Z_CompiledInDeferFile_FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyWetness_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyWetness_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyWetness_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyWetness_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
