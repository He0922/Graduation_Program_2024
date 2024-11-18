// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Oceanology_Plugin/Public/Structs/OceanologyProcedural.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOceanologyProcedural() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_UOceanologyProceduralHelper();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_UOceanologyProceduralHelper_NoRegister();
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyProcedural();
UPackage* Z_Construct_UPackage__Script_Oceanology_Plugin();
// End Cross Module References

// Begin ScriptStruct FOceanologyProcedural
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OceanologyProcedural;
class UScriptStruct* FOceanologyProcedural::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OceanologyProcedural.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OceanologyProcedural.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOceanologyProcedural, (UObject*)Z_Construct_UPackage__Script_Oceanology_Plugin(), TEXT("OceanologyProcedural"));
	}
	return Z_Registration_Info_UScriptStruct_OceanologyProcedural.OuterSingleton;
}
template<> OCEANOLOGY_PLUGIN_API UScriptStruct* StaticStruct<FOceanologyProcedural>()
{
	return FOceanologyProcedural::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOceanologyProcedural_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * This is an auto-generated class from Material Parameters via AOceanologyMaterialToStructConverter. DO NOT EDIT BY HAND EVER! Your changes will be lost. Edit the material itself instead!\n * Generated at: 10 March 2024\n **/" },
#endif
		{ "ModuleRelativePath", "Public/Structs/OceanologyProcedural.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is an auto-generated class from Material Parameters via AOceanologyMaterialToStructConverter. DO NOT EDIT BY HAND EVER! Your changes will be lost. Edit the material itself instead!\nGenerated at: 10 March 2024" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoiseTiling_MetaData[] = {
		{ "Category", "Procedural" },
		{ "DisplayName", "NoiseTiling" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyProcedural.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Turbulance_MetaData[] = {
		{ "Category", "Procedural" },
		{ "DisplayName", "Turbulance" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyProcedural.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_NoiseTiling;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Turbulance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOceanologyProcedural>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyProcedural_Statics::NewProp_NoiseTiling = { "NoiseTiling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyProcedural, NoiseTiling), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoiseTiling_MetaData), NewProp_NoiseTiling_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyProcedural_Statics::NewProp_Turbulance = { "Turbulance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyProcedural, Turbulance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Turbulance_MetaData), NewProp_Turbulance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOceanologyProcedural_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyProcedural_Statics::NewProp_NoiseTiling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyProcedural_Statics::NewProp_Turbulance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanologyProcedural_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOceanologyProcedural_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Oceanology_Plugin,
	nullptr,
	&NewStructOps,
	"OceanologyProcedural",
	Z_Construct_UScriptStruct_FOceanologyProcedural_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanologyProcedural_Statics::PropPointers),
	sizeof(FOceanologyProcedural),
	alignof(FOceanologyProcedural),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanologyProcedural_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOceanologyProcedural_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOceanologyProcedural()
{
	if (!Z_Registration_Info_UScriptStruct_OceanologyProcedural.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OceanologyProcedural.InnerSingleton, Z_Construct_UScriptStruct_FOceanologyProcedural_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OceanologyProcedural.InnerSingleton;
}
// End ScriptStruct FOceanologyProcedural

// Begin Class UOceanologyProceduralHelper Function LerpProcedural
struct Z_Construct_UFunction_UOceanologyProceduralHelper_LerpProcedural_Statics
{
	struct OceanologyProceduralHelper_eventLerpProcedural_Parms
	{
		FOceanologyProcedural A;
		FOceanologyProcedural B;
		double Alpha;
		FOceanologyProcedural OutResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Procedural" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyProcedural.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyProceduralHelper_LerpProcedural_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyProceduralHelper_eventLerpProcedural_Parms, A), Z_Construct_UScriptStruct_FOceanologyProcedural, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 4058591009
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyProceduralHelper_LerpProcedural_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyProceduralHelper_eventLerpProcedural_Parms, B), Z_Construct_UScriptStruct_FOceanologyProcedural, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) }; // 4058591009
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UOceanologyProceduralHelper_LerpProcedural_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyProceduralHelper_eventLerpProcedural_Parms, Alpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Alpha_MetaData), NewProp_Alpha_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyProceduralHelper_LerpProcedural_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyProceduralHelper_eventLerpProcedural_Parms, OutResult), Z_Construct_UScriptStruct_FOceanologyProcedural, METADATA_PARAMS(0, nullptr) }; // 4058591009
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanologyProceduralHelper_LerpProcedural_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyProceduralHelper_LerpProcedural_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyProceduralHelper_LerpProcedural_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyProceduralHelper_LerpProcedural_Statics::NewProp_Alpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyProceduralHelper_LerpProcedural_Statics::NewProp_OutResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyProceduralHelper_LerpProcedural_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologyProceduralHelper_LerpProcedural_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologyProceduralHelper, nullptr, "LerpProcedural", nullptr, nullptr, Z_Construct_UFunction_UOceanologyProceduralHelper_LerpProcedural_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyProceduralHelper_LerpProcedural_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOceanologyProceduralHelper_LerpProcedural_Statics::OceanologyProceduralHelper_eventLerpProcedural_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyProceduralHelper_LerpProcedural_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologyProceduralHelper_LerpProcedural_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOceanologyProceduralHelper_LerpProcedural_Statics::OceanologyProceduralHelper_eventLerpProcedural_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanologyProceduralHelper_LerpProcedural()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologyProceduralHelper_LerpProcedural_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologyProceduralHelper::execLerpProcedural)
{
	P_GET_STRUCT_REF(FOceanologyProcedural,Z_Param_Out_A);
	P_GET_STRUCT_REF(FOceanologyProcedural,Z_Param_Out_B);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Alpha);
	P_GET_STRUCT_REF(FOceanologyProcedural,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOceanologyProceduralHelper::LerpProcedural(Z_Param_Out_A,Z_Param_Out_B,Z_Param_Alpha,Z_Param_Out_OutResult);
	P_NATIVE_END;
}
// End Class UOceanologyProceduralHelper Function LerpProcedural

// Begin Class UOceanologyProceduralHelper Function SetMaterialParameters
struct Z_Construct_UFunction_UOceanologyProceduralHelper_SetMaterialParameters_Statics
{
	struct OceanologyProceduralHelper_eventSetMaterialParameters_Parms
	{
		UMaterialInstanceDynamic* MID;
		FOceanologyProcedural Procedural;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Procedural" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyProcedural.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Procedural_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Procedural;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOceanologyProceduralHelper_SetMaterialParameters_Statics::NewProp_MID = { "MID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyProceduralHelper_eventSetMaterialParameters_Parms, MID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyProceduralHelper_SetMaterialParameters_Statics::NewProp_Procedural = { "Procedural", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyProceduralHelper_eventSetMaterialParameters_Parms, Procedural), Z_Construct_UScriptStruct_FOceanologyProcedural, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Procedural_MetaData), NewProp_Procedural_MetaData) }; // 4058591009
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanologyProceduralHelper_SetMaterialParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyProceduralHelper_SetMaterialParameters_Statics::NewProp_MID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyProceduralHelper_SetMaterialParameters_Statics::NewProp_Procedural,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyProceduralHelper_SetMaterialParameters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologyProceduralHelper_SetMaterialParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologyProceduralHelper, nullptr, "SetMaterialParameters", nullptr, nullptr, Z_Construct_UFunction_UOceanologyProceduralHelper_SetMaterialParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyProceduralHelper_SetMaterialParameters_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOceanologyProceduralHelper_SetMaterialParameters_Statics::OceanologyProceduralHelper_eventSetMaterialParameters_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyProceduralHelper_SetMaterialParameters_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologyProceduralHelper_SetMaterialParameters_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOceanologyProceduralHelper_SetMaterialParameters_Statics::OceanologyProceduralHelper_eventSetMaterialParameters_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanologyProceduralHelper_SetMaterialParameters()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologyProceduralHelper_SetMaterialParameters_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologyProceduralHelper::execSetMaterialParameters)
{
	P_GET_OBJECT(UMaterialInstanceDynamic,Z_Param_MID);
	P_GET_STRUCT_REF(FOceanologyProcedural,Z_Param_Out_Procedural);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOceanologyProceduralHelper::SetMaterialParameters(Z_Param_MID,Z_Param_Out_Procedural);
	P_NATIVE_END;
}
// End Class UOceanologyProceduralHelper Function SetMaterialParameters

// Begin Class UOceanologyProceduralHelper
void UOceanologyProceduralHelper::StaticRegisterNativesUOceanologyProceduralHelper()
{
	UClass* Class = UOceanologyProceduralHelper::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "LerpProcedural", &UOceanologyProceduralHelper::execLerpProcedural },
		{ "SetMaterialParameters", &UOceanologyProceduralHelper::execSetMaterialParameters },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOceanologyProceduralHelper);
UClass* Z_Construct_UClass_UOceanologyProceduralHelper_NoRegister()
{
	return UOceanologyProceduralHelper::StaticClass();
}
struct Z_Construct_UClass_UOceanologyProceduralHelper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * This is an auto-generated class from Material Parameters via AOceanologyMaterialToStructConverter. DO NOT EDIT BY HAND EVER! Your changes will be lost. Edit the material itself instead!\n * Generated at: 10 March 2024\n **/" },
#endif
		{ "IncludePath", "Structs/OceanologyProcedural.h" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyProcedural.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is an auto-generated class from Material Parameters via AOceanologyMaterialToStructConverter. DO NOT EDIT BY HAND EVER! Your changes will be lost. Edit the material itself instead!\nGenerated at: 10 March 2024" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOceanologyProceduralHelper_LerpProcedural, "LerpProcedural" }, // 2336897750
		{ &Z_Construct_UFunction_UOceanologyProceduralHelper_SetMaterialParameters, "SetMaterialParameters" }, // 3692973241
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOceanologyProceduralHelper>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOceanologyProceduralHelper_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Oceanology_Plugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOceanologyProceduralHelper_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOceanologyProceduralHelper_Statics::ClassParams = {
	&UOceanologyProceduralHelper::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOceanologyProceduralHelper_Statics::Class_MetaDataParams), Z_Construct_UClass_UOceanologyProceduralHelper_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOceanologyProceduralHelper()
{
	if (!Z_Registration_Info_UClass_UOceanologyProceduralHelper.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOceanologyProceduralHelper.OuterSingleton, Z_Construct_UClass_UOceanologyProceduralHelper_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOceanologyProceduralHelper.OuterSingleton;
}
template<> OCEANOLOGY_PLUGIN_API UClass* StaticClass<UOceanologyProceduralHelper>()
{
	return UOceanologyProceduralHelper::StaticClass();
}
UOceanologyProceduralHelper::UOceanologyProceduralHelper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOceanologyProceduralHelper);
UOceanologyProceduralHelper::~UOceanologyProceduralHelper() {}
// End Class UOceanologyProceduralHelper

// Begin Registration
struct Z_CompiledInDeferFile_FID_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyProcedural_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOceanologyProcedural::StaticStruct, Z_Construct_UScriptStruct_FOceanologyProcedural_Statics::NewStructOps, TEXT("OceanologyProcedural"), &Z_Registration_Info_UScriptStruct_OceanologyProcedural, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOceanologyProcedural), 4058591009U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOceanologyProceduralHelper, UOceanologyProceduralHelper::StaticClass, TEXT("UOceanologyProceduralHelper"), &Z_Registration_Info_UClass_UOceanologyProceduralHelper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOceanologyProceduralHelper), 2852198048U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyProcedural_h_1352613727(TEXT("/Script/Oceanology_Plugin"),
	Z_CompiledInDeferFile_FID_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyProcedural_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyProcedural_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyProcedural_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyProcedural_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
