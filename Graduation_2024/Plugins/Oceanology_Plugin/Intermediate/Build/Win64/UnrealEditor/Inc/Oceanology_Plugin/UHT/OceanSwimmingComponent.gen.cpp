// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Oceanology_Plugin/Public/Components/OceanSwimmingComponent.h"
#include "Runtime/Engine/Classes/Engine/TimerHandle.h"
#include "Runtime/Engine/Public/CharacterMovementComponentAsync.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOceanSwimmingComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMovementMode();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFindFloorResult();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_AOceanologyWaterParent_NoRegister();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_AOceanologyWaterVolume_NoRegister();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_UOceanSwimmingComponent();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_UOceanSwimmingComponent_NoRegister();
OCEANOLOGY_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnDrownDeath__DelegateSignature();
OCEANOLOGY_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnDrowningTask__DelegateSignature();
OCEANOLOGY_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnStartDrowning__DelegateSignature();
OCEANOLOGY_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnStartSwimming__DelegateSignature();
OCEANOLOGY_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnStopDrowning__DelegateSignature();
OCEANOLOGY_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnStopSwimming__DelegateSignature();
OCEANOLOGY_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnUnderwaterEnter__DelegateSignature();
OCEANOLOGY_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnUnderwaterExit__DelegateSignature();
OCEANOLOGY_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnUnderwaterTask__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_Oceanology_Plugin();
// End Cross Module References

// Begin Delegate FOceanOnStartSwimming
struct Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnStartSwimming__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnStartSwimming__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Oceanology_Plugin, nullptr, "OceanOnStartSwimming__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnStartSwimming__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnStartSwimming__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnStartSwimming__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnStartSwimming__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOceanOnStartSwimming_DelegateWrapper(const FMulticastScriptDelegate& OceanOnStartSwimming)
{
	OceanOnStartSwimming.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOceanOnStartSwimming

// Begin Delegate FOceanOnStopSwimming
struct Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnStopSwimming__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnStopSwimming__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Oceanology_Plugin, nullptr, "OceanOnStopSwimming__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnStopSwimming__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnStopSwimming__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnStopSwimming__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnStopSwimming__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOceanOnStopSwimming_DelegateWrapper(const FMulticastScriptDelegate& OceanOnStopSwimming)
{
	OceanOnStopSwimming.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOceanOnStopSwimming

// Begin Delegate FOceanOnUnderwaterTask
struct Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnUnderwaterTask__DelegateSignature_Statics
{
	struct _Script_Oceanology_Plugin_eventOceanOnUnderwaterTask_Parms
	{
		int32 TimeUnderwaterInSeconds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TimeUnderwaterInSeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnUnderwaterTask__DelegateSignature_Statics::NewProp_TimeUnderwaterInSeconds = { "TimeUnderwaterInSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Oceanology_Plugin_eventOceanOnUnderwaterTask_Parms, TimeUnderwaterInSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnUnderwaterTask__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnUnderwaterTask__DelegateSignature_Statics::NewProp_TimeUnderwaterInSeconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnUnderwaterTask__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnUnderwaterTask__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Oceanology_Plugin, nullptr, "OceanOnUnderwaterTask__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnUnderwaterTask__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnUnderwaterTask__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnUnderwaterTask__DelegateSignature_Statics::_Script_Oceanology_Plugin_eventOceanOnUnderwaterTask_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnUnderwaterTask__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnUnderwaterTask__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnUnderwaterTask__DelegateSignature_Statics::_Script_Oceanology_Plugin_eventOceanOnUnderwaterTask_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnUnderwaterTask__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnUnderwaterTask__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOceanOnUnderwaterTask_DelegateWrapper(const FMulticastScriptDelegate& OceanOnUnderwaterTask, int32 TimeUnderwaterInSeconds)
{
	struct _Script_Oceanology_Plugin_eventOceanOnUnderwaterTask_Parms
	{
		int32 TimeUnderwaterInSeconds;
	};
	_Script_Oceanology_Plugin_eventOceanOnUnderwaterTask_Parms Parms;
	Parms.TimeUnderwaterInSeconds=TimeUnderwaterInSeconds;
	OceanOnUnderwaterTask.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOceanOnUnderwaterTask

// Begin Delegate FOceanOnUnderwaterEnter
struct Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnUnderwaterEnter__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnUnderwaterEnter__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Oceanology_Plugin, nullptr, "OceanOnUnderwaterEnter__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnUnderwaterEnter__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnUnderwaterEnter__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnUnderwaterEnter__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnUnderwaterEnter__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOceanOnUnderwaterEnter_DelegateWrapper(const FMulticastScriptDelegate& OceanOnUnderwaterEnter)
{
	OceanOnUnderwaterEnter.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOceanOnUnderwaterEnter

// Begin Delegate FOceanOnUnderwaterExit
struct Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnUnderwaterExit__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnUnderwaterExit__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Oceanology_Plugin, nullptr, "OceanOnUnderwaterExit__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnUnderwaterExit__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnUnderwaterExit__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnUnderwaterExit__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnUnderwaterExit__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOceanOnUnderwaterExit_DelegateWrapper(const FMulticastScriptDelegate& OceanOnUnderwaterExit)
{
	OceanOnUnderwaterExit.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOceanOnUnderwaterExit

// Begin Delegate FOceanOnStartDrowning
struct Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnStartDrowning__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnStartDrowning__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Oceanology_Plugin, nullptr, "OceanOnStartDrowning__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnStartDrowning__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnStartDrowning__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnStartDrowning__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnStartDrowning__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOceanOnStartDrowning_DelegateWrapper(const FMulticastScriptDelegate& OceanOnStartDrowning)
{
	OceanOnStartDrowning.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOceanOnStartDrowning

// Begin Delegate FOceanOnStopDrowning
struct Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnStopDrowning__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnStopDrowning__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Oceanology_Plugin, nullptr, "OceanOnStopDrowning__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnStopDrowning__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnStopDrowning__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnStopDrowning__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnStopDrowning__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOceanOnStopDrowning_DelegateWrapper(const FMulticastScriptDelegate& OceanOnStopDrowning)
{
	OceanOnStopDrowning.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOceanOnStopDrowning

// Begin Delegate FOceanOnDrowningTask
struct Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnDrowningTask__DelegateSignature_Statics
{
	struct _Script_Oceanology_Plugin_eventOceanOnDrowningTask_Parms
	{
		int32 TimeDrowningInSeconds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TimeDrowningInSeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnDrowningTask__DelegateSignature_Statics::NewProp_TimeDrowningInSeconds = { "TimeDrowningInSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Oceanology_Plugin_eventOceanOnDrowningTask_Parms, TimeDrowningInSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnDrowningTask__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnDrowningTask__DelegateSignature_Statics::NewProp_TimeDrowningInSeconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnDrowningTask__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnDrowningTask__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Oceanology_Plugin, nullptr, "OceanOnDrowningTask__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnDrowningTask__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnDrowningTask__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnDrowningTask__DelegateSignature_Statics::_Script_Oceanology_Plugin_eventOceanOnDrowningTask_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnDrowningTask__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnDrowningTask__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnDrowningTask__DelegateSignature_Statics::_Script_Oceanology_Plugin_eventOceanOnDrowningTask_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnDrowningTask__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnDrowningTask__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOceanOnDrowningTask_DelegateWrapper(const FMulticastScriptDelegate& OceanOnDrowningTask, int32 TimeDrowningInSeconds)
{
	struct _Script_Oceanology_Plugin_eventOceanOnDrowningTask_Parms
	{
		int32 TimeDrowningInSeconds;
	};
	_Script_Oceanology_Plugin_eventOceanOnDrowningTask_Parms Parms;
	Parms.TimeDrowningInSeconds=TimeDrowningInSeconds;
	OceanOnDrowningTask.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOceanOnDrowningTask

// Begin Delegate FOceanOnDrownDeath
struct Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnDrownDeath__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnDrownDeath__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Oceanology_Plugin, nullptr, "OceanOnDrownDeath__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnDrownDeath__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnDrownDeath__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnDrownDeath__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnDrownDeath__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOceanOnDrownDeath_DelegateWrapper(const FMulticastScriptDelegate& OceanOnDrownDeath)
{
	OceanOnDrownDeath.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOceanOnDrownDeath

// Begin Class UOceanSwimmingComponent Function CanAlterState
struct OceanSwimmingComponent_eventCanAlterState_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	OceanSwimmingComponent_eventCanAlterState_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_UOceanSwimmingComponent_CanAlterState = FName(TEXT("CanAlterState"));
bool UOceanSwimmingComponent::CanAlterState()
{
	OceanSwimmingComponent_eventCanAlterState_Parms Parms;
	ProcessEvent(FindFunctionChecked(NAME_UOceanSwimmingComponent_CanAlterState),&Parms);
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_UOceanSwimmingComponent_CanAlterState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Swimming" },
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOceanSwimmingComponent_CanAlterState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OceanSwimmingComponent_eventCanAlterState_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOceanSwimmingComponent_CanAlterState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OceanSwimmingComponent_eventCanAlterState_Parms), &Z_Construct_UFunction_UOceanSwimmingComponent_CanAlterState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanSwimmingComponent_CanAlterState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanSwimmingComponent_CanAlterState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanSwimmingComponent_CanAlterState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanSwimmingComponent_CanAlterState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanSwimmingComponent, nullptr, "CanAlterState", nullptr, nullptr, Z_Construct_UFunction_UOceanSwimmingComponent_CanAlterState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanSwimmingComponent_CanAlterState_Statics::PropPointers), sizeof(OceanSwimmingComponent_eventCanAlterState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanSwimmingComponent_CanAlterState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanSwimmingComponent_CanAlterState_Statics::Function_MetaDataParams) };
static_assert(sizeof(OceanSwimmingComponent_eventCanAlterState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanSwimmingComponent_CanAlterState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanSwimmingComponent_CanAlterState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanSwimmingComponent::execCanAlterState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanAlterState_Implementation();
	P_NATIVE_END;
}
// End Class UOceanSwimmingComponent Function CanAlterState

// Begin Class UOceanSwimmingComponent Function CanEnterWater
struct OceanSwimmingComponent_eventCanEnterWater_Parms
{
	FName Socket;
	bool Underwater;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	OceanSwimmingComponent_eventCanEnterWater_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_UOceanSwimmingComponent_CanEnterWater = FName(TEXT("CanEnterWater"));
bool UOceanSwimmingComponent::CanEnterWater(const FName Socket, bool Underwater)
{
	OceanSwimmingComponent_eventCanEnterWater_Parms Parms;
	Parms.Socket=Socket;
	Parms.Underwater=Underwater ? true : false;
	ProcessEvent(FindFunctionChecked(NAME_UOceanSwimmingComponent_CanEnterWater),&Parms);
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_UOceanSwimmingComponent_CanEnterWater_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Swimming" },
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Socket_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Underwater_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Socket;
	static void NewProp_Underwater_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Underwater;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOceanSwimmingComponent_CanEnterWater_Statics::NewProp_Socket = { "Socket", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanSwimmingComponent_eventCanEnterWater_Parms, Socket), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Socket_MetaData), NewProp_Socket_MetaData) };
void Z_Construct_UFunction_UOceanSwimmingComponent_CanEnterWater_Statics::NewProp_Underwater_SetBit(void* Obj)
{
	((OceanSwimmingComponent_eventCanEnterWater_Parms*)Obj)->Underwater = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOceanSwimmingComponent_CanEnterWater_Statics::NewProp_Underwater = { "Underwater", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OceanSwimmingComponent_eventCanEnterWater_Parms), &Z_Construct_UFunction_UOceanSwimmingComponent_CanEnterWater_Statics::NewProp_Underwater_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Underwater_MetaData), NewProp_Underwater_MetaData) };
void Z_Construct_UFunction_UOceanSwimmingComponent_CanEnterWater_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OceanSwimmingComponent_eventCanEnterWater_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOceanSwimmingComponent_CanEnterWater_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OceanSwimmingComponent_eventCanEnterWater_Parms), &Z_Construct_UFunction_UOceanSwimmingComponent_CanEnterWater_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanSwimmingComponent_CanEnterWater_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanSwimmingComponent_CanEnterWater_Statics::NewProp_Socket,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanSwimmingComponent_CanEnterWater_Statics::NewProp_Underwater,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanSwimmingComponent_CanEnterWater_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanSwimmingComponent_CanEnterWater_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanSwimmingComponent_CanEnterWater_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanSwimmingComponent, nullptr, "CanEnterWater", nullptr, nullptr, Z_Construct_UFunction_UOceanSwimmingComponent_CanEnterWater_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanSwimmingComponent_CanEnterWater_Statics::PropPointers), sizeof(OceanSwimmingComponent_eventCanEnterWater_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanSwimmingComponent_CanEnterWater_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanSwimmingComponent_CanEnterWater_Statics::Function_MetaDataParams) };
static_assert(sizeof(OceanSwimmingComponent_eventCanEnterWater_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanSwimmingComponent_CanEnterWater()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanSwimmingComponent_CanEnterWater_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanSwimmingComponent::execCanEnterWater)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Socket);
	P_GET_UBOOL(Z_Param_Underwater);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanEnterWater_Implementation(Z_Param_Socket,Z_Param_Underwater);
	P_NATIVE_END;
}
// End Class UOceanSwimmingComponent Function CanEnterWater

// Begin Class UOceanSwimmingComponent Function CanExitWater
struct OceanSwimmingComponent_eventCanExitWater_Parms
{
	FName Socket;
	bool Underwater;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	OceanSwimmingComponent_eventCanExitWater_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_UOceanSwimmingComponent_CanExitWater = FName(TEXT("CanExitWater"));
bool UOceanSwimmingComponent::CanExitWater(const FName Socket, bool Underwater)
{
	OceanSwimmingComponent_eventCanExitWater_Parms Parms;
	Parms.Socket=Socket;
	Parms.Underwater=Underwater ? true : false;
	ProcessEvent(FindFunctionChecked(NAME_UOceanSwimmingComponent_CanExitWater),&Parms);
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_UOceanSwimmingComponent_CanExitWater_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Swimming" },
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Socket_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Underwater_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Socket;
	static void NewProp_Underwater_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Underwater;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOceanSwimmingComponent_CanExitWater_Statics::NewProp_Socket = { "Socket", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanSwimmingComponent_eventCanExitWater_Parms, Socket), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Socket_MetaData), NewProp_Socket_MetaData) };
void Z_Construct_UFunction_UOceanSwimmingComponent_CanExitWater_Statics::NewProp_Underwater_SetBit(void* Obj)
{
	((OceanSwimmingComponent_eventCanExitWater_Parms*)Obj)->Underwater = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOceanSwimmingComponent_CanExitWater_Statics::NewProp_Underwater = { "Underwater", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OceanSwimmingComponent_eventCanExitWater_Parms), &Z_Construct_UFunction_UOceanSwimmingComponent_CanExitWater_Statics::NewProp_Underwater_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Underwater_MetaData), NewProp_Underwater_MetaData) };
void Z_Construct_UFunction_UOceanSwimmingComponent_CanExitWater_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OceanSwimmingComponent_eventCanExitWater_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOceanSwimmingComponent_CanExitWater_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OceanSwimmingComponent_eventCanExitWater_Parms), &Z_Construct_UFunction_UOceanSwimmingComponent_CanExitWater_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanSwimmingComponent_CanExitWater_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanSwimmingComponent_CanExitWater_Statics::NewProp_Socket,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanSwimmingComponent_CanExitWater_Statics::NewProp_Underwater,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanSwimmingComponent_CanExitWater_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanSwimmingComponent_CanExitWater_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanSwimmingComponent_CanExitWater_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanSwimmingComponent, nullptr, "CanExitWater", nullptr, nullptr, Z_Construct_UFunction_UOceanSwimmingComponent_CanExitWater_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanSwimmingComponent_CanExitWater_Statics::PropPointers), sizeof(OceanSwimmingComponent_eventCanExitWater_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanSwimmingComponent_CanExitWater_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanSwimmingComponent_CanExitWater_Statics::Function_MetaDataParams) };
static_assert(sizeof(OceanSwimmingComponent_eventCanExitWater_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanSwimmingComponent_CanExitWater()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanSwimmingComponent_CanExitWater_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanSwimmingComponent::execCanExitWater)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Socket);
	P_GET_UBOOL(Z_Param_Underwater);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanExitWater_Implementation(Z_Param_Socket,Z_Param_Underwater);
	P_NATIVE_END;
}
// End Class UOceanSwimmingComponent Function CanExitWater

// Begin Class UOceanSwimmingComponent Function CanStartSwim
struct OceanSwimmingComponent_eventCanStartSwim_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	OceanSwimmingComponent_eventCanStartSwim_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_UOceanSwimmingComponent_CanStartSwim = FName(TEXT("CanStartSwim"));
bool UOceanSwimmingComponent::CanStartSwim()
{
	OceanSwimmingComponent_eventCanStartSwim_Parms Parms;
	ProcessEvent(FindFunctionChecked(NAME_UOceanSwimmingComponent_CanStartSwim),&Parms);
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_UOceanSwimmingComponent_CanStartSwim_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Swimming" },
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOceanSwimmingComponent_CanStartSwim_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OceanSwimmingComponent_eventCanStartSwim_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOceanSwimmingComponent_CanStartSwim_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OceanSwimmingComponent_eventCanStartSwim_Parms), &Z_Construct_UFunction_UOceanSwimmingComponent_CanStartSwim_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanSwimmingComponent_CanStartSwim_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanSwimmingComponent_CanStartSwim_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanSwimmingComponent_CanStartSwim_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanSwimmingComponent_CanStartSwim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanSwimmingComponent, nullptr, "CanStartSwim", nullptr, nullptr, Z_Construct_UFunction_UOceanSwimmingComponent_CanStartSwim_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanSwimmingComponent_CanStartSwim_Statics::PropPointers), sizeof(OceanSwimmingComponent_eventCanStartSwim_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanSwimmingComponent_CanStartSwim_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanSwimmingComponent_CanStartSwim_Statics::Function_MetaDataParams) };
static_assert(sizeof(OceanSwimmingComponent_eventCanStartSwim_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanSwimmingComponent_CanStartSwim()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanSwimmingComponent_CanStartSwim_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanSwimmingComponent::execCanStartSwim)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanStartSwim_Implementation();
	P_NATIVE_END;
}
// End Class UOceanSwimmingComponent Function CanStartSwim

// Begin Class UOceanSwimmingComponent Function CanStopSwim
struct OceanSwimmingComponent_eventCanStopSwim_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	OceanSwimmingComponent_eventCanStopSwim_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_UOceanSwimmingComponent_CanStopSwim = FName(TEXT("CanStopSwim"));
bool UOceanSwimmingComponent::CanStopSwim()
{
	OceanSwimmingComponent_eventCanStopSwim_Parms Parms;
	ProcessEvent(FindFunctionChecked(NAME_UOceanSwimmingComponent_CanStopSwim),&Parms);
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_UOceanSwimmingComponent_CanStopSwim_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Swimming" },
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOceanSwimmingComponent_CanStopSwim_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OceanSwimmingComponent_eventCanStopSwim_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOceanSwimmingComponent_CanStopSwim_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OceanSwimmingComponent_eventCanStopSwim_Parms), &Z_Construct_UFunction_UOceanSwimmingComponent_CanStopSwim_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanSwimmingComponent_CanStopSwim_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanSwimmingComponent_CanStopSwim_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanSwimmingComponent_CanStopSwim_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanSwimmingComponent_CanStopSwim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanSwimmingComponent, nullptr, "CanStopSwim", nullptr, nullptr, Z_Construct_UFunction_UOceanSwimmingComponent_CanStopSwim_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanSwimmingComponent_CanStopSwim_Statics::PropPointers), sizeof(OceanSwimmingComponent_eventCanStopSwim_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanSwimmingComponent_CanStopSwim_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanSwimmingComponent_CanStopSwim_Statics::Function_MetaDataParams) };
static_assert(sizeof(OceanSwimmingComponent_eventCanStopSwim_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanSwimmingComponent_CanStopSwim()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanSwimmingComponent_CanStopSwim_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanSwimmingComponent::execCanStopSwim)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanStopSwim_Implementation();
	P_NATIVE_END;
}
// End Class UOceanSwimmingComponent Function CanStopSwim

// Begin Class UOceanSwimmingComponent Function ComputeWaterFloorHeight
struct Z_Construct_UFunction_UOceanSwimmingComponent_ComputeWaterFloorHeight_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanSwimmingComponent_ComputeWaterFloorHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanSwimmingComponent, nullptr, "ComputeWaterFloorHeight", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanSwimmingComponent_ComputeWaterFloorHeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanSwimmingComponent_ComputeWaterFloorHeight_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UOceanSwimmingComponent_ComputeWaterFloorHeight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanSwimmingComponent_ComputeWaterFloorHeight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanSwimmingComponent::execComputeWaterFloorHeight)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ComputeWaterFloorHeight();
	P_NATIVE_END;
}
// End Class UOceanSwimmingComponent Function ComputeWaterFloorHeight

// Begin Class UOceanSwimmingComponent Function DrowningTask
struct Z_Construct_UFunction_UOceanSwimmingComponent_DrowningTask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanSwimmingComponent_DrowningTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanSwimmingComponent, nullptr, "DrowningTask", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanSwimmingComponent_DrowningTask_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanSwimmingComponent_DrowningTask_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UOceanSwimmingComponent_DrowningTask()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanSwimmingComponent_DrowningTask_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanSwimmingComponent::execDrowningTask)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DrowningTask();
	P_NATIVE_END;
}
// End Class UOceanSwimmingComponent Function DrowningTask

// Begin Class UOceanSwimmingComponent Function DrownToDeath
struct Z_Construct_UFunction_UOceanSwimmingComponent_DrownToDeath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanSwimmingComponent_DrownToDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanSwimmingComponent, nullptr, "DrownToDeath", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanSwimmingComponent_DrownToDeath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanSwimmingComponent_DrownToDeath_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UOceanSwimmingComponent_DrownToDeath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanSwimmingComponent_DrownToDeath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanSwimmingComponent::execDrownToDeath)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DrownToDeath();
	P_NATIVE_END;
}
// End Class UOceanSwimmingComponent Function DrownToDeath

// Begin Class UOceanSwimmingComponent Function GetCharacterMovement
struct OceanSwimmingComponent_eventGetCharacterMovement_Parms
{
	UCharacterMovementComponent* ReturnValue;

	/** Constructor, initializes return property only **/
	OceanSwimmingComponent_eventGetCharacterMovement_Parms()
		: ReturnValue(NULL)
	{
	}
};
static FName NAME_UOceanSwimmingComponent_GetCharacterMovement = FName(TEXT("GetCharacterMovement"));
UCharacterMovementComponent* UOceanSwimmingComponent::GetCharacterMovement()
{
	OceanSwimmingComponent_eventGetCharacterMovement_Parms Parms;
	ProcessEvent(FindFunctionChecked(NAME_UOceanSwimmingComponent_GetCharacterMovement),&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UOceanSwimmingComponent_GetCharacterMovement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Swimming" },
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOceanSwimmingComponent_GetCharacterMovement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanSwimmingComponent_eventGetCharacterMovement_Parms, ReturnValue), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanSwimmingComponent_GetCharacterMovement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanSwimmingComponent_GetCharacterMovement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanSwimmingComponent_GetCharacterMovement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanSwimmingComponent_GetCharacterMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanSwimmingComponent, nullptr, "GetCharacterMovement", nullptr, nullptr, Z_Construct_UFunction_UOceanSwimmingComponent_GetCharacterMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanSwimmingComponent_GetCharacterMovement_Statics::PropPointers), sizeof(OceanSwimmingComponent_eventGetCharacterMovement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanSwimmingComponent_GetCharacterMovement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanSwimmingComponent_GetCharacterMovement_Statics::Function_MetaDataParams) };
static_assert(sizeof(OceanSwimmingComponent_eventGetCharacterMovement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanSwimmingComponent_GetCharacterMovement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanSwimmingComponent_GetCharacterMovement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanSwimmingComponent::execGetCharacterMovement)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCharacterMovementComponent**)Z_Param__Result=P_THIS->GetCharacterMovement_Implementation();
	P_NATIVE_END;
}
// End Class UOceanSwimmingComponent Function GetCharacterMovement

// Begin Class UOceanSwimmingComponent Function GetCurrentWater
struct Z_Construct_UFunction_UOceanSwimmingComponent_GetCurrentWater_Statics
{
	struct OceanSwimmingComponent_eventGetCurrentWater_Parms
	{
		AOceanologyWaterParent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Swimming" },
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOceanSwimmingComponent_GetCurrentWater_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanSwimmingComponent_eventGetCurrentWater_Parms, ReturnValue), Z_Construct_UClass_AOceanologyWaterParent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanSwimmingComponent_GetCurrentWater_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanSwimmingComponent_GetCurrentWater_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanSwimmingComponent_GetCurrentWater_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanSwimmingComponent_GetCurrentWater_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanSwimmingComponent, nullptr, "GetCurrentWater", nullptr, nullptr, Z_Construct_UFunction_UOceanSwimmingComponent_GetCurrentWater_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanSwimmingComponent_GetCurrentWater_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOceanSwimmingComponent_GetCurrentWater_Statics::OceanSwimmingComponent_eventGetCurrentWater_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanSwimmingComponent_GetCurrentWater_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanSwimmingComponent_GetCurrentWater_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOceanSwimmingComponent_GetCurrentWater_Statics::OceanSwimmingComponent_eventGetCurrentWater_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanSwimmingComponent_GetCurrentWater()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanSwimmingComponent_GetCurrentWater_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanSwimmingComponent::execGetCurrentWater)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AOceanologyWaterParent**)Z_Param__Result=P_THIS->GetCurrentWater();
	P_NATIVE_END;
}
// End Class UOceanSwimmingComponent Function GetCurrentWater

// Begin Class UOceanSwimmingComponent Function GetCurrentWaterVolume
struct Z_Construct_UFunction_UOceanSwimmingComponent_GetCurrentWaterVolume_Statics
{
	struct OceanSwimmingComponent_eventGetCurrentWaterVolume_Parms
	{
		AOceanologyWaterVolume* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Buoyancy" },
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOceanSwimmingComponent_GetCurrentWaterVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanSwimmingComponent_eventGetCurrentWaterVolume_Parms, ReturnValue), Z_Construct_UClass_AOceanologyWaterVolume_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanSwimmingComponent_GetCurrentWaterVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanSwimmingComponent_GetCurrentWaterVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanSwimmingComponent_GetCurrentWaterVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanSwimmingComponent_GetCurrentWaterVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanSwimmingComponent, nullptr, "GetCurrentWaterVolume", nullptr, nullptr, Z_Construct_UFunction_UOceanSwimmingComponent_GetCurrentWaterVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanSwimmingComponent_GetCurrentWaterVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOceanSwimmingComponent_GetCurrentWaterVolume_Statics::OceanSwimmingComponent_eventGetCurrentWaterVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanSwimmingComponent_GetCurrentWaterVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanSwimmingComponent_GetCurrentWaterVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOceanSwimmingComponent_GetCurrentWaterVolume_Statics::OceanSwimmingComponent_eventGetCurrentWaterVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanSwimmingComponent_GetCurrentWaterVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanSwimmingComponent_GetCurrentWaterVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanSwimmingComponent::execGetCurrentWaterVolume)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AOceanologyWaterVolume**)Z_Param__Result=P_THIS->GetCurrentWaterVolume();
	P_NATIVE_END;
}
// End Class UOceanSwimmingComponent Function GetCurrentWaterVolume

// Begin Class UOceanSwimmingComponent Function IsSurfaceLockedSwimming
struct Z_Construct_UFunction_UOceanSwimmingComponent_IsSurfaceLockedSwimming_Statics
{
	struct OceanSwimmingComponent_eventIsSurfaceLockedSwimming_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Swimming" },
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOceanSwimmingComponent_IsSurfaceLockedSwimming_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OceanSwimmingComponent_eventIsSurfaceLockedSwimming_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOceanSwimmingComponent_IsSurfaceLockedSwimming_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OceanSwimmingComponent_eventIsSurfaceLockedSwimming_Parms), &Z_Construct_UFunction_UOceanSwimmingComponent_IsSurfaceLockedSwimming_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanSwimmingComponent_IsSurfaceLockedSwimming_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanSwimmingComponent_IsSurfaceLockedSwimming_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanSwimmingComponent_IsSurfaceLockedSwimming_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanSwimmingComponent_IsSurfaceLockedSwimming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanSwimmingComponent, nullptr, "IsSurfaceLockedSwimming", nullptr, nullptr, Z_Construct_UFunction_UOceanSwimmingComponent_IsSurfaceLockedSwimming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanSwimmingComponent_IsSurfaceLockedSwimming_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOceanSwimmingComponent_IsSurfaceLockedSwimming_Statics::OceanSwimmingComponent_eventIsSurfaceLockedSwimming_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanSwimmingComponent_IsSurfaceLockedSwimming_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanSwimmingComponent_IsSurfaceLockedSwimming_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOceanSwimmingComponent_IsSurfaceLockedSwimming_Statics::OceanSwimmingComponent_eventIsSurfaceLockedSwimming_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanSwimmingComponent_IsSurfaceLockedSwimming()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanSwimmingComponent_IsSurfaceLockedSwimming_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanSwimmingComponent::execIsSurfaceLockedSwimming)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsSurfaceLockedSwimming();
	P_NATIVE_END;
}
// End Class UOceanSwimmingComponent Function IsSurfaceLockedSwimming

// Begin Class UOceanSwimmingComponent Function NetMulticast_LookUp
struct OceanSwimmingComponent_eventNetMulticast_LookUp_Parms
{
	double AxisValue;
};
static FName NAME_UOceanSwimmingComponent_NetMulticast_LookUp = FName(TEXT("NetMulticast_LookUp"));
void UOceanSwimmingComponent::NetMulticast_LookUp(const double AxisValue)
{
	OceanSwimmingComponent_eventNetMulticast_LookUp_Parms Parms;
	Parms.AxisValue=AxisValue;
	ProcessEvent(FindFunctionChecked(NAME_UOceanSwimmingComponent_NetMulticast_LookUp),&Parms);
}
struct Z_Construct_UFunction_UOceanSwimmingComponent_NetMulticast_LookUp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Swimming|Controls" },
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxisValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_AxisValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UOceanSwimmingComponent_NetMulticast_LookUp_Statics::NewProp_AxisValue = { "AxisValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanSwimmingComponent_eventNetMulticast_LookUp_Parms, AxisValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxisValue_MetaData), NewProp_AxisValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanSwimmingComponent_NetMulticast_LookUp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanSwimmingComponent_NetMulticast_LookUp_Statics::NewProp_AxisValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanSwimmingComponent_NetMulticast_LookUp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanSwimmingComponent_NetMulticast_LookUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanSwimmingComponent, nullptr, "NetMulticast_LookUp", nullptr, nullptr, Z_Construct_UFunction_UOceanSwimmingComponent_NetMulticast_LookUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanSwimmingComponent_NetMulticast_LookUp_Statics::PropPointers), sizeof(OceanSwimmingComponent_eventNetMulticast_LookUp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanSwimmingComponent_NetMulticast_LookUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanSwimmingComponent_NetMulticast_LookUp_Statics::Function_MetaDataParams) };
static_assert(sizeof(OceanSwimmingComponent_eventNetMulticast_LookUp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanSwimmingComponent_NetMulticast_LookUp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanSwimmingComponent_NetMulticast_LookUp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanSwimmingComponent::execNetMulticast_LookUp)
{
	P_GET_PROPERTY(FDoubleProperty,Z_Param_AxisValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NetMulticast_LookUp_Implementation(Z_Param_AxisValue);
	P_NATIVE_END;
}
// End Class UOceanSwimmingComponent Function NetMulticast_LookUp

// Begin Class UOceanSwimmingComponent Function NetMulticast_MoveForwardBackward
struct OceanSwimmingComponent_eventNetMulticast_MoveForwardBackward_Parms
{
	double AxisValue;
};
static FName NAME_UOceanSwimmingComponent_NetMulticast_MoveForwardBackward = FName(TEXT("NetMulticast_MoveForwardBackward"));
void UOceanSwimmingComponent::NetMulticast_MoveForwardBackward(const double AxisValue)
{
	OceanSwimmingComponent_eventNetMulticast_MoveForwardBackward_Parms Parms;
	Parms.AxisValue=AxisValue;
	ProcessEvent(FindFunctionChecked(NAME_UOceanSwimmingComponent_NetMulticast_MoveForwardBackward),&Parms);
}
struct Z_Construct_UFunction_UOceanSwimmingComponent_NetMulticast_MoveForwardBackward_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Swimming|Controls" },
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxisValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_AxisValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UOceanSwimmingComponent_NetMulticast_MoveForwardBackward_Statics::NewProp_AxisValue = { "AxisValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanSwimmingComponent_eventNetMulticast_MoveForwardBackward_Parms, AxisValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxisValue_MetaData), NewProp_AxisValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanSwimmingComponent_NetMulticast_MoveForwardBackward_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanSwimmingComponent_NetMulticast_MoveForwardBackward_Statics::NewProp_AxisValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanSwimmingComponent_NetMulticast_MoveForwardBackward_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanSwimmingComponent_NetMulticast_MoveForwardBackward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanSwimmingComponent, nullptr, "NetMulticast_MoveForwardBackward", nullptr, nullptr, Z_Construct_UFunction_UOceanSwimmingComponent_NetMulticast_MoveForwardBackward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanSwimmingComponent_NetMulticast_MoveForwardBackward_Statics::PropPointers), sizeof(OceanSwimmingComponent_eventNetMulticast_MoveForwardBackward_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanSwimmingComponent_NetMulticast_MoveForwardBackward_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanSwimmingComponent_NetMulticast_MoveForwardBackward_Statics::Function_MetaDataParams) };
static_assert(sizeof(OceanSwimmingComponent_eventNetMulticast_MoveForwardBackward_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanSwimmingComponent_NetMulticast_MoveForwardBackward()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanSwimmingComponent_NetMulticast_MoveForwardBackward_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanSwimmingComponent::execNetMulticast_MoveForwardBackward)
{
	P_GET_PROPERTY(FDoubleProperty,Z_Param_AxisValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NetMulticast_MoveForwardBackward_Implementation(Z_Param_AxisValue);
	P_NATIVE_END;
}
// End Class UOceanSwimmingComponent Function NetMulticast_MoveForwardBackward

// Begin Class UOceanSwimmingComponent Function NetMulticast_MoveLeftRight
struct OceanSwimmingComponent_eventNetMulticast_MoveLeftRight_Parms
{
	double AxisValue;
};
static FName NAME_UOceanSwimmingComponent_NetMulticast_MoveLeftRight = FName(TEXT("NetMulticast_MoveLeftRight"));
void UOceanSwimmingComponent::NetMulticast_MoveLeftRight(const double AxisValue)
{
	OceanSwimmingComponent_eventNetMulticast_MoveLeftRight_Parms Parms;
	Parms.AxisValue=AxisValue;
	ProcessEvent(FindFunctionChecked(NAME_UOceanSwimmingComponent_NetMulticast_MoveLeftRight),&Parms);
}
struct Z_Construct_UFunction_UOceanSwimmingComponent_NetMulticast_MoveLeftRight_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Swimming|Controls" },
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxisValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_AxisValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UOceanSwimmingComponent_NetMulticast_MoveLeftRight_Statics::NewProp_AxisValue = { "AxisValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanSwimmingComponent_eventNetMulticast_MoveLeftRight_Parms, AxisValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxisValue_MetaData), NewProp_AxisValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanSwimmingComponent_NetMulticast_MoveLeftRight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanSwimmingComponent_NetMulticast_MoveLeftRight_Statics::NewProp_AxisValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanSwimmingComponent_NetMulticast_MoveLeftRight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanSwimmingComponent_NetMulticast_MoveLeftRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanSwimmingComponent, nullptr, "NetMulticast_MoveLeftRight", nullptr, nullptr, Z_Construct_UFunction_UOceanSwimmingComponent_NetMulticast_MoveLeftRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanSwimmingComponent_NetMulticast_MoveLeftRight_Statics::PropPointers), sizeof(OceanSwimmingComponent_eventNetMulticast_MoveLeftRight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanSwimmingComponent_NetMulticast_MoveLeftRight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanSwimmingComponent_NetMulticast_MoveLeftRight_Statics::Function_MetaDataParams) };
static_assert(sizeof(OceanSwimmingComponent_eventNetMulticast_MoveLeftRight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanSwimmingComponent_NetMulticast_MoveLeftRight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanSwimmingComponent_NetMulticast_MoveLeftRight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanSwimmingComponent::execNetMulticast_MoveLeftRight)
{
	P_GET_PROPERTY(FDoubleProperty,Z_Param_AxisValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NetMulticast_MoveLeftRight_Implementation(Z_Param_AxisValue);
	P_NATIVE_END;
}
// End Class UOceanSwimmingComponent Function NetMulticast_MoveLeftRight

// Begin Class UOceanSwimmingComponent Function NetMulticast_SurfaceLockedSwimming
struct OceanSwimmingComponent_eventNetMulticast_SurfaceLockedSwimming_Parms
{
	bool Value;
};
static FName NAME_UOceanSwimmingComponent_NetMulticast_SurfaceLockedSwimming = FName(TEXT("NetMulticast_SurfaceLockedSwimming"));
void UOceanSwimmingComponent::NetMulticast_SurfaceLockedSwimming(bool Value)
{
	OceanSwimmingComponent_eventNetMulticast_SurfaceLockedSwimming_Parms Parms;
	Parms.Value=Value ? true : false;
	ProcessEvent(FindFunctionChecked(NAME_UOceanSwimmingComponent_NetMulticast_SurfaceLockedSwimming),&Parms);
}
struct Z_Construct_UFunction_UOceanSwimmingComponent_NetMulticast_SurfaceLockedSwimming_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Swimming|Controls" },
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_Value_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOceanSwimmingComponent_NetMulticast_SurfaceLockedSwimming_Statics::NewProp_Value_SetBit(void* Obj)
{
	((OceanSwimmingComponent_eventNetMulticast_SurfaceLockedSwimming_Parms*)Obj)->Value = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOceanSwimmingComponent_NetMulticast_SurfaceLockedSwimming_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OceanSwimmingComponent_eventNetMulticast_SurfaceLockedSwimming_Parms), &Z_Construct_UFunction_UOceanSwimmingComponent_NetMulticast_SurfaceLockedSwimming_Statics::NewProp_Value_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanSwimmingComponent_NetMulticast_SurfaceLockedSwimming_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanSwimmingComponent_NetMulticast_SurfaceLockedSwimming_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanSwimmingComponent_NetMulticast_SurfaceLockedSwimming_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanSwimmingComponent_NetMulticast_SurfaceLockedSwimming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanSwimmingComponent, nullptr, "NetMulticast_SurfaceLockedSwimming", nullptr, nullptr, Z_Construct_UFunction_UOceanSwimmingComponent_NetMulticast_SurfaceLockedSwimming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanSwimmingComponent_NetMulticast_SurfaceLockedSwimming_Statics::PropPointers), sizeof(OceanSwimmingComponent_eventNetMulticast_SurfaceLockedSwimming_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanSwimmingComponent_NetMulticast_SurfaceLockedSwimming_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanSwimmingComponent_NetMulticast_SurfaceLockedSwimming_Statics::Function_MetaDataParams) };
static_assert(sizeof(OceanSwimmingComponent_eventNetMulticast_SurfaceLockedSwimming_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanSwimmingComponent_NetMulticast_SurfaceLockedSwimming()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanSwimmingComponent_NetMulticast_SurfaceLockedSwimming_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanSwimmingComponent::execNetMulticast_SurfaceLockedSwimming)
{
	P_GET_UBOOL(Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NetMulticast_SurfaceLockedSwimming_Implementation(Z_Param_Value);
	P_NATIVE_END;
}
// End Class UOceanSwimmingComponent Function NetMulticast_SurfaceLockedSwimming

// Begin Class UOceanSwimmingComponent Function NetMulticast_SwimFast
struct OceanSwimmingComponent_eventNetMulticast_SwimFast_Parms
{
	bool Value;
};
static FName NAME_UOceanSwimmingComponent_NetMulticast_SwimFast = FName(TEXT("NetMulticast_SwimFast"));
void UOceanSwimmingComponent::NetMulticast_SwimFast(bool Value)
{
	OceanSwimmingComponent_eventNetMulticast_SwimFast_Parms Parms;
	Parms.Value=Value ? true : false;
	ProcessEvent(FindFunctionChecked(NAME_UOceanSwimmingComponent_NetMulticast_SwimFast),&Parms);
}
struct Z_Construct_UFunction_UOceanSwimmingComponent_NetMulticast_SwimFast_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Swimming|Controls" },
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_Value_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOceanSwimmingComponent_NetMulticast_SwimFast_Statics::NewProp_Value_SetBit(void* Obj)
{
	((OceanSwimmingComponent_eventNetMulticast_SwimFast_Parms*)Obj)->Value = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOceanSwimmingComponent_NetMulticast_SwimFast_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OceanSwimmingComponent_eventNetMulticast_SwimFast_Parms), &Z_Construct_UFunction_UOceanSwimmingComponent_NetMulticast_SwimFast_Statics::NewProp_Value_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanSwimmingComponent_NetMulticast_SwimFast_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanSwimmingComponent_NetMulticast_SwimFast_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanSwimmingComponent_NetMulticast_SwimFast_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanSwimmingComponent_NetMulticast_SwimFast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanSwimmingComponent, nullptr, "NetMulticast_SwimFast", nullptr, nullptr, Z_Construct_UFunction_UOceanSwimmingComponent_NetMulticast_SwimFast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanSwimmingComponent_NetMulticast_SwimFast_Statics::PropPointers), sizeof(OceanSwimmingComponent_eventNetMulticast_SwimFast_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanSwimmingComponent_NetMulticast_SwimFast_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanSwimmingComponent_NetMulticast_SwimFast_Statics::Function_MetaDataParams) };
static_assert(sizeof(OceanSwimmingComponent_eventNetMulticast_SwimFast_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanSwimmingComponent_NetMulticast_SwimFast()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanSwimmingComponent_NetMulticast_SwimFast_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanSwimmingComponent::execNetMulticast_SwimFast)
{
	P_GET_UBOOL(Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NetMulticast_SwimFast_Implementation(Z_Param_Value);
	P_NATIVE_END;
}
// End Class UOceanSwimmingComponent Function NetMulticast_SwimFast

// Begin Class UOceanSwimmingComponent Function NetMulticast_SwimUpOrDown
struct OceanSwimmingComponent_eventNetMulticast_SwimUpOrDown_Parms
{
	bool Value;
	double AxisValue;
};
static FName NAME_UOceanSwimmingComponent_NetMulticast_SwimUpOrDown = FName(TEXT("NetMulticast_SwimUpOrDown"));
void UOceanSwimmingComponent::NetMulticast_SwimUpOrDown(bool Value, const double AxisValue)
{
	OceanSwimmingComponent_eventNetMulticast_SwimUpOrDown_Parms Parms;
	Parms.Value=Value ? true : false;
	Parms.AxisValue=AxisValue;
	ProcessEvent(FindFunctionChecked(NAME_UOceanSwimmingComponent_NetMulticast_SwimUpOrDown),&Parms);
}
struct Z_Construct_UFunction_UOceanSwimmingComponent_NetMulticast_SwimUpOrDown_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Swimming|Controls" },
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxisValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_Value_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_AxisValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOceanSwimmingComponent_NetMulticast_SwimUpOrDown_Statics::NewProp_Value_SetBit(void* Obj)
{
	((OceanSwimmingComponent_eventNetMulticast_SwimUpOrDown_Parms*)Obj)->Value = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOceanSwimmingComponent_NetMulticast_SwimUpOrDown_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OceanSwimmingComponent_eventNetMulticast_SwimUpOrDown_Parms), &Z_Construct_UFunction_UOceanSwimmingComponent_NetMulticast_SwimUpOrDown_Statics::NewProp_Value_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UOceanSwimmingComponent_NetMulticast_SwimUpOrDown_Statics::NewProp_AxisValue = { "AxisValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanSwimmingComponent_eventNetMulticast_SwimUpOrDown_Parms, AxisValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxisValue_MetaData), NewProp_AxisValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanSwimmingComponent_NetMulticast_SwimUpOrDown_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanSwimmingComponent_NetMulticast_SwimUpOrDown_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanSwimmingComponent_NetMulticast_SwimUpOrDown_Statics::NewProp_AxisValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanSwimmingComponent_NetMulticast_SwimUpOrDown_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanSwimmingComponent_NetMulticast_SwimUpOrDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanSwimmingComponent, nullptr, "NetMulticast_SwimUpOrDown", nullptr, nullptr, Z_Construct_UFunction_UOceanSwimmingComponent_NetMulticast_SwimUpOrDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanSwimmingComponent_NetMulticast_SwimUpOrDown_Statics::PropPointers), sizeof(OceanSwimmingComponent_eventNetMulticast_SwimUpOrDown_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanSwimmingComponent_NetMulticast_SwimUpOrDown_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanSwimmingComponent_NetMulticast_SwimUpOrDown_Statics::Function_MetaDataParams) };
static_assert(sizeof(OceanSwimmingComponent_eventNetMulticast_SwimUpOrDown_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanSwimmingComponent_NetMulticast_SwimUpOrDown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanSwimmingComponent_NetMulticast_SwimUpOrDown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanSwimmingComponent::execNetMulticast_SwimUpOrDown)
{
	P_GET_UBOOL(Z_Param_Value);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_AxisValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NetMulticast_SwimUpOrDown_Implementation(Z_Param_Value,Z_Param_AxisValue);
	P_NATIVE_END;
}
// End Class UOceanSwimmingComponent Function NetMulticast_SwimUpOrDown

// Begin Class UOceanSwimmingComponent Function OnEnteredWater
struct Z_Construct_UFunction_UOceanSwimmingComponent_OnEnteredWater_Statics
{
	struct OceanSwimmingComponent_eventOnEnteredWater_Parms
	{
		FName Socket;
		bool Underwater;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Socket_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Underwater_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Socket;
	static void NewProp_Underwater_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Underwater;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOceanSwimmingComponent_OnEnteredWater_Statics::NewProp_Socket = { "Socket", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanSwimmingComponent_eventOnEnteredWater_Parms, Socket), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Socket_MetaData), NewProp_Socket_MetaData) };
void Z_Construct_UFunction_UOceanSwimmingComponent_OnEnteredWater_Statics::NewProp_Underwater_SetBit(void* Obj)
{
	((OceanSwimmingComponent_eventOnEnteredWater_Parms*)Obj)->Underwater = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOceanSwimmingComponent_OnEnteredWater_Statics::NewProp_Underwater = { "Underwater", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OceanSwimmingComponent_eventOnEnteredWater_Parms), &Z_Construct_UFunction_UOceanSwimmingComponent_OnEnteredWater_Statics::NewProp_Underwater_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Underwater_MetaData), NewProp_Underwater_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanSwimmingComponent_OnEnteredWater_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanSwimmingComponent_OnEnteredWater_Statics::NewProp_Socket,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanSwimmingComponent_OnEnteredWater_Statics::NewProp_Underwater,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanSwimmingComponent_OnEnteredWater_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanSwimmingComponent_OnEnteredWater_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanSwimmingComponent, nullptr, "OnEnteredWater", nullptr, nullptr, Z_Construct_UFunction_UOceanSwimmingComponent_OnEnteredWater_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanSwimmingComponent_OnEnteredWater_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOceanSwimmingComponent_OnEnteredWater_Statics::OceanSwimmingComponent_eventOnEnteredWater_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanSwimmingComponent_OnEnteredWater_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanSwimmingComponent_OnEnteredWater_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOceanSwimmingComponent_OnEnteredWater_Statics::OceanSwimmingComponent_eventOnEnteredWater_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanSwimmingComponent_OnEnteredWater()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanSwimmingComponent_OnEnteredWater_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanSwimmingComponent::execOnEnteredWater)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Socket);
	P_GET_UBOOL(Z_Param_Underwater);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnEnteredWater(Z_Param_Socket,Z_Param_Underwater);
	P_NATIVE_END;
}
// End Class UOceanSwimmingComponent Function OnEnteredWater

// Begin Class UOceanSwimmingComponent Function OnExitedWater
struct Z_Construct_UFunction_UOceanSwimmingComponent_OnExitedWater_Statics
{
	struct OceanSwimmingComponent_eventOnExitedWater_Parms
	{
		FName Socket;
		bool Underwater;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Socket_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Underwater_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Socket;
	static void NewProp_Underwater_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Underwater;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOceanSwimmingComponent_OnExitedWater_Statics::NewProp_Socket = { "Socket", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanSwimmingComponent_eventOnExitedWater_Parms, Socket), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Socket_MetaData), NewProp_Socket_MetaData) };
void Z_Construct_UFunction_UOceanSwimmingComponent_OnExitedWater_Statics::NewProp_Underwater_SetBit(void* Obj)
{
	((OceanSwimmingComponent_eventOnExitedWater_Parms*)Obj)->Underwater = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOceanSwimmingComponent_OnExitedWater_Statics::NewProp_Underwater = { "Underwater", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OceanSwimmingComponent_eventOnExitedWater_Parms), &Z_Construct_UFunction_UOceanSwimmingComponent_OnExitedWater_Statics::NewProp_Underwater_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Underwater_MetaData), NewProp_Underwater_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanSwimmingComponent_OnExitedWater_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanSwimmingComponent_OnExitedWater_Statics::NewProp_Socket,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanSwimmingComponent_OnExitedWater_Statics::NewProp_Underwater,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanSwimmingComponent_OnExitedWater_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanSwimmingComponent_OnExitedWater_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanSwimmingComponent, nullptr, "OnExitedWater", nullptr, nullptr, Z_Construct_UFunction_UOceanSwimmingComponent_OnExitedWater_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanSwimmingComponent_OnExitedWater_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOceanSwimmingComponent_OnExitedWater_Statics::OceanSwimmingComponent_eventOnExitedWater_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanSwimmingComponent_OnExitedWater_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanSwimmingComponent_OnExitedWater_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOceanSwimmingComponent_OnExitedWater_Statics::OceanSwimmingComponent_eventOnExitedWater_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanSwimmingComponent_OnExitedWater()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanSwimmingComponent_OnExitedWater_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanSwimmingComponent::execOnExitedWater)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Socket);
	P_GET_UBOOL(Z_Param_Underwater);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnExitedWater(Z_Param_Socket,Z_Param_Underwater);
	P_NATIVE_END;
}
// End Class UOceanSwimmingComponent Function OnExitedWater

// Begin Class UOceanSwimmingComponent Function Server_LookUp
struct OceanSwimmingComponent_eventServer_LookUp_Parms
{
	double AxisValue;
};
static FName NAME_UOceanSwimmingComponent_Server_LookUp = FName(TEXT("Server_LookUp"));
void UOceanSwimmingComponent::Server_LookUp(const double AxisValue)
{
	OceanSwimmingComponent_eventServer_LookUp_Parms Parms;
	Parms.AxisValue=AxisValue;
	ProcessEvent(FindFunctionChecked(NAME_UOceanSwimmingComponent_Server_LookUp),&Parms);
}
struct Z_Construct_UFunction_UOceanSwimmingComponent_Server_LookUp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Swimming|Controls" },
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxisValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_AxisValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UOceanSwimmingComponent_Server_LookUp_Statics::NewProp_AxisValue = { "AxisValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanSwimmingComponent_eventServer_LookUp_Parms, AxisValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxisValue_MetaData), NewProp_AxisValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanSwimmingComponent_Server_LookUp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanSwimmingComponent_Server_LookUp_Statics::NewProp_AxisValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanSwimmingComponent_Server_LookUp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanSwimmingComponent_Server_LookUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanSwimmingComponent, nullptr, "Server_LookUp", nullptr, nullptr, Z_Construct_UFunction_UOceanSwimmingComponent_Server_LookUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanSwimmingComponent_Server_LookUp_Statics::PropPointers), sizeof(OceanSwimmingComponent_eventServer_LookUp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanSwimmingComponent_Server_LookUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanSwimmingComponent_Server_LookUp_Statics::Function_MetaDataParams) };
static_assert(sizeof(OceanSwimmingComponent_eventServer_LookUp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanSwimmingComponent_Server_LookUp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanSwimmingComponent_Server_LookUp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanSwimmingComponent::execServer_LookUp)
{
	P_GET_PROPERTY(FDoubleProperty,Z_Param_AxisValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_LookUp_Validate(Z_Param_AxisValue))
	{
		RPC_ValidateFailed(TEXT("Server_LookUp_Validate"));
		return;
	}
	P_THIS->Server_LookUp_Implementation(Z_Param_AxisValue);
	P_NATIVE_END;
}
// End Class UOceanSwimmingComponent Function Server_LookUp

// Begin Class UOceanSwimmingComponent Function Server_MoveForwardBackward
struct OceanSwimmingComponent_eventServer_MoveForwardBackward_Parms
{
	double AxisValue;
};
static FName NAME_UOceanSwimmingComponent_Server_MoveForwardBackward = FName(TEXT("Server_MoveForwardBackward"));
void UOceanSwimmingComponent::Server_MoveForwardBackward(const double AxisValue)
{
	OceanSwimmingComponent_eventServer_MoveForwardBackward_Parms Parms;
	Parms.AxisValue=AxisValue;
	ProcessEvent(FindFunctionChecked(NAME_UOceanSwimmingComponent_Server_MoveForwardBackward),&Parms);
}
struct Z_Construct_UFunction_UOceanSwimmingComponent_Server_MoveForwardBackward_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Swimming|Controls" },
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxisValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_AxisValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UOceanSwimmingComponent_Server_MoveForwardBackward_Statics::NewProp_AxisValue = { "AxisValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanSwimmingComponent_eventServer_MoveForwardBackward_Parms, AxisValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxisValue_MetaData), NewProp_AxisValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanSwimmingComponent_Server_MoveForwardBackward_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanSwimmingComponent_Server_MoveForwardBackward_Statics::NewProp_AxisValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanSwimmingComponent_Server_MoveForwardBackward_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanSwimmingComponent_Server_MoveForwardBackward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanSwimmingComponent, nullptr, "Server_MoveForwardBackward", nullptr, nullptr, Z_Construct_UFunction_UOceanSwimmingComponent_Server_MoveForwardBackward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanSwimmingComponent_Server_MoveForwardBackward_Statics::PropPointers), sizeof(OceanSwimmingComponent_eventServer_MoveForwardBackward_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanSwimmingComponent_Server_MoveForwardBackward_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanSwimmingComponent_Server_MoveForwardBackward_Statics::Function_MetaDataParams) };
static_assert(sizeof(OceanSwimmingComponent_eventServer_MoveForwardBackward_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanSwimmingComponent_Server_MoveForwardBackward()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanSwimmingComponent_Server_MoveForwardBackward_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanSwimmingComponent::execServer_MoveForwardBackward)
{
	P_GET_PROPERTY(FDoubleProperty,Z_Param_AxisValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_MoveForwardBackward_Validate(Z_Param_AxisValue))
	{
		RPC_ValidateFailed(TEXT("Server_MoveForwardBackward_Validate"));
		return;
	}
	P_THIS->Server_MoveForwardBackward_Implementation(Z_Param_AxisValue);
	P_NATIVE_END;
}
// End Class UOceanSwimmingComponent Function Server_MoveForwardBackward

// Begin Class UOceanSwimmingComponent Function Server_MoveLeftRight
struct OceanSwimmingComponent_eventServer_MoveLeftRight_Parms
{
	double AxisValue;
};
static FName NAME_UOceanSwimmingComponent_Server_MoveLeftRight = FName(TEXT("Server_MoveLeftRight"));
void UOceanSwimmingComponent::Server_MoveLeftRight(const double AxisValue)
{
	OceanSwimmingComponent_eventServer_MoveLeftRight_Parms Parms;
	Parms.AxisValue=AxisValue;
	ProcessEvent(FindFunctionChecked(NAME_UOceanSwimmingComponent_Server_MoveLeftRight),&Parms);
}
struct Z_Construct_UFunction_UOceanSwimmingComponent_Server_MoveLeftRight_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Swimming|Controls" },
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxisValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_AxisValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UOceanSwimmingComponent_Server_MoveLeftRight_Statics::NewProp_AxisValue = { "AxisValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanSwimmingComponent_eventServer_MoveLeftRight_Parms, AxisValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxisValue_MetaData), NewProp_AxisValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanSwimmingComponent_Server_MoveLeftRight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanSwimmingComponent_Server_MoveLeftRight_Statics::NewProp_AxisValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanSwimmingComponent_Server_MoveLeftRight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanSwimmingComponent_Server_MoveLeftRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanSwimmingComponent, nullptr, "Server_MoveLeftRight", nullptr, nullptr, Z_Construct_UFunction_UOceanSwimmingComponent_Server_MoveLeftRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanSwimmingComponent_Server_MoveLeftRight_Statics::PropPointers), sizeof(OceanSwimmingComponent_eventServer_MoveLeftRight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanSwimmingComponent_Server_MoveLeftRight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanSwimmingComponent_Server_MoveLeftRight_Statics::Function_MetaDataParams) };
static_assert(sizeof(OceanSwimmingComponent_eventServer_MoveLeftRight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanSwimmingComponent_Server_MoveLeftRight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanSwimmingComponent_Server_MoveLeftRight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanSwimmingComponent::execServer_MoveLeftRight)
{
	P_GET_PROPERTY(FDoubleProperty,Z_Param_AxisValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_MoveLeftRight_Validate(Z_Param_AxisValue))
	{
		RPC_ValidateFailed(TEXT("Server_MoveLeftRight_Validate"));
		return;
	}
	P_THIS->Server_MoveLeftRight_Implementation(Z_Param_AxisValue);
	P_NATIVE_END;
}
// End Class UOceanSwimmingComponent Function Server_MoveLeftRight

// Begin Class UOceanSwimmingComponent Function Server_SurfaceLockedSwimming
struct OceanSwimmingComponent_eventServer_SurfaceLockedSwimming_Parms
{
	bool Value;
};
static FName NAME_UOceanSwimmingComponent_Server_SurfaceLockedSwimming = FName(TEXT("Server_SurfaceLockedSwimming"));
void UOceanSwimmingComponent::Server_SurfaceLockedSwimming(bool Value)
{
	OceanSwimmingComponent_eventServer_SurfaceLockedSwimming_Parms Parms;
	Parms.Value=Value ? true : false;
	ProcessEvent(FindFunctionChecked(NAME_UOceanSwimmingComponent_Server_SurfaceLockedSwimming),&Parms);
}
struct Z_Construct_UFunction_UOceanSwimmingComponent_Server_SurfaceLockedSwimming_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Swimming|Controls" },
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_Value_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOceanSwimmingComponent_Server_SurfaceLockedSwimming_Statics::NewProp_Value_SetBit(void* Obj)
{
	((OceanSwimmingComponent_eventServer_SurfaceLockedSwimming_Parms*)Obj)->Value = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOceanSwimmingComponent_Server_SurfaceLockedSwimming_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OceanSwimmingComponent_eventServer_SurfaceLockedSwimming_Parms), &Z_Construct_UFunction_UOceanSwimmingComponent_Server_SurfaceLockedSwimming_Statics::NewProp_Value_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanSwimmingComponent_Server_SurfaceLockedSwimming_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanSwimmingComponent_Server_SurfaceLockedSwimming_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanSwimmingComponent_Server_SurfaceLockedSwimming_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanSwimmingComponent_Server_SurfaceLockedSwimming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanSwimmingComponent, nullptr, "Server_SurfaceLockedSwimming", nullptr, nullptr, Z_Construct_UFunction_UOceanSwimmingComponent_Server_SurfaceLockedSwimming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanSwimmingComponent_Server_SurfaceLockedSwimming_Statics::PropPointers), sizeof(OceanSwimmingComponent_eventServer_SurfaceLockedSwimming_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanSwimmingComponent_Server_SurfaceLockedSwimming_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanSwimmingComponent_Server_SurfaceLockedSwimming_Statics::Function_MetaDataParams) };
static_assert(sizeof(OceanSwimmingComponent_eventServer_SurfaceLockedSwimming_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanSwimmingComponent_Server_SurfaceLockedSwimming()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanSwimmingComponent_Server_SurfaceLockedSwimming_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanSwimmingComponent::execServer_SurfaceLockedSwimming)
{
	P_GET_UBOOL(Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_SurfaceLockedSwimming_Validate(Z_Param_Value))
	{
		RPC_ValidateFailed(TEXT("Server_SurfaceLockedSwimming_Validate"));
		return;
	}
	P_THIS->Server_SurfaceLockedSwimming_Implementation(Z_Param_Value);
	P_NATIVE_END;
}
// End Class UOceanSwimmingComponent Function Server_SurfaceLockedSwimming

// Begin Class UOceanSwimmingComponent Function Server_SwimFast
struct OceanSwimmingComponent_eventServer_SwimFast_Parms
{
	bool Value;
};
static FName NAME_UOceanSwimmingComponent_Server_SwimFast = FName(TEXT("Server_SwimFast"));
void UOceanSwimmingComponent::Server_SwimFast(bool Value)
{
	OceanSwimmingComponent_eventServer_SwimFast_Parms Parms;
	Parms.Value=Value ? true : false;
	ProcessEvent(FindFunctionChecked(NAME_UOceanSwimmingComponent_Server_SwimFast),&Parms);
}
struct Z_Construct_UFunction_UOceanSwimmingComponent_Server_SwimFast_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Swimming|Controls" },
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_Value_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOceanSwimmingComponent_Server_SwimFast_Statics::NewProp_Value_SetBit(void* Obj)
{
	((OceanSwimmingComponent_eventServer_SwimFast_Parms*)Obj)->Value = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOceanSwimmingComponent_Server_SwimFast_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OceanSwimmingComponent_eventServer_SwimFast_Parms), &Z_Construct_UFunction_UOceanSwimmingComponent_Server_SwimFast_Statics::NewProp_Value_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanSwimmingComponent_Server_SwimFast_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanSwimmingComponent_Server_SwimFast_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanSwimmingComponent_Server_SwimFast_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanSwimmingComponent_Server_SwimFast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanSwimmingComponent, nullptr, "Server_SwimFast", nullptr, nullptr, Z_Construct_UFunction_UOceanSwimmingComponent_Server_SwimFast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanSwimmingComponent_Server_SwimFast_Statics::PropPointers), sizeof(OceanSwimmingComponent_eventServer_SwimFast_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanSwimmingComponent_Server_SwimFast_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanSwimmingComponent_Server_SwimFast_Statics::Function_MetaDataParams) };
static_assert(sizeof(OceanSwimmingComponent_eventServer_SwimFast_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanSwimmingComponent_Server_SwimFast()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanSwimmingComponent_Server_SwimFast_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanSwimmingComponent::execServer_SwimFast)
{
	P_GET_UBOOL(Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_SwimFast_Validate(Z_Param_Value))
	{
		RPC_ValidateFailed(TEXT("Server_SwimFast_Validate"));
		return;
	}
	P_THIS->Server_SwimFast_Implementation(Z_Param_Value);
	P_NATIVE_END;
}
// End Class UOceanSwimmingComponent Function Server_SwimFast

// Begin Class UOceanSwimmingComponent Function Server_SwimUpOrDown
struct OceanSwimmingComponent_eventServer_SwimUpOrDown_Parms
{
	bool Value;
	double AxisValue;
};
static FName NAME_UOceanSwimmingComponent_Server_SwimUpOrDown = FName(TEXT("Server_SwimUpOrDown"));
void UOceanSwimmingComponent::Server_SwimUpOrDown(bool Value, const double AxisValue)
{
	OceanSwimmingComponent_eventServer_SwimUpOrDown_Parms Parms;
	Parms.Value=Value ? true : false;
	Parms.AxisValue=AxisValue;
	ProcessEvent(FindFunctionChecked(NAME_UOceanSwimmingComponent_Server_SwimUpOrDown),&Parms);
}
struct Z_Construct_UFunction_UOceanSwimmingComponent_Server_SwimUpOrDown_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Swimming|Controls" },
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxisValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_Value_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_AxisValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOceanSwimmingComponent_Server_SwimUpOrDown_Statics::NewProp_Value_SetBit(void* Obj)
{
	((OceanSwimmingComponent_eventServer_SwimUpOrDown_Parms*)Obj)->Value = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOceanSwimmingComponent_Server_SwimUpOrDown_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OceanSwimmingComponent_eventServer_SwimUpOrDown_Parms), &Z_Construct_UFunction_UOceanSwimmingComponent_Server_SwimUpOrDown_Statics::NewProp_Value_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UOceanSwimmingComponent_Server_SwimUpOrDown_Statics::NewProp_AxisValue = { "AxisValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanSwimmingComponent_eventServer_SwimUpOrDown_Parms, AxisValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxisValue_MetaData), NewProp_AxisValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanSwimmingComponent_Server_SwimUpOrDown_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanSwimmingComponent_Server_SwimUpOrDown_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanSwimmingComponent_Server_SwimUpOrDown_Statics::NewProp_AxisValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanSwimmingComponent_Server_SwimUpOrDown_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanSwimmingComponent_Server_SwimUpOrDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanSwimmingComponent, nullptr, "Server_SwimUpOrDown", nullptr, nullptr, Z_Construct_UFunction_UOceanSwimmingComponent_Server_SwimUpOrDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanSwimmingComponent_Server_SwimUpOrDown_Statics::PropPointers), sizeof(OceanSwimmingComponent_eventServer_SwimUpOrDown_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanSwimmingComponent_Server_SwimUpOrDown_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanSwimmingComponent_Server_SwimUpOrDown_Statics::Function_MetaDataParams) };
static_assert(sizeof(OceanSwimmingComponent_eventServer_SwimUpOrDown_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanSwimmingComponent_Server_SwimUpOrDown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanSwimmingComponent_Server_SwimUpOrDown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanSwimmingComponent::execServer_SwimUpOrDown)
{
	P_GET_UBOOL(Z_Param_Value);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_AxisValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_SwimUpOrDown_Validate(Z_Param_Value,Z_Param_AxisValue))
	{
		RPC_ValidateFailed(TEXT("Server_SwimUpOrDown_Validate"));
		return;
	}
	P_THIS->Server_SwimUpOrDown_Implementation(Z_Param_Value,Z_Param_AxisValue);
	P_NATIVE_END;
}
// End Class UOceanSwimmingComponent Function Server_SwimUpOrDown

// Begin Class UOceanSwimmingComponent Function ToggleDebug
struct Z_Construct_UFunction_UOceanSwimmingComponent_ToggleDebug_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Swimming" },
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanSwimmingComponent_ToggleDebug_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanSwimmingComponent, nullptr, "ToggleDebug", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanSwimmingComponent_ToggleDebug_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanSwimmingComponent_ToggleDebug_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UOceanSwimmingComponent_ToggleDebug()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanSwimmingComponent_ToggleDebug_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanSwimmingComponent::execToggleDebug)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ToggleDebug();
	P_NATIVE_END;
}
// End Class UOceanSwimmingComponent Function ToggleDebug

// Begin Class UOceanSwimmingComponent Function UnderwaterTask
struct Z_Construct_UFunction_UOceanSwimmingComponent_UnderwaterTask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanSwimmingComponent_UnderwaterTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanSwimmingComponent, nullptr, "UnderwaterTask", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanSwimmingComponent_UnderwaterTask_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanSwimmingComponent_UnderwaterTask_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UOceanSwimmingComponent_UnderwaterTask()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanSwimmingComponent_UnderwaterTask_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanSwimmingComponent::execUnderwaterTask)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnderwaterTask();
	P_NATIVE_END;
}
// End Class UOceanSwimmingComponent Function UnderwaterTask

// Begin Class UOceanSwimmingComponent
void UOceanSwimmingComponent::StaticRegisterNativesUOceanSwimmingComponent()
{
	UClass* Class = UOceanSwimmingComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanAlterState", &UOceanSwimmingComponent::execCanAlterState },
		{ "CanEnterWater", &UOceanSwimmingComponent::execCanEnterWater },
		{ "CanExitWater", &UOceanSwimmingComponent::execCanExitWater },
		{ "CanStartSwim", &UOceanSwimmingComponent::execCanStartSwim },
		{ "CanStopSwim", &UOceanSwimmingComponent::execCanStopSwim },
		{ "ComputeWaterFloorHeight", &UOceanSwimmingComponent::execComputeWaterFloorHeight },
		{ "DrowningTask", &UOceanSwimmingComponent::execDrowningTask },
		{ "DrownToDeath", &UOceanSwimmingComponent::execDrownToDeath },
		{ "GetCharacterMovement", &UOceanSwimmingComponent::execGetCharacterMovement },
		{ "GetCurrentWater", &UOceanSwimmingComponent::execGetCurrentWater },
		{ "GetCurrentWaterVolume", &UOceanSwimmingComponent::execGetCurrentWaterVolume },
		{ "IsSurfaceLockedSwimming", &UOceanSwimmingComponent::execIsSurfaceLockedSwimming },
		{ "NetMulticast_LookUp", &UOceanSwimmingComponent::execNetMulticast_LookUp },
		{ "NetMulticast_MoveForwardBackward", &UOceanSwimmingComponent::execNetMulticast_MoveForwardBackward },
		{ "NetMulticast_MoveLeftRight", &UOceanSwimmingComponent::execNetMulticast_MoveLeftRight },
		{ "NetMulticast_SurfaceLockedSwimming", &UOceanSwimmingComponent::execNetMulticast_SurfaceLockedSwimming },
		{ "NetMulticast_SwimFast", &UOceanSwimmingComponent::execNetMulticast_SwimFast },
		{ "NetMulticast_SwimUpOrDown", &UOceanSwimmingComponent::execNetMulticast_SwimUpOrDown },
		{ "OnEnteredWater", &UOceanSwimmingComponent::execOnEnteredWater },
		{ "OnExitedWater", &UOceanSwimmingComponent::execOnExitedWater },
		{ "Server_LookUp", &UOceanSwimmingComponent::execServer_LookUp },
		{ "Server_MoveForwardBackward", &UOceanSwimmingComponent::execServer_MoveForwardBackward },
		{ "Server_MoveLeftRight", &UOceanSwimmingComponent::execServer_MoveLeftRight },
		{ "Server_SurfaceLockedSwimming", &UOceanSwimmingComponent::execServer_SurfaceLockedSwimming },
		{ "Server_SwimFast", &UOceanSwimmingComponent::execServer_SwimFast },
		{ "Server_SwimUpOrDown", &UOceanSwimmingComponent::execServer_SwimUpOrDown },
		{ "ToggleDebug", &UOceanSwimmingComponent::execToggleDebug },
		{ "UnderwaterTask", &UOceanSwimmingComponent::execUnderwaterTask },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOceanSwimmingComponent);
UClass* Z_Construct_UClass_UOceanSwimmingComponent_NoRegister()
{
	return UOceanSwimmingComponent::StaticClass();
}
struct Z_Construct_UClass_UOceanSwimmingComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/OceanSwimmingComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwimmingUpdateInterval_MetaData[] = {
		{ "Category", "Swimming" },
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Value 0 means real-time swimming state checking. Can be changed, but might provide inaccuracy. This controls tick rate." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuoyancyPontoonSocketForEnterWaterEvent_MetaData[] = {
		{ "Category", "Swimming" },
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The name of the buoyancy pontoon that is used for enter water tracing events. A Buoyancy Pontoon must exist with this name with 'WaterEnterExitEventOnly' mode." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwimmingBuoyancyForceMultiplier_MetaData[] = {
		{ "Category", "Swimming" },
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The buoyant force that pushes the character towards the water surface." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Immersion_MetaData[] = {
		{ "Category", "Swimming" },
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The immersion depth of the character in which it starts/stops swimming." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwimUpLimiter_MetaData[] = {
		{ "Category", "Swimming" },
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This configuration limits how high you can swim up." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwimMaxSpeed_MetaData[] = {
		{ "Category", "Swimming|Speed" },
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How fast the character swims during regular swimming." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwimFastMaxSpeed_MetaData[] = {
		{ "Category", "Swimming|Speed" },
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How fast the character swims during swim sprinting." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceLockedSwimmingLimiter_MetaData[] = {
		{ "Category", "Swimming" },
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This configuration limits how high the surface locked swimming happens." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnterExitWaterToleranceOffset_MetaData[] = {
		{ "Category", "Swimming" },
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "By default the enter/exit water tolerance works with the collision capsule's scaled half height. With this you can add offset." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrowningEnabled_MetaData[] = {
		{ "Category", "Swimming|Underwater|Drowning" },
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If enabled character will start drown, then eventually die of drowning." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrowningTimeWarningInSeconds_MetaData[] = {
		{ "Category", "Swimming|Underwater|Drowning" },
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "After how many seconds the character will start drowning." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrowningTimeDeathInSeconds_MetaData[] = {
		{ "Category", "Swimming|Underwater|Drowning" },
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "After how many seconds the character will die of drowning." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableUnderwaterEffects_MetaData[] = {
		{ "Category", "Swimming|Underwater|Effects" },
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Special underwater effects control during swimming." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeadBubblesEffectNiagara_MetaData[] = {
		{ "Category", "Swimming|Underwater|Effects" },
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeadSocketName_MetaData[] = {
		{ "Category", "Swimming|Underwater|Effects" },
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The head socket name in character's skeleton tree where the effect will spawn." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightFootBubblesEffectNiagara_MetaData[] = {
		{ "Category", "Swimming|Underwater|Effects" },
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftFootBubblesEffectNiagara_MetaData[] = {
		{ "Category", "Swimming|Underwater|Effects" },
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightFootSocketName_MetaData[] = {
		{ "Category", "Swimming|Underwater|Effects" },
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The right foot socket name in character's skeleton tree where the effect will spawn." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftFootSocketName_MetaData[] = {
		{ "Category", "Swimming|Underwater|Effects" },
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The left foot socket name in character's skeleton tree where the effect will spawn." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StopHeadBubblesWhileSwimFast_MetaData[] = {
		{ "Category", "Swimming|Underwater|Effects" },
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StopRightFootBubblesWhileSwimFast_MetaData[] = {
		{ "Category", "Swimming|Underwater|Effects" },
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StopLeftFootBubblesWhileSwimFast_MetaData[] = {
		{ "Category", "Swimming|Underwater|Effects" },
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwimFastTrailEffectNiagara_MetaData[] = {
		{ "Category", "Swimming|Underwater|Effects" },
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwimFastTrailSocketName_MetaData[] = {
		{ "Category", "Swimming|Underwater|Effects" },
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The swim fast trail socket name in character's skeleton tree where the effect will spawn." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwimFastTrailSound_MetaData[] = {
		{ "Category", "Swimming|Underwater|Sound" },
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugEnabled_MetaData[] = {
		{ "Category", "Swimming|Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Turning on/off debug points and messages support. WARNING: Debugging affects performance, do NOT use in production! */" },
#endif
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Turning on/off debug points and messages support. WARNING: Debugging affects performance, do NOT use in production!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnteredWaterVolume_MetaData[] = {
		{ "Category", "Swimming|State" },
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnteredWater_MetaData[] = {
		{ "Category", "Swimming|State" },
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Submerged_MetaData[] = {
		{ "Category", "Swimming|State" },
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Swimming_MetaData[] = {
		{ "Category", "Swimming|State" },
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnderwaterTimeCounter_MetaData[] = {
		{ "Category", "Swimming|State" },
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnderwaterTaskRunning_MetaData[] = {
		{ "Category", "Swimming|State" },
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrowningTimeCounter_MetaData[] = {
		{ "Category", "Swimming|State" },
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrowningTaskRunning_MetaData[] = {
		{ "Category", "Swimming|State" },
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrownedToDeath_MetaData[] = {
		{ "Category", "Swimming|State" },
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceLockedSwimming_MetaData[] = {
		{ "Category", "Swimming|Controls" },
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwimDown_MetaData[] = {
		{ "Category", "Swimming|Controls" },
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwimUp_MetaData[] = {
		{ "Category", "Swimming|Controls" },
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwimFast_MetaData[] = {
		{ "Category", "Swimming|Controls" },
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwimUpOrDownAxis_MetaData[] = {
		{ "Category", "Swimming|Controls" },
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookUpAxis_MetaData[] = {
		{ "Category", "Swimming|Controls" },
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveForwardBackwardAxis_MetaData[] = {
		{ "Category", "Swimming|Controls" },
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveLeftRightAxis_MetaData[] = {
		{ "Category", "Swimming|Controls" },
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwimmingOrientRotationToMovement_MetaData[] = {
		{ "Category", "Swimming|Controls" },
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use orient rotation to movement during swimming? It will reset to original once you stop swimming." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwimmingUseControllerRotationYaw_MetaData[] = {
		{ "Category", "Swimming|Controls" },
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use controller rotation yaw during swimming? It will reset to original once you stop swimming. Multi-dimension animations might require this type of config to be turned ON." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnStartSwimming_MetaData[] = {
		{ "Category", "Swimming" },
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnStopSwimming_MetaData[] = {
		{ "Category", "Swimming" },
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnUnderwaterTask_MetaData[] = {
		{ "Category", "Swimming|Underwater" },
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnUnderwaterEnter_MetaData[] = {
		{ "Category", "Swimming|Underwater" },
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnUnderwaterExit_MetaData[] = {
		{ "Category", "Swimming|Underwater" },
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnStartDrowning_MetaData[] = {
		{ "Category", "Swimming|Underwater|Drowning" },
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnStopDrowning_MetaData[] = {
		{ "Category", "Swimming|Underwater|Drowning" },
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDrowningTask_MetaData[] = {
		{ "Category", "Swimming|Underwater|Drowning" },
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDrownDeath_MetaData[] = {
		{ "Category", "Swimming|Underwater|Drowning" },
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OceanologyWater_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OceanologyWaterVolume_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FindFloorResult_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OriginalMaxWalkSpeed_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OriginalMaxSwimSpeed_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OriginalOrientRotationToMovement_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OriginalUseControllerRotationYaw_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OriginalBuoyancy_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectiveSwimmingBuoyancyForce_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectiveSurfaceLockedSwimming_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastMovementMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnderwaterTaskDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrowningTaskDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeadBubblesEffect_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightFootBubblesEffect_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftFootBubblesEffect_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwimFastTrailEffect_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwimmingBubblesMID_MetaData[] = {
		{ "Category", "Material Instance Dynamic" },
		{ "ModuleRelativePath", "Public/Components/OceanSwimmingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SwimmingUpdateInterval;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BuoyancyPontoonSocketForEnterWaterEvent;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_SwimmingBuoyancyForceMultiplier;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Immersion;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_SwimUpLimiter;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SwimMaxSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SwimFastMaxSpeed;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_SurfaceLockedSwimmingLimiter;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_EnterExitWaterToleranceOffset;
	static void NewProp_DrowningEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DrowningEnabled;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DrowningTimeWarningInSeconds;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DrowningTimeDeathInSeconds;
	static void NewProp_EnableUnderwaterEffects_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableUnderwaterEffects;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HeadBubblesEffectNiagara;
	static const UECodeGen_Private::FNamePropertyParams NewProp_HeadSocketName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RightFootBubblesEffectNiagara;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftFootBubblesEffectNiagara;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RightFootSocketName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LeftFootSocketName;
	static void NewProp_StopHeadBubblesWhileSwimFast_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_StopHeadBubblesWhileSwimFast;
	static void NewProp_StopRightFootBubblesWhileSwimFast_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_StopRightFootBubblesWhileSwimFast;
	static void NewProp_StopLeftFootBubblesWhileSwimFast_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_StopLeftFootBubblesWhileSwimFast;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SwimFastTrailEffectNiagara;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SwimFastTrailSocketName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SwimFastTrailSound;
	static void NewProp_DebugEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DebugEnabled;
	static void NewProp_EnteredWaterVolume_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnteredWaterVolume;
	static void NewProp_EnteredWater_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnteredWater;
	static void NewProp_Submerged_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Submerged;
	static void NewProp_Swimming_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Swimming;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UnderwaterTimeCounter;
	static void NewProp_UnderwaterTaskRunning_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UnderwaterTaskRunning;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DrowningTimeCounter;
	static void NewProp_DrowningTaskRunning_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DrowningTaskRunning;
	static void NewProp_DrownedToDeath_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DrownedToDeath;
	static void NewProp_SurfaceLockedSwimming_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SurfaceLockedSwimming;
	static void NewProp_SwimDown_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SwimDown;
	static void NewProp_SwimUp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SwimUp;
	static void NewProp_SwimFast_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SwimFast;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_SwimUpOrDownAxis;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_LookUpAxis;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MoveForwardBackwardAxis;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MoveLeftRightAxis;
	static void NewProp_SwimmingOrientRotationToMovement_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SwimmingOrientRotationToMovement;
	static void NewProp_SwimmingUseControllerRotationYaw_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SwimmingUseControllerRotationYaw;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStartSwimming;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStopSwimming;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUnderwaterTask;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUnderwaterEnter;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUnderwaterExit;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStartDrowning;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStopDrowning;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDrowningTask;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDrownDeath;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OceanologyWater;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OceanologyWaterVolume;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FindFloorResult;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OriginalMaxWalkSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OriginalMaxSwimSpeed;
	static void NewProp_OriginalOrientRotationToMovement_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OriginalOrientRotationToMovement;
	static void NewProp_OriginalUseControllerRotationYaw_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OriginalUseControllerRotationYaw;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_OriginalBuoyancy;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_EffectiveSwimmingBuoyancyForce;
	static void NewProp_EffectiveSurfaceLockedSwimming_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EffectiveSurfaceLockedSwimming;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LastMovementMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UnderwaterTaskDelegate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DrowningTaskDelegate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HeadBubblesEffect;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RightFootBubblesEffect;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftFootBubblesEffect;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SwimFastTrailEffect;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SwimmingBubblesMID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOceanSwimmingComponent_CanAlterState, "CanAlterState" }, // 3962951882
		{ &Z_Construct_UFunction_UOceanSwimmingComponent_CanEnterWater, "CanEnterWater" }, // 2231380664
		{ &Z_Construct_UFunction_UOceanSwimmingComponent_CanExitWater, "CanExitWater" }, // 1056005544
		{ &Z_Construct_UFunction_UOceanSwimmingComponent_CanStartSwim, "CanStartSwim" }, // 381154236
		{ &Z_Construct_UFunction_UOceanSwimmingComponent_CanStopSwim, "CanStopSwim" }, // 1065052721
		{ &Z_Construct_UFunction_UOceanSwimmingComponent_ComputeWaterFloorHeight, "ComputeWaterFloorHeight" }, // 1185767754
		{ &Z_Construct_UFunction_UOceanSwimmingComponent_DrowningTask, "DrowningTask" }, // 3967235012
		{ &Z_Construct_UFunction_UOceanSwimmingComponent_DrownToDeath, "DrownToDeath" }, // 1044406076
		{ &Z_Construct_UFunction_UOceanSwimmingComponent_GetCharacterMovement, "GetCharacterMovement" }, // 2519311812
		{ &Z_Construct_UFunction_UOceanSwimmingComponent_GetCurrentWater, "GetCurrentWater" }, // 1524139473
		{ &Z_Construct_UFunction_UOceanSwimmingComponent_GetCurrentWaterVolume, "GetCurrentWaterVolume" }, // 1708095517
		{ &Z_Construct_UFunction_UOceanSwimmingComponent_IsSurfaceLockedSwimming, "IsSurfaceLockedSwimming" }, // 4130294359
		{ &Z_Construct_UFunction_UOceanSwimmingComponent_NetMulticast_LookUp, "NetMulticast_LookUp" }, // 149133702
		{ &Z_Construct_UFunction_UOceanSwimmingComponent_NetMulticast_MoveForwardBackward, "NetMulticast_MoveForwardBackward" }, // 113201264
		{ &Z_Construct_UFunction_UOceanSwimmingComponent_NetMulticast_MoveLeftRight, "NetMulticast_MoveLeftRight" }, // 570630758
		{ &Z_Construct_UFunction_UOceanSwimmingComponent_NetMulticast_SurfaceLockedSwimming, "NetMulticast_SurfaceLockedSwimming" }, // 4021190116
		{ &Z_Construct_UFunction_UOceanSwimmingComponent_NetMulticast_SwimFast, "NetMulticast_SwimFast" }, // 2542612961
		{ &Z_Construct_UFunction_UOceanSwimmingComponent_NetMulticast_SwimUpOrDown, "NetMulticast_SwimUpOrDown" }, // 2247581809
		{ &Z_Construct_UFunction_UOceanSwimmingComponent_OnEnteredWater, "OnEnteredWater" }, // 977583568
		{ &Z_Construct_UFunction_UOceanSwimmingComponent_OnExitedWater, "OnExitedWater" }, // 3700308295
		{ &Z_Construct_UFunction_UOceanSwimmingComponent_Server_LookUp, "Server_LookUp" }, // 1744801557
		{ &Z_Construct_UFunction_UOceanSwimmingComponent_Server_MoveForwardBackward, "Server_MoveForwardBackward" }, // 826404391
		{ &Z_Construct_UFunction_UOceanSwimmingComponent_Server_MoveLeftRight, "Server_MoveLeftRight" }, // 1305203189
		{ &Z_Construct_UFunction_UOceanSwimmingComponent_Server_SurfaceLockedSwimming, "Server_SurfaceLockedSwimming" }, // 1885530011
		{ &Z_Construct_UFunction_UOceanSwimmingComponent_Server_SwimFast, "Server_SwimFast" }, // 3266097027
		{ &Z_Construct_UFunction_UOceanSwimmingComponent_Server_SwimUpOrDown, "Server_SwimUpOrDown" }, // 729273068
		{ &Z_Construct_UFunction_UOceanSwimmingComponent_ToggleDebug, "ToggleDebug" }, // 877708805
		{ &Z_Construct_UFunction_UOceanSwimmingComponent_UnderwaterTask, "UnderwaterTask" }, // 2807103847
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOceanSwimmingComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_SwimmingUpdateInterval = { "SwimmingUpdateInterval", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanSwimmingComponent, SwimmingUpdateInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwimmingUpdateInterval_MetaData), NewProp_SwimmingUpdateInterval_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_BuoyancyPontoonSocketForEnterWaterEvent = { "BuoyancyPontoonSocketForEnterWaterEvent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanSwimmingComponent, BuoyancyPontoonSocketForEnterWaterEvent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuoyancyPontoonSocketForEnterWaterEvent_MetaData), NewProp_BuoyancyPontoonSocketForEnterWaterEvent_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_SwimmingBuoyancyForceMultiplier = { "SwimmingBuoyancyForceMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanSwimmingComponent, SwimmingBuoyancyForceMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwimmingBuoyancyForceMultiplier_MetaData), NewProp_SwimmingBuoyancyForceMultiplier_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_Immersion = { "Immersion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanSwimmingComponent, Immersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Immersion_MetaData), NewProp_Immersion_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_SwimUpLimiter = { "SwimUpLimiter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanSwimmingComponent, SwimUpLimiter), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwimUpLimiter_MetaData), NewProp_SwimUpLimiter_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_SwimMaxSpeed = { "SwimMaxSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanSwimmingComponent, SwimMaxSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwimMaxSpeed_MetaData), NewProp_SwimMaxSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_SwimFastMaxSpeed = { "SwimFastMaxSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanSwimmingComponent, SwimFastMaxSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwimFastMaxSpeed_MetaData), NewProp_SwimFastMaxSpeed_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_SurfaceLockedSwimmingLimiter = { "SurfaceLockedSwimmingLimiter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanSwimmingComponent, SurfaceLockedSwimmingLimiter), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SurfaceLockedSwimmingLimiter_MetaData), NewProp_SurfaceLockedSwimmingLimiter_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_EnterExitWaterToleranceOffset = { "EnterExitWaterToleranceOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanSwimmingComponent, EnterExitWaterToleranceOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnterExitWaterToleranceOffset_MetaData), NewProp_EnterExitWaterToleranceOffset_MetaData) };
void Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_DrowningEnabled_SetBit(void* Obj)
{
	((UOceanSwimmingComponent*)Obj)->DrowningEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_DrowningEnabled = { "DrowningEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOceanSwimmingComponent), &Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_DrowningEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrowningEnabled_MetaData), NewProp_DrowningEnabled_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_DrowningTimeWarningInSeconds = { "DrowningTimeWarningInSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanSwimmingComponent, DrowningTimeWarningInSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrowningTimeWarningInSeconds_MetaData), NewProp_DrowningTimeWarningInSeconds_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_DrowningTimeDeathInSeconds = { "DrowningTimeDeathInSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanSwimmingComponent, DrowningTimeDeathInSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrowningTimeDeathInSeconds_MetaData), NewProp_DrowningTimeDeathInSeconds_MetaData) };
void Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_EnableUnderwaterEffects_SetBit(void* Obj)
{
	((UOceanSwimmingComponent*)Obj)->EnableUnderwaterEffects = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_EnableUnderwaterEffects = { "EnableUnderwaterEffects", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOceanSwimmingComponent), &Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_EnableUnderwaterEffects_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableUnderwaterEffects_MetaData), NewProp_EnableUnderwaterEffects_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_HeadBubblesEffectNiagara = { "HeadBubblesEffectNiagara", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanSwimmingComponent, HeadBubblesEffectNiagara), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeadBubblesEffectNiagara_MetaData), NewProp_HeadBubblesEffectNiagara_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_HeadSocketName = { "HeadSocketName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanSwimmingComponent, HeadSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeadSocketName_MetaData), NewProp_HeadSocketName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_RightFootBubblesEffectNiagara = { "RightFootBubblesEffectNiagara", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanSwimmingComponent, RightFootBubblesEffectNiagara), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightFootBubblesEffectNiagara_MetaData), NewProp_RightFootBubblesEffectNiagara_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_LeftFootBubblesEffectNiagara = { "LeftFootBubblesEffectNiagara", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanSwimmingComponent, LeftFootBubblesEffectNiagara), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftFootBubblesEffectNiagara_MetaData), NewProp_LeftFootBubblesEffectNiagara_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_RightFootSocketName = { "RightFootSocketName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanSwimmingComponent, RightFootSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightFootSocketName_MetaData), NewProp_RightFootSocketName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_LeftFootSocketName = { "LeftFootSocketName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanSwimmingComponent, LeftFootSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftFootSocketName_MetaData), NewProp_LeftFootSocketName_MetaData) };
void Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_StopHeadBubblesWhileSwimFast_SetBit(void* Obj)
{
	((UOceanSwimmingComponent*)Obj)->StopHeadBubblesWhileSwimFast = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_StopHeadBubblesWhileSwimFast = { "StopHeadBubblesWhileSwimFast", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOceanSwimmingComponent), &Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_StopHeadBubblesWhileSwimFast_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StopHeadBubblesWhileSwimFast_MetaData), NewProp_StopHeadBubblesWhileSwimFast_MetaData) };
void Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_StopRightFootBubblesWhileSwimFast_SetBit(void* Obj)
{
	((UOceanSwimmingComponent*)Obj)->StopRightFootBubblesWhileSwimFast = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_StopRightFootBubblesWhileSwimFast = { "StopRightFootBubblesWhileSwimFast", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOceanSwimmingComponent), &Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_StopRightFootBubblesWhileSwimFast_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StopRightFootBubblesWhileSwimFast_MetaData), NewProp_StopRightFootBubblesWhileSwimFast_MetaData) };
void Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_StopLeftFootBubblesWhileSwimFast_SetBit(void* Obj)
{
	((UOceanSwimmingComponent*)Obj)->StopLeftFootBubblesWhileSwimFast = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_StopLeftFootBubblesWhileSwimFast = { "StopLeftFootBubblesWhileSwimFast", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOceanSwimmingComponent), &Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_StopLeftFootBubblesWhileSwimFast_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StopLeftFootBubblesWhileSwimFast_MetaData), NewProp_StopLeftFootBubblesWhileSwimFast_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_SwimFastTrailEffectNiagara = { "SwimFastTrailEffectNiagara", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanSwimmingComponent, SwimFastTrailEffectNiagara), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwimFastTrailEffectNiagara_MetaData), NewProp_SwimFastTrailEffectNiagara_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_SwimFastTrailSocketName = { "SwimFastTrailSocketName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanSwimmingComponent, SwimFastTrailSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwimFastTrailSocketName_MetaData), NewProp_SwimFastTrailSocketName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_SwimFastTrailSound = { "SwimFastTrailSound", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanSwimmingComponent, SwimFastTrailSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwimFastTrailSound_MetaData), NewProp_SwimFastTrailSound_MetaData) };
void Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_DebugEnabled_SetBit(void* Obj)
{
	((UOceanSwimmingComponent*)Obj)->DebugEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_DebugEnabled = { "DebugEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOceanSwimmingComponent), &Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_DebugEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugEnabled_MetaData), NewProp_DebugEnabled_MetaData) };
void Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_EnteredWaterVolume_SetBit(void* Obj)
{
	((UOceanSwimmingComponent*)Obj)->EnteredWaterVolume = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_EnteredWaterVolume = { "EnteredWaterVolume", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOceanSwimmingComponent), &Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_EnteredWaterVolume_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnteredWaterVolume_MetaData), NewProp_EnteredWaterVolume_MetaData) };
void Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_EnteredWater_SetBit(void* Obj)
{
	((UOceanSwimmingComponent*)Obj)->EnteredWater = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_EnteredWater = { "EnteredWater", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOceanSwimmingComponent), &Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_EnteredWater_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnteredWater_MetaData), NewProp_EnteredWater_MetaData) };
void Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_Submerged_SetBit(void* Obj)
{
	((UOceanSwimmingComponent*)Obj)->Submerged = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_Submerged = { "Submerged", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOceanSwimmingComponent), &Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_Submerged_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Submerged_MetaData), NewProp_Submerged_MetaData) };
void Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_Swimming_SetBit(void* Obj)
{
	((UOceanSwimmingComponent*)Obj)->Swimming = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_Swimming = { "Swimming", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOceanSwimmingComponent), &Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_Swimming_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Swimming_MetaData), NewProp_Swimming_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_UnderwaterTimeCounter = { "UnderwaterTimeCounter", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanSwimmingComponent, UnderwaterTimeCounter), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnderwaterTimeCounter_MetaData), NewProp_UnderwaterTimeCounter_MetaData) };
void Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_UnderwaterTaskRunning_SetBit(void* Obj)
{
	((UOceanSwimmingComponent*)Obj)->UnderwaterTaskRunning = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_UnderwaterTaskRunning = { "UnderwaterTaskRunning", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOceanSwimmingComponent), &Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_UnderwaterTaskRunning_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnderwaterTaskRunning_MetaData), NewProp_UnderwaterTaskRunning_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_DrowningTimeCounter = { "DrowningTimeCounter", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanSwimmingComponent, DrowningTimeCounter), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrowningTimeCounter_MetaData), NewProp_DrowningTimeCounter_MetaData) };
void Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_DrowningTaskRunning_SetBit(void* Obj)
{
	((UOceanSwimmingComponent*)Obj)->DrowningTaskRunning = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_DrowningTaskRunning = { "DrowningTaskRunning", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOceanSwimmingComponent), &Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_DrowningTaskRunning_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrowningTaskRunning_MetaData), NewProp_DrowningTaskRunning_MetaData) };
void Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_DrownedToDeath_SetBit(void* Obj)
{
	((UOceanSwimmingComponent*)Obj)->DrownedToDeath = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_DrownedToDeath = { "DrownedToDeath", nullptr, (EPropertyFlags)0x0010000000000024, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOceanSwimmingComponent), &Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_DrownedToDeath_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrownedToDeath_MetaData), NewProp_DrownedToDeath_MetaData) };
void Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_SurfaceLockedSwimming_SetBit(void* Obj)
{
	((UOceanSwimmingComponent*)Obj)->SurfaceLockedSwimming = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_SurfaceLockedSwimming = { "SurfaceLockedSwimming", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOceanSwimmingComponent), &Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_SurfaceLockedSwimming_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SurfaceLockedSwimming_MetaData), NewProp_SurfaceLockedSwimming_MetaData) };
void Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_SwimDown_SetBit(void* Obj)
{
	((UOceanSwimmingComponent*)Obj)->SwimDown = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_SwimDown = { "SwimDown", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOceanSwimmingComponent), &Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_SwimDown_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwimDown_MetaData), NewProp_SwimDown_MetaData) };
void Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_SwimUp_SetBit(void* Obj)
{
	((UOceanSwimmingComponent*)Obj)->SwimUp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_SwimUp = { "SwimUp", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOceanSwimmingComponent), &Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_SwimUp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwimUp_MetaData), NewProp_SwimUp_MetaData) };
void Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_SwimFast_SetBit(void* Obj)
{
	((UOceanSwimmingComponent*)Obj)->SwimFast = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_SwimFast = { "SwimFast", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOceanSwimmingComponent), &Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_SwimFast_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwimFast_MetaData), NewProp_SwimFast_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_SwimUpOrDownAxis = { "SwimUpOrDownAxis", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanSwimmingComponent, SwimUpOrDownAxis), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwimUpOrDownAxis_MetaData), NewProp_SwimUpOrDownAxis_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_LookUpAxis = { "LookUpAxis", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanSwimmingComponent, LookUpAxis), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookUpAxis_MetaData), NewProp_LookUpAxis_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_MoveForwardBackwardAxis = { "MoveForwardBackwardAxis", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanSwimmingComponent, MoveForwardBackwardAxis), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveForwardBackwardAxis_MetaData), NewProp_MoveForwardBackwardAxis_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_MoveLeftRightAxis = { "MoveLeftRightAxis", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanSwimmingComponent, MoveLeftRightAxis), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveLeftRightAxis_MetaData), NewProp_MoveLeftRightAxis_MetaData) };
void Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_SwimmingOrientRotationToMovement_SetBit(void* Obj)
{
	((UOceanSwimmingComponent*)Obj)->SwimmingOrientRotationToMovement = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_SwimmingOrientRotationToMovement = { "SwimmingOrientRotationToMovement", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOceanSwimmingComponent), &Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_SwimmingOrientRotationToMovement_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwimmingOrientRotationToMovement_MetaData), NewProp_SwimmingOrientRotationToMovement_MetaData) };
void Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_SwimmingUseControllerRotationYaw_SetBit(void* Obj)
{
	((UOceanSwimmingComponent*)Obj)->SwimmingUseControllerRotationYaw = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_SwimmingUseControllerRotationYaw = { "SwimmingUseControllerRotationYaw", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOceanSwimmingComponent), &Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_SwimmingUseControllerRotationYaw_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwimmingUseControllerRotationYaw_MetaData), NewProp_SwimmingUseControllerRotationYaw_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_OnStartSwimming = { "OnStartSwimming", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanSwimmingComponent, OnStartSwimming), Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnStartSwimming__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnStartSwimming_MetaData), NewProp_OnStartSwimming_MetaData) }; // 1359426241
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_OnStopSwimming = { "OnStopSwimming", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanSwimmingComponent, OnStopSwimming), Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnStartSwimming__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnStopSwimming_MetaData), NewProp_OnStopSwimming_MetaData) }; // 1359426241
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_OnUnderwaterTask = { "OnUnderwaterTask", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanSwimmingComponent, OnUnderwaterTask), Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnUnderwaterTask__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnUnderwaterTask_MetaData), NewProp_OnUnderwaterTask_MetaData) }; // 1198940532
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_OnUnderwaterEnter = { "OnUnderwaterEnter", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanSwimmingComponent, OnUnderwaterEnter), Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnUnderwaterEnter__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnUnderwaterEnter_MetaData), NewProp_OnUnderwaterEnter_MetaData) }; // 3278420773
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_OnUnderwaterExit = { "OnUnderwaterExit", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanSwimmingComponent, OnUnderwaterExit), Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnUnderwaterExit__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnUnderwaterExit_MetaData), NewProp_OnUnderwaterExit_MetaData) }; // 4142787009
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_OnStartDrowning = { "OnStartDrowning", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanSwimmingComponent, OnStartDrowning), Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnStartDrowning__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnStartDrowning_MetaData), NewProp_OnStartDrowning_MetaData) }; // 2758895498
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_OnStopDrowning = { "OnStopDrowning", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanSwimmingComponent, OnStopDrowning), Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnStopDrowning__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnStopDrowning_MetaData), NewProp_OnStopDrowning_MetaData) }; // 3709607585
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_OnDrowningTask = { "OnDrowningTask", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanSwimmingComponent, OnDrowningTask), Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnDrowningTask__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDrowningTask_MetaData), NewProp_OnDrowningTask_MetaData) }; // 895935042
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_OnDrownDeath = { "OnDrownDeath", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanSwimmingComponent, OnDrownDeath), Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnDrownDeath__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDrownDeath_MetaData), NewProp_OnDrownDeath_MetaData) }; // 1596478096
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_OceanologyWater = { "OceanologyWater", nullptr, (EPropertyFlags)0x0114000000000020, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanSwimmingComponent, OceanologyWater), Z_Construct_UClass_AOceanologyWaterParent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OceanologyWater_MetaData), NewProp_OceanologyWater_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_OceanologyWaterVolume = { "OceanologyWaterVolume", nullptr, (EPropertyFlags)0x0114000000000020, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanSwimmingComponent, OceanologyWaterVolume), Z_Construct_UClass_AOceanologyWaterVolume_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OceanologyWaterVolume_MetaData), NewProp_OceanologyWaterVolume_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_FindFloorResult = { "FindFloorResult", nullptr, (EPropertyFlags)0x0040008000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanSwimmingComponent, FindFloorResult), Z_Construct_UScriptStruct_FFindFloorResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FindFloorResult_MetaData), NewProp_FindFloorResult_MetaData) }; // 3134433334
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_OriginalMaxWalkSpeed = { "OriginalMaxWalkSpeed", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanSwimmingComponent, OriginalMaxWalkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OriginalMaxWalkSpeed_MetaData), NewProp_OriginalMaxWalkSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_OriginalMaxSwimSpeed = { "OriginalMaxSwimSpeed", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanSwimmingComponent, OriginalMaxSwimSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OriginalMaxSwimSpeed_MetaData), NewProp_OriginalMaxSwimSpeed_MetaData) };
void Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_OriginalOrientRotationToMovement_SetBit(void* Obj)
{
	((UOceanSwimmingComponent*)Obj)->OriginalOrientRotationToMovement = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_OriginalOrientRotationToMovement = { "OriginalOrientRotationToMovement", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOceanSwimmingComponent), &Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_OriginalOrientRotationToMovement_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OriginalOrientRotationToMovement_MetaData), NewProp_OriginalOrientRotationToMovement_MetaData) };
void Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_OriginalUseControllerRotationYaw_SetBit(void* Obj)
{
	((UOceanSwimmingComponent*)Obj)->OriginalUseControllerRotationYaw = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_OriginalUseControllerRotationYaw = { "OriginalUseControllerRotationYaw", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOceanSwimmingComponent), &Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_OriginalUseControllerRotationYaw_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OriginalUseControllerRotationYaw_MetaData), NewProp_OriginalUseControllerRotationYaw_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_OriginalBuoyancy = { "OriginalBuoyancy", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanSwimmingComponent, OriginalBuoyancy), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OriginalBuoyancy_MetaData), NewProp_OriginalBuoyancy_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_EffectiveSwimmingBuoyancyForce = { "EffectiveSwimmingBuoyancyForce", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanSwimmingComponent, EffectiveSwimmingBuoyancyForce), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectiveSwimmingBuoyancyForce_MetaData), NewProp_EffectiveSwimmingBuoyancyForce_MetaData) };
void Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_EffectiveSurfaceLockedSwimming_SetBit(void* Obj)
{
	((UOceanSwimmingComponent*)Obj)->EffectiveSurfaceLockedSwimming = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_EffectiveSurfaceLockedSwimming = { "EffectiveSurfaceLockedSwimming", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOceanSwimmingComponent), &Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_EffectiveSurfaceLockedSwimming_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectiveSurfaceLockedSwimming_MetaData), NewProp_EffectiveSurfaceLockedSwimming_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_LastMovementMode = { "LastMovementMode", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanSwimmingComponent, LastMovementMode), Z_Construct_UEnum_Engine_EMovementMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastMovementMode_MetaData), NewProp_LastMovementMode_MetaData) }; // 1967555749
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_UnderwaterTaskDelegate = { "UnderwaterTaskDelegate", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanSwimmingComponent, UnderwaterTaskDelegate), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnderwaterTaskDelegate_MetaData), NewProp_UnderwaterTaskDelegate_MetaData) }; // 756291145
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_DrowningTaskDelegate = { "DrowningTaskDelegate", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanSwimmingComponent, DrowningTaskDelegate), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrowningTaskDelegate_MetaData), NewProp_DrowningTaskDelegate_MetaData) }; // 756291145
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_HeadBubblesEffect = { "HeadBubblesEffect", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanSwimmingComponent, HeadBubblesEffect), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeadBubblesEffect_MetaData), NewProp_HeadBubblesEffect_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_RightFootBubblesEffect = { "RightFootBubblesEffect", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanSwimmingComponent, RightFootBubblesEffect), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightFootBubblesEffect_MetaData), NewProp_RightFootBubblesEffect_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_LeftFootBubblesEffect = { "LeftFootBubblesEffect", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanSwimmingComponent, LeftFootBubblesEffect), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftFootBubblesEffect_MetaData), NewProp_LeftFootBubblesEffect_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_SwimFastTrailEffect = { "SwimFastTrailEffect", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanSwimmingComponent, SwimFastTrailEffect), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwimFastTrailEffect_MetaData), NewProp_SwimFastTrailEffect_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_SwimmingBubblesMID = { "SwimmingBubblesMID", nullptr, (EPropertyFlags)0x0040000000022801, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanSwimmingComponent, SwimmingBubblesMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwimmingBubblesMID_MetaData), NewProp_SwimmingBubblesMID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOceanSwimmingComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_SwimmingUpdateInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_BuoyancyPontoonSocketForEnterWaterEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_SwimmingBuoyancyForceMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_Immersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_SwimUpLimiter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_SwimMaxSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_SwimFastMaxSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_SurfaceLockedSwimmingLimiter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_EnterExitWaterToleranceOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_DrowningEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_DrowningTimeWarningInSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_DrowningTimeDeathInSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_EnableUnderwaterEffects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_HeadBubblesEffectNiagara,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_HeadSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_RightFootBubblesEffectNiagara,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_LeftFootBubblesEffectNiagara,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_RightFootSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_LeftFootSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_StopHeadBubblesWhileSwimFast,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_StopRightFootBubblesWhileSwimFast,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_StopLeftFootBubblesWhileSwimFast,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_SwimFastTrailEffectNiagara,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_SwimFastTrailSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_SwimFastTrailSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_DebugEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_EnteredWaterVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_EnteredWater,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_Submerged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_Swimming,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_UnderwaterTimeCounter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_UnderwaterTaskRunning,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_DrowningTimeCounter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_DrowningTaskRunning,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_DrownedToDeath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_SurfaceLockedSwimming,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_SwimDown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_SwimUp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_SwimFast,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_SwimUpOrDownAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_LookUpAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_MoveForwardBackwardAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_MoveLeftRightAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_SwimmingOrientRotationToMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_SwimmingUseControllerRotationYaw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_OnStartSwimming,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_OnStopSwimming,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_OnUnderwaterTask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_OnUnderwaterEnter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_OnUnderwaterExit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_OnStartDrowning,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_OnStopDrowning,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_OnDrowningTask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_OnDrownDeath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_OceanologyWater,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_OceanologyWaterVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_FindFloorResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_OriginalMaxWalkSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_OriginalMaxSwimSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_OriginalOrientRotationToMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_OriginalUseControllerRotationYaw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_OriginalBuoyancy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_EffectiveSwimmingBuoyancyForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_EffectiveSurfaceLockedSwimming,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_LastMovementMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_UnderwaterTaskDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_DrowningTaskDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_HeadBubblesEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_RightFootBubblesEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_LeftFootBubblesEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_SwimFastTrailEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanSwimmingComponent_Statics::NewProp_SwimmingBubblesMID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOceanSwimmingComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOceanSwimmingComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Oceanology_Plugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOceanSwimmingComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOceanSwimmingComponent_Statics::ClassParams = {
	&UOceanSwimmingComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOceanSwimmingComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOceanSwimmingComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOceanSwimmingComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UOceanSwimmingComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOceanSwimmingComponent()
{
	if (!Z_Registration_Info_UClass_UOceanSwimmingComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOceanSwimmingComponent.OuterSingleton, Z_Construct_UClass_UOceanSwimmingComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOceanSwimmingComponent.OuterSingleton;
}
template<> OCEANOLOGY_PLUGIN_API UClass* StaticClass<UOceanSwimmingComponent>()
{
	return UOceanSwimmingComponent::StaticClass();
}
void UOceanSwimmingComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_EnteredWaterVolume(TEXT("EnteredWaterVolume"));
	static const FName Name_EnteredWater(TEXT("EnteredWater"));
	static const FName Name_Submerged(TEXT("Submerged"));
	static const FName Name_Swimming(TEXT("Swimming"));
	static const FName Name_UnderwaterTimeCounter(TEXT("UnderwaterTimeCounter"));
	static const FName Name_UnderwaterTaskRunning(TEXT("UnderwaterTaskRunning"));
	static const FName Name_DrowningTimeCounter(TEXT("DrowningTimeCounter"));
	static const FName Name_DrowningTaskRunning(TEXT("DrowningTaskRunning"));
	static const FName Name_DrownedToDeath(TEXT("DrownedToDeath"));
	static const FName Name_SurfaceLockedSwimming(TEXT("SurfaceLockedSwimming"));
	static const FName Name_SwimDown(TEXT("SwimDown"));
	static const FName Name_SwimUp(TEXT("SwimUp"));
	static const FName Name_SwimFast(TEXT("SwimFast"));
	static const FName Name_SwimUpOrDownAxis(TEXT("SwimUpOrDownAxis"));
	static const FName Name_LookUpAxis(TEXT("LookUpAxis"));
	static const FName Name_MoveForwardBackwardAxis(TEXT("MoveForwardBackwardAxis"));
	static const FName Name_MoveLeftRightAxis(TEXT("MoveLeftRightAxis"));
	static const FName Name_OceanologyWater(TEXT("OceanologyWater"));
	static const FName Name_OceanologyWaterVolume(TEXT("OceanologyWaterVolume"));
	static const FName Name_FindFloorResult(TEXT("FindFloorResult"));
	static const FName Name_OriginalMaxWalkSpeed(TEXT("OriginalMaxWalkSpeed"));
	static const FName Name_OriginalMaxSwimSpeed(TEXT("OriginalMaxSwimSpeed"));
	static const FName Name_OriginalOrientRotationToMovement(TEXT("OriginalOrientRotationToMovement"));
	static const FName Name_OriginalUseControllerRotationYaw(TEXT("OriginalUseControllerRotationYaw"));
	static const FName Name_OriginalBuoyancy(TEXT("OriginalBuoyancy"));
	static const FName Name_EffectiveSwimmingBuoyancyForce(TEXT("EffectiveSwimmingBuoyancyForce"));
	static const FName Name_EffectiveSurfaceLockedSwimming(TEXT("EffectiveSurfaceLockedSwimming"));
	static const FName Name_LastMovementMode(TEXT("LastMovementMode"));
	const bool bIsValid = true
		&& Name_EnteredWaterVolume == ClassReps[(int32)ENetFields_Private::EnteredWaterVolume].Property->GetFName()
		&& Name_EnteredWater == ClassReps[(int32)ENetFields_Private::EnteredWater].Property->GetFName()
		&& Name_Submerged == ClassReps[(int32)ENetFields_Private::Submerged].Property->GetFName()
		&& Name_Swimming == ClassReps[(int32)ENetFields_Private::Swimming].Property->GetFName()
		&& Name_UnderwaterTimeCounter == ClassReps[(int32)ENetFields_Private::UnderwaterTimeCounter].Property->GetFName()
		&& Name_UnderwaterTaskRunning == ClassReps[(int32)ENetFields_Private::UnderwaterTaskRunning].Property->GetFName()
		&& Name_DrowningTimeCounter == ClassReps[(int32)ENetFields_Private::DrowningTimeCounter].Property->GetFName()
		&& Name_DrowningTaskRunning == ClassReps[(int32)ENetFields_Private::DrowningTaskRunning].Property->GetFName()
		&& Name_DrownedToDeath == ClassReps[(int32)ENetFields_Private::DrownedToDeath].Property->GetFName()
		&& Name_SurfaceLockedSwimming == ClassReps[(int32)ENetFields_Private::SurfaceLockedSwimming].Property->GetFName()
		&& Name_SwimDown == ClassReps[(int32)ENetFields_Private::SwimDown].Property->GetFName()
		&& Name_SwimUp == ClassReps[(int32)ENetFields_Private::SwimUp].Property->GetFName()
		&& Name_SwimFast == ClassReps[(int32)ENetFields_Private::SwimFast].Property->GetFName()
		&& Name_SwimUpOrDownAxis == ClassReps[(int32)ENetFields_Private::SwimUpOrDownAxis].Property->GetFName()
		&& Name_LookUpAxis == ClassReps[(int32)ENetFields_Private::LookUpAxis].Property->GetFName()
		&& Name_MoveForwardBackwardAxis == ClassReps[(int32)ENetFields_Private::MoveForwardBackwardAxis].Property->GetFName()
		&& Name_MoveLeftRightAxis == ClassReps[(int32)ENetFields_Private::MoveLeftRightAxis].Property->GetFName()
		&& Name_OceanologyWater == ClassReps[(int32)ENetFields_Private::OceanologyWater].Property->GetFName()
		&& Name_OceanologyWaterVolume == ClassReps[(int32)ENetFields_Private::OceanologyWaterVolume].Property->GetFName()
		&& Name_FindFloorResult == ClassReps[(int32)ENetFields_Private::FindFloorResult].Property->GetFName()
		&& Name_OriginalMaxWalkSpeed == ClassReps[(int32)ENetFields_Private::OriginalMaxWalkSpeed].Property->GetFName()
		&& Name_OriginalMaxSwimSpeed == ClassReps[(int32)ENetFields_Private::OriginalMaxSwimSpeed].Property->GetFName()
		&& Name_OriginalOrientRotationToMovement == ClassReps[(int32)ENetFields_Private::OriginalOrientRotationToMovement].Property->GetFName()
		&& Name_OriginalUseControllerRotationYaw == ClassReps[(int32)ENetFields_Private::OriginalUseControllerRotationYaw].Property->GetFName()
		&& Name_OriginalBuoyancy == ClassReps[(int32)ENetFields_Private::OriginalBuoyancy].Property->GetFName()
		&& Name_EffectiveSwimmingBuoyancyForce == ClassReps[(int32)ENetFields_Private::EffectiveSwimmingBuoyancyForce].Property->GetFName()
		&& Name_EffectiveSurfaceLockedSwimming == ClassReps[(int32)ENetFields_Private::EffectiveSurfaceLockedSwimming].Property->GetFName()
		&& Name_LastMovementMode == ClassReps[(int32)ENetFields_Private::LastMovementMode].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UOceanSwimmingComponent"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOceanSwimmingComponent);
UOceanSwimmingComponent::~UOceanSwimmingComponent() {}
// End Class UOceanSwimmingComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_OceanSwimmingComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOceanSwimmingComponent, UOceanSwimmingComponent::StaticClass, TEXT("UOceanSwimmingComponent"), &Z_Registration_Info_UClass_UOceanSwimmingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOceanSwimmingComponent), 2662839528U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_OceanSwimmingComponent_h_1667894297(TEXT("/Script/Oceanology_Plugin"),
	Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_OceanSwimmingComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_OceanSwimmingComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
