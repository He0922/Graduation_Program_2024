// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Oceanology_Plugin/Public/Structs/OceanologyBubbles.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOceanologyBubbles() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_UOceanologyBubblesHelper();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_UOceanologyBubblesHelper_NoRegister();
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyBubbles();
UPackage* Z_Construct_UPackage__Script_Oceanology_Plugin();
// End Cross Module References

// Begin ScriptStruct FOceanologyBubbles
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OceanologyBubbles;
class UScriptStruct* FOceanologyBubbles::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OceanologyBubbles.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OceanologyBubbles.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOceanologyBubbles, (UObject*)Z_Construct_UPackage__Script_Oceanology_Plugin(), TEXT("OceanologyBubbles"));
	}
	return Z_Registration_Info_UScriptStruct_OceanologyBubbles.OuterSingleton;
}
template<> OCEANOLOGY_PLUGIN_API UScriptStruct* StaticStruct<FOceanologyBubbles>()
{
	return FOceanologyBubbles::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOceanologyBubbles_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * This is an auto-generated class from Material Parameters via AOceanologyMaterialToStructConverter. DO NOT EDIT BY HAND EVER! Your changes will be lost. Edit the material itself instead!\n * Generated at: 10 March 2024\n **/" },
#endif
		{ "ModuleRelativePath", "Public/Structs/OceanologyBubbles.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is an auto-generated class from Material Parameters via AOceanologyMaterialToStructConverter. DO NOT EDIT BY HAND EVER! Your changes will be lost. Edit the material itself instead!\nGenerated at: 10 March 2024" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BubbleColor_MetaData[] = {
		{ "Category", "Bubbles" },
		{ "DisplayName", "BubbleColor" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyBubbles.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BubbleColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOceanologyBubbles>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOceanologyBubbles_Statics::NewProp_BubbleColor = { "BubbleColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyBubbles, BubbleColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BubbleColor_MetaData), NewProp_BubbleColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOceanologyBubbles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyBubbles_Statics::NewProp_BubbleColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanologyBubbles_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOceanologyBubbles_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Oceanology_Plugin,
	nullptr,
	&NewStructOps,
	"OceanologyBubbles",
	Z_Construct_UScriptStruct_FOceanologyBubbles_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanologyBubbles_Statics::PropPointers),
	sizeof(FOceanologyBubbles),
	alignof(FOceanologyBubbles),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanologyBubbles_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOceanologyBubbles_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOceanologyBubbles()
{
	if (!Z_Registration_Info_UScriptStruct_OceanologyBubbles.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OceanologyBubbles.InnerSingleton, Z_Construct_UScriptStruct_FOceanologyBubbles_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OceanologyBubbles.InnerSingleton;
}
// End ScriptStruct FOceanologyBubbles

// Begin Class UOceanologyBubblesHelper Function LerpBubbles
struct Z_Construct_UFunction_UOceanologyBubblesHelper_LerpBubbles_Statics
{
	struct OceanologyBubblesHelper_eventLerpBubbles_Parms
	{
		FOceanologyBubbles A;
		FOceanologyBubbles B;
		double Alpha;
		FOceanologyBubbles OutResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Bubbles" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyBubbles.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyBubblesHelper_LerpBubbles_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyBubblesHelper_eventLerpBubbles_Parms, A), Z_Construct_UScriptStruct_FOceanologyBubbles, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 2296796678
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyBubblesHelper_LerpBubbles_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyBubblesHelper_eventLerpBubbles_Parms, B), Z_Construct_UScriptStruct_FOceanologyBubbles, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) }; // 2296796678
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UOceanologyBubblesHelper_LerpBubbles_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyBubblesHelper_eventLerpBubbles_Parms, Alpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Alpha_MetaData), NewProp_Alpha_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyBubblesHelper_LerpBubbles_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyBubblesHelper_eventLerpBubbles_Parms, OutResult), Z_Construct_UScriptStruct_FOceanologyBubbles, METADATA_PARAMS(0, nullptr) }; // 2296796678
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanologyBubblesHelper_LerpBubbles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyBubblesHelper_LerpBubbles_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyBubblesHelper_LerpBubbles_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyBubblesHelper_LerpBubbles_Statics::NewProp_Alpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyBubblesHelper_LerpBubbles_Statics::NewProp_OutResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyBubblesHelper_LerpBubbles_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologyBubblesHelper_LerpBubbles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologyBubblesHelper, nullptr, "LerpBubbles", nullptr, nullptr, Z_Construct_UFunction_UOceanologyBubblesHelper_LerpBubbles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyBubblesHelper_LerpBubbles_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOceanologyBubblesHelper_LerpBubbles_Statics::OceanologyBubblesHelper_eventLerpBubbles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyBubblesHelper_LerpBubbles_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologyBubblesHelper_LerpBubbles_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOceanologyBubblesHelper_LerpBubbles_Statics::OceanologyBubblesHelper_eventLerpBubbles_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanologyBubblesHelper_LerpBubbles()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologyBubblesHelper_LerpBubbles_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologyBubblesHelper::execLerpBubbles)
{
	P_GET_STRUCT_REF(FOceanologyBubbles,Z_Param_Out_A);
	P_GET_STRUCT_REF(FOceanologyBubbles,Z_Param_Out_B);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Alpha);
	P_GET_STRUCT_REF(FOceanologyBubbles,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOceanologyBubblesHelper::LerpBubbles(Z_Param_Out_A,Z_Param_Out_B,Z_Param_Alpha,Z_Param_Out_OutResult);
	P_NATIVE_END;
}
// End Class UOceanologyBubblesHelper Function LerpBubbles

// Begin Class UOceanologyBubblesHelper Function SetMaterialParameters
struct Z_Construct_UFunction_UOceanologyBubblesHelper_SetMaterialParameters_Statics
{
	struct OceanologyBubblesHelper_eventSetMaterialParameters_Parms
	{
		UMaterialInstanceDynamic* MID;
		FOceanologyBubbles Bubbles;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Bubbles" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyBubbles.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bubbles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bubbles;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOceanologyBubblesHelper_SetMaterialParameters_Statics::NewProp_MID = { "MID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyBubblesHelper_eventSetMaterialParameters_Parms, MID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyBubblesHelper_SetMaterialParameters_Statics::NewProp_Bubbles = { "Bubbles", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyBubblesHelper_eventSetMaterialParameters_Parms, Bubbles), Z_Construct_UScriptStruct_FOceanologyBubbles, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bubbles_MetaData), NewProp_Bubbles_MetaData) }; // 2296796678
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanologyBubblesHelper_SetMaterialParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyBubblesHelper_SetMaterialParameters_Statics::NewProp_MID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyBubblesHelper_SetMaterialParameters_Statics::NewProp_Bubbles,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyBubblesHelper_SetMaterialParameters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologyBubblesHelper_SetMaterialParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologyBubblesHelper, nullptr, "SetMaterialParameters", nullptr, nullptr, Z_Construct_UFunction_UOceanologyBubblesHelper_SetMaterialParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyBubblesHelper_SetMaterialParameters_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOceanologyBubblesHelper_SetMaterialParameters_Statics::OceanologyBubblesHelper_eventSetMaterialParameters_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyBubblesHelper_SetMaterialParameters_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologyBubblesHelper_SetMaterialParameters_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOceanologyBubblesHelper_SetMaterialParameters_Statics::OceanologyBubblesHelper_eventSetMaterialParameters_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanologyBubblesHelper_SetMaterialParameters()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologyBubblesHelper_SetMaterialParameters_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologyBubblesHelper::execSetMaterialParameters)
{
	P_GET_OBJECT(UMaterialInstanceDynamic,Z_Param_MID);
	P_GET_STRUCT_REF(FOceanologyBubbles,Z_Param_Out_Bubbles);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOceanologyBubblesHelper::SetMaterialParameters(Z_Param_MID,Z_Param_Out_Bubbles);
	P_NATIVE_END;
}
// End Class UOceanologyBubblesHelper Function SetMaterialParameters

// Begin Class UOceanologyBubblesHelper
void UOceanologyBubblesHelper::StaticRegisterNativesUOceanologyBubblesHelper()
{
	UClass* Class = UOceanologyBubblesHelper::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "LerpBubbles", &UOceanologyBubblesHelper::execLerpBubbles },
		{ "SetMaterialParameters", &UOceanologyBubblesHelper::execSetMaterialParameters },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOceanologyBubblesHelper);
UClass* Z_Construct_UClass_UOceanologyBubblesHelper_NoRegister()
{
	return UOceanologyBubblesHelper::StaticClass();
}
struct Z_Construct_UClass_UOceanologyBubblesHelper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * This is an auto-generated class from Material Parameters via AOceanologyMaterialToStructConverter. DO NOT EDIT BY HAND EVER! Your changes will be lost. Edit the material itself instead!\n * Generated at: 10 March 2024\n **/" },
#endif
		{ "IncludePath", "Structs/OceanologyBubbles.h" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyBubbles.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is an auto-generated class from Material Parameters via AOceanologyMaterialToStructConverter. DO NOT EDIT BY HAND EVER! Your changes will be lost. Edit the material itself instead!\nGenerated at: 10 March 2024" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOceanologyBubblesHelper_LerpBubbles, "LerpBubbles" }, // 1303452841
		{ &Z_Construct_UFunction_UOceanologyBubblesHelper_SetMaterialParameters, "SetMaterialParameters" }, // 2643086909
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOceanologyBubblesHelper>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOceanologyBubblesHelper_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Oceanology_Plugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOceanologyBubblesHelper_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOceanologyBubblesHelper_Statics::ClassParams = {
	&UOceanologyBubblesHelper::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOceanologyBubblesHelper_Statics::Class_MetaDataParams), Z_Construct_UClass_UOceanologyBubblesHelper_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOceanologyBubblesHelper()
{
	if (!Z_Registration_Info_UClass_UOceanologyBubblesHelper.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOceanologyBubblesHelper.OuterSingleton, Z_Construct_UClass_UOceanologyBubblesHelper_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOceanologyBubblesHelper.OuterSingleton;
}
template<> OCEANOLOGY_PLUGIN_API UClass* StaticClass<UOceanologyBubblesHelper>()
{
	return UOceanologyBubblesHelper::StaticClass();
}
UOceanologyBubblesHelper::UOceanologyBubblesHelper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOceanologyBubblesHelper);
UOceanologyBubblesHelper::~UOceanologyBubblesHelper() {}
// End Class UOceanologyBubblesHelper

// Begin Registration
struct Z_CompiledInDeferFile_FID_Programes_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyBubbles_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOceanologyBubbles::StaticStruct, Z_Construct_UScriptStruct_FOceanologyBubbles_Statics::NewStructOps, TEXT("OceanologyBubbles"), &Z_Registration_Info_UScriptStruct_OceanologyBubbles, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOceanologyBubbles), 2296796678U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOceanologyBubblesHelper, UOceanologyBubblesHelper::StaticClass, TEXT("UOceanologyBubblesHelper"), &Z_Registration_Info_UClass_UOceanologyBubblesHelper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOceanologyBubblesHelper), 485180341U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Programes_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyBubbles_h_3726463409(TEXT("/Script/Oceanology_Plugin"),
	Z_CompiledInDeferFile_FID_Programes_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyBubbles_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Programes_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyBubbles_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Programes_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyBubbles_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Programes_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyBubbles_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
