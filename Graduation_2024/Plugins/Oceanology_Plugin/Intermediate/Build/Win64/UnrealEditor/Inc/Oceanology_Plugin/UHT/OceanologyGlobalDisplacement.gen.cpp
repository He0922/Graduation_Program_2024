// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Oceanology_Plugin/Public/Structs/OceanologyGlobalDisplacement.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOceanologyGlobalDisplacement() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollectionInstance_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_UOceanologyGlobalDisplacementHelper();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_UOceanologyGlobalDisplacementHelper_NoRegister();
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyGlobalDisplacement();
UPackage* Z_Construct_UPackage__Script_Oceanology_Plugin();
// End Cross Module References

// Begin ScriptStruct FOceanologyGlobalDisplacement
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OceanologyGlobalDisplacement;
class UScriptStruct* FOceanologyGlobalDisplacement::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OceanologyGlobalDisplacement.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OceanologyGlobalDisplacement.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOceanologyGlobalDisplacement, (UObject*)Z_Construct_UPackage__Script_Oceanology_Plugin(), TEXT("OceanologyGlobalDisplacement"));
	}
	return Z_Registration_Info_UScriptStruct_OceanologyGlobalDisplacement.OuterSingleton;
}
template<> OCEANOLOGY_PLUGIN_API UScriptStruct* StaticStruct<FOceanologyGlobalDisplacement>()
{
	return FOceanologyGlobalDisplacement::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOceanologyGlobalDisplacement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyGlobalDisplacement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SizeM_MetaData[] = {
		{ "Category", "Waves" },
		{ "DisplayName", "Size (M)" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyGlobalDisplacement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverallLength_MetaData[] = {
		{ "Category", "Waves" },
		{ "DisplayName", "Overall Length" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyGlobalDisplacement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalAmplitude_MetaData[] = {
		{ "Category", "Waves" },
		{ "DisplayName", "Global Amplitude" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyGlobalDisplacement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalSpeed_MetaData[] = {
		{ "Category", "Waves" },
		{ "DisplayName", "Global Speed" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyGlobalDisplacement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Choppiness_MetaData[] = {
		{ "Category", "Waves" },
		{ "DisplayName", "Choppiness" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyGlobalDisplacement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalWaveDirection_MetaData[] = {
		{ "Category", "Waves" },
		{ "DisplayName", "Global Wave Direction" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyGlobalDisplacement.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_SizeM;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_OverallLength;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_GlobalAmplitude;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_GlobalSpeed;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Choppiness;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_GlobalWaveDirection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOceanologyGlobalDisplacement>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyGlobalDisplacement_Statics::NewProp_SizeM = { "SizeM", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyGlobalDisplacement, SizeM), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SizeM_MetaData), NewProp_SizeM_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyGlobalDisplacement_Statics::NewProp_OverallLength = { "OverallLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyGlobalDisplacement, OverallLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverallLength_MetaData), NewProp_OverallLength_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyGlobalDisplacement_Statics::NewProp_GlobalAmplitude = { "GlobalAmplitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyGlobalDisplacement, GlobalAmplitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalAmplitude_MetaData), NewProp_GlobalAmplitude_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyGlobalDisplacement_Statics::NewProp_GlobalSpeed = { "GlobalSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyGlobalDisplacement, GlobalSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalSpeed_MetaData), NewProp_GlobalSpeed_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyGlobalDisplacement_Statics::NewProp_Choppiness = { "Choppiness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyGlobalDisplacement, Choppiness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Choppiness_MetaData), NewProp_Choppiness_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyGlobalDisplacement_Statics::NewProp_GlobalWaveDirection = { "GlobalWaveDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyGlobalDisplacement, GlobalWaveDirection), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalWaveDirection_MetaData), NewProp_GlobalWaveDirection_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOceanologyGlobalDisplacement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyGlobalDisplacement_Statics::NewProp_SizeM,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyGlobalDisplacement_Statics::NewProp_OverallLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyGlobalDisplacement_Statics::NewProp_GlobalAmplitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyGlobalDisplacement_Statics::NewProp_GlobalSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyGlobalDisplacement_Statics::NewProp_Choppiness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyGlobalDisplacement_Statics::NewProp_GlobalWaveDirection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanologyGlobalDisplacement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOceanologyGlobalDisplacement_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Oceanology_Plugin,
	nullptr,
	&NewStructOps,
	"OceanologyGlobalDisplacement",
	Z_Construct_UScriptStruct_FOceanologyGlobalDisplacement_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanologyGlobalDisplacement_Statics::PropPointers),
	sizeof(FOceanologyGlobalDisplacement),
	alignof(FOceanologyGlobalDisplacement),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanologyGlobalDisplacement_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOceanologyGlobalDisplacement_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOceanologyGlobalDisplacement()
{
	if (!Z_Registration_Info_UScriptStruct_OceanologyGlobalDisplacement.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OceanologyGlobalDisplacement.InnerSingleton, Z_Construct_UScriptStruct_FOceanologyGlobalDisplacement_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OceanologyGlobalDisplacement.InnerSingleton;
}
// End ScriptStruct FOceanologyGlobalDisplacement

// Begin Class UOceanologyGlobalDisplacementHelper Function LerpGlobalDisplacement
struct Z_Construct_UFunction_UOceanologyGlobalDisplacementHelper_LerpGlobalDisplacement_Statics
{
	struct OceanologyGlobalDisplacementHelper_eventLerpGlobalDisplacement_Parms
	{
		FOceanologyGlobalDisplacement A;
		FOceanologyGlobalDisplacement B;
		double Alpha;
		FOceanologyGlobalDisplacement OutResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GlobalDisplacement" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyGlobalDisplacement.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyGlobalDisplacementHelper_LerpGlobalDisplacement_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyGlobalDisplacementHelper_eventLerpGlobalDisplacement_Parms, A), Z_Construct_UScriptStruct_FOceanologyGlobalDisplacement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 1342432749
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyGlobalDisplacementHelper_LerpGlobalDisplacement_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyGlobalDisplacementHelper_eventLerpGlobalDisplacement_Parms, B), Z_Construct_UScriptStruct_FOceanologyGlobalDisplacement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) }; // 1342432749
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UOceanologyGlobalDisplacementHelper_LerpGlobalDisplacement_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyGlobalDisplacementHelper_eventLerpGlobalDisplacement_Parms, Alpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Alpha_MetaData), NewProp_Alpha_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyGlobalDisplacementHelper_LerpGlobalDisplacement_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyGlobalDisplacementHelper_eventLerpGlobalDisplacement_Parms, OutResult), Z_Construct_UScriptStruct_FOceanologyGlobalDisplacement, METADATA_PARAMS(0, nullptr) }; // 1342432749
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanologyGlobalDisplacementHelper_LerpGlobalDisplacement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyGlobalDisplacementHelper_LerpGlobalDisplacement_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyGlobalDisplacementHelper_LerpGlobalDisplacement_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyGlobalDisplacementHelper_LerpGlobalDisplacement_Statics::NewProp_Alpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyGlobalDisplacementHelper_LerpGlobalDisplacement_Statics::NewProp_OutResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyGlobalDisplacementHelper_LerpGlobalDisplacement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologyGlobalDisplacementHelper_LerpGlobalDisplacement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologyGlobalDisplacementHelper, nullptr, "LerpGlobalDisplacement", nullptr, nullptr, Z_Construct_UFunction_UOceanologyGlobalDisplacementHelper_LerpGlobalDisplacement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyGlobalDisplacementHelper_LerpGlobalDisplacement_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOceanologyGlobalDisplacementHelper_LerpGlobalDisplacement_Statics::OceanologyGlobalDisplacementHelper_eventLerpGlobalDisplacement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyGlobalDisplacementHelper_LerpGlobalDisplacement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologyGlobalDisplacementHelper_LerpGlobalDisplacement_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOceanologyGlobalDisplacementHelper_LerpGlobalDisplacement_Statics::OceanologyGlobalDisplacementHelper_eventLerpGlobalDisplacement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanologyGlobalDisplacementHelper_LerpGlobalDisplacement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologyGlobalDisplacementHelper_LerpGlobalDisplacement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologyGlobalDisplacementHelper::execLerpGlobalDisplacement)
{
	P_GET_STRUCT_REF(FOceanologyGlobalDisplacement,Z_Param_Out_A);
	P_GET_STRUCT_REF(FOceanologyGlobalDisplacement,Z_Param_Out_B);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Alpha);
	P_GET_STRUCT_REF(FOceanologyGlobalDisplacement,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOceanologyGlobalDisplacementHelper::LerpGlobalDisplacement(Z_Param_Out_A,Z_Param_Out_B,Z_Param_Alpha,Z_Param_Out_OutResult);
	P_NATIVE_END;
}
// End Class UOceanologyGlobalDisplacementHelper Function LerpGlobalDisplacement

// Begin Class UOceanologyGlobalDisplacementHelper Function SetMaterialParameterCollections
struct Z_Construct_UFunction_UOceanologyGlobalDisplacementHelper_SetMaterialParameterCollections_Statics
{
	struct OceanologyGlobalDisplacementHelper_eventSetMaterialParameterCollections_Parms
	{
		UMaterialParameterCollectionInstance* MPCI;
		FOceanologyGlobalDisplacement GlobalDisplacement;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Global Displacement" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyGlobalDisplacement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalDisplacement_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MPCI;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GlobalDisplacement;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOceanologyGlobalDisplacementHelper_SetMaterialParameterCollections_Statics::NewProp_MPCI = { "MPCI", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyGlobalDisplacementHelper_eventSetMaterialParameterCollections_Parms, MPCI), Z_Construct_UClass_UMaterialParameterCollectionInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyGlobalDisplacementHelper_SetMaterialParameterCollections_Statics::NewProp_GlobalDisplacement = { "GlobalDisplacement", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyGlobalDisplacementHelper_eventSetMaterialParameterCollections_Parms, GlobalDisplacement), Z_Construct_UScriptStruct_FOceanologyGlobalDisplacement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalDisplacement_MetaData), NewProp_GlobalDisplacement_MetaData) }; // 1342432749
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanologyGlobalDisplacementHelper_SetMaterialParameterCollections_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyGlobalDisplacementHelper_SetMaterialParameterCollections_Statics::NewProp_MPCI,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyGlobalDisplacementHelper_SetMaterialParameterCollections_Statics::NewProp_GlobalDisplacement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyGlobalDisplacementHelper_SetMaterialParameterCollections_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologyGlobalDisplacementHelper_SetMaterialParameterCollections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologyGlobalDisplacementHelper, nullptr, "SetMaterialParameterCollections", nullptr, nullptr, Z_Construct_UFunction_UOceanologyGlobalDisplacementHelper_SetMaterialParameterCollections_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyGlobalDisplacementHelper_SetMaterialParameterCollections_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOceanologyGlobalDisplacementHelper_SetMaterialParameterCollections_Statics::OceanologyGlobalDisplacementHelper_eventSetMaterialParameterCollections_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyGlobalDisplacementHelper_SetMaterialParameterCollections_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologyGlobalDisplacementHelper_SetMaterialParameterCollections_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOceanologyGlobalDisplacementHelper_SetMaterialParameterCollections_Statics::OceanologyGlobalDisplacementHelper_eventSetMaterialParameterCollections_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanologyGlobalDisplacementHelper_SetMaterialParameterCollections()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologyGlobalDisplacementHelper_SetMaterialParameterCollections_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologyGlobalDisplacementHelper::execSetMaterialParameterCollections)
{
	P_GET_OBJECT(UMaterialParameterCollectionInstance,Z_Param_MPCI);
	P_GET_STRUCT_REF(FOceanologyGlobalDisplacement,Z_Param_Out_GlobalDisplacement);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOceanologyGlobalDisplacementHelper::SetMaterialParameterCollections(Z_Param_MPCI,Z_Param_Out_GlobalDisplacement);
	P_NATIVE_END;
}
// End Class UOceanologyGlobalDisplacementHelper Function SetMaterialParameterCollections

// Begin Class UOceanologyGlobalDisplacementHelper Function SetMaterialParameters
struct Z_Construct_UFunction_UOceanologyGlobalDisplacementHelper_SetMaterialParameters_Statics
{
	struct OceanologyGlobalDisplacementHelper_eventSetMaterialParameters_Parms
	{
		UMaterialInstanceDynamic* MID;
		FOceanologyGlobalDisplacement GlobalDisplacement;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Global Displacement" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyGlobalDisplacement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalDisplacement_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GlobalDisplacement;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOceanologyGlobalDisplacementHelper_SetMaterialParameters_Statics::NewProp_MID = { "MID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyGlobalDisplacementHelper_eventSetMaterialParameters_Parms, MID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyGlobalDisplacementHelper_SetMaterialParameters_Statics::NewProp_GlobalDisplacement = { "GlobalDisplacement", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyGlobalDisplacementHelper_eventSetMaterialParameters_Parms, GlobalDisplacement), Z_Construct_UScriptStruct_FOceanologyGlobalDisplacement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalDisplacement_MetaData), NewProp_GlobalDisplacement_MetaData) }; // 1342432749
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanologyGlobalDisplacementHelper_SetMaterialParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyGlobalDisplacementHelper_SetMaterialParameters_Statics::NewProp_MID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyGlobalDisplacementHelper_SetMaterialParameters_Statics::NewProp_GlobalDisplacement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyGlobalDisplacementHelper_SetMaterialParameters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologyGlobalDisplacementHelper_SetMaterialParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologyGlobalDisplacementHelper, nullptr, "SetMaterialParameters", nullptr, nullptr, Z_Construct_UFunction_UOceanologyGlobalDisplacementHelper_SetMaterialParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyGlobalDisplacementHelper_SetMaterialParameters_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOceanologyGlobalDisplacementHelper_SetMaterialParameters_Statics::OceanologyGlobalDisplacementHelper_eventSetMaterialParameters_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyGlobalDisplacementHelper_SetMaterialParameters_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologyGlobalDisplacementHelper_SetMaterialParameters_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOceanologyGlobalDisplacementHelper_SetMaterialParameters_Statics::OceanologyGlobalDisplacementHelper_eventSetMaterialParameters_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanologyGlobalDisplacementHelper_SetMaterialParameters()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologyGlobalDisplacementHelper_SetMaterialParameters_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologyGlobalDisplacementHelper::execSetMaterialParameters)
{
	P_GET_OBJECT(UMaterialInstanceDynamic,Z_Param_MID);
	P_GET_STRUCT_REF(FOceanologyGlobalDisplacement,Z_Param_Out_GlobalDisplacement);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOceanologyGlobalDisplacementHelper::SetMaterialParameters(Z_Param_MID,Z_Param_Out_GlobalDisplacement);
	P_NATIVE_END;
}
// End Class UOceanologyGlobalDisplacementHelper Function SetMaterialParameters

// Begin Class UOceanologyGlobalDisplacementHelper Function SetNiagaraVariables
struct Z_Construct_UFunction_UOceanologyGlobalDisplacementHelper_SetNiagaraVariables_Statics
{
	struct OceanologyGlobalDisplacementHelper_eventSetNiagaraVariables_Parms
	{
		UNiagaraComponent* Niagara;
		FOceanologyGlobalDisplacement GlobalDisplacement;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Global Displacement" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyGlobalDisplacement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Niagara_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalDisplacement_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Niagara;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GlobalDisplacement;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOceanologyGlobalDisplacementHelper_SetNiagaraVariables_Statics::NewProp_Niagara = { "Niagara", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyGlobalDisplacementHelper_eventSetNiagaraVariables_Parms, Niagara), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Niagara_MetaData), NewProp_Niagara_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyGlobalDisplacementHelper_SetNiagaraVariables_Statics::NewProp_GlobalDisplacement = { "GlobalDisplacement", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyGlobalDisplacementHelper_eventSetNiagaraVariables_Parms, GlobalDisplacement), Z_Construct_UScriptStruct_FOceanologyGlobalDisplacement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalDisplacement_MetaData), NewProp_GlobalDisplacement_MetaData) }; // 1342432749
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanologyGlobalDisplacementHelper_SetNiagaraVariables_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyGlobalDisplacementHelper_SetNiagaraVariables_Statics::NewProp_Niagara,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyGlobalDisplacementHelper_SetNiagaraVariables_Statics::NewProp_GlobalDisplacement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyGlobalDisplacementHelper_SetNiagaraVariables_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologyGlobalDisplacementHelper_SetNiagaraVariables_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologyGlobalDisplacementHelper, nullptr, "SetNiagaraVariables", nullptr, nullptr, Z_Construct_UFunction_UOceanologyGlobalDisplacementHelper_SetNiagaraVariables_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyGlobalDisplacementHelper_SetNiagaraVariables_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOceanologyGlobalDisplacementHelper_SetNiagaraVariables_Statics::OceanologyGlobalDisplacementHelper_eventSetNiagaraVariables_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyGlobalDisplacementHelper_SetNiagaraVariables_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologyGlobalDisplacementHelper_SetNiagaraVariables_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOceanologyGlobalDisplacementHelper_SetNiagaraVariables_Statics::OceanologyGlobalDisplacementHelper_eventSetNiagaraVariables_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanologyGlobalDisplacementHelper_SetNiagaraVariables()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologyGlobalDisplacementHelper_SetNiagaraVariables_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologyGlobalDisplacementHelper::execSetNiagaraVariables)
{
	P_GET_OBJECT(UNiagaraComponent,Z_Param_Niagara);
	P_GET_STRUCT_REF(FOceanologyGlobalDisplacement,Z_Param_Out_GlobalDisplacement);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOceanologyGlobalDisplacementHelper::SetNiagaraVariables(Z_Param_Niagara,Z_Param_Out_GlobalDisplacement);
	P_NATIVE_END;
}
// End Class UOceanologyGlobalDisplacementHelper Function SetNiagaraVariables

// Begin Class UOceanologyGlobalDisplacementHelper
void UOceanologyGlobalDisplacementHelper::StaticRegisterNativesUOceanologyGlobalDisplacementHelper()
{
	UClass* Class = UOceanologyGlobalDisplacementHelper::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "LerpGlobalDisplacement", &UOceanologyGlobalDisplacementHelper::execLerpGlobalDisplacement },
		{ "SetMaterialParameterCollections", &UOceanologyGlobalDisplacementHelper::execSetMaterialParameterCollections },
		{ "SetMaterialParameters", &UOceanologyGlobalDisplacementHelper::execSetMaterialParameters },
		{ "SetNiagaraVariables", &UOceanologyGlobalDisplacementHelper::execSetNiagaraVariables },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOceanologyGlobalDisplacementHelper);
UClass* Z_Construct_UClass_UOceanologyGlobalDisplacementHelper_NoRegister()
{
	return UOceanologyGlobalDisplacementHelper::StaticClass();
}
struct Z_Construct_UClass_UOceanologyGlobalDisplacementHelper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Structs/OceanologyGlobalDisplacement.h" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyGlobalDisplacement.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOceanologyGlobalDisplacementHelper_LerpGlobalDisplacement, "LerpGlobalDisplacement" }, // 2186846434
		{ &Z_Construct_UFunction_UOceanologyGlobalDisplacementHelper_SetMaterialParameterCollections, "SetMaterialParameterCollections" }, // 3069543151
		{ &Z_Construct_UFunction_UOceanologyGlobalDisplacementHelper_SetMaterialParameters, "SetMaterialParameters" }, // 3978654108
		{ &Z_Construct_UFunction_UOceanologyGlobalDisplacementHelper_SetNiagaraVariables, "SetNiagaraVariables" }, // 348995281
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOceanologyGlobalDisplacementHelper>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOceanologyGlobalDisplacementHelper_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Oceanology_Plugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOceanologyGlobalDisplacementHelper_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOceanologyGlobalDisplacementHelper_Statics::ClassParams = {
	&UOceanologyGlobalDisplacementHelper::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOceanologyGlobalDisplacementHelper_Statics::Class_MetaDataParams), Z_Construct_UClass_UOceanologyGlobalDisplacementHelper_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOceanologyGlobalDisplacementHelper()
{
	if (!Z_Registration_Info_UClass_UOceanologyGlobalDisplacementHelper.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOceanologyGlobalDisplacementHelper.OuterSingleton, Z_Construct_UClass_UOceanologyGlobalDisplacementHelper_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOceanologyGlobalDisplacementHelper.OuterSingleton;
}
template<> OCEANOLOGY_PLUGIN_API UClass* StaticClass<UOceanologyGlobalDisplacementHelper>()
{
	return UOceanologyGlobalDisplacementHelper::StaticClass();
}
UOceanologyGlobalDisplacementHelper::UOceanologyGlobalDisplacementHelper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOceanologyGlobalDisplacementHelper);
UOceanologyGlobalDisplacementHelper::~UOceanologyGlobalDisplacementHelper() {}
// End Class UOceanologyGlobalDisplacementHelper

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyGlobalDisplacement_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOceanologyGlobalDisplacement::StaticStruct, Z_Construct_UScriptStruct_FOceanologyGlobalDisplacement_Statics::NewStructOps, TEXT("OceanologyGlobalDisplacement"), &Z_Registration_Info_UScriptStruct_OceanologyGlobalDisplacement, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOceanologyGlobalDisplacement), 1342432749U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOceanologyGlobalDisplacementHelper, UOceanologyGlobalDisplacementHelper::StaticClass, TEXT("UOceanologyGlobalDisplacementHelper"), &Z_Registration_Info_UClass_UOceanologyGlobalDisplacementHelper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOceanologyGlobalDisplacementHelper), 3115692344U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyGlobalDisplacement_h_117311027(TEXT("/Script/Oceanology_Plugin"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyGlobalDisplacement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyGlobalDisplacement_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyGlobalDisplacement_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyGlobalDisplacement_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
