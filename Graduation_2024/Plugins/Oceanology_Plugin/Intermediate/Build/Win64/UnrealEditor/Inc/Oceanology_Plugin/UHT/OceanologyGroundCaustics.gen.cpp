// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Oceanology_Plugin/Public/Structs/OceanologyGroundCaustics.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOceanologyGroundCaustics() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_UOceanologyGroundCausticsHelper();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_UOceanologyGroundCausticsHelper_NoRegister();
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyGroundCaustics();
UPackage* Z_Construct_UPackage__Script_Oceanology_Plugin();
// End Cross Module References

// Begin ScriptStruct FOceanologyGroundCaustics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OceanologyGroundCaustics;
class UScriptStruct* FOceanologyGroundCaustics::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OceanologyGroundCaustics.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OceanologyGroundCaustics.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOceanologyGroundCaustics, (UObject*)Z_Construct_UPackage__Script_Oceanology_Plugin(), TEXT("OceanologyGroundCaustics"));
	}
	return Z_Registration_Info_UScriptStruct_OceanologyGroundCaustics.OuterSingleton;
}
template<> OCEANOLOGY_PLUGIN_API UScriptStruct* StaticStruct<FOceanologyGroundCaustics>()
{
	return FOceanologyGroundCaustics::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOceanologyGroundCaustics_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * This is an auto-generated class from Material Parameters via AOceanologyMaterialToStructConverter. DO NOT EDIT BY HAND EVER! Your changes will be lost. Edit the material itself instead!\n * Generated at: 10 March 2024\n **/" },
#endif
		{ "ModuleRelativePath", "Public/Structs/OceanologyGroundCaustics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is an auto-generated class from Material Parameters via AOceanologyMaterialToStructConverter. DO NOT EDIT BY HAND EVER! Your changes will be lost. Edit the material itself instead!\nGenerated at: 10 March 2024" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DarknessExposure_MetaData[] = {
		{ "Category", "GroundCaustics" },
		{ "DisplayName", "DarknessExposure" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyGroundCaustics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumDarkness_MetaData[] = {
		{ "Category", "GroundCaustics" },
		{ "DisplayName", "MaximumDarkness" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyGroundCaustics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimumDarkness_MetaData[] = {
		{ "Category", "GroundCaustics" },
		{ "DisplayName", "MinimumDarkness" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyGroundCaustics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WetAlpha_MetaData[] = {
		{ "Category", "GroundCaustics" },
		{ "DisplayName", "Wet Alpha" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyGroundCaustics.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_DarknessExposure;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MaximumDarkness;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MinimumDarkness;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_WetAlpha;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOceanologyGroundCaustics>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyGroundCaustics_Statics::NewProp_DarknessExposure = { "DarknessExposure", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyGroundCaustics, DarknessExposure), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DarknessExposure_MetaData), NewProp_DarknessExposure_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyGroundCaustics_Statics::NewProp_MaximumDarkness = { "MaximumDarkness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyGroundCaustics, MaximumDarkness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumDarkness_MetaData), NewProp_MaximumDarkness_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyGroundCaustics_Statics::NewProp_MinimumDarkness = { "MinimumDarkness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyGroundCaustics, MinimumDarkness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimumDarkness_MetaData), NewProp_MinimumDarkness_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyGroundCaustics_Statics::NewProp_WetAlpha = { "WetAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyGroundCaustics, WetAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WetAlpha_MetaData), NewProp_WetAlpha_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOceanologyGroundCaustics_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyGroundCaustics_Statics::NewProp_DarknessExposure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyGroundCaustics_Statics::NewProp_MaximumDarkness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyGroundCaustics_Statics::NewProp_MinimumDarkness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyGroundCaustics_Statics::NewProp_WetAlpha,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanologyGroundCaustics_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOceanologyGroundCaustics_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Oceanology_Plugin,
	nullptr,
	&NewStructOps,
	"OceanologyGroundCaustics",
	Z_Construct_UScriptStruct_FOceanologyGroundCaustics_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanologyGroundCaustics_Statics::PropPointers),
	sizeof(FOceanologyGroundCaustics),
	alignof(FOceanologyGroundCaustics),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanologyGroundCaustics_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOceanologyGroundCaustics_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOceanologyGroundCaustics()
{
	if (!Z_Registration_Info_UScriptStruct_OceanologyGroundCaustics.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OceanologyGroundCaustics.InnerSingleton, Z_Construct_UScriptStruct_FOceanologyGroundCaustics_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OceanologyGroundCaustics.InnerSingleton;
}
// End ScriptStruct FOceanologyGroundCaustics

// Begin Class UOceanologyGroundCausticsHelper Function LerpGroundCaustics
struct Z_Construct_UFunction_UOceanologyGroundCausticsHelper_LerpGroundCaustics_Statics
{
	struct OceanologyGroundCausticsHelper_eventLerpGroundCaustics_Parms
	{
		FOceanologyGroundCaustics A;
		FOceanologyGroundCaustics B;
		double Alpha;
		FOceanologyGroundCaustics OutResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GroundCaustics" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyGroundCaustics.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyGroundCausticsHelper_LerpGroundCaustics_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyGroundCausticsHelper_eventLerpGroundCaustics_Parms, A), Z_Construct_UScriptStruct_FOceanologyGroundCaustics, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 1718873675
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyGroundCausticsHelper_LerpGroundCaustics_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyGroundCausticsHelper_eventLerpGroundCaustics_Parms, B), Z_Construct_UScriptStruct_FOceanologyGroundCaustics, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) }; // 1718873675
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UOceanologyGroundCausticsHelper_LerpGroundCaustics_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyGroundCausticsHelper_eventLerpGroundCaustics_Parms, Alpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Alpha_MetaData), NewProp_Alpha_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyGroundCausticsHelper_LerpGroundCaustics_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyGroundCausticsHelper_eventLerpGroundCaustics_Parms, OutResult), Z_Construct_UScriptStruct_FOceanologyGroundCaustics, METADATA_PARAMS(0, nullptr) }; // 1718873675
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanologyGroundCausticsHelper_LerpGroundCaustics_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyGroundCausticsHelper_LerpGroundCaustics_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyGroundCausticsHelper_LerpGroundCaustics_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyGroundCausticsHelper_LerpGroundCaustics_Statics::NewProp_Alpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyGroundCausticsHelper_LerpGroundCaustics_Statics::NewProp_OutResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyGroundCausticsHelper_LerpGroundCaustics_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologyGroundCausticsHelper_LerpGroundCaustics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologyGroundCausticsHelper, nullptr, "LerpGroundCaustics", nullptr, nullptr, Z_Construct_UFunction_UOceanologyGroundCausticsHelper_LerpGroundCaustics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyGroundCausticsHelper_LerpGroundCaustics_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOceanologyGroundCausticsHelper_LerpGroundCaustics_Statics::OceanologyGroundCausticsHelper_eventLerpGroundCaustics_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyGroundCausticsHelper_LerpGroundCaustics_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologyGroundCausticsHelper_LerpGroundCaustics_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOceanologyGroundCausticsHelper_LerpGroundCaustics_Statics::OceanologyGroundCausticsHelper_eventLerpGroundCaustics_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanologyGroundCausticsHelper_LerpGroundCaustics()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologyGroundCausticsHelper_LerpGroundCaustics_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologyGroundCausticsHelper::execLerpGroundCaustics)
{
	P_GET_STRUCT_REF(FOceanologyGroundCaustics,Z_Param_Out_A);
	P_GET_STRUCT_REF(FOceanologyGroundCaustics,Z_Param_Out_B);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Alpha);
	P_GET_STRUCT_REF(FOceanologyGroundCaustics,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOceanologyGroundCausticsHelper::LerpGroundCaustics(Z_Param_Out_A,Z_Param_Out_B,Z_Param_Alpha,Z_Param_Out_OutResult);
	P_NATIVE_END;
}
// End Class UOceanologyGroundCausticsHelper Function LerpGroundCaustics

// Begin Class UOceanologyGroundCausticsHelper Function SetMaterialParameters
struct Z_Construct_UFunction_UOceanologyGroundCausticsHelper_SetMaterialParameters_Statics
{
	struct OceanologyGroundCausticsHelper_eventSetMaterialParameters_Parms
	{
		UMaterialInstanceDynamic* MID;
		FOceanologyGroundCaustics GroundCaustics;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GroundCaustics" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyGroundCaustics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundCaustics_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GroundCaustics;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOceanologyGroundCausticsHelper_SetMaterialParameters_Statics::NewProp_MID = { "MID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyGroundCausticsHelper_eventSetMaterialParameters_Parms, MID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyGroundCausticsHelper_SetMaterialParameters_Statics::NewProp_GroundCaustics = { "GroundCaustics", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyGroundCausticsHelper_eventSetMaterialParameters_Parms, GroundCaustics), Z_Construct_UScriptStruct_FOceanologyGroundCaustics, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundCaustics_MetaData), NewProp_GroundCaustics_MetaData) }; // 1718873675
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanologyGroundCausticsHelper_SetMaterialParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyGroundCausticsHelper_SetMaterialParameters_Statics::NewProp_MID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyGroundCausticsHelper_SetMaterialParameters_Statics::NewProp_GroundCaustics,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyGroundCausticsHelper_SetMaterialParameters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologyGroundCausticsHelper_SetMaterialParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologyGroundCausticsHelper, nullptr, "SetMaterialParameters", nullptr, nullptr, Z_Construct_UFunction_UOceanologyGroundCausticsHelper_SetMaterialParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyGroundCausticsHelper_SetMaterialParameters_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOceanologyGroundCausticsHelper_SetMaterialParameters_Statics::OceanologyGroundCausticsHelper_eventSetMaterialParameters_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyGroundCausticsHelper_SetMaterialParameters_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologyGroundCausticsHelper_SetMaterialParameters_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOceanologyGroundCausticsHelper_SetMaterialParameters_Statics::OceanologyGroundCausticsHelper_eventSetMaterialParameters_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanologyGroundCausticsHelper_SetMaterialParameters()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologyGroundCausticsHelper_SetMaterialParameters_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologyGroundCausticsHelper::execSetMaterialParameters)
{
	P_GET_OBJECT(UMaterialInstanceDynamic,Z_Param_MID);
	P_GET_STRUCT_REF(FOceanologyGroundCaustics,Z_Param_Out_GroundCaustics);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOceanologyGroundCausticsHelper::SetMaterialParameters(Z_Param_MID,Z_Param_Out_GroundCaustics);
	P_NATIVE_END;
}
// End Class UOceanologyGroundCausticsHelper Function SetMaterialParameters

// Begin Class UOceanologyGroundCausticsHelper
void UOceanologyGroundCausticsHelper::StaticRegisterNativesUOceanologyGroundCausticsHelper()
{
	UClass* Class = UOceanologyGroundCausticsHelper::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "LerpGroundCaustics", &UOceanologyGroundCausticsHelper::execLerpGroundCaustics },
		{ "SetMaterialParameters", &UOceanologyGroundCausticsHelper::execSetMaterialParameters },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOceanologyGroundCausticsHelper);
UClass* Z_Construct_UClass_UOceanologyGroundCausticsHelper_NoRegister()
{
	return UOceanologyGroundCausticsHelper::StaticClass();
}
struct Z_Construct_UClass_UOceanologyGroundCausticsHelper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * This is an auto-generated class from Material Parameters via AOceanologyMaterialToStructConverter. DO NOT EDIT BY HAND EVER! Your changes will be lost. Edit the material itself instead!\n * Generated at: 10 March 2024\n **/" },
#endif
		{ "IncludePath", "Structs/OceanologyGroundCaustics.h" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyGroundCaustics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is an auto-generated class from Material Parameters via AOceanologyMaterialToStructConverter. DO NOT EDIT BY HAND EVER! Your changes will be lost. Edit the material itself instead!\nGenerated at: 10 March 2024" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOceanologyGroundCausticsHelper_LerpGroundCaustics, "LerpGroundCaustics" }, // 817521683
		{ &Z_Construct_UFunction_UOceanologyGroundCausticsHelper_SetMaterialParameters, "SetMaterialParameters" }, // 2890122853
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOceanologyGroundCausticsHelper>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOceanologyGroundCausticsHelper_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Oceanology_Plugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOceanologyGroundCausticsHelper_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOceanologyGroundCausticsHelper_Statics::ClassParams = {
	&UOceanologyGroundCausticsHelper::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOceanologyGroundCausticsHelper_Statics::Class_MetaDataParams), Z_Construct_UClass_UOceanologyGroundCausticsHelper_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOceanologyGroundCausticsHelper()
{
	if (!Z_Registration_Info_UClass_UOceanologyGroundCausticsHelper.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOceanologyGroundCausticsHelper.OuterSingleton, Z_Construct_UClass_UOceanologyGroundCausticsHelper_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOceanologyGroundCausticsHelper.OuterSingleton;
}
template<> OCEANOLOGY_PLUGIN_API UClass* StaticClass<UOceanologyGroundCausticsHelper>()
{
	return UOceanologyGroundCausticsHelper::StaticClass();
}
UOceanologyGroundCausticsHelper::UOceanologyGroundCausticsHelper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOceanologyGroundCausticsHelper);
UOceanologyGroundCausticsHelper::~UOceanologyGroundCausticsHelper() {}
// End Class UOceanologyGroundCausticsHelper

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Data_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyGroundCaustics_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOceanologyGroundCaustics::StaticStruct, Z_Construct_UScriptStruct_FOceanologyGroundCaustics_Statics::NewStructOps, TEXT("OceanologyGroundCaustics"), &Z_Registration_Info_UScriptStruct_OceanologyGroundCaustics, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOceanologyGroundCaustics), 1718873675U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOceanologyGroundCausticsHelper, UOceanologyGroundCausticsHelper::StaticClass, TEXT("UOceanologyGroundCausticsHelper"), &Z_Registration_Info_UClass_UOceanologyGroundCausticsHelper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOceanologyGroundCausticsHelper), 315371528U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Data_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyGroundCaustics_h_2256905319(TEXT("/Script/Oceanology_Plugin"),
	Z_CompiledInDeferFile_FID_UE_Data_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyGroundCaustics_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Data_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyGroundCaustics_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UE_Data_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyGroundCaustics_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Data_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyGroundCaustics_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
