// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Oceanology_Plugin/Public/Structs/OceanologyVolumetricFog.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOceanologyVolumetricFog() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_UOceanologyVolumetricFogHelper();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_UOceanologyVolumetricFogHelper_NoRegister();
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyVolumetricFog();
UPackage* Z_Construct_UPackage__Script_Oceanology_Plugin();
// End Cross Module References

// Begin ScriptStruct FOceanologyVolumetricFog
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OceanologyVolumetricFog;
class UScriptStruct* FOceanologyVolumetricFog::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OceanologyVolumetricFog.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OceanologyVolumetricFog.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOceanologyVolumetricFog, (UObject*)Z_Construct_UPackage__Script_Oceanology_Plugin(), TEXT("OceanologyVolumetricFog"));
	}
	return Z_Registration_Info_UScriptStruct_OceanologyVolumetricFog.OuterSingleton;
}
template<> OCEANOLOGY_PLUGIN_API UScriptStruct* StaticStruct<FOceanologyVolumetricFog>()
{
	return FOceanologyVolumetricFog::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOceanologyVolumetricFog_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * This is an auto-generated class from Material Parameters via AOceanologyMaterialToStructConverter. DO NOT EDIT BY HAND EVER! Your changes will be lost. Edit the material itself instead!\n * Generated at: 10 March 2024\n **/" },
#endif
		{ "ModuleRelativePath", "Public/Structs/OceanologyVolumetricFog.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is an auto-generated class from Material Parameters via AOceanologyMaterialToStructConverter. DO NOT EDIT BY HAND EVER! Your changes will be lost. Edit the material itself instead!\nGenerated at: 10 March 2024" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MultiScatteringContribution_MetaData[] = {
		{ "Category", "VolumetricFog" },
		{ "DisplayName", "MultiScatteringContribution" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyVolumetricFog.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MultiScatteringOcclusion_MetaData[] = {
		{ "Category", "VolumetricFog" },
		{ "DisplayName", "MultiScatteringOcclusion" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyVolumetricFog.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WetAlpha_MetaData[] = {
		{ "Category", "VolumetricFog" },
		{ "DisplayName", "Wet Alpha" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyVolumetricFog.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExponentialFogColor_MetaData[] = {
		{ "Category", "VolumetricFog" },
		{ "DisplayName", "ExponentialFogColor" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyVolumetricFog.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MultiScatteringContribution;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MultiScatteringOcclusion;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_WetAlpha;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExponentialFogColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOceanologyVolumetricFog>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyVolumetricFog_Statics::NewProp_MultiScatteringContribution = { "MultiScatteringContribution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyVolumetricFog, MultiScatteringContribution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MultiScatteringContribution_MetaData), NewProp_MultiScatteringContribution_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyVolumetricFog_Statics::NewProp_MultiScatteringOcclusion = { "MultiScatteringOcclusion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyVolumetricFog, MultiScatteringOcclusion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MultiScatteringOcclusion_MetaData), NewProp_MultiScatteringOcclusion_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyVolumetricFog_Statics::NewProp_WetAlpha = { "WetAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyVolumetricFog, WetAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WetAlpha_MetaData), NewProp_WetAlpha_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOceanologyVolumetricFog_Statics::NewProp_ExponentialFogColor = { "ExponentialFogColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyVolumetricFog, ExponentialFogColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExponentialFogColor_MetaData), NewProp_ExponentialFogColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOceanologyVolumetricFog_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyVolumetricFog_Statics::NewProp_MultiScatteringContribution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyVolumetricFog_Statics::NewProp_MultiScatteringOcclusion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyVolumetricFog_Statics::NewProp_WetAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyVolumetricFog_Statics::NewProp_ExponentialFogColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanologyVolumetricFog_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOceanologyVolumetricFog_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Oceanology_Plugin,
	nullptr,
	&NewStructOps,
	"OceanologyVolumetricFog",
	Z_Construct_UScriptStruct_FOceanologyVolumetricFog_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanologyVolumetricFog_Statics::PropPointers),
	sizeof(FOceanologyVolumetricFog),
	alignof(FOceanologyVolumetricFog),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanologyVolumetricFog_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOceanologyVolumetricFog_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOceanologyVolumetricFog()
{
	if (!Z_Registration_Info_UScriptStruct_OceanologyVolumetricFog.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OceanologyVolumetricFog.InnerSingleton, Z_Construct_UScriptStruct_FOceanologyVolumetricFog_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OceanologyVolumetricFog.InnerSingleton;
}
// End ScriptStruct FOceanologyVolumetricFog

// Begin Class UOceanologyVolumetricFogHelper Function LerpVolumetricFog
struct Z_Construct_UFunction_UOceanologyVolumetricFogHelper_LerpVolumetricFog_Statics
{
	struct OceanologyVolumetricFogHelper_eventLerpVolumetricFog_Parms
	{
		FOceanologyVolumetricFog A;
		FOceanologyVolumetricFog B;
		double Alpha;
		FOceanologyVolumetricFog OutResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VolumetricFog" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyVolumetricFog.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyVolumetricFogHelper_LerpVolumetricFog_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyVolumetricFogHelper_eventLerpVolumetricFog_Parms, A), Z_Construct_UScriptStruct_FOceanologyVolumetricFog, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 2655473889
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyVolumetricFogHelper_LerpVolumetricFog_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyVolumetricFogHelper_eventLerpVolumetricFog_Parms, B), Z_Construct_UScriptStruct_FOceanologyVolumetricFog, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) }; // 2655473889
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UOceanologyVolumetricFogHelper_LerpVolumetricFog_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyVolumetricFogHelper_eventLerpVolumetricFog_Parms, Alpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Alpha_MetaData), NewProp_Alpha_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyVolumetricFogHelper_LerpVolumetricFog_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyVolumetricFogHelper_eventLerpVolumetricFog_Parms, OutResult), Z_Construct_UScriptStruct_FOceanologyVolumetricFog, METADATA_PARAMS(0, nullptr) }; // 2655473889
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanologyVolumetricFogHelper_LerpVolumetricFog_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyVolumetricFogHelper_LerpVolumetricFog_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyVolumetricFogHelper_LerpVolumetricFog_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyVolumetricFogHelper_LerpVolumetricFog_Statics::NewProp_Alpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyVolumetricFogHelper_LerpVolumetricFog_Statics::NewProp_OutResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyVolumetricFogHelper_LerpVolumetricFog_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologyVolumetricFogHelper_LerpVolumetricFog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologyVolumetricFogHelper, nullptr, "LerpVolumetricFog", nullptr, nullptr, Z_Construct_UFunction_UOceanologyVolumetricFogHelper_LerpVolumetricFog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyVolumetricFogHelper_LerpVolumetricFog_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOceanologyVolumetricFogHelper_LerpVolumetricFog_Statics::OceanologyVolumetricFogHelper_eventLerpVolumetricFog_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyVolumetricFogHelper_LerpVolumetricFog_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologyVolumetricFogHelper_LerpVolumetricFog_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOceanologyVolumetricFogHelper_LerpVolumetricFog_Statics::OceanologyVolumetricFogHelper_eventLerpVolumetricFog_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanologyVolumetricFogHelper_LerpVolumetricFog()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologyVolumetricFogHelper_LerpVolumetricFog_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologyVolumetricFogHelper::execLerpVolumetricFog)
{
	P_GET_STRUCT_REF(FOceanologyVolumetricFog,Z_Param_Out_A);
	P_GET_STRUCT_REF(FOceanologyVolumetricFog,Z_Param_Out_B);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Alpha);
	P_GET_STRUCT_REF(FOceanologyVolumetricFog,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOceanologyVolumetricFogHelper::LerpVolumetricFog(Z_Param_Out_A,Z_Param_Out_B,Z_Param_Alpha,Z_Param_Out_OutResult);
	P_NATIVE_END;
}
// End Class UOceanologyVolumetricFogHelper Function LerpVolumetricFog

// Begin Class UOceanologyVolumetricFogHelper Function SetMaterialParameters
struct Z_Construct_UFunction_UOceanologyVolumetricFogHelper_SetMaterialParameters_Statics
{
	struct OceanologyVolumetricFogHelper_eventSetMaterialParameters_Parms
	{
		UMaterialInstanceDynamic* MID;
		FOceanologyVolumetricFog VolumetricFog;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VolumetricFog" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyVolumetricFog.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VolumetricFog_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VolumetricFog;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOceanologyVolumetricFogHelper_SetMaterialParameters_Statics::NewProp_MID = { "MID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyVolumetricFogHelper_eventSetMaterialParameters_Parms, MID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyVolumetricFogHelper_SetMaterialParameters_Statics::NewProp_VolumetricFog = { "VolumetricFog", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyVolumetricFogHelper_eventSetMaterialParameters_Parms, VolumetricFog), Z_Construct_UScriptStruct_FOceanologyVolumetricFog, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VolumetricFog_MetaData), NewProp_VolumetricFog_MetaData) }; // 2655473889
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanologyVolumetricFogHelper_SetMaterialParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyVolumetricFogHelper_SetMaterialParameters_Statics::NewProp_MID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyVolumetricFogHelper_SetMaterialParameters_Statics::NewProp_VolumetricFog,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyVolumetricFogHelper_SetMaterialParameters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologyVolumetricFogHelper_SetMaterialParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologyVolumetricFogHelper, nullptr, "SetMaterialParameters", nullptr, nullptr, Z_Construct_UFunction_UOceanologyVolumetricFogHelper_SetMaterialParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyVolumetricFogHelper_SetMaterialParameters_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOceanologyVolumetricFogHelper_SetMaterialParameters_Statics::OceanologyVolumetricFogHelper_eventSetMaterialParameters_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyVolumetricFogHelper_SetMaterialParameters_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologyVolumetricFogHelper_SetMaterialParameters_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOceanologyVolumetricFogHelper_SetMaterialParameters_Statics::OceanologyVolumetricFogHelper_eventSetMaterialParameters_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanologyVolumetricFogHelper_SetMaterialParameters()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologyVolumetricFogHelper_SetMaterialParameters_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologyVolumetricFogHelper::execSetMaterialParameters)
{
	P_GET_OBJECT(UMaterialInstanceDynamic,Z_Param_MID);
	P_GET_STRUCT_REF(FOceanologyVolumetricFog,Z_Param_Out_VolumetricFog);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOceanologyVolumetricFogHelper::SetMaterialParameters(Z_Param_MID,Z_Param_Out_VolumetricFog);
	P_NATIVE_END;
}
// End Class UOceanologyVolumetricFogHelper Function SetMaterialParameters

// Begin Class UOceanologyVolumetricFogHelper
void UOceanologyVolumetricFogHelper::StaticRegisterNativesUOceanologyVolumetricFogHelper()
{
	UClass* Class = UOceanologyVolumetricFogHelper::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "LerpVolumetricFog", &UOceanologyVolumetricFogHelper::execLerpVolumetricFog },
		{ "SetMaterialParameters", &UOceanologyVolumetricFogHelper::execSetMaterialParameters },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOceanologyVolumetricFogHelper);
UClass* Z_Construct_UClass_UOceanologyVolumetricFogHelper_NoRegister()
{
	return UOceanologyVolumetricFogHelper::StaticClass();
}
struct Z_Construct_UClass_UOceanologyVolumetricFogHelper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * This is an auto-generated class from Material Parameters via AOceanologyMaterialToStructConverter. DO NOT EDIT BY HAND EVER! Your changes will be lost. Edit the material itself instead!\n * Generated at: 10 March 2024\n **/" },
#endif
		{ "IncludePath", "Structs/OceanologyVolumetricFog.h" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyVolumetricFog.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is an auto-generated class from Material Parameters via AOceanologyMaterialToStructConverter. DO NOT EDIT BY HAND EVER! Your changes will be lost. Edit the material itself instead!\nGenerated at: 10 March 2024" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOceanologyVolumetricFogHelper_LerpVolumetricFog, "LerpVolumetricFog" }, // 3901762078
		{ &Z_Construct_UFunction_UOceanologyVolumetricFogHelper_SetMaterialParameters, "SetMaterialParameters" }, // 2053407440
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOceanologyVolumetricFogHelper>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOceanologyVolumetricFogHelper_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Oceanology_Plugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOceanologyVolumetricFogHelper_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOceanologyVolumetricFogHelper_Statics::ClassParams = {
	&UOceanologyVolumetricFogHelper::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOceanologyVolumetricFogHelper_Statics::Class_MetaDataParams), Z_Construct_UClass_UOceanologyVolumetricFogHelper_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOceanologyVolumetricFogHelper()
{
	if (!Z_Registration_Info_UClass_UOceanologyVolumetricFogHelper.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOceanologyVolumetricFogHelper.OuterSingleton, Z_Construct_UClass_UOceanologyVolumetricFogHelper_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOceanologyVolumetricFogHelper.OuterSingleton;
}
template<> OCEANOLOGY_PLUGIN_API UClass* StaticClass<UOceanologyVolumetricFogHelper>()
{
	return UOceanologyVolumetricFogHelper::StaticClass();
}
UOceanologyVolumetricFogHelper::UOceanologyVolumetricFogHelper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOceanologyVolumetricFogHelper);
UOceanologyVolumetricFogHelper::~UOceanologyVolumetricFogHelper() {}
// End Class UOceanologyVolumetricFogHelper

// Begin Registration
struct Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyVolumetricFog_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOceanologyVolumetricFog::StaticStruct, Z_Construct_UScriptStruct_FOceanologyVolumetricFog_Statics::NewStructOps, TEXT("OceanologyVolumetricFog"), &Z_Registration_Info_UScriptStruct_OceanologyVolumetricFog, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOceanologyVolumetricFog), 2655473889U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOceanologyVolumetricFogHelper, UOceanologyVolumetricFogHelper::StaticClass, TEXT("UOceanologyVolumetricFogHelper"), &Z_Registration_Info_UClass_UOceanologyVolumetricFogHelper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOceanologyVolumetricFogHelper), 18721983U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyVolumetricFog_h_2341910218(TEXT("/Script/Oceanology_Plugin"),
	Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyVolumetricFog_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyVolumetricFog_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyVolumetricFog_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyVolumetricFog_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
