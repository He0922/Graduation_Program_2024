// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Oceanology_Plugin/Public/Structs/OceanologyHorizonCorrection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOceanologyHorizonCorrection() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_UOceanologyHorizonCorrectionHelper();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_UOceanologyHorizonCorrectionHelper_NoRegister();
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyHorizonCorrection();
UPackage* Z_Construct_UPackage__Script_Oceanology_Plugin();
// End Cross Module References

// Begin ScriptStruct FOceanologyHorizonCorrection
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OceanologyHorizonCorrection;
class UScriptStruct* FOceanologyHorizonCorrection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OceanologyHorizonCorrection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OceanologyHorizonCorrection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOceanologyHorizonCorrection, (UObject*)Z_Construct_UPackage__Script_Oceanology_Plugin(), TEXT("OceanologyHorizonCorrection"));
	}
	return Z_Registration_Info_UScriptStruct_OceanologyHorizonCorrection.OuterSingleton;
}
template<> OCEANOLOGY_PLUGIN_API UScriptStruct* StaticStruct<FOceanologyHorizonCorrection>()
{
	return FOceanologyHorizonCorrection::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOceanologyHorizonCorrection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * This is an auto-generated class from Material Parameters via AOceanologyMaterialToStructConverter. DO NOT EDIT BY HAND EVER! Your changes will be lost. Edit the material itself instead!\n * Generated at: 10 March 2024\n **/" },
#endif
		{ "ModuleRelativePath", "Public/Structs/OceanologyHorizonCorrection.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is an auto-generated class from Material Parameters via AOceanologyMaterialToStructConverter. DO NOT EDIT BY HAND EVER! Your changes will be lost. Edit the material itself instead!\nGenerated at: 10 March 2024" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DetailNormalSpeed_MetaData[] = {
		{ "Category", "HorizonCorrection" },
		{ "DisplayName", "DetailNormalSpeed" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyHorizonCorrection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DetailScaleNormal_MetaData[] = {
		{ "Category", "HorizonCorrection" },
		{ "DisplayName", "DetailScaleNormal" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyHorizonCorrection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistantNormalLength_MetaData[] = {
		{ "Category", "HorizonCorrection" },
		{ "DisplayName", "DistantNormalLength" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyHorizonCorrection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistantNormalOffset_MetaData[] = {
		{ "Category", "HorizonCorrection" },
		{ "DisplayName", "DistantNormalOffset" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyHorizonCorrection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HorizonCorrectionNormalIntensity_MetaData[] = {
		{ "Category", "HorizonCorrection" },
		{ "DisplayName", "HorizonCorrectionNormalIntensity" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyHorizonCorrection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_T_DetailNormal_MetaData[] = {
		{ "Category", "HorizonCorrection" },
		{ "DisplayName", "T_DetailNormal" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyHorizonCorrection.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_DetailNormalSpeed;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_DetailScaleNormal;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_DistantNormalLength;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_DistantNormalOffset;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_HorizonCorrectionNormalIntensity;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_T_DetailNormal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOceanologyHorizonCorrection>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyHorizonCorrection_Statics::NewProp_DetailNormalSpeed = { "DetailNormalSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyHorizonCorrection, DetailNormalSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DetailNormalSpeed_MetaData), NewProp_DetailNormalSpeed_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyHorizonCorrection_Statics::NewProp_DetailScaleNormal = { "DetailScaleNormal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyHorizonCorrection, DetailScaleNormal), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DetailScaleNormal_MetaData), NewProp_DetailScaleNormal_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyHorizonCorrection_Statics::NewProp_DistantNormalLength = { "DistantNormalLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyHorizonCorrection, DistantNormalLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistantNormalLength_MetaData), NewProp_DistantNormalLength_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyHorizonCorrection_Statics::NewProp_DistantNormalOffset = { "DistantNormalOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyHorizonCorrection, DistantNormalOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistantNormalOffset_MetaData), NewProp_DistantNormalOffset_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyHorizonCorrection_Statics::NewProp_HorizonCorrectionNormalIntensity = { "HorizonCorrectionNormalIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyHorizonCorrection, HorizonCorrectionNormalIntensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HorizonCorrectionNormalIntensity_MetaData), NewProp_HorizonCorrectionNormalIntensity_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOceanologyHorizonCorrection_Statics::NewProp_T_DetailNormal = { "T_DetailNormal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyHorizonCorrection, T_DetailNormal), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_T_DetailNormal_MetaData), NewProp_T_DetailNormal_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOceanologyHorizonCorrection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyHorizonCorrection_Statics::NewProp_DetailNormalSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyHorizonCorrection_Statics::NewProp_DetailScaleNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyHorizonCorrection_Statics::NewProp_DistantNormalLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyHorizonCorrection_Statics::NewProp_DistantNormalOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyHorizonCorrection_Statics::NewProp_HorizonCorrectionNormalIntensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyHorizonCorrection_Statics::NewProp_T_DetailNormal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanologyHorizonCorrection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOceanologyHorizonCorrection_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Oceanology_Plugin,
	nullptr,
	&NewStructOps,
	"OceanologyHorizonCorrection",
	Z_Construct_UScriptStruct_FOceanologyHorizonCorrection_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanologyHorizonCorrection_Statics::PropPointers),
	sizeof(FOceanologyHorizonCorrection),
	alignof(FOceanologyHorizonCorrection),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanologyHorizonCorrection_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOceanologyHorizonCorrection_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOceanologyHorizonCorrection()
{
	if (!Z_Registration_Info_UScriptStruct_OceanologyHorizonCorrection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OceanologyHorizonCorrection.InnerSingleton, Z_Construct_UScriptStruct_FOceanologyHorizonCorrection_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OceanologyHorizonCorrection.InnerSingleton;
}
// End ScriptStruct FOceanologyHorizonCorrection

// Begin Class UOceanologyHorizonCorrectionHelper Function LerpHorizonCorrection
struct Z_Construct_UFunction_UOceanologyHorizonCorrectionHelper_LerpHorizonCorrection_Statics
{
	struct OceanologyHorizonCorrectionHelper_eventLerpHorizonCorrection_Parms
	{
		FOceanologyHorizonCorrection A;
		FOceanologyHorizonCorrection B;
		double Alpha;
		FOceanologyHorizonCorrection OutResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HorizonCorrection" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyHorizonCorrection.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyHorizonCorrectionHelper_LerpHorizonCorrection_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyHorizonCorrectionHelper_eventLerpHorizonCorrection_Parms, A), Z_Construct_UScriptStruct_FOceanologyHorizonCorrection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 2772329432
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyHorizonCorrectionHelper_LerpHorizonCorrection_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyHorizonCorrectionHelper_eventLerpHorizonCorrection_Parms, B), Z_Construct_UScriptStruct_FOceanologyHorizonCorrection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) }; // 2772329432
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UOceanologyHorizonCorrectionHelper_LerpHorizonCorrection_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyHorizonCorrectionHelper_eventLerpHorizonCorrection_Parms, Alpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Alpha_MetaData), NewProp_Alpha_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyHorizonCorrectionHelper_LerpHorizonCorrection_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyHorizonCorrectionHelper_eventLerpHorizonCorrection_Parms, OutResult), Z_Construct_UScriptStruct_FOceanologyHorizonCorrection, METADATA_PARAMS(0, nullptr) }; // 2772329432
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanologyHorizonCorrectionHelper_LerpHorizonCorrection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyHorizonCorrectionHelper_LerpHorizonCorrection_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyHorizonCorrectionHelper_LerpHorizonCorrection_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyHorizonCorrectionHelper_LerpHorizonCorrection_Statics::NewProp_Alpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyHorizonCorrectionHelper_LerpHorizonCorrection_Statics::NewProp_OutResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyHorizonCorrectionHelper_LerpHorizonCorrection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologyHorizonCorrectionHelper_LerpHorizonCorrection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologyHorizonCorrectionHelper, nullptr, "LerpHorizonCorrection", nullptr, nullptr, Z_Construct_UFunction_UOceanologyHorizonCorrectionHelper_LerpHorizonCorrection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyHorizonCorrectionHelper_LerpHorizonCorrection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOceanologyHorizonCorrectionHelper_LerpHorizonCorrection_Statics::OceanologyHorizonCorrectionHelper_eventLerpHorizonCorrection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyHorizonCorrectionHelper_LerpHorizonCorrection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologyHorizonCorrectionHelper_LerpHorizonCorrection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOceanologyHorizonCorrectionHelper_LerpHorizonCorrection_Statics::OceanologyHorizonCorrectionHelper_eventLerpHorizonCorrection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanologyHorizonCorrectionHelper_LerpHorizonCorrection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologyHorizonCorrectionHelper_LerpHorizonCorrection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologyHorizonCorrectionHelper::execLerpHorizonCorrection)
{
	P_GET_STRUCT_REF(FOceanologyHorizonCorrection,Z_Param_Out_A);
	P_GET_STRUCT_REF(FOceanologyHorizonCorrection,Z_Param_Out_B);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Alpha);
	P_GET_STRUCT_REF(FOceanologyHorizonCorrection,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOceanologyHorizonCorrectionHelper::LerpHorizonCorrection(Z_Param_Out_A,Z_Param_Out_B,Z_Param_Alpha,Z_Param_Out_OutResult);
	P_NATIVE_END;
}
// End Class UOceanologyHorizonCorrectionHelper Function LerpHorizonCorrection

// Begin Class UOceanologyHorizonCorrectionHelper Function SetMaterialParameters
struct Z_Construct_UFunction_UOceanologyHorizonCorrectionHelper_SetMaterialParameters_Statics
{
	struct OceanologyHorizonCorrectionHelper_eventSetMaterialParameters_Parms
	{
		UMaterialInstanceDynamic* MID;
		FOceanologyHorizonCorrection HorizonCorrection;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HorizonCorrection" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyHorizonCorrection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HorizonCorrection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HorizonCorrection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOceanologyHorizonCorrectionHelper_SetMaterialParameters_Statics::NewProp_MID = { "MID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyHorizonCorrectionHelper_eventSetMaterialParameters_Parms, MID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyHorizonCorrectionHelper_SetMaterialParameters_Statics::NewProp_HorizonCorrection = { "HorizonCorrection", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyHorizonCorrectionHelper_eventSetMaterialParameters_Parms, HorizonCorrection), Z_Construct_UScriptStruct_FOceanologyHorizonCorrection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HorizonCorrection_MetaData), NewProp_HorizonCorrection_MetaData) }; // 2772329432
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanologyHorizonCorrectionHelper_SetMaterialParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyHorizonCorrectionHelper_SetMaterialParameters_Statics::NewProp_MID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyHorizonCorrectionHelper_SetMaterialParameters_Statics::NewProp_HorizonCorrection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyHorizonCorrectionHelper_SetMaterialParameters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologyHorizonCorrectionHelper_SetMaterialParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologyHorizonCorrectionHelper, nullptr, "SetMaterialParameters", nullptr, nullptr, Z_Construct_UFunction_UOceanologyHorizonCorrectionHelper_SetMaterialParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyHorizonCorrectionHelper_SetMaterialParameters_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOceanologyHorizonCorrectionHelper_SetMaterialParameters_Statics::OceanologyHorizonCorrectionHelper_eventSetMaterialParameters_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyHorizonCorrectionHelper_SetMaterialParameters_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologyHorizonCorrectionHelper_SetMaterialParameters_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOceanologyHorizonCorrectionHelper_SetMaterialParameters_Statics::OceanologyHorizonCorrectionHelper_eventSetMaterialParameters_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanologyHorizonCorrectionHelper_SetMaterialParameters()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologyHorizonCorrectionHelper_SetMaterialParameters_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologyHorizonCorrectionHelper::execSetMaterialParameters)
{
	P_GET_OBJECT(UMaterialInstanceDynamic,Z_Param_MID);
	P_GET_STRUCT_REF(FOceanologyHorizonCorrection,Z_Param_Out_HorizonCorrection);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOceanologyHorizonCorrectionHelper::SetMaterialParameters(Z_Param_MID,Z_Param_Out_HorizonCorrection);
	P_NATIVE_END;
}
// End Class UOceanologyHorizonCorrectionHelper Function SetMaterialParameters

// Begin Class UOceanologyHorizonCorrectionHelper
void UOceanologyHorizonCorrectionHelper::StaticRegisterNativesUOceanologyHorizonCorrectionHelper()
{
	UClass* Class = UOceanologyHorizonCorrectionHelper::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "LerpHorizonCorrection", &UOceanologyHorizonCorrectionHelper::execLerpHorizonCorrection },
		{ "SetMaterialParameters", &UOceanologyHorizonCorrectionHelper::execSetMaterialParameters },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOceanologyHorizonCorrectionHelper);
UClass* Z_Construct_UClass_UOceanologyHorizonCorrectionHelper_NoRegister()
{
	return UOceanologyHorizonCorrectionHelper::StaticClass();
}
struct Z_Construct_UClass_UOceanologyHorizonCorrectionHelper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * This is an auto-generated class from Material Parameters via AOceanologyMaterialToStructConverter. DO NOT EDIT BY HAND EVER! Your changes will be lost. Edit the material itself instead!\n * Generated at: 10 March 2024\n **/" },
#endif
		{ "IncludePath", "Structs/OceanologyHorizonCorrection.h" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyHorizonCorrection.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is an auto-generated class from Material Parameters via AOceanologyMaterialToStructConverter. DO NOT EDIT BY HAND EVER! Your changes will be lost. Edit the material itself instead!\nGenerated at: 10 March 2024" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOceanologyHorizonCorrectionHelper_LerpHorizonCorrection, "LerpHorizonCorrection" }, // 2190937817
		{ &Z_Construct_UFunction_UOceanologyHorizonCorrectionHelper_SetMaterialParameters, "SetMaterialParameters" }, // 1196991276
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOceanologyHorizonCorrectionHelper>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOceanologyHorizonCorrectionHelper_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Oceanology_Plugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOceanologyHorizonCorrectionHelper_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOceanologyHorizonCorrectionHelper_Statics::ClassParams = {
	&UOceanologyHorizonCorrectionHelper::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOceanologyHorizonCorrectionHelper_Statics::Class_MetaDataParams), Z_Construct_UClass_UOceanologyHorizonCorrectionHelper_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOceanologyHorizonCorrectionHelper()
{
	if (!Z_Registration_Info_UClass_UOceanologyHorizonCorrectionHelper.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOceanologyHorizonCorrectionHelper.OuterSingleton, Z_Construct_UClass_UOceanologyHorizonCorrectionHelper_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOceanologyHorizonCorrectionHelper.OuterSingleton;
}
template<> OCEANOLOGY_PLUGIN_API UClass* StaticClass<UOceanologyHorizonCorrectionHelper>()
{
	return UOceanologyHorizonCorrectionHelper::StaticClass();
}
UOceanologyHorizonCorrectionHelper::UOceanologyHorizonCorrectionHelper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOceanologyHorizonCorrectionHelper);
UOceanologyHorizonCorrectionHelper::~UOceanologyHorizonCorrectionHelper() {}
// End Class UOceanologyHorizonCorrectionHelper

// Begin Registration
struct Z_CompiledInDeferFile_FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyHorizonCorrection_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOceanologyHorizonCorrection::StaticStruct, Z_Construct_UScriptStruct_FOceanologyHorizonCorrection_Statics::NewStructOps, TEXT("OceanologyHorizonCorrection"), &Z_Registration_Info_UScriptStruct_OceanologyHorizonCorrection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOceanologyHorizonCorrection), 2772329432U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOceanologyHorizonCorrectionHelper, UOceanologyHorizonCorrectionHelper::StaticClass, TEXT("UOceanologyHorizonCorrectionHelper"), &Z_Registration_Info_UClass_UOceanologyHorizonCorrectionHelper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOceanologyHorizonCorrectionHelper), 795389297U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyHorizonCorrection_h_4119730049(TEXT("/Script/Oceanology_Plugin"),
	Z_CompiledInDeferFile_FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyHorizonCorrection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyHorizonCorrection_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyHorizonCorrection_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyHorizonCorrection_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
