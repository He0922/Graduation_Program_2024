// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Oceanology_Plugin/Public/Structs/OceanologyActorHeight.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOceanologyActorHeight() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_UOceanologyActorHeightHelper();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_UOceanologyActorHeightHelper_NoRegister();
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyActorHeight();
UPackage* Z_Construct_UPackage__Script_Oceanology_Plugin();
// End Cross Module References

// Begin ScriptStruct FOceanologyActorHeight
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OceanologyActorHeight;
class UScriptStruct* FOceanologyActorHeight::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OceanologyActorHeight.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OceanologyActorHeight.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOceanologyActorHeight, (UObject*)Z_Construct_UPackage__Script_Oceanology_Plugin(), TEXT("OceanologyActorHeight"));
	}
	return Z_Registration_Info_UScriptStruct_OceanologyActorHeight.OuterSingleton;
}
template<> OCEANOLOGY_PLUGIN_API UScriptStruct* StaticStruct<FOceanologyActorHeight>()
{
	return FOceanologyActorHeight::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOceanologyActorHeight_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * This is an auto-generated class from Material Parameters via AOceanologyMaterialToStructConverter. DO NOT EDIT BY HAND EVER! Your changes will be lost. Edit the material itself instead!\n * Generated at: 10 March 2024\n **/" },
#endif
		{ "ModuleRelativePath", "Public/Structs/OceanologyActorHeight.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is an auto-generated class from Material Parameters via AOceanologyMaterialToStructConverter. DO NOT EDIT BY HAND EVER! Your changes will be lost. Edit the material itself instead!\nGenerated at: 10 March 2024" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationOffset_MetaData[] = {
		{ "Category", "Actor Height" },
		{ "DisplayName", "LocationOffset" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyActorHeight.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocationOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOceanologyActorHeight>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOceanologyActorHeight_Statics::NewProp_LocationOffset = { "LocationOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyActorHeight, LocationOffset), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationOffset_MetaData), NewProp_LocationOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOceanologyActorHeight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyActorHeight_Statics::NewProp_LocationOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanologyActorHeight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOceanologyActorHeight_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Oceanology_Plugin,
	nullptr,
	&NewStructOps,
	"OceanologyActorHeight",
	Z_Construct_UScriptStruct_FOceanologyActorHeight_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanologyActorHeight_Statics::PropPointers),
	sizeof(FOceanologyActorHeight),
	alignof(FOceanologyActorHeight),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanologyActorHeight_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOceanologyActorHeight_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOceanologyActorHeight()
{
	if (!Z_Registration_Info_UScriptStruct_OceanologyActorHeight.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OceanologyActorHeight.InnerSingleton, Z_Construct_UScriptStruct_FOceanologyActorHeight_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OceanologyActorHeight.InnerSingleton;
}
// End ScriptStruct FOceanologyActorHeight

// Begin Class UOceanologyActorHeightHelper Function LerpActorHeight
struct Z_Construct_UFunction_UOceanologyActorHeightHelper_LerpActorHeight_Statics
{
	struct OceanologyActorHeightHelper_eventLerpActorHeight_Parms
	{
		FOceanologyActorHeight A;
		FOceanologyActorHeight B;
		double Alpha;
		FOceanologyActorHeight OutResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ActorHeight" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyActorHeight.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyActorHeightHelper_LerpActorHeight_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyActorHeightHelper_eventLerpActorHeight_Parms, A), Z_Construct_UScriptStruct_FOceanologyActorHeight, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 600064430
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyActorHeightHelper_LerpActorHeight_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyActorHeightHelper_eventLerpActorHeight_Parms, B), Z_Construct_UScriptStruct_FOceanologyActorHeight, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) }; // 600064430
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UOceanologyActorHeightHelper_LerpActorHeight_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyActorHeightHelper_eventLerpActorHeight_Parms, Alpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Alpha_MetaData), NewProp_Alpha_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyActorHeightHelper_LerpActorHeight_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyActorHeightHelper_eventLerpActorHeight_Parms, OutResult), Z_Construct_UScriptStruct_FOceanologyActorHeight, METADATA_PARAMS(0, nullptr) }; // 600064430
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanologyActorHeightHelper_LerpActorHeight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyActorHeightHelper_LerpActorHeight_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyActorHeightHelper_LerpActorHeight_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyActorHeightHelper_LerpActorHeight_Statics::NewProp_Alpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyActorHeightHelper_LerpActorHeight_Statics::NewProp_OutResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyActorHeightHelper_LerpActorHeight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologyActorHeightHelper_LerpActorHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologyActorHeightHelper, nullptr, "LerpActorHeight", nullptr, nullptr, Z_Construct_UFunction_UOceanologyActorHeightHelper_LerpActorHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyActorHeightHelper_LerpActorHeight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOceanologyActorHeightHelper_LerpActorHeight_Statics::OceanologyActorHeightHelper_eventLerpActorHeight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyActorHeightHelper_LerpActorHeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologyActorHeightHelper_LerpActorHeight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOceanologyActorHeightHelper_LerpActorHeight_Statics::OceanologyActorHeightHelper_eventLerpActorHeight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanologyActorHeightHelper_LerpActorHeight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologyActorHeightHelper_LerpActorHeight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologyActorHeightHelper::execLerpActorHeight)
{
	P_GET_STRUCT_REF(FOceanologyActorHeight,Z_Param_Out_A);
	P_GET_STRUCT_REF(FOceanologyActorHeight,Z_Param_Out_B);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Alpha);
	P_GET_STRUCT_REF(FOceanologyActorHeight,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOceanologyActorHeightHelper::LerpActorHeight(Z_Param_Out_A,Z_Param_Out_B,Z_Param_Alpha,Z_Param_Out_OutResult);
	P_NATIVE_END;
}
// End Class UOceanologyActorHeightHelper Function LerpActorHeight

// Begin Class UOceanologyActorHeightHelper Function SetMaterialParameters
struct Z_Construct_UFunction_UOceanologyActorHeightHelper_SetMaterialParameters_Statics
{
	struct OceanologyActorHeightHelper_eventSetMaterialParameters_Parms
	{
		UMaterialInstanceDynamic* MID;
		FOceanologyActorHeight ActorHeight;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Actor Height" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyActorHeight.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorHeight_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActorHeight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOceanologyActorHeightHelper_SetMaterialParameters_Statics::NewProp_MID = { "MID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyActorHeightHelper_eventSetMaterialParameters_Parms, MID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyActorHeightHelper_SetMaterialParameters_Statics::NewProp_ActorHeight = { "ActorHeight", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyActorHeightHelper_eventSetMaterialParameters_Parms, ActorHeight), Z_Construct_UScriptStruct_FOceanologyActorHeight, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorHeight_MetaData), NewProp_ActorHeight_MetaData) }; // 600064430
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanologyActorHeightHelper_SetMaterialParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyActorHeightHelper_SetMaterialParameters_Statics::NewProp_MID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyActorHeightHelper_SetMaterialParameters_Statics::NewProp_ActorHeight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyActorHeightHelper_SetMaterialParameters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologyActorHeightHelper_SetMaterialParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologyActorHeightHelper, nullptr, "SetMaterialParameters", nullptr, nullptr, Z_Construct_UFunction_UOceanologyActorHeightHelper_SetMaterialParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyActorHeightHelper_SetMaterialParameters_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOceanologyActorHeightHelper_SetMaterialParameters_Statics::OceanologyActorHeightHelper_eventSetMaterialParameters_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyActorHeightHelper_SetMaterialParameters_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologyActorHeightHelper_SetMaterialParameters_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOceanologyActorHeightHelper_SetMaterialParameters_Statics::OceanologyActorHeightHelper_eventSetMaterialParameters_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanologyActorHeightHelper_SetMaterialParameters()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologyActorHeightHelper_SetMaterialParameters_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologyActorHeightHelper::execSetMaterialParameters)
{
	P_GET_OBJECT(UMaterialInstanceDynamic,Z_Param_MID);
	P_GET_STRUCT_REF(FOceanologyActorHeight,Z_Param_Out_ActorHeight);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOceanologyActorHeightHelper::SetMaterialParameters(Z_Param_MID,Z_Param_Out_ActorHeight);
	P_NATIVE_END;
}
// End Class UOceanologyActorHeightHelper Function SetMaterialParameters

// Begin Class UOceanologyActorHeightHelper
void UOceanologyActorHeightHelper::StaticRegisterNativesUOceanologyActorHeightHelper()
{
	UClass* Class = UOceanologyActorHeightHelper::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "LerpActorHeight", &UOceanologyActorHeightHelper::execLerpActorHeight },
		{ "SetMaterialParameters", &UOceanologyActorHeightHelper::execSetMaterialParameters },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOceanologyActorHeightHelper);
UClass* Z_Construct_UClass_UOceanologyActorHeightHelper_NoRegister()
{
	return UOceanologyActorHeightHelper::StaticClass();
}
struct Z_Construct_UClass_UOceanologyActorHeightHelper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * This is an auto-generated class from Material Parameters via AOceanologyMaterialToStructConverter. DO NOT EDIT BY HAND EVER! Your changes will be lost. Edit the material itself instead!\n * Generated at: 10 March 2024\n **/" },
#endif
		{ "IncludePath", "Structs/OceanologyActorHeight.h" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyActorHeight.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is an auto-generated class from Material Parameters via AOceanologyMaterialToStructConverter. DO NOT EDIT BY HAND EVER! Your changes will be lost. Edit the material itself instead!\nGenerated at: 10 March 2024" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOceanologyActorHeightHelper_LerpActorHeight, "LerpActorHeight" }, // 3426281503
		{ &Z_Construct_UFunction_UOceanologyActorHeightHelper_SetMaterialParameters, "SetMaterialParameters" }, // 1371034319
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOceanologyActorHeightHelper>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOceanologyActorHeightHelper_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Oceanology_Plugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOceanologyActorHeightHelper_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOceanologyActorHeightHelper_Statics::ClassParams = {
	&UOceanologyActorHeightHelper::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOceanologyActorHeightHelper_Statics::Class_MetaDataParams), Z_Construct_UClass_UOceanologyActorHeightHelper_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOceanologyActorHeightHelper()
{
	if (!Z_Registration_Info_UClass_UOceanologyActorHeightHelper.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOceanologyActorHeightHelper.OuterSingleton, Z_Construct_UClass_UOceanologyActorHeightHelper_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOceanologyActorHeightHelper.OuterSingleton;
}
template<> OCEANOLOGY_PLUGIN_API UClass* StaticClass<UOceanologyActorHeightHelper>()
{
	return UOceanologyActorHeightHelper::StaticClass();
}
UOceanologyActorHeightHelper::UOceanologyActorHeightHelper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOceanologyActorHeightHelper);
UOceanologyActorHeightHelper::~UOceanologyActorHeightHelper() {}
// End Class UOceanologyActorHeightHelper

// Begin Registration
struct Z_CompiledInDeferFile_FID_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyActorHeight_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOceanologyActorHeight::StaticStruct, Z_Construct_UScriptStruct_FOceanologyActorHeight_Statics::NewStructOps, TEXT("OceanologyActorHeight"), &Z_Registration_Info_UScriptStruct_OceanologyActorHeight, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOceanologyActorHeight), 600064430U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOceanologyActorHeightHelper, UOceanologyActorHeightHelper::StaticClass, TEXT("UOceanologyActorHeightHelper"), &Z_Registration_Info_UClass_UOceanologyActorHeightHelper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOceanologyActorHeightHelper), 2757350185U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyActorHeight_h_3995180521(TEXT("/Script/Oceanology_Plugin"),
	Z_CompiledInDeferFile_FID_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyActorHeight_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyActorHeight_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyActorHeight_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyActorHeight_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
