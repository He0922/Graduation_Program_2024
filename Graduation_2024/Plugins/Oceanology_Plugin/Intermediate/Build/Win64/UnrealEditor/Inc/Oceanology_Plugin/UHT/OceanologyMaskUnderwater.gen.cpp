// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Oceanology_Plugin/Public/Structs/OceanologyMaskUnderwater.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOceanologyMaskUnderwater() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_UOceanologyMaskUnderwaterHelper();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_UOceanologyMaskUnderwaterHelper_NoRegister();
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyMaskUnderwater();
UPackage* Z_Construct_UPackage__Script_Oceanology_Plugin();
// End Cross Module References

// Begin ScriptStruct FOceanologyMaskUnderwater
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OceanologyMaskUnderwater;
class UScriptStruct* FOceanologyMaskUnderwater::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OceanologyMaskUnderwater.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OceanologyMaskUnderwater.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOceanologyMaskUnderwater, (UObject*)Z_Construct_UPackage__Script_Oceanology_Plugin(), TEXT("OceanologyMaskUnderwater"));
	}
	return Z_Registration_Info_UScriptStruct_OceanologyMaskUnderwater.OuterSingleton;
}
template<> OCEANOLOGY_PLUGIN_API UScriptStruct* StaticStruct<FOceanologyMaskUnderwater>()
{
	return FOceanologyMaskUnderwater::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOceanologyMaskUnderwater_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyMaskUnderwater.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnderwaterLandscapeMask_MetaData[] = {
		{ "Category", "MaskUnderwater" },
		{ "DisplayName", "UnderwaterLandscapeMask" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyMaskUnderwater.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnderwaterObjectMask_MetaData[] = {
		{ "Category", "MaskUnderwater" },
		{ "DisplayName", "UnderwaterObjectMask" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyMaskUnderwater.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_UnderwaterLandscapeMask;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_UnderwaterObjectMask;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOceanologyMaskUnderwater>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyMaskUnderwater_Statics::NewProp_UnderwaterLandscapeMask = { "UnderwaterLandscapeMask", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyMaskUnderwater, UnderwaterLandscapeMask), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnderwaterLandscapeMask_MetaData), NewProp_UnderwaterLandscapeMask_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyMaskUnderwater_Statics::NewProp_UnderwaterObjectMask = { "UnderwaterObjectMask", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyMaskUnderwater, UnderwaterObjectMask), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnderwaterObjectMask_MetaData), NewProp_UnderwaterObjectMask_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOceanologyMaskUnderwater_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyMaskUnderwater_Statics::NewProp_UnderwaterLandscapeMask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyMaskUnderwater_Statics::NewProp_UnderwaterObjectMask,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanologyMaskUnderwater_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOceanologyMaskUnderwater_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Oceanology_Plugin,
	nullptr,
	&NewStructOps,
	"OceanologyMaskUnderwater",
	Z_Construct_UScriptStruct_FOceanologyMaskUnderwater_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanologyMaskUnderwater_Statics::PropPointers),
	sizeof(FOceanologyMaskUnderwater),
	alignof(FOceanologyMaskUnderwater),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanologyMaskUnderwater_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOceanologyMaskUnderwater_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOceanologyMaskUnderwater()
{
	if (!Z_Registration_Info_UScriptStruct_OceanologyMaskUnderwater.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OceanologyMaskUnderwater.InnerSingleton, Z_Construct_UScriptStruct_FOceanologyMaskUnderwater_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OceanologyMaskUnderwater.InnerSingleton;
}
// End ScriptStruct FOceanologyMaskUnderwater

// Begin Class UOceanologyMaskUnderwaterHelper Function LerpMaskUnderwater
struct Z_Construct_UFunction_UOceanologyMaskUnderwaterHelper_LerpMaskUnderwater_Statics
{
	struct OceanologyMaskUnderwaterHelper_eventLerpMaskUnderwater_Parms
	{
		FOceanologyMaskUnderwater A;
		FOceanologyMaskUnderwater B;
		double Alpha;
		FOceanologyMaskUnderwater OutResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MaskUnderwater" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyMaskUnderwater.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyMaskUnderwaterHelper_LerpMaskUnderwater_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyMaskUnderwaterHelper_eventLerpMaskUnderwater_Parms, A), Z_Construct_UScriptStruct_FOceanologyMaskUnderwater, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 1394275457
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyMaskUnderwaterHelper_LerpMaskUnderwater_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyMaskUnderwaterHelper_eventLerpMaskUnderwater_Parms, B), Z_Construct_UScriptStruct_FOceanologyMaskUnderwater, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) }; // 1394275457
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UOceanologyMaskUnderwaterHelper_LerpMaskUnderwater_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyMaskUnderwaterHelper_eventLerpMaskUnderwater_Parms, Alpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Alpha_MetaData), NewProp_Alpha_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyMaskUnderwaterHelper_LerpMaskUnderwater_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyMaskUnderwaterHelper_eventLerpMaskUnderwater_Parms, OutResult), Z_Construct_UScriptStruct_FOceanologyMaskUnderwater, METADATA_PARAMS(0, nullptr) }; // 1394275457
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanologyMaskUnderwaterHelper_LerpMaskUnderwater_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyMaskUnderwaterHelper_LerpMaskUnderwater_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyMaskUnderwaterHelper_LerpMaskUnderwater_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyMaskUnderwaterHelper_LerpMaskUnderwater_Statics::NewProp_Alpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyMaskUnderwaterHelper_LerpMaskUnderwater_Statics::NewProp_OutResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyMaskUnderwaterHelper_LerpMaskUnderwater_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologyMaskUnderwaterHelper_LerpMaskUnderwater_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologyMaskUnderwaterHelper, nullptr, "LerpMaskUnderwater", nullptr, nullptr, Z_Construct_UFunction_UOceanologyMaskUnderwaterHelper_LerpMaskUnderwater_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyMaskUnderwaterHelper_LerpMaskUnderwater_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOceanologyMaskUnderwaterHelper_LerpMaskUnderwater_Statics::OceanologyMaskUnderwaterHelper_eventLerpMaskUnderwater_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyMaskUnderwaterHelper_LerpMaskUnderwater_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologyMaskUnderwaterHelper_LerpMaskUnderwater_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOceanologyMaskUnderwaterHelper_LerpMaskUnderwater_Statics::OceanologyMaskUnderwaterHelper_eventLerpMaskUnderwater_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanologyMaskUnderwaterHelper_LerpMaskUnderwater()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologyMaskUnderwaterHelper_LerpMaskUnderwater_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologyMaskUnderwaterHelper::execLerpMaskUnderwater)
{
	P_GET_STRUCT_REF(FOceanologyMaskUnderwater,Z_Param_Out_A);
	P_GET_STRUCT_REF(FOceanologyMaskUnderwater,Z_Param_Out_B);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Alpha);
	P_GET_STRUCT_REF(FOceanologyMaskUnderwater,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOceanologyMaskUnderwaterHelper::LerpMaskUnderwater(Z_Param_Out_A,Z_Param_Out_B,Z_Param_Alpha,Z_Param_Out_OutResult);
	P_NATIVE_END;
}
// End Class UOceanologyMaskUnderwaterHelper Function LerpMaskUnderwater

// Begin Class UOceanologyMaskUnderwaterHelper Function SetMaterialParameters
struct Z_Construct_UFunction_UOceanologyMaskUnderwaterHelper_SetMaterialParameters_Statics
{
	struct OceanologyMaskUnderwaterHelper_eventSetMaterialParameters_Parms
	{
		UMaterialInstanceDynamic* MID;
		FOceanologyMaskUnderwater MaskUnderwater;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MaskUnderwater" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyMaskUnderwater.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaskUnderwater_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaskUnderwater;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOceanologyMaskUnderwaterHelper_SetMaterialParameters_Statics::NewProp_MID = { "MID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyMaskUnderwaterHelper_eventSetMaterialParameters_Parms, MID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyMaskUnderwaterHelper_SetMaterialParameters_Statics::NewProp_MaskUnderwater = { "MaskUnderwater", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyMaskUnderwaterHelper_eventSetMaterialParameters_Parms, MaskUnderwater), Z_Construct_UScriptStruct_FOceanologyMaskUnderwater, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaskUnderwater_MetaData), NewProp_MaskUnderwater_MetaData) }; // 1394275457
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanologyMaskUnderwaterHelper_SetMaterialParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyMaskUnderwaterHelper_SetMaterialParameters_Statics::NewProp_MID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyMaskUnderwaterHelper_SetMaterialParameters_Statics::NewProp_MaskUnderwater,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyMaskUnderwaterHelper_SetMaterialParameters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologyMaskUnderwaterHelper_SetMaterialParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologyMaskUnderwaterHelper, nullptr, "SetMaterialParameters", nullptr, nullptr, Z_Construct_UFunction_UOceanologyMaskUnderwaterHelper_SetMaterialParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyMaskUnderwaterHelper_SetMaterialParameters_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOceanologyMaskUnderwaterHelper_SetMaterialParameters_Statics::OceanologyMaskUnderwaterHelper_eventSetMaterialParameters_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyMaskUnderwaterHelper_SetMaterialParameters_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologyMaskUnderwaterHelper_SetMaterialParameters_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOceanologyMaskUnderwaterHelper_SetMaterialParameters_Statics::OceanologyMaskUnderwaterHelper_eventSetMaterialParameters_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanologyMaskUnderwaterHelper_SetMaterialParameters()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologyMaskUnderwaterHelper_SetMaterialParameters_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologyMaskUnderwaterHelper::execSetMaterialParameters)
{
	P_GET_OBJECT(UMaterialInstanceDynamic,Z_Param_MID);
	P_GET_STRUCT_REF(FOceanologyMaskUnderwater,Z_Param_Out_MaskUnderwater);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOceanologyMaskUnderwaterHelper::SetMaterialParameters(Z_Param_MID,Z_Param_Out_MaskUnderwater);
	P_NATIVE_END;
}
// End Class UOceanologyMaskUnderwaterHelper Function SetMaterialParameters

// Begin Class UOceanologyMaskUnderwaterHelper
void UOceanologyMaskUnderwaterHelper::StaticRegisterNativesUOceanologyMaskUnderwaterHelper()
{
	UClass* Class = UOceanologyMaskUnderwaterHelper::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "LerpMaskUnderwater", &UOceanologyMaskUnderwaterHelper::execLerpMaskUnderwater },
		{ "SetMaterialParameters", &UOceanologyMaskUnderwaterHelper::execSetMaterialParameters },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOceanologyMaskUnderwaterHelper);
UClass* Z_Construct_UClass_UOceanologyMaskUnderwaterHelper_NoRegister()
{
	return UOceanologyMaskUnderwaterHelper::StaticClass();
}
struct Z_Construct_UClass_UOceanologyMaskUnderwaterHelper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Structs/OceanologyMaskUnderwater.h" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyMaskUnderwater.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOceanologyMaskUnderwaterHelper_LerpMaskUnderwater, "LerpMaskUnderwater" }, // 1613285242
		{ &Z_Construct_UFunction_UOceanologyMaskUnderwaterHelper_SetMaterialParameters, "SetMaterialParameters" }, // 1882565821
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOceanologyMaskUnderwaterHelper>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOceanologyMaskUnderwaterHelper_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Oceanology_Plugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOceanologyMaskUnderwaterHelper_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOceanologyMaskUnderwaterHelper_Statics::ClassParams = {
	&UOceanologyMaskUnderwaterHelper::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOceanologyMaskUnderwaterHelper_Statics::Class_MetaDataParams), Z_Construct_UClass_UOceanologyMaskUnderwaterHelper_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOceanologyMaskUnderwaterHelper()
{
	if (!Z_Registration_Info_UClass_UOceanologyMaskUnderwaterHelper.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOceanologyMaskUnderwaterHelper.OuterSingleton, Z_Construct_UClass_UOceanologyMaskUnderwaterHelper_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOceanologyMaskUnderwaterHelper.OuterSingleton;
}
template<> OCEANOLOGY_PLUGIN_API UClass* StaticClass<UOceanologyMaskUnderwaterHelper>()
{
	return UOceanologyMaskUnderwaterHelper::StaticClass();
}
UOceanologyMaskUnderwaterHelper::UOceanologyMaskUnderwaterHelper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOceanologyMaskUnderwaterHelper);
UOceanologyMaskUnderwaterHelper::~UOceanologyMaskUnderwaterHelper() {}
// End Class UOceanologyMaskUnderwaterHelper

// Begin Registration
struct Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyMaskUnderwater_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOceanologyMaskUnderwater::StaticStruct, Z_Construct_UScriptStruct_FOceanologyMaskUnderwater_Statics::NewStructOps, TEXT("OceanologyMaskUnderwater"), &Z_Registration_Info_UScriptStruct_OceanologyMaskUnderwater, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOceanologyMaskUnderwater), 1394275457U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOceanologyMaskUnderwaterHelper, UOceanologyMaskUnderwaterHelper::StaticClass, TEXT("UOceanologyMaskUnderwaterHelper"), &Z_Registration_Info_UClass_UOceanologyMaskUnderwaterHelper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOceanologyMaskUnderwaterHelper), 3162432984U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyMaskUnderwater_h_2320874795(TEXT("/Script/Oceanology_Plugin"),
	Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyMaskUnderwater_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyMaskUnderwater_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyMaskUnderwater_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyMaskUnderwater_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
