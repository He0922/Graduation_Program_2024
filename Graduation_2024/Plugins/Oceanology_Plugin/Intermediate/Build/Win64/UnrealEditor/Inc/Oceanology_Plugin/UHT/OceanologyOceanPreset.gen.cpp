// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Oceanology_Plugin/Public/DataAsset/OceanologyOceanPreset.h"
#include "Oceanology_Plugin/Public/Structs/OceanologyOceanPresetResult.h"
#include "Oceanology_Plugin/Public/Structs/OceanologyWaterPresetResult.h"
#include "Oceanology_Plugin/Public/Structs/OceanologyWetness.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOceanologyOceanPreset() {}

// Begin Cross Module References
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_UOceanologyOceanPreset();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_UOceanologyOceanPreset_NoRegister();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_UOceanologyWaterPreset();
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyOceanPresetResult();
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyWaterPresetResult();
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyWetness();
UPackage* Z_Construct_UPackage__Script_Oceanology_Plugin();
// End Cross Module References

// Begin Class UOceanologyOceanPreset Function LerpPreset
struct Z_Construct_UFunction_UOceanologyOceanPreset_LerpPreset_Statics
{
	struct OceanologyOceanPreset_eventLerpPreset_Parms
	{
		const UOceanologyOceanPreset* A;
		const UOceanologyOceanPreset* B;
		double Alpha;
		FOceanologyWaterPresetResult OutWaterPresetResult;
		FOceanologyOceanPresetResult OutOceanPresetResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ocean Preset" },
		{ "ModuleRelativePath", "Public/DataAsset/OceanologyOceanPreset.h" },
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
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutOceanPresetResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOceanologyOceanPreset_LerpPreset_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyOceanPreset_eventLerpPreset_Parms, A), Z_Construct_UClass_UOceanologyOceanPreset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOceanologyOceanPreset_LerpPreset_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyOceanPreset_eventLerpPreset_Parms, B), Z_Construct_UClass_UOceanologyOceanPreset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UOceanologyOceanPreset_LerpPreset_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyOceanPreset_eventLerpPreset_Parms, Alpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Alpha_MetaData), NewProp_Alpha_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyOceanPreset_LerpPreset_Statics::NewProp_OutWaterPresetResult = { "OutWaterPresetResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyOceanPreset_eventLerpPreset_Parms, OutWaterPresetResult), Z_Construct_UScriptStruct_FOceanologyWaterPresetResult, METADATA_PARAMS(0, nullptr) }; // 1369265139
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyOceanPreset_LerpPreset_Statics::NewProp_OutOceanPresetResult = { "OutOceanPresetResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyOceanPreset_eventLerpPreset_Parms, OutOceanPresetResult), Z_Construct_UScriptStruct_FOceanologyOceanPresetResult, METADATA_PARAMS(0, nullptr) }; // 3964374628
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanologyOceanPreset_LerpPreset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyOceanPreset_LerpPreset_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyOceanPreset_LerpPreset_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyOceanPreset_LerpPreset_Statics::NewProp_Alpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyOceanPreset_LerpPreset_Statics::NewProp_OutWaterPresetResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyOceanPreset_LerpPreset_Statics::NewProp_OutOceanPresetResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyOceanPreset_LerpPreset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologyOceanPreset_LerpPreset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologyOceanPreset, nullptr, "LerpPreset", nullptr, nullptr, Z_Construct_UFunction_UOceanologyOceanPreset_LerpPreset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyOceanPreset_LerpPreset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOceanologyOceanPreset_LerpPreset_Statics::OceanologyOceanPreset_eventLerpPreset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyOceanPreset_LerpPreset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologyOceanPreset_LerpPreset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOceanologyOceanPreset_LerpPreset_Statics::OceanologyOceanPreset_eventLerpPreset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanologyOceanPreset_LerpPreset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologyOceanPreset_LerpPreset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologyOceanPreset::execLerpPreset)
{
	P_GET_OBJECT(UOceanologyOceanPreset,Z_Param_A);
	P_GET_OBJECT(UOceanologyOceanPreset,Z_Param_B);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Alpha);
	P_GET_STRUCT_REF(FOceanologyWaterPresetResult,Z_Param_Out_OutWaterPresetResult);
	P_GET_STRUCT_REF(FOceanologyOceanPresetResult,Z_Param_Out_OutOceanPresetResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOceanologyOceanPreset::LerpPreset(Z_Param_A,Z_Param_B,Z_Param_Alpha,Z_Param_Out_OutWaterPresetResult,Z_Param_Out_OutOceanPresetResult);
	P_NATIVE_END;
}
// End Class UOceanologyOceanPreset Function LerpPreset

// Begin Class UOceanologyOceanPreset
void UOceanologyOceanPreset::StaticRegisterNativesUOceanologyOceanPreset()
{
	UClass* Class = UOceanologyOceanPreset::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "LerpPreset", &UOceanologyOceanPreset::execLerpPreset },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOceanologyOceanPreset);
UClass* Z_Construct_UClass_UOceanologyOceanPreset_NoRegister()
{
	return UOceanologyOceanPreset::StaticClass();
}
struct Z_Construct_UClass_UOceanologyOceanPreset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DataAsset/OceanologyOceanPreset.h" },
		{ "ModuleRelativePath", "Public/DataAsset/OceanologyOceanPreset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableWetness_MetaData[] = {
		{ "Category", "Shoreline Wetness" },
		{ "ModuleRelativePath", "Public/DataAsset/OceanologyOceanPreset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Wetness_MetaData[] = {
		{ "Category", "Shoreline Wetness" },
		{ "ModuleRelativePath", "Public/DataAsset/OceanologyOceanPreset.h" },
	};
#endif // WITH_METADATA
	static void NewProp_EnableWetness_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableWetness;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Wetness;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOceanologyOceanPreset_LerpPreset, "LerpPreset" }, // 4224823120
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOceanologyOceanPreset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UOceanologyOceanPreset_Statics::NewProp_EnableWetness_SetBit(void* Obj)
{
	((UOceanologyOceanPreset*)Obj)->EnableWetness = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOceanologyOceanPreset_Statics::NewProp_EnableWetness = { "EnableWetness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOceanologyOceanPreset), &Z_Construct_UClass_UOceanologyOceanPreset_Statics::NewProp_EnableWetness_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableWetness_MetaData), NewProp_EnableWetness_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOceanologyOceanPreset_Statics::NewProp_Wetness = { "Wetness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyOceanPreset, Wetness), Z_Construct_UScriptStruct_FOceanologyWetness, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Wetness_MetaData), NewProp_Wetness_MetaData) }; // 2569763290
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOceanologyOceanPreset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyOceanPreset_Statics::NewProp_EnableWetness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyOceanPreset_Statics::NewProp_Wetness,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOceanologyOceanPreset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOceanologyOceanPreset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOceanologyWaterPreset,
	(UObject* (*)())Z_Construct_UPackage__Script_Oceanology_Plugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOceanologyOceanPreset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOceanologyOceanPreset_Statics::ClassParams = {
	&UOceanologyOceanPreset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOceanologyOceanPreset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOceanologyOceanPreset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOceanologyOceanPreset_Statics::Class_MetaDataParams), Z_Construct_UClass_UOceanologyOceanPreset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOceanologyOceanPreset()
{
	if (!Z_Registration_Info_UClass_UOceanologyOceanPreset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOceanologyOceanPreset.OuterSingleton, Z_Construct_UClass_UOceanologyOceanPreset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOceanologyOceanPreset.OuterSingleton;
}
template<> OCEANOLOGY_PLUGIN_API UClass* StaticClass<UOceanologyOceanPreset>()
{
	return UOceanologyOceanPreset::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOceanologyOceanPreset);
UOceanologyOceanPreset::~UOceanologyOceanPreset() {}
// End Class UOceanologyOceanPreset

// Begin Registration
struct Z_CompiledInDeferFile_FID_BS_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_DataAsset_OceanologyOceanPreset_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOceanologyOceanPreset, UOceanologyOceanPreset::StaticClass, TEXT("UOceanologyOceanPreset"), &Z_Registration_Info_UClass_UOceanologyOceanPreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOceanologyOceanPreset), 2047238156U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BS_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_DataAsset_OceanologyOceanPreset_h_2792787702(TEXT("/Script/Oceanology_Plugin"),
	Z_CompiledInDeferFile_FID_BS_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_DataAsset_OceanologyOceanPreset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BS_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_DataAsset_OceanologyOceanPreset_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
