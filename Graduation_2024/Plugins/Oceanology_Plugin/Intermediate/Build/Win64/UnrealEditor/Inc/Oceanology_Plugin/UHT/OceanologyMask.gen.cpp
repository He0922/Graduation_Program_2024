// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Oceanology_Plugin/Public/Structs/OceanologyMask.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOceanologyMask() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_UOceanologyMaskHelper();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_UOceanologyMaskHelper_NoRegister();
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyMask();
UPackage* Z_Construct_UPackage__Script_Oceanology_Plugin();
// End Cross Module References

// Begin ScriptStruct FOceanologyMask
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OceanologyMask;
class UScriptStruct* FOceanologyMask::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OceanologyMask.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OceanologyMask.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOceanologyMask, (UObject*)Z_Construct_UPackage__Script_Oceanology_Plugin(), TEXT("OceanologyMask"));
	}
	return Z_Registration_Info_UScriptStruct_OceanologyMask.OuterSingleton;
}
template<> OCEANOLOGY_PLUGIN_API UScriptStruct* StaticStruct<FOceanologyMask>()
{
	return FOceanologyMask::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOceanologyMask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * This is an auto-generated class from Material Parameters via AOceanologyMaterialToStructConverter. DO NOT EDIT BY HAND EVER! Your changes will be lost. Edit the material itself instead!\n * Generated at: 10 March 2024\n **/" },
#endif
		{ "ModuleRelativePath", "Public/Structs/OceanologyMask.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is an auto-generated class from Material Parameters via AOceanologyMaterialToStructConverter. DO NOT EDIT BY HAND EVER! Your changes will be lost. Edit the material itself instead!\nGenerated at: 10 March 2024" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeVisibilityMask_MetaData[] = {
		{ "Category", "Mask" },
		{ "ClampMax", "1.0" },
		{ "DisplayName", "LandscapeVisibilityMask" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyMask.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectVisibilityMask_MetaData[] = {
		{ "Category", "Mask" },
		{ "ClampMax", "1.0" },
		{ "DisplayName", "ObjectVisibilityMask" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyMask.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_LandscapeVisibilityMask;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ObjectVisibilityMask;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOceanologyMask>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyMask_Statics::NewProp_LandscapeVisibilityMask = { "LandscapeVisibilityMask", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyMask, LandscapeVisibilityMask), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandscapeVisibilityMask_MetaData), NewProp_LandscapeVisibilityMask_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyMask_Statics::NewProp_ObjectVisibilityMask = { "ObjectVisibilityMask", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyMask, ObjectVisibilityMask), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectVisibilityMask_MetaData), NewProp_ObjectVisibilityMask_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOceanologyMask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyMask_Statics::NewProp_LandscapeVisibilityMask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyMask_Statics::NewProp_ObjectVisibilityMask,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanologyMask_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOceanologyMask_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Oceanology_Plugin,
	nullptr,
	&NewStructOps,
	"OceanologyMask",
	Z_Construct_UScriptStruct_FOceanologyMask_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanologyMask_Statics::PropPointers),
	sizeof(FOceanologyMask),
	alignof(FOceanologyMask),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanologyMask_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOceanologyMask_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOceanologyMask()
{
	if (!Z_Registration_Info_UScriptStruct_OceanologyMask.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OceanologyMask.InnerSingleton, Z_Construct_UScriptStruct_FOceanologyMask_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OceanologyMask.InnerSingleton;
}
// End ScriptStruct FOceanologyMask

// Begin Class UOceanologyMaskHelper Function LerpMask
struct Z_Construct_UFunction_UOceanologyMaskHelper_LerpMask_Statics
{
	struct OceanologyMaskHelper_eventLerpMask_Parms
	{
		FOceanologyMask A;
		FOceanologyMask B;
		double Alpha;
		FOceanologyMask OutResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mask" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyMask.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyMaskHelper_LerpMask_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyMaskHelper_eventLerpMask_Parms, A), Z_Construct_UScriptStruct_FOceanologyMask, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 1049969195
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyMaskHelper_LerpMask_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyMaskHelper_eventLerpMask_Parms, B), Z_Construct_UScriptStruct_FOceanologyMask, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) }; // 1049969195
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UOceanologyMaskHelper_LerpMask_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyMaskHelper_eventLerpMask_Parms, Alpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Alpha_MetaData), NewProp_Alpha_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyMaskHelper_LerpMask_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyMaskHelper_eventLerpMask_Parms, OutResult), Z_Construct_UScriptStruct_FOceanologyMask, METADATA_PARAMS(0, nullptr) }; // 1049969195
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanologyMaskHelper_LerpMask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyMaskHelper_LerpMask_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyMaskHelper_LerpMask_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyMaskHelper_LerpMask_Statics::NewProp_Alpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyMaskHelper_LerpMask_Statics::NewProp_OutResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyMaskHelper_LerpMask_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologyMaskHelper_LerpMask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologyMaskHelper, nullptr, "LerpMask", nullptr, nullptr, Z_Construct_UFunction_UOceanologyMaskHelper_LerpMask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyMaskHelper_LerpMask_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOceanologyMaskHelper_LerpMask_Statics::OceanologyMaskHelper_eventLerpMask_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyMaskHelper_LerpMask_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologyMaskHelper_LerpMask_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOceanologyMaskHelper_LerpMask_Statics::OceanologyMaskHelper_eventLerpMask_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanologyMaskHelper_LerpMask()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologyMaskHelper_LerpMask_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologyMaskHelper::execLerpMask)
{
	P_GET_STRUCT_REF(FOceanologyMask,Z_Param_Out_A);
	P_GET_STRUCT_REF(FOceanologyMask,Z_Param_Out_B);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Alpha);
	P_GET_STRUCT_REF(FOceanologyMask,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOceanologyMaskHelper::LerpMask(Z_Param_Out_A,Z_Param_Out_B,Z_Param_Alpha,Z_Param_Out_OutResult);
	P_NATIVE_END;
}
// End Class UOceanologyMaskHelper Function LerpMask

// Begin Class UOceanologyMaskHelper Function SetMaterialParameters
struct Z_Construct_UFunction_UOceanologyMaskHelper_SetMaterialParameters_Statics
{
	struct OceanologyMaskHelper_eventSetMaterialParameters_Parms
	{
		UMaterialInstanceDynamic* MID;
		FOceanologyMask Mask;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mask" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyMask.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mask_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Mask;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOceanologyMaskHelper_SetMaterialParameters_Statics::NewProp_MID = { "MID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyMaskHelper_eventSetMaterialParameters_Parms, MID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyMaskHelper_SetMaterialParameters_Statics::NewProp_Mask = { "Mask", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyMaskHelper_eventSetMaterialParameters_Parms, Mask), Z_Construct_UScriptStruct_FOceanologyMask, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mask_MetaData), NewProp_Mask_MetaData) }; // 1049969195
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanologyMaskHelper_SetMaterialParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyMaskHelper_SetMaterialParameters_Statics::NewProp_MID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyMaskHelper_SetMaterialParameters_Statics::NewProp_Mask,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyMaskHelper_SetMaterialParameters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologyMaskHelper_SetMaterialParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologyMaskHelper, nullptr, "SetMaterialParameters", nullptr, nullptr, Z_Construct_UFunction_UOceanologyMaskHelper_SetMaterialParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyMaskHelper_SetMaterialParameters_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOceanologyMaskHelper_SetMaterialParameters_Statics::OceanologyMaskHelper_eventSetMaterialParameters_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyMaskHelper_SetMaterialParameters_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologyMaskHelper_SetMaterialParameters_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOceanologyMaskHelper_SetMaterialParameters_Statics::OceanologyMaskHelper_eventSetMaterialParameters_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanologyMaskHelper_SetMaterialParameters()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologyMaskHelper_SetMaterialParameters_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologyMaskHelper::execSetMaterialParameters)
{
	P_GET_OBJECT(UMaterialInstanceDynamic,Z_Param_MID);
	P_GET_STRUCT_REF(FOceanologyMask,Z_Param_Out_Mask);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOceanologyMaskHelper::SetMaterialParameters(Z_Param_MID,Z_Param_Out_Mask);
	P_NATIVE_END;
}
// End Class UOceanologyMaskHelper Function SetMaterialParameters

// Begin Class UOceanologyMaskHelper
void UOceanologyMaskHelper::StaticRegisterNativesUOceanologyMaskHelper()
{
	UClass* Class = UOceanologyMaskHelper::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "LerpMask", &UOceanologyMaskHelper::execLerpMask },
		{ "SetMaterialParameters", &UOceanologyMaskHelper::execSetMaterialParameters },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOceanologyMaskHelper);
UClass* Z_Construct_UClass_UOceanologyMaskHelper_NoRegister()
{
	return UOceanologyMaskHelper::StaticClass();
}
struct Z_Construct_UClass_UOceanologyMaskHelper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * This is an auto-generated class from Material Parameters via AOceanologyMaterialToStructConverter. DO NOT EDIT BY HAND EVER! Your changes will be lost. Edit the material itself instead!\n * Generated at: 10 March 2024\n **/" },
#endif
		{ "IncludePath", "Structs/OceanologyMask.h" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyMask.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is an auto-generated class from Material Parameters via AOceanologyMaterialToStructConverter. DO NOT EDIT BY HAND EVER! Your changes will be lost. Edit the material itself instead!\nGenerated at: 10 March 2024" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOceanologyMaskHelper_LerpMask, "LerpMask" }, // 3882925926
		{ &Z_Construct_UFunction_UOceanologyMaskHelper_SetMaterialParameters, "SetMaterialParameters" }, // 373130726
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOceanologyMaskHelper>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOceanologyMaskHelper_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Oceanology_Plugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOceanologyMaskHelper_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOceanologyMaskHelper_Statics::ClassParams = {
	&UOceanologyMaskHelper::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOceanologyMaskHelper_Statics::Class_MetaDataParams), Z_Construct_UClass_UOceanologyMaskHelper_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOceanologyMaskHelper()
{
	if (!Z_Registration_Info_UClass_UOceanologyMaskHelper.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOceanologyMaskHelper.OuterSingleton, Z_Construct_UClass_UOceanologyMaskHelper_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOceanologyMaskHelper.OuterSingleton;
}
template<> OCEANOLOGY_PLUGIN_API UClass* StaticClass<UOceanologyMaskHelper>()
{
	return UOceanologyMaskHelper::StaticClass();
}
UOceanologyMaskHelper::UOceanologyMaskHelper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOceanologyMaskHelper);
UOceanologyMaskHelper::~UOceanologyMaskHelper() {}
// End Class UOceanologyMaskHelper

// Begin Registration
struct Z_CompiledInDeferFile_FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyMask_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOceanologyMask::StaticStruct, Z_Construct_UScriptStruct_FOceanologyMask_Statics::NewStructOps, TEXT("OceanologyMask"), &Z_Registration_Info_UScriptStruct_OceanologyMask, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOceanologyMask), 1049969195U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOceanologyMaskHelper, UOceanologyMaskHelper::StaticClass, TEXT("UOceanologyMaskHelper"), &Z_Registration_Info_UClass_UOceanologyMaskHelper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOceanologyMaskHelper), 942682120U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyMask_h_2891557843(TEXT("/Script/Oceanology_Plugin"),
	Z_CompiledInDeferFile_FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyMask_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyMask_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyMask_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyMask_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
