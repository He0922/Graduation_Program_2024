// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Oceanology_Plugin/Public/Structs/OceanologyCaustics.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOceanologyCaustics() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_UOceanologyCausticsHelper();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_UOceanologyCausticsHelper_NoRegister();
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyCaustics();
UPackage* Z_Construct_UPackage__Script_Oceanology_Plugin();
// End Cross Module References

// Begin ScriptStruct FOceanologyCaustics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OceanologyCaustics;
class UScriptStruct* FOceanologyCaustics::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OceanologyCaustics.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OceanologyCaustics.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOceanologyCaustics, (UObject*)Z_Construct_UPackage__Script_Oceanology_Plugin(), TEXT("OceanologyCaustics"));
	}
	return Z_Registration_Info_UScriptStruct_OceanologyCaustics.OuterSingleton;
}
template<> OCEANOLOGY_PLUGIN_API UScriptStruct* StaticStruct<FOceanologyCaustics>()
{
	return FOceanologyCaustics::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOceanologyCaustics_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * This is an auto-generated class from Material Parameters via AOceanologyMaterialToStructConverter. DO NOT EDIT BY HAND EVER! Your changes will be lost. Edit the material itself instead!\n * Generated at: 10 March 2024\n **/" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyCaustics.h" },
		{ "ToolTip", "This is an auto-generated class from Material Parameters via AOceanologyMaterialToStructConverter. DO NOT EDIT BY HAND EVER! Your changes will be lost. Edit the material itself instead!\nGenerated at: 10 March 2024" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CausticsBrightness_MetaData[] = {
		{ "Category", "Caustics" },
		{ "DisplayName", "CausticsBrightness" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyCaustics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CausticsFadeInDistance_MetaData[] = {
		{ "Category", "Caustics" },
		{ "DisplayName", "CausticsFadeInDistance" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyCaustics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CausticsScale_MetaData[] = {
		{ "Category", "Caustics" },
		{ "DisplayName", "CausticsScale" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyCaustics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FadeDistance_MetaData[] = {
		{ "Category", "Caustics" },
		{ "DisplayName", "FadeDistance" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyCaustics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightParallax_MetaData[] = {
		{ "Category", "Caustics" },
		{ "DisplayName", "LightParallax" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyCaustics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MultiplyRefraction_MetaData[] = {
		{ "Category", "Caustics" },
		{ "DisplayName", "MultiplyRefraction" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyCaustics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_T_Caustics_MetaData[] = {
		{ "Category", "Caustics" },
		{ "DisplayName", "T_Caustics" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyCaustics.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_CausticsBrightness;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_CausticsFadeInDistance;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_CausticsScale;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_FadeDistance;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_LightParallax;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MultiplyRefraction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_T_Caustics;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOceanologyCaustics>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyCaustics_Statics::NewProp_CausticsBrightness = { "CausticsBrightness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyCaustics, CausticsBrightness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CausticsBrightness_MetaData), NewProp_CausticsBrightness_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyCaustics_Statics::NewProp_CausticsFadeInDistance = { "CausticsFadeInDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyCaustics, CausticsFadeInDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CausticsFadeInDistance_MetaData), NewProp_CausticsFadeInDistance_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyCaustics_Statics::NewProp_CausticsScale = { "CausticsScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyCaustics, CausticsScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CausticsScale_MetaData), NewProp_CausticsScale_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyCaustics_Statics::NewProp_FadeDistance = { "FadeDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyCaustics, FadeDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FadeDistance_MetaData), NewProp_FadeDistance_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyCaustics_Statics::NewProp_LightParallax = { "LightParallax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyCaustics, LightParallax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightParallax_MetaData), NewProp_LightParallax_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyCaustics_Statics::NewProp_MultiplyRefraction = { "MultiplyRefraction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyCaustics, MultiplyRefraction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MultiplyRefraction_MetaData), NewProp_MultiplyRefraction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOceanologyCaustics_Statics::NewProp_T_Caustics = { "T_Caustics", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyCaustics, T_Caustics), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_T_Caustics_MetaData), NewProp_T_Caustics_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOceanologyCaustics_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyCaustics_Statics::NewProp_CausticsBrightness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyCaustics_Statics::NewProp_CausticsFadeInDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyCaustics_Statics::NewProp_CausticsScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyCaustics_Statics::NewProp_FadeDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyCaustics_Statics::NewProp_LightParallax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyCaustics_Statics::NewProp_MultiplyRefraction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyCaustics_Statics::NewProp_T_Caustics,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanologyCaustics_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOceanologyCaustics_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Oceanology_Plugin,
	nullptr,
	&NewStructOps,
	"OceanologyCaustics",
	Z_Construct_UScriptStruct_FOceanologyCaustics_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanologyCaustics_Statics::PropPointers),
	sizeof(FOceanologyCaustics),
	alignof(FOceanologyCaustics),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanologyCaustics_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOceanologyCaustics_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOceanologyCaustics()
{
	if (!Z_Registration_Info_UScriptStruct_OceanologyCaustics.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OceanologyCaustics.InnerSingleton, Z_Construct_UScriptStruct_FOceanologyCaustics_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OceanologyCaustics.InnerSingleton;
}
// End ScriptStruct FOceanologyCaustics

// Begin Class UOceanologyCausticsHelper Function LerpCaustics
struct Z_Construct_UFunction_UOceanologyCausticsHelper_LerpCaustics_Statics
{
	struct OceanologyCausticsHelper_eventLerpCaustics_Parms
	{
		FOceanologyCaustics A;
		FOceanologyCaustics B;
		double Alpha;
		FOceanologyCaustics OutResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Caustics" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyCaustics.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyCausticsHelper_LerpCaustics_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyCausticsHelper_eventLerpCaustics_Parms, A), Z_Construct_UScriptStruct_FOceanologyCaustics, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 2328268872
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyCausticsHelper_LerpCaustics_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyCausticsHelper_eventLerpCaustics_Parms, B), Z_Construct_UScriptStruct_FOceanologyCaustics, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) }; // 2328268872
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UOceanologyCausticsHelper_LerpCaustics_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyCausticsHelper_eventLerpCaustics_Parms, Alpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Alpha_MetaData), NewProp_Alpha_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyCausticsHelper_LerpCaustics_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyCausticsHelper_eventLerpCaustics_Parms, OutResult), Z_Construct_UScriptStruct_FOceanologyCaustics, METADATA_PARAMS(0, nullptr) }; // 2328268872
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanologyCausticsHelper_LerpCaustics_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyCausticsHelper_LerpCaustics_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyCausticsHelper_LerpCaustics_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyCausticsHelper_LerpCaustics_Statics::NewProp_Alpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyCausticsHelper_LerpCaustics_Statics::NewProp_OutResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyCausticsHelper_LerpCaustics_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologyCausticsHelper_LerpCaustics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologyCausticsHelper, nullptr, "LerpCaustics", nullptr, nullptr, Z_Construct_UFunction_UOceanologyCausticsHelper_LerpCaustics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyCausticsHelper_LerpCaustics_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOceanologyCausticsHelper_LerpCaustics_Statics::OceanologyCausticsHelper_eventLerpCaustics_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyCausticsHelper_LerpCaustics_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologyCausticsHelper_LerpCaustics_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOceanologyCausticsHelper_LerpCaustics_Statics::OceanologyCausticsHelper_eventLerpCaustics_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanologyCausticsHelper_LerpCaustics()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologyCausticsHelper_LerpCaustics_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologyCausticsHelper::execLerpCaustics)
{
	P_GET_STRUCT_REF(FOceanologyCaustics,Z_Param_Out_A);
	P_GET_STRUCT_REF(FOceanologyCaustics,Z_Param_Out_B);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Alpha);
	P_GET_STRUCT_REF(FOceanologyCaustics,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOceanologyCausticsHelper::LerpCaustics(Z_Param_Out_A,Z_Param_Out_B,Z_Param_Alpha,Z_Param_Out_OutResult);
	P_NATIVE_END;
}
// End Class UOceanologyCausticsHelper Function LerpCaustics

// Begin Class UOceanologyCausticsHelper Function SetMaterialParameters
struct Z_Construct_UFunction_UOceanologyCausticsHelper_SetMaterialParameters_Statics
{
	struct OceanologyCausticsHelper_eventSetMaterialParameters_Parms
	{
		UMaterialInstanceDynamic* MID;
		FOceanologyCaustics Caustics;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Caustics" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyCaustics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Caustics_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Caustics;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOceanologyCausticsHelper_SetMaterialParameters_Statics::NewProp_MID = { "MID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyCausticsHelper_eventSetMaterialParameters_Parms, MID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyCausticsHelper_SetMaterialParameters_Statics::NewProp_Caustics = { "Caustics", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyCausticsHelper_eventSetMaterialParameters_Parms, Caustics), Z_Construct_UScriptStruct_FOceanologyCaustics, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Caustics_MetaData), NewProp_Caustics_MetaData) }; // 2328268872
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanologyCausticsHelper_SetMaterialParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyCausticsHelper_SetMaterialParameters_Statics::NewProp_MID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyCausticsHelper_SetMaterialParameters_Statics::NewProp_Caustics,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyCausticsHelper_SetMaterialParameters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologyCausticsHelper_SetMaterialParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologyCausticsHelper, nullptr, "SetMaterialParameters", nullptr, nullptr, Z_Construct_UFunction_UOceanologyCausticsHelper_SetMaterialParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyCausticsHelper_SetMaterialParameters_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOceanologyCausticsHelper_SetMaterialParameters_Statics::OceanologyCausticsHelper_eventSetMaterialParameters_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyCausticsHelper_SetMaterialParameters_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologyCausticsHelper_SetMaterialParameters_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOceanologyCausticsHelper_SetMaterialParameters_Statics::OceanologyCausticsHelper_eventSetMaterialParameters_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanologyCausticsHelper_SetMaterialParameters()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologyCausticsHelper_SetMaterialParameters_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologyCausticsHelper::execSetMaterialParameters)
{
	P_GET_OBJECT(UMaterialInstanceDynamic,Z_Param_MID);
	P_GET_STRUCT_REF(FOceanologyCaustics,Z_Param_Out_Caustics);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOceanologyCausticsHelper::SetMaterialParameters(Z_Param_MID,Z_Param_Out_Caustics);
	P_NATIVE_END;
}
// End Class UOceanologyCausticsHelper Function SetMaterialParameters

// Begin Class UOceanologyCausticsHelper
void UOceanologyCausticsHelper::StaticRegisterNativesUOceanologyCausticsHelper()
{
	UClass* Class = UOceanologyCausticsHelper::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "LerpCaustics", &UOceanologyCausticsHelper::execLerpCaustics },
		{ "SetMaterialParameters", &UOceanologyCausticsHelper::execSetMaterialParameters },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOceanologyCausticsHelper);
UClass* Z_Construct_UClass_UOceanologyCausticsHelper_NoRegister()
{
	return UOceanologyCausticsHelper::StaticClass();
}
struct Z_Construct_UClass_UOceanologyCausticsHelper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * This is an auto-generated class from Material Parameters via AOceanologyMaterialToStructConverter. DO NOT EDIT BY HAND EVER! Your changes will be lost. Edit the material itself instead!\n * Generated at: 10 March 2024\n **/" },
		{ "IncludePath", "Structs/OceanologyCaustics.h" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyCaustics.h" },
		{ "ToolTip", "This is an auto-generated class from Material Parameters via AOceanologyMaterialToStructConverter. DO NOT EDIT BY HAND EVER! Your changes will be lost. Edit the material itself instead!\nGenerated at: 10 March 2024" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOceanologyCausticsHelper_LerpCaustics, "LerpCaustics" }, // 3753562657
		{ &Z_Construct_UFunction_UOceanologyCausticsHelper_SetMaterialParameters, "SetMaterialParameters" }, // 4099523414
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOceanologyCausticsHelper>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOceanologyCausticsHelper_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Oceanology_Plugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOceanologyCausticsHelper_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOceanologyCausticsHelper_Statics::ClassParams = {
	&UOceanologyCausticsHelper::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOceanologyCausticsHelper_Statics::Class_MetaDataParams), Z_Construct_UClass_UOceanologyCausticsHelper_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOceanologyCausticsHelper()
{
	if (!Z_Registration_Info_UClass_UOceanologyCausticsHelper.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOceanologyCausticsHelper.OuterSingleton, Z_Construct_UClass_UOceanologyCausticsHelper_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOceanologyCausticsHelper.OuterSingleton;
}
template<> OCEANOLOGY_PLUGIN_API UClass* StaticClass<UOceanologyCausticsHelper>()
{
	return UOceanologyCausticsHelper::StaticClass();
}
UOceanologyCausticsHelper::UOceanologyCausticsHelper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOceanologyCausticsHelper);
UOceanologyCausticsHelper::~UOceanologyCausticsHelper() {}
// End Class UOceanologyCausticsHelper

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyCaustics_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOceanologyCaustics::StaticStruct, Z_Construct_UScriptStruct_FOceanologyCaustics_Statics::NewStructOps, TEXT("OceanologyCaustics"), &Z_Registration_Info_UScriptStruct_OceanologyCaustics, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOceanologyCaustics), 2328268872U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOceanologyCausticsHelper, UOceanologyCausticsHelper::StaticClass, TEXT("UOceanologyCausticsHelper"), &Z_Registration_Info_UClass_UOceanologyCausticsHelper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOceanologyCausticsHelper), 3143817976U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyCaustics_h_1190254264(TEXT("/Script/Oceanology_Plugin"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyCaustics_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyCaustics_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyCaustics_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyCaustics_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
