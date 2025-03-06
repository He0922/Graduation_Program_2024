// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Oceanology_Plugin/Public/Structs/OceanologyWaterProjection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOceanologyWaterProjection() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_UOceanologyWaterProjectionHelper();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_UOceanologyWaterProjectionHelper_NoRegister();
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyWaterProjection();
UPackage* Z_Construct_UPackage__Script_Oceanology_Plugin();
// End Cross Module References

// Begin ScriptStruct FOceanologyWaterProjection
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OceanologyWaterProjection;
class UScriptStruct* FOceanologyWaterProjection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OceanologyWaterProjection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OceanologyWaterProjection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOceanologyWaterProjection, (UObject*)Z_Construct_UPackage__Script_Oceanology_Plugin(), TEXT("OceanologyWaterProjection"));
	}
	return Z_Registration_Info_UScriptStruct_OceanologyWaterProjection.OuterSingleton;
}
template<> OCEANOLOGY_PLUGIN_API UScriptStruct* StaticStruct<FOceanologyWaterProjection>()
{
	return FOceanologyWaterProjection::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOceanologyWaterProjection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyWaterProjection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VirtualRealityEyeOffset_MetaData[] = {
		{ "Category", "WaterProjection" },
		{ "DisplayName", "VirtualRealityEyeOffset" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyWaterProjection.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_VirtualRealityEyeOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOceanologyWaterProjection>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyWaterProjection_Statics::NewProp_VirtualRealityEyeOffset = { "VirtualRealityEyeOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyWaterProjection, VirtualRealityEyeOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VirtualRealityEyeOffset_MetaData), NewProp_VirtualRealityEyeOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOceanologyWaterProjection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyWaterProjection_Statics::NewProp_VirtualRealityEyeOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanologyWaterProjection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOceanologyWaterProjection_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Oceanology_Plugin,
	nullptr,
	&NewStructOps,
	"OceanologyWaterProjection",
	Z_Construct_UScriptStruct_FOceanologyWaterProjection_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanologyWaterProjection_Statics::PropPointers),
	sizeof(FOceanologyWaterProjection),
	alignof(FOceanologyWaterProjection),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanologyWaterProjection_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOceanologyWaterProjection_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOceanologyWaterProjection()
{
	if (!Z_Registration_Info_UScriptStruct_OceanologyWaterProjection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OceanologyWaterProjection.InnerSingleton, Z_Construct_UScriptStruct_FOceanologyWaterProjection_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OceanologyWaterProjection.InnerSingleton;
}
// End ScriptStruct FOceanologyWaterProjection

// Begin Class UOceanologyWaterProjectionHelper Function LerpWaterProjection
struct Z_Construct_UFunction_UOceanologyWaterProjectionHelper_LerpWaterProjection_Statics
{
	struct OceanologyWaterProjectionHelper_eventLerpWaterProjection_Parms
	{
		FOceanologyWaterProjection A;
		FOceanologyWaterProjection B;
		double Alpha;
		FOceanologyWaterProjection OutResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WaterProjection" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyWaterProjection.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyWaterProjectionHelper_LerpWaterProjection_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyWaterProjectionHelper_eventLerpWaterProjection_Parms, A), Z_Construct_UScriptStruct_FOceanologyWaterProjection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 1198342164
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyWaterProjectionHelper_LerpWaterProjection_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyWaterProjectionHelper_eventLerpWaterProjection_Parms, B), Z_Construct_UScriptStruct_FOceanologyWaterProjection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) }; // 1198342164
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UOceanologyWaterProjectionHelper_LerpWaterProjection_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyWaterProjectionHelper_eventLerpWaterProjection_Parms, Alpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Alpha_MetaData), NewProp_Alpha_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyWaterProjectionHelper_LerpWaterProjection_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyWaterProjectionHelper_eventLerpWaterProjection_Parms, OutResult), Z_Construct_UScriptStruct_FOceanologyWaterProjection, METADATA_PARAMS(0, nullptr) }; // 1198342164
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanologyWaterProjectionHelper_LerpWaterProjection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyWaterProjectionHelper_LerpWaterProjection_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyWaterProjectionHelper_LerpWaterProjection_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyWaterProjectionHelper_LerpWaterProjection_Statics::NewProp_Alpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyWaterProjectionHelper_LerpWaterProjection_Statics::NewProp_OutResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyWaterProjectionHelper_LerpWaterProjection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologyWaterProjectionHelper_LerpWaterProjection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologyWaterProjectionHelper, nullptr, "LerpWaterProjection", nullptr, nullptr, Z_Construct_UFunction_UOceanologyWaterProjectionHelper_LerpWaterProjection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyWaterProjectionHelper_LerpWaterProjection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOceanologyWaterProjectionHelper_LerpWaterProjection_Statics::OceanologyWaterProjectionHelper_eventLerpWaterProjection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyWaterProjectionHelper_LerpWaterProjection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologyWaterProjectionHelper_LerpWaterProjection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOceanologyWaterProjectionHelper_LerpWaterProjection_Statics::OceanologyWaterProjectionHelper_eventLerpWaterProjection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanologyWaterProjectionHelper_LerpWaterProjection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologyWaterProjectionHelper_LerpWaterProjection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologyWaterProjectionHelper::execLerpWaterProjection)
{
	P_GET_STRUCT_REF(FOceanologyWaterProjection,Z_Param_Out_A);
	P_GET_STRUCT_REF(FOceanologyWaterProjection,Z_Param_Out_B);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Alpha);
	P_GET_STRUCT_REF(FOceanologyWaterProjection,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOceanologyWaterProjectionHelper::LerpWaterProjection(Z_Param_Out_A,Z_Param_Out_B,Z_Param_Alpha,Z_Param_Out_OutResult);
	P_NATIVE_END;
}
// End Class UOceanologyWaterProjectionHelper Function LerpWaterProjection

// Begin Class UOceanologyWaterProjectionHelper Function SetMaterialParameters
struct Z_Construct_UFunction_UOceanologyWaterProjectionHelper_SetMaterialParameters_Statics
{
	struct OceanologyWaterProjectionHelper_eventSetMaterialParameters_Parms
	{
		UMaterialInstanceDynamic* MID;
		FOceanologyWaterProjection WaterProjection;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WaterProjection" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyWaterProjection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaterProjection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WaterProjection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOceanologyWaterProjectionHelper_SetMaterialParameters_Statics::NewProp_MID = { "MID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyWaterProjectionHelper_eventSetMaterialParameters_Parms, MID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyWaterProjectionHelper_SetMaterialParameters_Statics::NewProp_WaterProjection = { "WaterProjection", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyWaterProjectionHelper_eventSetMaterialParameters_Parms, WaterProjection), Z_Construct_UScriptStruct_FOceanologyWaterProjection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaterProjection_MetaData), NewProp_WaterProjection_MetaData) }; // 1198342164
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanologyWaterProjectionHelper_SetMaterialParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyWaterProjectionHelper_SetMaterialParameters_Statics::NewProp_MID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyWaterProjectionHelper_SetMaterialParameters_Statics::NewProp_WaterProjection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyWaterProjectionHelper_SetMaterialParameters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologyWaterProjectionHelper_SetMaterialParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologyWaterProjectionHelper, nullptr, "SetMaterialParameters", nullptr, nullptr, Z_Construct_UFunction_UOceanologyWaterProjectionHelper_SetMaterialParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyWaterProjectionHelper_SetMaterialParameters_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOceanologyWaterProjectionHelper_SetMaterialParameters_Statics::OceanologyWaterProjectionHelper_eventSetMaterialParameters_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyWaterProjectionHelper_SetMaterialParameters_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologyWaterProjectionHelper_SetMaterialParameters_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOceanologyWaterProjectionHelper_SetMaterialParameters_Statics::OceanologyWaterProjectionHelper_eventSetMaterialParameters_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanologyWaterProjectionHelper_SetMaterialParameters()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologyWaterProjectionHelper_SetMaterialParameters_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologyWaterProjectionHelper::execSetMaterialParameters)
{
	P_GET_OBJECT(UMaterialInstanceDynamic,Z_Param_MID);
	P_GET_STRUCT_REF(FOceanologyWaterProjection,Z_Param_Out_WaterProjection);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOceanologyWaterProjectionHelper::SetMaterialParameters(Z_Param_MID,Z_Param_Out_WaterProjection);
	P_NATIVE_END;
}
// End Class UOceanologyWaterProjectionHelper Function SetMaterialParameters

// Begin Class UOceanologyWaterProjectionHelper
void UOceanologyWaterProjectionHelper::StaticRegisterNativesUOceanologyWaterProjectionHelper()
{
	UClass* Class = UOceanologyWaterProjectionHelper::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "LerpWaterProjection", &UOceanologyWaterProjectionHelper::execLerpWaterProjection },
		{ "SetMaterialParameters", &UOceanologyWaterProjectionHelper::execSetMaterialParameters },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOceanologyWaterProjectionHelper);
UClass* Z_Construct_UClass_UOceanologyWaterProjectionHelper_NoRegister()
{
	return UOceanologyWaterProjectionHelper::StaticClass();
}
struct Z_Construct_UClass_UOceanologyWaterProjectionHelper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Structs/OceanologyWaterProjection.h" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyWaterProjection.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOceanologyWaterProjectionHelper_LerpWaterProjection, "LerpWaterProjection" }, // 4215784706
		{ &Z_Construct_UFunction_UOceanologyWaterProjectionHelper_SetMaterialParameters, "SetMaterialParameters" }, // 217573624
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOceanologyWaterProjectionHelper>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOceanologyWaterProjectionHelper_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Oceanology_Plugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOceanologyWaterProjectionHelper_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOceanologyWaterProjectionHelper_Statics::ClassParams = {
	&UOceanologyWaterProjectionHelper::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOceanologyWaterProjectionHelper_Statics::Class_MetaDataParams), Z_Construct_UClass_UOceanologyWaterProjectionHelper_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOceanologyWaterProjectionHelper()
{
	if (!Z_Registration_Info_UClass_UOceanologyWaterProjectionHelper.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOceanologyWaterProjectionHelper.OuterSingleton, Z_Construct_UClass_UOceanologyWaterProjectionHelper_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOceanologyWaterProjectionHelper.OuterSingleton;
}
template<> OCEANOLOGY_PLUGIN_API UClass* StaticClass<UOceanologyWaterProjectionHelper>()
{
	return UOceanologyWaterProjectionHelper::StaticClass();
}
UOceanologyWaterProjectionHelper::UOceanologyWaterProjectionHelper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOceanologyWaterProjectionHelper);
UOceanologyWaterProjectionHelper::~UOceanologyWaterProjectionHelper() {}
// End Class UOceanologyWaterProjectionHelper

// Begin Registration
struct Z_CompiledInDeferFile_FID_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyWaterProjection_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOceanologyWaterProjection::StaticStruct, Z_Construct_UScriptStruct_FOceanologyWaterProjection_Statics::NewStructOps, TEXT("OceanologyWaterProjection"), &Z_Registration_Info_UScriptStruct_OceanologyWaterProjection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOceanologyWaterProjection), 1198342164U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOceanologyWaterProjectionHelper, UOceanologyWaterProjectionHelper::StaticClass, TEXT("UOceanologyWaterProjectionHelper"), &Z_Registration_Info_UClass_UOceanologyWaterProjectionHelper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOceanologyWaterProjectionHelper), 1160290380U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyWaterProjection_h_1273702319(TEXT("/Script/Oceanology_Plugin"),
	Z_CompiledInDeferFile_FID_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyWaterProjection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyWaterProjection_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyWaterProjection_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyWaterProjection_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
