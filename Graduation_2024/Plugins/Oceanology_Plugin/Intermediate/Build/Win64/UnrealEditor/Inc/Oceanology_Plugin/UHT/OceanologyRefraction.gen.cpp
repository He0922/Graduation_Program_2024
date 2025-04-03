// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Oceanology_Plugin/Public/Structs/OceanologyRefraction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOceanologyRefraction() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_UOceanologyRefractionHelper();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_UOceanologyRefractionHelper_NoRegister();
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyRefraction();
UPackage* Z_Construct_UPackage__Script_Oceanology_Plugin();
// End Cross Module References

// Begin ScriptStruct FOceanologyRefraction
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OceanologyRefraction;
class UScriptStruct* FOceanologyRefraction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OceanologyRefraction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OceanologyRefraction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOceanologyRefraction, (UObject*)Z_Construct_UPackage__Script_Oceanology_Plugin(), TEXT("OceanologyRefraction"));
	}
	return Z_Registration_Info_UScriptStruct_OceanologyRefraction.OuterSingleton;
}
template<> OCEANOLOGY_PLUGIN_API UScriptStruct* StaticStruct<FOceanologyRefraction>()
{
	return FOceanologyRefraction::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOceanologyRefraction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * This is an auto-generated class from Material Parameters via AOceanologyMaterialToStructConverter. DO NOT EDIT BY HAND EVER! Your changes will be lost. Edit the material itself instead!\n * Generated at: 10 March 2024\n **/" },
#endif
		{ "ModuleRelativePath", "Public/Structs/OceanologyRefraction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is an auto-generated class from Material Parameters via AOceanologyMaterialToStructConverter. DO NOT EDIT BY HAND EVER! Your changes will be lost. Edit the material itself instead!\nGenerated at: 10 March 2024" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CriticalAngleBendWidth_MetaData[] = {
		{ "Category", "Refraction" },
		{ "DisplayName", "CriticalAngleBendWidth" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyRefraction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CriticalAngleDot_MetaData[] = {
		{ "Category", "Refraction" },
		{ "DisplayName", "CriticalAngleDot" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyRefraction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CriticalAngleWidth_MetaData[] = {
		{ "Category", "Refraction" },
		{ "DisplayName", "CriticalAngleWidth" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyRefraction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LipRefraction_MetaData[] = {
		{ "Category", "Refraction" },
		{ "DisplayName", "LipRefraction" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyRefraction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RefractionBottomAmount_MetaData[] = {
		{ "Category", "Refraction" },
		{ "DisplayName", "RefractionBottomAmount" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyRefraction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RefractionDownsampleFactor_MetaData[] = {
		{ "Category", "Refraction" },
		{ "DisplayName", "RefractionDownsampleFactor" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyRefraction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RefractionNear_MetaData[] = {
		{ "Category", "Refraction" },
		{ "ClampMax", "2.0" },
		{ "DisplayName", "RefractionNear" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyRefraction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_CriticalAngleBendWidth;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_CriticalAngleDot;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_CriticalAngleWidth;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_LipRefraction;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_RefractionBottomAmount;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_RefractionDownsampleFactor;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_RefractionNear;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOceanologyRefraction>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyRefraction_Statics::NewProp_CriticalAngleBendWidth = { "CriticalAngleBendWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyRefraction, CriticalAngleBendWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CriticalAngleBendWidth_MetaData), NewProp_CriticalAngleBendWidth_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyRefraction_Statics::NewProp_CriticalAngleDot = { "CriticalAngleDot", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyRefraction, CriticalAngleDot), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CriticalAngleDot_MetaData), NewProp_CriticalAngleDot_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyRefraction_Statics::NewProp_CriticalAngleWidth = { "CriticalAngleWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyRefraction, CriticalAngleWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CriticalAngleWidth_MetaData), NewProp_CriticalAngleWidth_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyRefraction_Statics::NewProp_LipRefraction = { "LipRefraction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyRefraction, LipRefraction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LipRefraction_MetaData), NewProp_LipRefraction_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyRefraction_Statics::NewProp_RefractionBottomAmount = { "RefractionBottomAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyRefraction, RefractionBottomAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RefractionBottomAmount_MetaData), NewProp_RefractionBottomAmount_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyRefraction_Statics::NewProp_RefractionDownsampleFactor = { "RefractionDownsampleFactor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyRefraction, RefractionDownsampleFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RefractionDownsampleFactor_MetaData), NewProp_RefractionDownsampleFactor_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyRefraction_Statics::NewProp_RefractionNear = { "RefractionNear", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyRefraction, RefractionNear), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RefractionNear_MetaData), NewProp_RefractionNear_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOceanologyRefraction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyRefraction_Statics::NewProp_CriticalAngleBendWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyRefraction_Statics::NewProp_CriticalAngleDot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyRefraction_Statics::NewProp_CriticalAngleWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyRefraction_Statics::NewProp_LipRefraction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyRefraction_Statics::NewProp_RefractionBottomAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyRefraction_Statics::NewProp_RefractionDownsampleFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyRefraction_Statics::NewProp_RefractionNear,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanologyRefraction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOceanologyRefraction_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Oceanology_Plugin,
	nullptr,
	&NewStructOps,
	"OceanologyRefraction",
	Z_Construct_UScriptStruct_FOceanologyRefraction_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanologyRefraction_Statics::PropPointers),
	sizeof(FOceanologyRefraction),
	alignof(FOceanologyRefraction),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanologyRefraction_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOceanologyRefraction_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOceanologyRefraction()
{
	if (!Z_Registration_Info_UScriptStruct_OceanologyRefraction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OceanologyRefraction.InnerSingleton, Z_Construct_UScriptStruct_FOceanologyRefraction_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OceanologyRefraction.InnerSingleton;
}
// End ScriptStruct FOceanologyRefraction

// Begin Class UOceanologyRefractionHelper Function LerpRefraction
struct Z_Construct_UFunction_UOceanologyRefractionHelper_LerpRefraction_Statics
{
	struct OceanologyRefractionHelper_eventLerpRefraction_Parms
	{
		FOceanologyRefraction A;
		FOceanologyRefraction B;
		double Alpha;
		FOceanologyRefraction OutResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Refraction" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyRefraction.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyRefractionHelper_LerpRefraction_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyRefractionHelper_eventLerpRefraction_Parms, A), Z_Construct_UScriptStruct_FOceanologyRefraction, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 3969240598
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyRefractionHelper_LerpRefraction_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyRefractionHelper_eventLerpRefraction_Parms, B), Z_Construct_UScriptStruct_FOceanologyRefraction, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) }; // 3969240598
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UOceanologyRefractionHelper_LerpRefraction_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyRefractionHelper_eventLerpRefraction_Parms, Alpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Alpha_MetaData), NewProp_Alpha_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyRefractionHelper_LerpRefraction_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyRefractionHelper_eventLerpRefraction_Parms, OutResult), Z_Construct_UScriptStruct_FOceanologyRefraction, METADATA_PARAMS(0, nullptr) }; // 3969240598
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanologyRefractionHelper_LerpRefraction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyRefractionHelper_LerpRefraction_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyRefractionHelper_LerpRefraction_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyRefractionHelper_LerpRefraction_Statics::NewProp_Alpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyRefractionHelper_LerpRefraction_Statics::NewProp_OutResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyRefractionHelper_LerpRefraction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologyRefractionHelper_LerpRefraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologyRefractionHelper, nullptr, "LerpRefraction", nullptr, nullptr, Z_Construct_UFunction_UOceanologyRefractionHelper_LerpRefraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyRefractionHelper_LerpRefraction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOceanologyRefractionHelper_LerpRefraction_Statics::OceanologyRefractionHelper_eventLerpRefraction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyRefractionHelper_LerpRefraction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologyRefractionHelper_LerpRefraction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOceanologyRefractionHelper_LerpRefraction_Statics::OceanologyRefractionHelper_eventLerpRefraction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanologyRefractionHelper_LerpRefraction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologyRefractionHelper_LerpRefraction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologyRefractionHelper::execLerpRefraction)
{
	P_GET_STRUCT_REF(FOceanologyRefraction,Z_Param_Out_A);
	P_GET_STRUCT_REF(FOceanologyRefraction,Z_Param_Out_B);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Alpha);
	P_GET_STRUCT_REF(FOceanologyRefraction,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOceanologyRefractionHelper::LerpRefraction(Z_Param_Out_A,Z_Param_Out_B,Z_Param_Alpha,Z_Param_Out_OutResult);
	P_NATIVE_END;
}
// End Class UOceanologyRefractionHelper Function LerpRefraction

// Begin Class UOceanologyRefractionHelper Function SetMaterialParameters
struct Z_Construct_UFunction_UOceanologyRefractionHelper_SetMaterialParameters_Statics
{
	struct OceanologyRefractionHelper_eventSetMaterialParameters_Parms
	{
		UMaterialInstanceDynamic* MID;
		FOceanologyRefraction Refraction;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Refraction" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyRefraction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Refraction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Refraction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOceanologyRefractionHelper_SetMaterialParameters_Statics::NewProp_MID = { "MID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyRefractionHelper_eventSetMaterialParameters_Parms, MID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyRefractionHelper_SetMaterialParameters_Statics::NewProp_Refraction = { "Refraction", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyRefractionHelper_eventSetMaterialParameters_Parms, Refraction), Z_Construct_UScriptStruct_FOceanologyRefraction, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Refraction_MetaData), NewProp_Refraction_MetaData) }; // 3969240598
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanologyRefractionHelper_SetMaterialParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyRefractionHelper_SetMaterialParameters_Statics::NewProp_MID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyRefractionHelper_SetMaterialParameters_Statics::NewProp_Refraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyRefractionHelper_SetMaterialParameters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologyRefractionHelper_SetMaterialParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologyRefractionHelper, nullptr, "SetMaterialParameters", nullptr, nullptr, Z_Construct_UFunction_UOceanologyRefractionHelper_SetMaterialParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyRefractionHelper_SetMaterialParameters_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOceanologyRefractionHelper_SetMaterialParameters_Statics::OceanologyRefractionHelper_eventSetMaterialParameters_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyRefractionHelper_SetMaterialParameters_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologyRefractionHelper_SetMaterialParameters_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOceanologyRefractionHelper_SetMaterialParameters_Statics::OceanologyRefractionHelper_eventSetMaterialParameters_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanologyRefractionHelper_SetMaterialParameters()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologyRefractionHelper_SetMaterialParameters_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologyRefractionHelper::execSetMaterialParameters)
{
	P_GET_OBJECT(UMaterialInstanceDynamic,Z_Param_MID);
	P_GET_STRUCT_REF(FOceanologyRefraction,Z_Param_Out_Refraction);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOceanologyRefractionHelper::SetMaterialParameters(Z_Param_MID,Z_Param_Out_Refraction);
	P_NATIVE_END;
}
// End Class UOceanologyRefractionHelper Function SetMaterialParameters

// Begin Class UOceanologyRefractionHelper
void UOceanologyRefractionHelper::StaticRegisterNativesUOceanologyRefractionHelper()
{
	UClass* Class = UOceanologyRefractionHelper::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "LerpRefraction", &UOceanologyRefractionHelper::execLerpRefraction },
		{ "SetMaterialParameters", &UOceanologyRefractionHelper::execSetMaterialParameters },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOceanologyRefractionHelper);
UClass* Z_Construct_UClass_UOceanologyRefractionHelper_NoRegister()
{
	return UOceanologyRefractionHelper::StaticClass();
}
struct Z_Construct_UClass_UOceanologyRefractionHelper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * This is an auto-generated class from Material Parameters via AOceanologyMaterialToStructConverter. DO NOT EDIT BY HAND EVER! Your changes will be lost. Edit the material itself instead!\n * Generated at: 10 March 2024\n **/" },
#endif
		{ "IncludePath", "Structs/OceanologyRefraction.h" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyRefraction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is an auto-generated class from Material Parameters via AOceanologyMaterialToStructConverter. DO NOT EDIT BY HAND EVER! Your changes will be lost. Edit the material itself instead!\nGenerated at: 10 March 2024" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOceanologyRefractionHelper_LerpRefraction, "LerpRefraction" }, // 126832784
		{ &Z_Construct_UFunction_UOceanologyRefractionHelper_SetMaterialParameters, "SetMaterialParameters" }, // 792496716
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOceanologyRefractionHelper>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOceanologyRefractionHelper_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Oceanology_Plugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOceanologyRefractionHelper_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOceanologyRefractionHelper_Statics::ClassParams = {
	&UOceanologyRefractionHelper::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOceanologyRefractionHelper_Statics::Class_MetaDataParams), Z_Construct_UClass_UOceanologyRefractionHelper_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOceanologyRefractionHelper()
{
	if (!Z_Registration_Info_UClass_UOceanologyRefractionHelper.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOceanologyRefractionHelper.OuterSingleton, Z_Construct_UClass_UOceanologyRefractionHelper_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOceanologyRefractionHelper.OuterSingleton;
}
template<> OCEANOLOGY_PLUGIN_API UClass* StaticClass<UOceanologyRefractionHelper>()
{
	return UOceanologyRefractionHelper::StaticClass();
}
UOceanologyRefractionHelper::UOceanologyRefractionHelper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOceanologyRefractionHelper);
UOceanologyRefractionHelper::~UOceanologyRefractionHelper() {}
// End Class UOceanologyRefractionHelper

// Begin Registration
struct Z_CompiledInDeferFile_FID_Programes_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyRefraction_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOceanologyRefraction::StaticStruct, Z_Construct_UScriptStruct_FOceanologyRefraction_Statics::NewStructOps, TEXT("OceanologyRefraction"), &Z_Registration_Info_UScriptStruct_OceanologyRefraction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOceanologyRefraction), 3969240598U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOceanologyRefractionHelper, UOceanologyRefractionHelper::StaticClass, TEXT("UOceanologyRefractionHelper"), &Z_Registration_Info_UClass_UOceanologyRefractionHelper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOceanologyRefractionHelper), 282525060U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Programes_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyRefraction_h_2639046996(TEXT("/Script/Oceanology_Plugin"),
	Z_CompiledInDeferFile_FID_Programes_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyRefraction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Programes_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyRefraction_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Programes_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyRefraction_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Programes_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyRefraction_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
