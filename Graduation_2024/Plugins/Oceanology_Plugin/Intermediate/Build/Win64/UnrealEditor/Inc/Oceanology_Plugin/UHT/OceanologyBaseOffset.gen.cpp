// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Oceanology_Plugin/Public/Structs/OceanologyBaseOffset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOceanologyBaseOffset() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollectionInstance_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_UOceanologyBaseOffsetHelper();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_UOceanologyBaseOffsetHelper_NoRegister();
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyBaseOffset();
UPackage* Z_Construct_UPackage__Script_Oceanology_Plugin();
// End Cross Module References

// Begin ScriptStruct FOceanologyBaseOffset
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OceanologyBaseOffset;
class UScriptStruct* FOceanologyBaseOffset::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OceanologyBaseOffset.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OceanologyBaseOffset.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOceanologyBaseOffset, (UObject*)Z_Construct_UPackage__Script_Oceanology_Plugin(), TEXT("OceanologyBaseOffset"));
	}
	return Z_Registration_Info_UScriptStruct_OceanologyBaseOffset.OuterSingleton;
}
template<> OCEANOLOGY_PLUGIN_API UScriptStruct* StaticStruct<FOceanologyBaseOffset>()
{
	return FOceanologyBaseOffset::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOceanologyBaseOffset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyBaseOffset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Amplitude_MetaData[] = {
		{ "Category", "Waves" },
		{ "DisplayName", "Amplitude \xce\xa3" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyBaseOffset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Steepness_MetaData[] = {
		{ "Category", "Waves" },
		{ "DisplayName", "Steepness \xce\xa3" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyBaseOffset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
		{ "Category", "Waves" },
		{ "DisplayName", "Speed \xce\xa3" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyBaseOffset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaveLength_MetaData[] = {
		{ "Category", "Waves" },
		{ "DisplayName", "WaveLength \xce\xa3" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyBaseOffset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
		{ "Category", "Waves" },
		{ "DisplayName", "Direction \xce\xa3" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyBaseOffset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_Offset_MetaData[] = {
		{ "Category", "Waves" },
		{ "DisplayName", "Direction Offset \xce\xa3" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyBaseOffset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_Offset2_MetaData[] = {
		{ "Category", "Waves" },
		{ "DisplayName", "Direction Offset2 \xce\xa3" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyBaseOffset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Amplitude;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Steepness;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Speed;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_WaveLength;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Direction;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Direction_Offset;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Direction_Offset2;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOceanologyBaseOffset>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyBaseOffset_Statics::NewProp_Amplitude = { "Amplitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyBaseOffset, Amplitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Amplitude_MetaData), NewProp_Amplitude_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyBaseOffset_Statics::NewProp_Steepness = { "Steepness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyBaseOffset, Steepness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Steepness_MetaData), NewProp_Steepness_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyBaseOffset_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyBaseOffset, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speed_MetaData), NewProp_Speed_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyBaseOffset_Statics::NewProp_WaveLength = { "WaveLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyBaseOffset, WaveLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaveLength_MetaData), NewProp_WaveLength_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyBaseOffset_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyBaseOffset, Direction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_MetaData), NewProp_Direction_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyBaseOffset_Statics::NewProp_Direction_Offset = { "Direction_Offset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyBaseOffset, Direction_Offset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_Offset_MetaData), NewProp_Direction_Offset_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyBaseOffset_Statics::NewProp_Direction_Offset2 = { "Direction_Offset2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyBaseOffset, Direction_Offset2), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_Offset2_MetaData), NewProp_Direction_Offset2_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOceanologyBaseOffset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyBaseOffset_Statics::NewProp_Amplitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyBaseOffset_Statics::NewProp_Steepness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyBaseOffset_Statics::NewProp_Speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyBaseOffset_Statics::NewProp_WaveLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyBaseOffset_Statics::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyBaseOffset_Statics::NewProp_Direction_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyBaseOffset_Statics::NewProp_Direction_Offset2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanologyBaseOffset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOceanologyBaseOffset_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Oceanology_Plugin,
	nullptr,
	&NewStructOps,
	"OceanologyBaseOffset",
	Z_Construct_UScriptStruct_FOceanologyBaseOffset_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanologyBaseOffset_Statics::PropPointers),
	sizeof(FOceanologyBaseOffset),
	alignof(FOceanologyBaseOffset),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanologyBaseOffset_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOceanologyBaseOffset_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOceanologyBaseOffset()
{
	if (!Z_Registration_Info_UScriptStruct_OceanologyBaseOffset.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OceanologyBaseOffset.InnerSingleton, Z_Construct_UScriptStruct_FOceanologyBaseOffset_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OceanologyBaseOffset.InnerSingleton;
}
// End ScriptStruct FOceanologyBaseOffset

// Begin Class UOceanologyBaseOffsetHelper Function LerpBaseOffset
struct Z_Construct_UFunction_UOceanologyBaseOffsetHelper_LerpBaseOffset_Statics
{
	struct OceanologyBaseOffsetHelper_eventLerpBaseOffset_Parms
	{
		FOceanologyBaseOffset A;
		FOceanologyBaseOffset B;
		double Alpha;
		FOceanologyBaseOffset OutResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BaseOffset" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyBaseOffset.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyBaseOffsetHelper_LerpBaseOffset_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyBaseOffsetHelper_eventLerpBaseOffset_Parms, A), Z_Construct_UScriptStruct_FOceanologyBaseOffset, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 1128559501
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyBaseOffsetHelper_LerpBaseOffset_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyBaseOffsetHelper_eventLerpBaseOffset_Parms, B), Z_Construct_UScriptStruct_FOceanologyBaseOffset, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) }; // 1128559501
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UOceanologyBaseOffsetHelper_LerpBaseOffset_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyBaseOffsetHelper_eventLerpBaseOffset_Parms, Alpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Alpha_MetaData), NewProp_Alpha_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyBaseOffsetHelper_LerpBaseOffset_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyBaseOffsetHelper_eventLerpBaseOffset_Parms, OutResult), Z_Construct_UScriptStruct_FOceanologyBaseOffset, METADATA_PARAMS(0, nullptr) }; // 1128559501
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanologyBaseOffsetHelper_LerpBaseOffset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyBaseOffsetHelper_LerpBaseOffset_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyBaseOffsetHelper_LerpBaseOffset_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyBaseOffsetHelper_LerpBaseOffset_Statics::NewProp_Alpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyBaseOffsetHelper_LerpBaseOffset_Statics::NewProp_OutResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyBaseOffsetHelper_LerpBaseOffset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologyBaseOffsetHelper_LerpBaseOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologyBaseOffsetHelper, nullptr, "LerpBaseOffset", nullptr, nullptr, Z_Construct_UFunction_UOceanologyBaseOffsetHelper_LerpBaseOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyBaseOffsetHelper_LerpBaseOffset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOceanologyBaseOffsetHelper_LerpBaseOffset_Statics::OceanologyBaseOffsetHelper_eventLerpBaseOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyBaseOffsetHelper_LerpBaseOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologyBaseOffsetHelper_LerpBaseOffset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOceanologyBaseOffsetHelper_LerpBaseOffset_Statics::OceanologyBaseOffsetHelper_eventLerpBaseOffset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanologyBaseOffsetHelper_LerpBaseOffset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologyBaseOffsetHelper_LerpBaseOffset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologyBaseOffsetHelper::execLerpBaseOffset)
{
	P_GET_STRUCT_REF(FOceanologyBaseOffset,Z_Param_Out_A);
	P_GET_STRUCT_REF(FOceanologyBaseOffset,Z_Param_Out_B);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Alpha);
	P_GET_STRUCT_REF(FOceanologyBaseOffset,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOceanologyBaseOffsetHelper::LerpBaseOffset(Z_Param_Out_A,Z_Param_Out_B,Z_Param_Alpha,Z_Param_Out_OutResult);
	P_NATIVE_END;
}
// End Class UOceanologyBaseOffsetHelper Function LerpBaseOffset

// Begin Class UOceanologyBaseOffsetHelper Function SetMaterialParameterCollections
struct Z_Construct_UFunction_UOceanologyBaseOffsetHelper_SetMaterialParameterCollections_Statics
{
	struct OceanologyBaseOffsetHelper_eventSetMaterialParameterCollections_Parms
	{
		UMaterialParameterCollectionInstance* MPCI;
		FOceanologyBaseOffset BaseOffset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Base Offset" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyBaseOffset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseOffset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MPCI;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BaseOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOceanologyBaseOffsetHelper_SetMaterialParameterCollections_Statics::NewProp_MPCI = { "MPCI", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyBaseOffsetHelper_eventSetMaterialParameterCollections_Parms, MPCI), Z_Construct_UClass_UMaterialParameterCollectionInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyBaseOffsetHelper_SetMaterialParameterCollections_Statics::NewProp_BaseOffset = { "BaseOffset", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyBaseOffsetHelper_eventSetMaterialParameterCollections_Parms, BaseOffset), Z_Construct_UScriptStruct_FOceanologyBaseOffset, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseOffset_MetaData), NewProp_BaseOffset_MetaData) }; // 1128559501
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanologyBaseOffsetHelper_SetMaterialParameterCollections_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyBaseOffsetHelper_SetMaterialParameterCollections_Statics::NewProp_MPCI,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyBaseOffsetHelper_SetMaterialParameterCollections_Statics::NewProp_BaseOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyBaseOffsetHelper_SetMaterialParameterCollections_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologyBaseOffsetHelper_SetMaterialParameterCollections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologyBaseOffsetHelper, nullptr, "SetMaterialParameterCollections", nullptr, nullptr, Z_Construct_UFunction_UOceanologyBaseOffsetHelper_SetMaterialParameterCollections_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyBaseOffsetHelper_SetMaterialParameterCollections_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOceanologyBaseOffsetHelper_SetMaterialParameterCollections_Statics::OceanologyBaseOffsetHelper_eventSetMaterialParameterCollections_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyBaseOffsetHelper_SetMaterialParameterCollections_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologyBaseOffsetHelper_SetMaterialParameterCollections_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOceanologyBaseOffsetHelper_SetMaterialParameterCollections_Statics::OceanologyBaseOffsetHelper_eventSetMaterialParameterCollections_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanologyBaseOffsetHelper_SetMaterialParameterCollections()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologyBaseOffsetHelper_SetMaterialParameterCollections_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologyBaseOffsetHelper::execSetMaterialParameterCollections)
{
	P_GET_OBJECT(UMaterialParameterCollectionInstance,Z_Param_MPCI);
	P_GET_STRUCT_REF(FOceanologyBaseOffset,Z_Param_Out_BaseOffset);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOceanologyBaseOffsetHelper::SetMaterialParameterCollections(Z_Param_MPCI,Z_Param_Out_BaseOffset);
	P_NATIVE_END;
}
// End Class UOceanologyBaseOffsetHelper Function SetMaterialParameterCollections

// Begin Class UOceanologyBaseOffsetHelper Function SetMaterialParameters
struct Z_Construct_UFunction_UOceanologyBaseOffsetHelper_SetMaterialParameters_Statics
{
	struct OceanologyBaseOffsetHelper_eventSetMaterialParameters_Parms
	{
		UMaterialInstanceDynamic* MID;
		FOceanologyBaseOffset BaseOffset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Base Offset" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyBaseOffset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseOffset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BaseOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOceanologyBaseOffsetHelper_SetMaterialParameters_Statics::NewProp_MID = { "MID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyBaseOffsetHelper_eventSetMaterialParameters_Parms, MID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyBaseOffsetHelper_SetMaterialParameters_Statics::NewProp_BaseOffset = { "BaseOffset", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyBaseOffsetHelper_eventSetMaterialParameters_Parms, BaseOffset), Z_Construct_UScriptStruct_FOceanologyBaseOffset, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseOffset_MetaData), NewProp_BaseOffset_MetaData) }; // 1128559501
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanologyBaseOffsetHelper_SetMaterialParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyBaseOffsetHelper_SetMaterialParameters_Statics::NewProp_MID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyBaseOffsetHelper_SetMaterialParameters_Statics::NewProp_BaseOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyBaseOffsetHelper_SetMaterialParameters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologyBaseOffsetHelper_SetMaterialParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologyBaseOffsetHelper, nullptr, "SetMaterialParameters", nullptr, nullptr, Z_Construct_UFunction_UOceanologyBaseOffsetHelper_SetMaterialParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyBaseOffsetHelper_SetMaterialParameters_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOceanologyBaseOffsetHelper_SetMaterialParameters_Statics::OceanologyBaseOffsetHelper_eventSetMaterialParameters_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyBaseOffsetHelper_SetMaterialParameters_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologyBaseOffsetHelper_SetMaterialParameters_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOceanologyBaseOffsetHelper_SetMaterialParameters_Statics::OceanologyBaseOffsetHelper_eventSetMaterialParameters_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanologyBaseOffsetHelper_SetMaterialParameters()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologyBaseOffsetHelper_SetMaterialParameters_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologyBaseOffsetHelper::execSetMaterialParameters)
{
	P_GET_OBJECT(UMaterialInstanceDynamic,Z_Param_MID);
	P_GET_STRUCT_REF(FOceanologyBaseOffset,Z_Param_Out_BaseOffset);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOceanologyBaseOffsetHelper::SetMaterialParameters(Z_Param_MID,Z_Param_Out_BaseOffset);
	P_NATIVE_END;
}
// End Class UOceanologyBaseOffsetHelper Function SetMaterialParameters

// Begin Class UOceanologyBaseOffsetHelper Function SetNiagaraVariables
struct Z_Construct_UFunction_UOceanologyBaseOffsetHelper_SetNiagaraVariables_Statics
{
	struct OceanologyBaseOffsetHelper_eventSetNiagaraVariables_Parms
	{
		UNiagaraComponent* Niagara;
		FOceanologyBaseOffset BaseOffset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Base Offset" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyBaseOffset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Niagara_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseOffset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Niagara;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BaseOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOceanologyBaseOffsetHelper_SetNiagaraVariables_Statics::NewProp_Niagara = { "Niagara", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyBaseOffsetHelper_eventSetNiagaraVariables_Parms, Niagara), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Niagara_MetaData), NewProp_Niagara_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyBaseOffsetHelper_SetNiagaraVariables_Statics::NewProp_BaseOffset = { "BaseOffset", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyBaseOffsetHelper_eventSetNiagaraVariables_Parms, BaseOffset), Z_Construct_UScriptStruct_FOceanologyBaseOffset, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseOffset_MetaData), NewProp_BaseOffset_MetaData) }; // 1128559501
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanologyBaseOffsetHelper_SetNiagaraVariables_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyBaseOffsetHelper_SetNiagaraVariables_Statics::NewProp_Niagara,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyBaseOffsetHelper_SetNiagaraVariables_Statics::NewProp_BaseOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyBaseOffsetHelper_SetNiagaraVariables_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologyBaseOffsetHelper_SetNiagaraVariables_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologyBaseOffsetHelper, nullptr, "SetNiagaraVariables", nullptr, nullptr, Z_Construct_UFunction_UOceanologyBaseOffsetHelper_SetNiagaraVariables_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyBaseOffsetHelper_SetNiagaraVariables_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOceanologyBaseOffsetHelper_SetNiagaraVariables_Statics::OceanologyBaseOffsetHelper_eventSetNiagaraVariables_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyBaseOffsetHelper_SetNiagaraVariables_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologyBaseOffsetHelper_SetNiagaraVariables_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOceanologyBaseOffsetHelper_SetNiagaraVariables_Statics::OceanologyBaseOffsetHelper_eventSetNiagaraVariables_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanologyBaseOffsetHelper_SetNiagaraVariables()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologyBaseOffsetHelper_SetNiagaraVariables_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologyBaseOffsetHelper::execSetNiagaraVariables)
{
	P_GET_OBJECT(UNiagaraComponent,Z_Param_Niagara);
	P_GET_STRUCT_REF(FOceanologyBaseOffset,Z_Param_Out_BaseOffset);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOceanologyBaseOffsetHelper::SetNiagaraVariables(Z_Param_Niagara,Z_Param_Out_BaseOffset);
	P_NATIVE_END;
}
// End Class UOceanologyBaseOffsetHelper Function SetNiagaraVariables

// Begin Class UOceanologyBaseOffsetHelper
void UOceanologyBaseOffsetHelper::StaticRegisterNativesUOceanologyBaseOffsetHelper()
{
	UClass* Class = UOceanologyBaseOffsetHelper::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "LerpBaseOffset", &UOceanologyBaseOffsetHelper::execLerpBaseOffset },
		{ "SetMaterialParameterCollections", &UOceanologyBaseOffsetHelper::execSetMaterialParameterCollections },
		{ "SetMaterialParameters", &UOceanologyBaseOffsetHelper::execSetMaterialParameters },
		{ "SetNiagaraVariables", &UOceanologyBaseOffsetHelper::execSetNiagaraVariables },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOceanologyBaseOffsetHelper);
UClass* Z_Construct_UClass_UOceanologyBaseOffsetHelper_NoRegister()
{
	return UOceanologyBaseOffsetHelper::StaticClass();
}
struct Z_Construct_UClass_UOceanologyBaseOffsetHelper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Structs/OceanologyBaseOffset.h" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyBaseOffset.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOceanologyBaseOffsetHelper_LerpBaseOffset, "LerpBaseOffset" }, // 2503268635
		{ &Z_Construct_UFunction_UOceanologyBaseOffsetHelper_SetMaterialParameterCollections, "SetMaterialParameterCollections" }, // 705795549
		{ &Z_Construct_UFunction_UOceanologyBaseOffsetHelper_SetMaterialParameters, "SetMaterialParameters" }, // 3517047723
		{ &Z_Construct_UFunction_UOceanologyBaseOffsetHelper_SetNiagaraVariables, "SetNiagaraVariables" }, // 2235828230
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOceanologyBaseOffsetHelper>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOceanologyBaseOffsetHelper_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Oceanology_Plugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOceanologyBaseOffsetHelper_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOceanologyBaseOffsetHelper_Statics::ClassParams = {
	&UOceanologyBaseOffsetHelper::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOceanologyBaseOffsetHelper_Statics::Class_MetaDataParams), Z_Construct_UClass_UOceanologyBaseOffsetHelper_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOceanologyBaseOffsetHelper()
{
	if (!Z_Registration_Info_UClass_UOceanologyBaseOffsetHelper.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOceanologyBaseOffsetHelper.OuterSingleton, Z_Construct_UClass_UOceanologyBaseOffsetHelper_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOceanologyBaseOffsetHelper.OuterSingleton;
}
template<> OCEANOLOGY_PLUGIN_API UClass* StaticClass<UOceanologyBaseOffsetHelper>()
{
	return UOceanologyBaseOffsetHelper::StaticClass();
}
UOceanologyBaseOffsetHelper::UOceanologyBaseOffsetHelper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOceanologyBaseOffsetHelper);
UOceanologyBaseOffsetHelper::~UOceanologyBaseOffsetHelper() {}
// End Class UOceanologyBaseOffsetHelper

// Begin Registration
struct Z_CompiledInDeferFile_FID_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyBaseOffset_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOceanologyBaseOffset::StaticStruct, Z_Construct_UScriptStruct_FOceanologyBaseOffset_Statics::NewStructOps, TEXT("OceanologyBaseOffset"), &Z_Registration_Info_UScriptStruct_OceanologyBaseOffset, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOceanologyBaseOffset), 1128559501U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOceanologyBaseOffsetHelper, UOceanologyBaseOffsetHelper::StaticClass, TEXT("UOceanologyBaseOffsetHelper"), &Z_Registration_Info_UClass_UOceanologyBaseOffsetHelper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOceanologyBaseOffsetHelper), 3840447663U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyBaseOffset_h_2930952204(TEXT("/Script/Oceanology_Plugin"),
	Z_CompiledInDeferFile_FID_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyBaseOffset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyBaseOffset_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyBaseOffset_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyBaseOffset_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
