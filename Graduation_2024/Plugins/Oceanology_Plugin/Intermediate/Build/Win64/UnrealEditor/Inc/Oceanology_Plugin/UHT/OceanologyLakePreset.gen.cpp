// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Oceanology_Plugin/Public/DataAsset/OceanologyLakePreset.h"
#include "Oceanology_Plugin/Public/Structs/OceanologyGroundCaustics.h"
#include "Oceanology_Plugin/Public/Structs/OceanologyLakePresetResult.h"
#include "Oceanology_Plugin/Public/Structs/OceanologyWaterPresetResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOceanologyLakePreset() {}

// Begin Cross Module References
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_UOceanologyLakePreset();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_UOceanologyLakePreset_NoRegister();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_UOceanologyWaterPreset();
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyGroundCaustics();
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyLakePresetResult();
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyWaterPresetResult();
UPackage* Z_Construct_UPackage__Script_Oceanology_Plugin();
// End Cross Module References

// Begin Class UOceanologyLakePreset Function LerpPreset
struct Z_Construct_UFunction_UOceanologyLakePreset_LerpPreset_Statics
{
	struct OceanologyLakePreset_eventLerpPreset_Parms
	{
		const UOceanologyLakePreset* A;
		const UOceanologyLakePreset* B;
		double Alpha;
		FOceanologyWaterPresetResult OutWaterPresetResult;
		FOceanologyLakePresetResult OutPresetResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lake Preset" },
		{ "ModuleRelativePath", "Public/DataAsset/OceanologyLakePreset.h" },
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
	static const UECodeGen_Private::FObjectPropertyParams NewProp_A;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_B;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Alpha;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutWaterPresetResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutPresetResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOceanologyLakePreset_LerpPreset_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyLakePreset_eventLerpPreset_Parms, A), Z_Construct_UClass_UOceanologyLakePreset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOceanologyLakePreset_LerpPreset_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyLakePreset_eventLerpPreset_Parms, B), Z_Construct_UClass_UOceanologyLakePreset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UOceanologyLakePreset_LerpPreset_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyLakePreset_eventLerpPreset_Parms, Alpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Alpha_MetaData), NewProp_Alpha_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyLakePreset_LerpPreset_Statics::NewProp_OutWaterPresetResult = { "OutWaterPresetResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyLakePreset_eventLerpPreset_Parms, OutWaterPresetResult), Z_Construct_UScriptStruct_FOceanologyWaterPresetResult, METADATA_PARAMS(0, nullptr) }; // 1369265139
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyLakePreset_LerpPreset_Statics::NewProp_OutPresetResult = { "OutPresetResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyLakePreset_eventLerpPreset_Parms, OutPresetResult), Z_Construct_UScriptStruct_FOceanologyLakePresetResult, METADATA_PARAMS(0, nullptr) }; // 2522097882
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanologyLakePreset_LerpPreset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyLakePreset_LerpPreset_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyLakePreset_LerpPreset_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyLakePreset_LerpPreset_Statics::NewProp_Alpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyLakePreset_LerpPreset_Statics::NewProp_OutWaterPresetResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyLakePreset_LerpPreset_Statics::NewProp_OutPresetResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyLakePreset_LerpPreset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologyLakePreset_LerpPreset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologyLakePreset, nullptr, "LerpPreset", nullptr, nullptr, Z_Construct_UFunction_UOceanologyLakePreset_LerpPreset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyLakePreset_LerpPreset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOceanologyLakePreset_LerpPreset_Statics::OceanologyLakePreset_eventLerpPreset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyLakePreset_LerpPreset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologyLakePreset_LerpPreset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOceanologyLakePreset_LerpPreset_Statics::OceanologyLakePreset_eventLerpPreset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanologyLakePreset_LerpPreset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologyLakePreset_LerpPreset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologyLakePreset::execLerpPreset)
{
	P_GET_OBJECT(UOceanologyLakePreset,Z_Param_A);
	P_GET_OBJECT(UOceanologyLakePreset,Z_Param_B);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Alpha);
	P_GET_STRUCT_REF(FOceanologyWaterPresetResult,Z_Param_Out_OutWaterPresetResult);
	P_GET_STRUCT_REF(FOceanologyLakePresetResult,Z_Param_Out_OutPresetResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOceanologyLakePreset::LerpPreset(Z_Param_A,Z_Param_B,Z_Param_Alpha,Z_Param_Out_OutWaterPresetResult,Z_Param_Out_OutPresetResult);
	P_NATIVE_END;
}
// End Class UOceanologyLakePreset Function LerpPreset

// Begin Class UOceanologyLakePreset
void UOceanologyLakePreset::StaticRegisterNativesUOceanologyLakePreset()
{
	UClass* Class = UOceanologyLakePreset::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "LerpPreset", &UOceanologyLakePreset::execLerpPreset },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOceanologyLakePreset);
UClass* Z_Construct_UClass_UOceanologyLakePreset_NoRegister()
{
	return UOceanologyLakePreset::StaticClass();
}
struct Z_Construct_UClass_UOceanologyLakePreset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DataAsset/OceanologyLakePreset.h" },
		{ "ModuleRelativePath", "Public/DataAsset/OceanologyLakePreset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundCaustics_MetaData[] = {
		{ "Category", "Caustics" },
		{ "ModuleRelativePath", "Public/DataAsset/OceanologyLakePreset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GroundCaustics;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOceanologyLakePreset_LerpPreset, "LerpPreset" }, // 1694430205
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOceanologyLakePreset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOceanologyLakePreset_Statics::NewProp_GroundCaustics = { "GroundCaustics", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyLakePreset, GroundCaustics), Z_Construct_UScriptStruct_FOceanologyGroundCaustics, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundCaustics_MetaData), NewProp_GroundCaustics_MetaData) }; // 1718873675
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOceanologyLakePreset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyLakePreset_Statics::NewProp_GroundCaustics,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOceanologyLakePreset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOceanologyLakePreset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOceanologyWaterPreset,
	(UObject* (*)())Z_Construct_UPackage__Script_Oceanology_Plugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOceanologyLakePreset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOceanologyLakePreset_Statics::ClassParams = {
	&UOceanologyLakePreset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOceanologyLakePreset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOceanologyLakePreset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOceanologyLakePreset_Statics::Class_MetaDataParams), Z_Construct_UClass_UOceanologyLakePreset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOceanologyLakePreset()
{
	if (!Z_Registration_Info_UClass_UOceanologyLakePreset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOceanologyLakePreset.OuterSingleton, Z_Construct_UClass_UOceanologyLakePreset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOceanologyLakePreset.OuterSingleton;
}
template<> OCEANOLOGY_PLUGIN_API UClass* StaticClass<UOceanologyLakePreset>()
{
	return UOceanologyLakePreset::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOceanologyLakePreset);
UOceanologyLakePreset::~UOceanologyLakePreset() {}
// End Class UOceanologyLakePreset

// Begin Registration
struct Z_CompiledInDeferFile_FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_DataAsset_OceanologyLakePreset_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOceanologyLakePreset, UOceanologyLakePreset::StaticClass, TEXT("UOceanologyLakePreset"), &Z_Registration_Info_UClass_UOceanologyLakePreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOceanologyLakePreset), 1341830271U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_DataAsset_OceanologyLakePreset_h_585407048(TEXT("/Script/Oceanology_Plugin"),
	Z_CompiledInDeferFile_FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_DataAsset_OceanologyLakePreset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_DataAsset_OceanologyLakePreset_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
