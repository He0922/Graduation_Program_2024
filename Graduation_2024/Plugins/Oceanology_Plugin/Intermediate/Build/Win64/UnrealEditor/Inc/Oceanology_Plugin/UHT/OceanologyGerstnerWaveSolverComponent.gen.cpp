// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Oceanology_Plugin/Public/Components/Wave/OceanologyGerstnerWaveSolverComponent.h"
#include "Oceanology_Plugin/Public/Structs/OceanologyBaseOffset.h"
#include "Oceanology_Plugin/Public/Structs/OceanologyGlobalDisplacement.h"
#include "Oceanology_Plugin/Public/Structs/OceanologyLakePresetResult.h"
#include "Oceanology_Plugin/Public/Structs/OceanologyOceanPresetResult.h"
#include "Oceanology_Plugin/Public/Structs/OceanologyWaterPresetResult.h"
#include "Oceanology_Plugin/Public/Structs/OceanologyWaves.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOceanologyGerstnerWaveSolverComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_UOceanologyGerstnerWaveSolverComponent();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_UOceanologyGerstnerWaveSolverComponent_NoRegister();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_UOceanologyWaveSolverComponent();
OCEANOLOGY_PLUGIN_API UEnum* Z_Construct_UEnum_Oceanology_Plugin_EOceanologyGerstnerWaveSummarize();
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyBaseOffset();
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyGlobalDisplacement();
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyLakePresetResult();
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyOceanPresetResult();
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyWaterPresetResult();
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyWave_1();
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyWave_2();
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyWave_3();
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyWave_4();
UPackage* Z_Construct_UPackage__Script_Oceanology_Plugin();
// End Cross Module References

// Begin Class UOceanologyGerstnerWaveSolverComponent Function DirectionWave
struct Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_DirectionWave_Statics
{
	struct OceanologyGerstnerWaveSolverComponent_eventDirectionWave_Parms
	{
		double Direction;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gerstner Waves" },
		{ "ModuleRelativePath", "Public/Components/Wave/OceanologyGerstnerWaveSolverComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Direction;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_DirectionWave_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyGerstnerWaveSolverComponent_eventDirectionWave_Parms, Direction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_MetaData), NewProp_Direction_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_DirectionWave_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyGerstnerWaveSolverComponent_eventDirectionWave_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_DirectionWave_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_DirectionWave_Statics::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_DirectionWave_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_DirectionWave_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_DirectionWave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologyGerstnerWaveSolverComponent, nullptr, "DirectionWave", nullptr, nullptr, Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_DirectionWave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_DirectionWave_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_DirectionWave_Statics::OceanologyGerstnerWaveSolverComponent_eventDirectionWave_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_DirectionWave_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_DirectionWave_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_DirectionWave_Statics::OceanologyGerstnerWaveSolverComponent_eventDirectionWave_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_DirectionWave()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_DirectionWave_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologyGerstnerWaveSolverComponent::execDirectionWave)
{
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Direction);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UOceanologyGerstnerWaveSolverComponent::DirectionWave(Z_Param_Direction);
	P_NATIVE_END;
}
// End Class UOceanologyGerstnerWaveSolverComponent Function DirectionWave

// Begin Class UOceanologyGerstnerWaveSolverComponent Function DivideWave
struct Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_DivideWave_Statics
{
	struct OceanologyGerstnerWaveSolverComponent_eventDivideWave_Parms
	{
		double Value;
		double ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gerstner Waves" },
		{ "ModuleRelativePath", "Public/Components/Wave/OceanologyGerstnerWaveSolverComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Value;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_DivideWave_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyGerstnerWaveSolverComponent_eventDivideWave_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_DivideWave_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyGerstnerWaveSolverComponent_eventDivideWave_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_DivideWave_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_DivideWave_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_DivideWave_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_DivideWave_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_DivideWave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologyGerstnerWaveSolverComponent, nullptr, "DivideWave", nullptr, nullptr, Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_DivideWave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_DivideWave_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_DivideWave_Statics::OceanologyGerstnerWaveSolverComponent_eventDivideWave_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_DivideWave_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_DivideWave_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_DivideWave_Statics::OceanologyGerstnerWaveSolverComponent_eventDivideWave_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_DivideWave()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_DivideWave_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologyGerstnerWaveSolverComponent::execDivideWave)
{
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(double*)Z_Param__Result=UOceanologyGerstnerWaveSolverComponent::DivideWave(Z_Param_Value);
	P_NATIVE_END;
}
// End Class UOceanologyGerstnerWaveSolverComponent Function DivideWave

// Begin Class UOceanologyGerstnerWaveSolverComponent Function GerstnerWave
struct Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_GerstnerWave_Statics
{
	struct OceanologyGerstnerWaveSolverComponent_eventGerstnerWave_Parms
	{
		FVector Position;
		double Direction;
		double Speed;
		double WaveLength;
		double Amplitude;
		double Steepness;
		double NumWaves;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gerstner Waves" },
		{ "ModuleRelativePath", "Public/Components/Wave/OceanologyGerstnerWaveSolverComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaveLength_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Amplitude_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Steepness_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumWaves_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Direction;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Speed;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_WaveLength;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Amplitude;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Steepness;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_NumWaves;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_GerstnerWave_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyGerstnerWaveSolverComponent_eventGerstnerWave_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_GerstnerWave_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyGerstnerWaveSolverComponent_eventGerstnerWave_Parms, Direction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_MetaData), NewProp_Direction_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_GerstnerWave_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyGerstnerWaveSolverComponent_eventGerstnerWave_Parms, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speed_MetaData), NewProp_Speed_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_GerstnerWave_Statics::NewProp_WaveLength = { "WaveLength", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyGerstnerWaveSolverComponent_eventGerstnerWave_Parms, WaveLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaveLength_MetaData), NewProp_WaveLength_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_GerstnerWave_Statics::NewProp_Amplitude = { "Amplitude", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyGerstnerWaveSolverComponent_eventGerstnerWave_Parms, Amplitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Amplitude_MetaData), NewProp_Amplitude_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_GerstnerWave_Statics::NewProp_Steepness = { "Steepness", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyGerstnerWaveSolverComponent_eventGerstnerWave_Parms, Steepness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Steepness_MetaData), NewProp_Steepness_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_GerstnerWave_Statics::NewProp_NumWaves = { "NumWaves", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyGerstnerWaveSolverComponent_eventGerstnerWave_Parms, NumWaves), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumWaves_MetaData), NewProp_NumWaves_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_GerstnerWave_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyGerstnerWaveSolverComponent_eventGerstnerWave_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_GerstnerWave_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_GerstnerWave_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_GerstnerWave_Statics::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_GerstnerWave_Statics::NewProp_Speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_GerstnerWave_Statics::NewProp_WaveLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_GerstnerWave_Statics::NewProp_Amplitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_GerstnerWave_Statics::NewProp_Steepness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_GerstnerWave_Statics::NewProp_NumWaves,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_GerstnerWave_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_GerstnerWave_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_GerstnerWave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologyGerstnerWaveSolverComponent, nullptr, "GerstnerWave", nullptr, nullptr, Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_GerstnerWave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_GerstnerWave_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_GerstnerWave_Statics::OceanologyGerstnerWaveSolverComponent_eventGerstnerWave_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_GerstnerWave_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_GerstnerWave_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_GerstnerWave_Statics::OceanologyGerstnerWaveSolverComponent_eventGerstnerWave_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_GerstnerWave()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_GerstnerWave_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologyGerstnerWaveSolverComponent::execGerstnerWave)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Position);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Direction);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Speed);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_WaveLength);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Amplitude);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Steepness);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_NumWaves);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GerstnerWave(Z_Param_Out_Position,Z_Param_Direction,Z_Param_Speed,Z_Param_WaveLength,Z_Param_Amplitude,Z_Param_Steepness,Z_Param_NumWaves);
	P_NATIVE_END;
}
// End Class UOceanologyGerstnerWaveSolverComponent Function GerstnerWave

// Begin Class UOceanologyGerstnerWaveSolverComponent Function GerstnerWavesQuadruple
struct Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_GerstnerWavesQuadruple_Statics
{
	struct OceanologyGerstnerWaveSolverComponent_eventGerstnerWavesQuadruple_Parms
	{
		FVector Position;
		double Amplitude;
		double Steepness;
		double Speed;
		double WaveLength;
		double Direction;
		double NumWaves;
		double DirectionOffset;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gerstner Waves" },
		{ "ModuleRelativePath", "Public/Components/Wave/OceanologyGerstnerWaveSolverComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Amplitude_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Steepness_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaveLength_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumWaves_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectionOffset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Amplitude;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Steepness;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Speed;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_WaveLength;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Direction;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_NumWaves;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_DirectionOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_GerstnerWavesQuadruple_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyGerstnerWaveSolverComponent_eventGerstnerWavesQuadruple_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_GerstnerWavesQuadruple_Statics::NewProp_Amplitude = { "Amplitude", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyGerstnerWaveSolverComponent_eventGerstnerWavesQuadruple_Parms, Amplitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Amplitude_MetaData), NewProp_Amplitude_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_GerstnerWavesQuadruple_Statics::NewProp_Steepness = { "Steepness", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyGerstnerWaveSolverComponent_eventGerstnerWavesQuadruple_Parms, Steepness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Steepness_MetaData), NewProp_Steepness_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_GerstnerWavesQuadruple_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyGerstnerWaveSolverComponent_eventGerstnerWavesQuadruple_Parms, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speed_MetaData), NewProp_Speed_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_GerstnerWavesQuadruple_Statics::NewProp_WaveLength = { "WaveLength", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyGerstnerWaveSolverComponent_eventGerstnerWavesQuadruple_Parms, WaveLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaveLength_MetaData), NewProp_WaveLength_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_GerstnerWavesQuadruple_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyGerstnerWaveSolverComponent_eventGerstnerWavesQuadruple_Parms, Direction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_MetaData), NewProp_Direction_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_GerstnerWavesQuadruple_Statics::NewProp_NumWaves = { "NumWaves", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyGerstnerWaveSolverComponent_eventGerstnerWavesQuadruple_Parms, NumWaves), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumWaves_MetaData), NewProp_NumWaves_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_GerstnerWavesQuadruple_Statics::NewProp_DirectionOffset = { "DirectionOffset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyGerstnerWaveSolverComponent_eventGerstnerWavesQuadruple_Parms, DirectionOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectionOffset_MetaData), NewProp_DirectionOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_GerstnerWavesQuadruple_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyGerstnerWaveSolverComponent_eventGerstnerWavesQuadruple_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_GerstnerWavesQuadruple_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_GerstnerWavesQuadruple_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_GerstnerWavesQuadruple_Statics::NewProp_Amplitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_GerstnerWavesQuadruple_Statics::NewProp_Steepness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_GerstnerWavesQuadruple_Statics::NewProp_Speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_GerstnerWavesQuadruple_Statics::NewProp_WaveLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_GerstnerWavesQuadruple_Statics::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_GerstnerWavesQuadruple_Statics::NewProp_NumWaves,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_GerstnerWavesQuadruple_Statics::NewProp_DirectionOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_GerstnerWavesQuadruple_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_GerstnerWavesQuadruple_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_GerstnerWavesQuadruple_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologyGerstnerWaveSolverComponent, nullptr, "GerstnerWavesQuadruple", nullptr, nullptr, Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_GerstnerWavesQuadruple_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_GerstnerWavesQuadruple_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_GerstnerWavesQuadruple_Statics::OceanologyGerstnerWaveSolverComponent_eventGerstnerWavesQuadruple_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_GerstnerWavesQuadruple_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_GerstnerWavesQuadruple_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_GerstnerWavesQuadruple_Statics::OceanologyGerstnerWaveSolverComponent_eventGerstnerWavesQuadruple_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_GerstnerWavesQuadruple()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_GerstnerWavesQuadruple_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologyGerstnerWaveSolverComponent::execGerstnerWavesQuadruple)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Position);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Amplitude);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Steepness);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Speed);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_WaveLength);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Direction);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_NumWaves);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_DirectionOffset);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GerstnerWavesQuadruple(Z_Param_Out_Position,Z_Param_Amplitude,Z_Param_Steepness,Z_Param_Speed,Z_Param_WaveLength,Z_Param_Direction,Z_Param_NumWaves,Z_Param_DirectionOffset);
	P_NATIVE_END;
}
// End Class UOceanologyGerstnerWaveSolverComponent Function GerstnerWavesQuadruple

// Begin Class UOceanologyGerstnerWaveSolverComponent Function MultiplyWave
struct Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_MultiplyWave_Statics
{
	struct OceanologyGerstnerWaveSolverComponent_eventMultiplyWave_Parms
	{
		double Value;
		double ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gerstner Waves" },
		{ "ModuleRelativePath", "Public/Components/Wave/OceanologyGerstnerWaveSolverComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Value;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_MultiplyWave_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyGerstnerWaveSolverComponent_eventMultiplyWave_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_MultiplyWave_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyGerstnerWaveSolverComponent_eventMultiplyWave_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_MultiplyWave_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_MultiplyWave_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_MultiplyWave_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_MultiplyWave_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_MultiplyWave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologyGerstnerWaveSolverComponent, nullptr, "MultiplyWave", nullptr, nullptr, Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_MultiplyWave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_MultiplyWave_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_MultiplyWave_Statics::OceanologyGerstnerWaveSolverComponent_eventMultiplyWave_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_MultiplyWave_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_MultiplyWave_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_MultiplyWave_Statics::OceanologyGerstnerWaveSolverComponent_eventMultiplyWave_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_MultiplyWave()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_MultiplyWave_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologyGerstnerWaveSolverComponent::execMultiplyWave)
{
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(double*)Z_Param__Result=UOceanologyGerstnerWaveSolverComponent::MultiplyWave(Z_Param_Value);
	P_NATIVE_END;
}
// End Class UOceanologyGerstnerWaveSolverComponent Function MultiplyWave

// Begin Class UOceanologyGerstnerWaveSolverComponent Function UpdateLakeWavesByPresetResult
struct OceanologyGerstnerWaveSolverComponent_eventUpdateLakeWavesByPresetResult_Parms
{
	FOceanologyWaterPresetResult WaterPresetResult;
	FOceanologyLakePresetResult LakePresetResult;
};
static FName NAME_UOceanologyGerstnerWaveSolverComponent_UpdateLakeWavesByPresetResult = FName(TEXT("UpdateLakeWavesByPresetResult"));
void UOceanologyGerstnerWaveSolverComponent::UpdateLakeWavesByPresetResult(FOceanologyWaterPresetResult const& WaterPresetResult, FOceanologyLakePresetResult const& LakePresetResult)
{
	OceanologyGerstnerWaveSolverComponent_eventUpdateLakeWavesByPresetResult_Parms Parms;
	Parms.WaterPresetResult=WaterPresetResult;
	Parms.LakePresetResult=LakePresetResult;
	ProcessEvent(FindFunctionChecked(NAME_UOceanologyGerstnerWaveSolverComponent_UpdateLakeWavesByPresetResult),&Parms);
}
struct Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_UpdateLakeWavesByPresetResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Waves" },
		{ "ModuleRelativePath", "Public/Components/Wave/OceanologyGerstnerWaveSolverComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaterPresetResult_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LakePresetResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WaterPresetResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LakePresetResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_UpdateLakeWavesByPresetResult_Statics::NewProp_WaterPresetResult = { "WaterPresetResult", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyGerstnerWaveSolverComponent_eventUpdateLakeWavesByPresetResult_Parms, WaterPresetResult), Z_Construct_UScriptStruct_FOceanologyWaterPresetResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaterPresetResult_MetaData), NewProp_WaterPresetResult_MetaData) }; // 1369265139
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_UpdateLakeWavesByPresetResult_Statics::NewProp_LakePresetResult = { "LakePresetResult", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyGerstnerWaveSolverComponent_eventUpdateLakeWavesByPresetResult_Parms, LakePresetResult), Z_Construct_UScriptStruct_FOceanologyLakePresetResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LakePresetResult_MetaData), NewProp_LakePresetResult_MetaData) }; // 2522097882
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_UpdateLakeWavesByPresetResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_UpdateLakeWavesByPresetResult_Statics::NewProp_WaterPresetResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_UpdateLakeWavesByPresetResult_Statics::NewProp_LakePresetResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_UpdateLakeWavesByPresetResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_UpdateLakeWavesByPresetResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologyGerstnerWaveSolverComponent, nullptr, "UpdateLakeWavesByPresetResult", nullptr, nullptr, Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_UpdateLakeWavesByPresetResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_UpdateLakeWavesByPresetResult_Statics::PropPointers), sizeof(OceanologyGerstnerWaveSolverComponent_eventUpdateLakeWavesByPresetResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_UpdateLakeWavesByPresetResult_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_UpdateLakeWavesByPresetResult_Statics::Function_MetaDataParams) };
static_assert(sizeof(OceanologyGerstnerWaveSolverComponent_eventUpdateLakeWavesByPresetResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_UpdateLakeWavesByPresetResult()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_UpdateLakeWavesByPresetResult_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologyGerstnerWaveSolverComponent::execUpdateLakeWavesByPresetResult)
{
	P_GET_STRUCT_REF(FOceanologyWaterPresetResult,Z_Param_Out_WaterPresetResult);
	P_GET_STRUCT_REF(FOceanologyLakePresetResult,Z_Param_Out_LakePresetResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateLakeWavesByPresetResult_Implementation(Z_Param_Out_WaterPresetResult,Z_Param_Out_LakePresetResult);
	P_NATIVE_END;
}
// End Class UOceanologyGerstnerWaveSolverComponent Function UpdateLakeWavesByPresetResult

// Begin Class UOceanologyGerstnerWaveSolverComponent Function UpdateOceanWavesByPresetResult
struct OceanologyGerstnerWaveSolverComponent_eventUpdateOceanWavesByPresetResult_Parms
{
	FOceanologyWaterPresetResult WaterPresetResult;
	FOceanologyOceanPresetResult OceanPresetResult;
};
static FName NAME_UOceanologyGerstnerWaveSolverComponent_UpdateOceanWavesByPresetResult = FName(TEXT("UpdateOceanWavesByPresetResult"));
void UOceanologyGerstnerWaveSolverComponent::UpdateOceanWavesByPresetResult(FOceanologyWaterPresetResult const& WaterPresetResult, FOceanologyOceanPresetResult const& OceanPresetResult)
{
	OceanologyGerstnerWaveSolverComponent_eventUpdateOceanWavesByPresetResult_Parms Parms;
	Parms.WaterPresetResult=WaterPresetResult;
	Parms.OceanPresetResult=OceanPresetResult;
	ProcessEvent(FindFunctionChecked(NAME_UOceanologyGerstnerWaveSolverComponent_UpdateOceanWavesByPresetResult),&Parms);
}
struct Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_UpdateOceanWavesByPresetResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Waves" },
		{ "ModuleRelativePath", "Public/Components/Wave/OceanologyGerstnerWaveSolverComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaterPresetResult_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OceanPresetResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WaterPresetResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OceanPresetResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_UpdateOceanWavesByPresetResult_Statics::NewProp_WaterPresetResult = { "WaterPresetResult", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyGerstnerWaveSolverComponent_eventUpdateOceanWavesByPresetResult_Parms, WaterPresetResult), Z_Construct_UScriptStruct_FOceanologyWaterPresetResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaterPresetResult_MetaData), NewProp_WaterPresetResult_MetaData) }; // 1369265139
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_UpdateOceanWavesByPresetResult_Statics::NewProp_OceanPresetResult = { "OceanPresetResult", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyGerstnerWaveSolverComponent_eventUpdateOceanWavesByPresetResult_Parms, OceanPresetResult), Z_Construct_UScriptStruct_FOceanologyOceanPresetResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OceanPresetResult_MetaData), NewProp_OceanPresetResult_MetaData) }; // 3964374628
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_UpdateOceanWavesByPresetResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_UpdateOceanWavesByPresetResult_Statics::NewProp_WaterPresetResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_UpdateOceanWavesByPresetResult_Statics::NewProp_OceanPresetResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_UpdateOceanWavesByPresetResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_UpdateOceanWavesByPresetResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologyGerstnerWaveSolverComponent, nullptr, "UpdateOceanWavesByPresetResult", nullptr, nullptr, Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_UpdateOceanWavesByPresetResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_UpdateOceanWavesByPresetResult_Statics::PropPointers), sizeof(OceanologyGerstnerWaveSolverComponent_eventUpdateOceanWavesByPresetResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_UpdateOceanWavesByPresetResult_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_UpdateOceanWavesByPresetResult_Statics::Function_MetaDataParams) };
static_assert(sizeof(OceanologyGerstnerWaveSolverComponent_eventUpdateOceanWavesByPresetResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_UpdateOceanWavesByPresetResult()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_UpdateOceanWavesByPresetResult_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologyGerstnerWaveSolverComponent::execUpdateOceanWavesByPresetResult)
{
	P_GET_STRUCT_REF(FOceanologyWaterPresetResult,Z_Param_Out_WaterPresetResult);
	P_GET_STRUCT_REF(FOceanologyOceanPresetResult,Z_Param_Out_OceanPresetResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateOceanWavesByPresetResult_Implementation(Z_Param_Out_WaterPresetResult,Z_Param_Out_OceanPresetResult);
	P_NATIVE_END;
}
// End Class UOceanologyGerstnerWaveSolverComponent Function UpdateOceanWavesByPresetResult

// Begin Class UOceanologyGerstnerWaveSolverComponent
void UOceanologyGerstnerWaveSolverComponent::StaticRegisterNativesUOceanologyGerstnerWaveSolverComponent()
{
	UClass* Class = UOceanologyGerstnerWaveSolverComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DirectionWave", &UOceanologyGerstnerWaveSolverComponent::execDirectionWave },
		{ "DivideWave", &UOceanologyGerstnerWaveSolverComponent::execDivideWave },
		{ "GerstnerWave", &UOceanologyGerstnerWaveSolverComponent::execGerstnerWave },
		{ "GerstnerWavesQuadruple", &UOceanologyGerstnerWaveSolverComponent::execGerstnerWavesQuadruple },
		{ "MultiplyWave", &UOceanologyGerstnerWaveSolverComponent::execMultiplyWave },
		{ "UpdateLakeWavesByPresetResult", &UOceanologyGerstnerWaveSolverComponent::execUpdateLakeWavesByPresetResult },
		{ "UpdateOceanWavesByPresetResult", &UOceanologyGerstnerWaveSolverComponent::execUpdateOceanWavesByPresetResult },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOceanologyGerstnerWaveSolverComponent);
UClass* Z_Construct_UClass_UOceanologyGerstnerWaveSolverComponent_NoRegister()
{
	return UOceanologyGerstnerWaveSolverComponent::StaticClass();
}
struct Z_Construct_UClass_UOceanologyGerstnerWaveSolverComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Object Activation Components|Activation Collision Lighting HLOD Navigation Replication Input MaterialParameters TextureStreaming Tags AssetUserData Cooking" },
		{ "IncludePath", "Components/Wave/OceanologyGerstnerWaveSolverComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/Wave/OceanologyGerstnerWaveSolverComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalDisplacement_MetaData[] = {
		{ "Category", "Gerstner Waves|Gerstner Waves ( Global )" },
		{ "ModuleRelativePath", "Public/Components/Wave/OceanologyGerstnerWaveSolverComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseOffset_MetaData[] = {
		{ "Category", "Gerstner Waves|Gerstner Waves ( Custom )" },
		{ "ModuleRelativePath", "Public/Components/Wave/OceanologyGerstnerWaveSolverComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Wave_1_MetaData[] = {
		{ "Category", "Gerstner Waves|Gerstner Waves ( Custom )" },
		{ "DisplayName", "\xce\xa3""1" },
		{ "ModuleRelativePath", "Public/Components/Wave/OceanologyGerstnerWaveSolverComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Wave_2_MetaData[] = {
		{ "Category", "Gerstner Waves|Gerstner Waves ( Custom )" },
		{ "DisplayName", "\xce\xa3""2" },
		{ "ModuleRelativePath", "Public/Components/Wave/OceanologyGerstnerWaveSolverComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Wave_3_MetaData[] = {
		{ "Category", "Gerstner Waves|Gerstner Waves ( Custom )" },
		{ "DisplayName", "\xce\xa3""3" },
		{ "ModuleRelativePath", "Public/Components/Wave/OceanologyGerstnerWaveSolverComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Wave_4_MetaData[] = {
		{ "Category", "Gerstner Waves|Gerstner Waves ( Custom )" },
		{ "DisplayName", "\xce\xa3""4" },
		{ "ModuleRelativePath", "Public/Components/Wave/OceanologyGerstnerWaveSolverComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Summarize_MetaData[] = {
		{ "Category", "Gerstner Waves" },
		{ "ModuleRelativePath", "Public/Components/Wave/OceanologyGerstnerWaveSolverComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GlobalDisplacement;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BaseOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Wave_1;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Wave_2;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Wave_3;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Wave_4;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Summarize_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Summarize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_DirectionWave, "DirectionWave" }, // 2103923990
		{ &Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_DivideWave, "DivideWave" }, // 693618954
		{ &Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_GerstnerWave, "GerstnerWave" }, // 1517802708
		{ &Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_GerstnerWavesQuadruple, "GerstnerWavesQuadruple" }, // 880290359
		{ &Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_MultiplyWave, "MultiplyWave" }, // 2649869158
		{ &Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_UpdateLakeWavesByPresetResult, "UpdateLakeWavesByPresetResult" }, // 1720562150
		{ &Z_Construct_UFunction_UOceanologyGerstnerWaveSolverComponent_UpdateOceanWavesByPresetResult, "UpdateOceanWavesByPresetResult" }, // 541305441
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOceanologyGerstnerWaveSolverComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOceanologyGerstnerWaveSolverComponent_Statics::NewProp_GlobalDisplacement = { "GlobalDisplacement", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyGerstnerWaveSolverComponent, GlobalDisplacement), Z_Construct_UScriptStruct_FOceanologyGlobalDisplacement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalDisplacement_MetaData), NewProp_GlobalDisplacement_MetaData) }; // 1342432749
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOceanologyGerstnerWaveSolverComponent_Statics::NewProp_BaseOffset = { "BaseOffset", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyGerstnerWaveSolverComponent, BaseOffset), Z_Construct_UScriptStruct_FOceanologyBaseOffset, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseOffset_MetaData), NewProp_BaseOffset_MetaData) }; // 1128559501
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOceanologyGerstnerWaveSolverComponent_Statics::NewProp_Wave_1 = { "Wave_1", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyGerstnerWaveSolverComponent, Wave_1), Z_Construct_UScriptStruct_FOceanologyWave_1, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Wave_1_MetaData), NewProp_Wave_1_MetaData) }; // 2882325646
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOceanologyGerstnerWaveSolverComponent_Statics::NewProp_Wave_2 = { "Wave_2", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyGerstnerWaveSolverComponent, Wave_2), Z_Construct_UScriptStruct_FOceanologyWave_2, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Wave_2_MetaData), NewProp_Wave_2_MetaData) }; // 4048543760
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOceanologyGerstnerWaveSolverComponent_Statics::NewProp_Wave_3 = { "Wave_3", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyGerstnerWaveSolverComponent, Wave_3), Z_Construct_UScriptStruct_FOceanologyWave_3, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Wave_3_MetaData), NewProp_Wave_3_MetaData) }; // 150167157
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOceanologyGerstnerWaveSolverComponent_Statics::NewProp_Wave_4 = { "Wave_4", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyGerstnerWaveSolverComponent, Wave_4), Z_Construct_UScriptStruct_FOceanologyWave_4, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Wave_4_MetaData), NewProp_Wave_4_MetaData) }; // 1244214835
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOceanologyGerstnerWaveSolverComponent_Statics::NewProp_Summarize_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOceanologyGerstnerWaveSolverComponent_Statics::NewProp_Summarize = { "Summarize", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyGerstnerWaveSolverComponent, Summarize), Z_Construct_UEnum_Oceanology_Plugin_EOceanologyGerstnerWaveSummarize, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Summarize_MetaData), NewProp_Summarize_MetaData) }; // 4070874922
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOceanologyGerstnerWaveSolverComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyGerstnerWaveSolverComponent_Statics::NewProp_GlobalDisplacement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyGerstnerWaveSolverComponent_Statics::NewProp_BaseOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyGerstnerWaveSolverComponent_Statics::NewProp_Wave_1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyGerstnerWaveSolverComponent_Statics::NewProp_Wave_2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyGerstnerWaveSolverComponent_Statics::NewProp_Wave_3,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyGerstnerWaveSolverComponent_Statics::NewProp_Wave_4,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyGerstnerWaveSolverComponent_Statics::NewProp_Summarize_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyGerstnerWaveSolverComponent_Statics::NewProp_Summarize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOceanologyGerstnerWaveSolverComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOceanologyGerstnerWaveSolverComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOceanologyWaveSolverComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Oceanology_Plugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOceanologyGerstnerWaveSolverComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOceanologyGerstnerWaveSolverComponent_Statics::ClassParams = {
	&UOceanologyGerstnerWaveSolverComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOceanologyGerstnerWaveSolverComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOceanologyGerstnerWaveSolverComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOceanologyGerstnerWaveSolverComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UOceanologyGerstnerWaveSolverComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOceanologyGerstnerWaveSolverComponent()
{
	if (!Z_Registration_Info_UClass_UOceanologyGerstnerWaveSolverComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOceanologyGerstnerWaveSolverComponent.OuterSingleton, Z_Construct_UClass_UOceanologyGerstnerWaveSolverComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOceanologyGerstnerWaveSolverComponent.OuterSingleton;
}
template<> OCEANOLOGY_PLUGIN_API UClass* StaticClass<UOceanologyGerstnerWaveSolverComponent>()
{
	return UOceanologyGerstnerWaveSolverComponent::StaticClass();
}
void UOceanologyGerstnerWaveSolverComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_GlobalDisplacement(TEXT("GlobalDisplacement"));
	static const FName Name_BaseOffset(TEXT("BaseOffset"));
	static const FName Name_Wave_1(TEXT("Wave_1"));
	static const FName Name_Wave_2(TEXT("Wave_2"));
	static const FName Name_Wave_3(TEXT("Wave_3"));
	static const FName Name_Wave_4(TEXT("Wave_4"));
	static const FName Name_Summarize(TEXT("Summarize"));
	const bool bIsValid = true
		&& Name_GlobalDisplacement == ClassReps[(int32)ENetFields_Private::GlobalDisplacement].Property->GetFName()
		&& Name_BaseOffset == ClassReps[(int32)ENetFields_Private::BaseOffset].Property->GetFName()
		&& Name_Wave_1 == ClassReps[(int32)ENetFields_Private::Wave_1].Property->GetFName()
		&& Name_Wave_2 == ClassReps[(int32)ENetFields_Private::Wave_2].Property->GetFName()
		&& Name_Wave_3 == ClassReps[(int32)ENetFields_Private::Wave_3].Property->GetFName()
		&& Name_Wave_4 == ClassReps[(int32)ENetFields_Private::Wave_4].Property->GetFName()
		&& Name_Summarize == ClassReps[(int32)ENetFields_Private::Summarize].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UOceanologyGerstnerWaveSolverComponent"));
}
UOceanologyGerstnerWaveSolverComponent::UOceanologyGerstnerWaveSolverComponent() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOceanologyGerstnerWaveSolverComponent);
UOceanologyGerstnerWaveSolverComponent::~UOceanologyGerstnerWaveSolverComponent() {}
// End Class UOceanologyGerstnerWaveSolverComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_Wave_OceanologyGerstnerWaveSolverComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOceanologyGerstnerWaveSolverComponent, UOceanologyGerstnerWaveSolverComponent::StaticClass, TEXT("UOceanologyGerstnerWaveSolverComponent"), &Z_Registration_Info_UClass_UOceanologyGerstnerWaveSolverComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOceanologyGerstnerWaveSolverComponent), 1176954666U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_Wave_OceanologyGerstnerWaveSolverComponent_h_1118976850(TEXT("/Script/Oceanology_Plugin"),
	Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_Wave_OceanologyGerstnerWaveSolverComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_Wave_OceanologyGerstnerWaveSolverComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
