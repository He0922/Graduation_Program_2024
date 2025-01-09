// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Oceanology_Plugin/Public/Structs/OceanologyGGX.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOceanologyGGX() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_UOceanologyGGXHelper();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_UOceanologyGGXHelper_NoRegister();
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyGGX();
UPackage* Z_Construct_UPackage__Script_Oceanology_Plugin();
// End Cross Module References

// Begin ScriptStruct FOceanologyGGX
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OceanologyGGX;
class UScriptStruct* FOceanologyGGX::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OceanologyGGX.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OceanologyGGX.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOceanologyGGX, (UObject*)Z_Construct_UPackage__Script_Oceanology_Plugin(), TEXT("OceanologyGGX"));
	}
	return Z_Registration_Info_UScriptStruct_OceanologyGGX.OuterSingleton;
}
template<> OCEANOLOGY_PLUGIN_API UScriptStruct* StaticStruct<FOceanologyGGX>()
{
	return FOceanologyGGX::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOceanologyGGX_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * This is an auto-generated class from Material Parameters via AOceanologyMaterialToStructConverter. DO NOT EDIT BY HAND EVER! Your changes will be lost. Edit the material itself instead!\n * Generated at: 10 March 2024\n **/" },
#endif
		{ "ModuleRelativePath", "Public/Structs/OceanologyGGX.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is an auto-generated class from Material Parameters via AOceanologyMaterialToStructConverter. DO NOT EDIT BY HAND EVER! Your changes will be lost. Edit the material itself instead!\nGenerated at: 10 March 2024" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GGX_MetaData[] = {
		{ "Category", "GGX" },
		{ "DisplayName", "GGX" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyGGX.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhongReflection_MetaData[] = {
		{ "Category", "GGX" },
		{ "DisplayName", "Phong Reflection" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyGGX.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SunReflectionAmount_MetaData[] = {
		{ "Category", "GGX" },
		{ "DisplayName", "Sun Reflection Amount" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyGGX.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_GGX;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_PhongReflection;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_SunReflectionAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOceanologyGGX>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyGGX_Statics::NewProp_GGX = { "GGX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyGGX, GGX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GGX_MetaData), NewProp_GGX_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyGGX_Statics::NewProp_PhongReflection = { "PhongReflection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyGGX, PhongReflection), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhongReflection_MetaData), NewProp_PhongReflection_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyGGX_Statics::NewProp_SunReflectionAmount = { "SunReflectionAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyGGX, SunReflectionAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SunReflectionAmount_MetaData), NewProp_SunReflectionAmount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOceanologyGGX_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyGGX_Statics::NewProp_GGX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyGGX_Statics::NewProp_PhongReflection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyGGX_Statics::NewProp_SunReflectionAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanologyGGX_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOceanologyGGX_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Oceanology_Plugin,
	nullptr,
	&NewStructOps,
	"OceanologyGGX",
	Z_Construct_UScriptStruct_FOceanologyGGX_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanologyGGX_Statics::PropPointers),
	sizeof(FOceanologyGGX),
	alignof(FOceanologyGGX),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanologyGGX_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOceanologyGGX_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOceanologyGGX()
{
	if (!Z_Registration_Info_UScriptStruct_OceanologyGGX.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OceanologyGGX.InnerSingleton, Z_Construct_UScriptStruct_FOceanologyGGX_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OceanologyGGX.InnerSingleton;
}
// End ScriptStruct FOceanologyGGX

// Begin Class UOceanologyGGXHelper Function LerpGGX
struct Z_Construct_UFunction_UOceanologyGGXHelper_LerpGGX_Statics
{
	struct OceanologyGGXHelper_eventLerpGGX_Parms
	{
		FOceanologyGGX A;
		FOceanologyGGX B;
		double Alpha;
		FOceanologyGGX OutResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GGX" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyGGX.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyGGXHelper_LerpGGX_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyGGXHelper_eventLerpGGX_Parms, A), Z_Construct_UScriptStruct_FOceanologyGGX, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 4287862550
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyGGXHelper_LerpGGX_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyGGXHelper_eventLerpGGX_Parms, B), Z_Construct_UScriptStruct_FOceanologyGGX, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) }; // 4287862550
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UOceanologyGGXHelper_LerpGGX_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyGGXHelper_eventLerpGGX_Parms, Alpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Alpha_MetaData), NewProp_Alpha_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyGGXHelper_LerpGGX_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyGGXHelper_eventLerpGGX_Parms, OutResult), Z_Construct_UScriptStruct_FOceanologyGGX, METADATA_PARAMS(0, nullptr) }; // 4287862550
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanologyGGXHelper_LerpGGX_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyGGXHelper_LerpGGX_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyGGXHelper_LerpGGX_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyGGXHelper_LerpGGX_Statics::NewProp_Alpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyGGXHelper_LerpGGX_Statics::NewProp_OutResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyGGXHelper_LerpGGX_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologyGGXHelper_LerpGGX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologyGGXHelper, nullptr, "LerpGGX", nullptr, nullptr, Z_Construct_UFunction_UOceanologyGGXHelper_LerpGGX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyGGXHelper_LerpGGX_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOceanologyGGXHelper_LerpGGX_Statics::OceanologyGGXHelper_eventLerpGGX_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyGGXHelper_LerpGGX_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologyGGXHelper_LerpGGX_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOceanologyGGXHelper_LerpGGX_Statics::OceanologyGGXHelper_eventLerpGGX_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanologyGGXHelper_LerpGGX()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologyGGXHelper_LerpGGX_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologyGGXHelper::execLerpGGX)
{
	P_GET_STRUCT_REF(FOceanologyGGX,Z_Param_Out_A);
	P_GET_STRUCT_REF(FOceanologyGGX,Z_Param_Out_B);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Alpha);
	P_GET_STRUCT_REF(FOceanologyGGX,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOceanologyGGXHelper::LerpGGX(Z_Param_Out_A,Z_Param_Out_B,Z_Param_Alpha,Z_Param_Out_OutResult);
	P_NATIVE_END;
}
// End Class UOceanologyGGXHelper Function LerpGGX

// Begin Class UOceanologyGGXHelper Function SetMaterialParameters
struct Z_Construct_UFunction_UOceanologyGGXHelper_SetMaterialParameters_Statics
{
	struct OceanologyGGXHelper_eventSetMaterialParameters_Parms
	{
		UMaterialInstanceDynamic* MID;
		FOceanologyGGX GGX;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GGX" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyGGX.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GGX_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GGX;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOceanologyGGXHelper_SetMaterialParameters_Statics::NewProp_MID = { "MID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyGGXHelper_eventSetMaterialParameters_Parms, MID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyGGXHelper_SetMaterialParameters_Statics::NewProp_GGX = { "GGX", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyGGXHelper_eventSetMaterialParameters_Parms, GGX), Z_Construct_UScriptStruct_FOceanologyGGX, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GGX_MetaData), NewProp_GGX_MetaData) }; // 4287862550
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanologyGGXHelper_SetMaterialParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyGGXHelper_SetMaterialParameters_Statics::NewProp_MID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyGGXHelper_SetMaterialParameters_Statics::NewProp_GGX,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyGGXHelper_SetMaterialParameters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologyGGXHelper_SetMaterialParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologyGGXHelper, nullptr, "SetMaterialParameters", nullptr, nullptr, Z_Construct_UFunction_UOceanologyGGXHelper_SetMaterialParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyGGXHelper_SetMaterialParameters_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOceanologyGGXHelper_SetMaterialParameters_Statics::OceanologyGGXHelper_eventSetMaterialParameters_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyGGXHelper_SetMaterialParameters_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologyGGXHelper_SetMaterialParameters_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOceanologyGGXHelper_SetMaterialParameters_Statics::OceanologyGGXHelper_eventSetMaterialParameters_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanologyGGXHelper_SetMaterialParameters()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologyGGXHelper_SetMaterialParameters_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologyGGXHelper::execSetMaterialParameters)
{
	P_GET_OBJECT(UMaterialInstanceDynamic,Z_Param_MID);
	P_GET_STRUCT_REF(FOceanologyGGX,Z_Param_Out_GGX);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOceanologyGGXHelper::SetMaterialParameters(Z_Param_MID,Z_Param_Out_GGX);
	P_NATIVE_END;
}
// End Class UOceanologyGGXHelper Function SetMaterialParameters

// Begin Class UOceanologyGGXHelper
void UOceanologyGGXHelper::StaticRegisterNativesUOceanologyGGXHelper()
{
	UClass* Class = UOceanologyGGXHelper::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "LerpGGX", &UOceanologyGGXHelper::execLerpGGX },
		{ "SetMaterialParameters", &UOceanologyGGXHelper::execSetMaterialParameters },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOceanologyGGXHelper);
UClass* Z_Construct_UClass_UOceanologyGGXHelper_NoRegister()
{
	return UOceanologyGGXHelper::StaticClass();
}
struct Z_Construct_UClass_UOceanologyGGXHelper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * This is an auto-generated class from Material Parameters via AOceanologyMaterialToStructConverter. DO NOT EDIT BY HAND EVER! Your changes will be lost. Edit the material itself instead!\n * Generated at: 10 March 2024\n **/" },
#endif
		{ "IncludePath", "Structs/OceanologyGGX.h" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyGGX.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is an auto-generated class from Material Parameters via AOceanologyMaterialToStructConverter. DO NOT EDIT BY HAND EVER! Your changes will be lost. Edit the material itself instead!\nGenerated at: 10 March 2024" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOceanologyGGXHelper_LerpGGX, "LerpGGX" }, // 1193482008
		{ &Z_Construct_UFunction_UOceanologyGGXHelper_SetMaterialParameters, "SetMaterialParameters" }, // 245697401
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOceanologyGGXHelper>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOceanologyGGXHelper_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Oceanology_Plugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOceanologyGGXHelper_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOceanologyGGXHelper_Statics::ClassParams = {
	&UOceanologyGGXHelper::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOceanologyGGXHelper_Statics::Class_MetaDataParams), Z_Construct_UClass_UOceanologyGGXHelper_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOceanologyGGXHelper()
{
	if (!Z_Registration_Info_UClass_UOceanologyGGXHelper.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOceanologyGGXHelper.OuterSingleton, Z_Construct_UClass_UOceanologyGGXHelper_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOceanologyGGXHelper.OuterSingleton;
}
template<> OCEANOLOGY_PLUGIN_API UClass* StaticClass<UOceanologyGGXHelper>()
{
	return UOceanologyGGXHelper::StaticClass();
}
UOceanologyGGXHelper::UOceanologyGGXHelper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOceanologyGGXHelper);
UOceanologyGGXHelper::~UOceanologyGGXHelper() {}
// End Class UOceanologyGGXHelper

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEDocument_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyGGX_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOceanologyGGX::StaticStruct, Z_Construct_UScriptStruct_FOceanologyGGX_Statics::NewStructOps, TEXT("OceanologyGGX"), &Z_Registration_Info_UScriptStruct_OceanologyGGX, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOceanologyGGX), 4287862550U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOceanologyGGXHelper, UOceanologyGGXHelper::StaticClass, TEXT("UOceanologyGGXHelper"), &Z_Registration_Info_UClass_UOceanologyGGXHelper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOceanologyGGXHelper), 1003096393U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEDocument_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyGGX_h_882980193(TEXT("/Script/Oceanology_Plugin"),
	Z_CompiledInDeferFile_FID_UEDocument_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyGGX_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEDocument_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyGGX_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UEDocument_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyGGX_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEDocument_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyGGX_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
