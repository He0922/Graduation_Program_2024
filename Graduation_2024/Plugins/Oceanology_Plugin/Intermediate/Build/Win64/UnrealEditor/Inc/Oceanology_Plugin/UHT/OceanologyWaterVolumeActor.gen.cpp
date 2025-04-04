// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Oceanology_Plugin/Public/Actors/OceanologyWaterVolumeActor.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOceanologyWaterVolumeActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APhysicsVolume();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_AOceanologyWaterParent_NoRegister();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_AOceanologyWaterVolume();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_AOceanologyWaterVolume_NoRegister();
UPackage* Z_Construct_UPackage__Script_Oceanology_Plugin();
// End Cross Module References

// Begin Class AOceanologyWaterVolume Function InitialOverlappingCheck
struct Z_Construct_UFunction_AOceanologyWaterVolume_InitialOverlappingCheck_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/OceanologyWaterVolumeActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOceanologyWaterVolume_InitialOverlappingCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOceanologyWaterVolume, nullptr, "InitialOverlappingCheck", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOceanologyWaterVolume_InitialOverlappingCheck_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOceanologyWaterVolume_InitialOverlappingCheck_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AOceanologyWaterVolume_InitialOverlappingCheck()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOceanologyWaterVolume_InitialOverlappingCheck_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOceanologyWaterVolume::execInitialOverlappingCheck)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitialOverlappingCheck();
	P_NATIVE_END;
}
// End Class AOceanologyWaterVolume Function InitialOverlappingCheck

// Begin Class AOceanologyWaterVolume Function NetMulticast_ChangeOverlapStatus
struct OceanologyWaterVolume_eventNetMulticast_ChangeOverlapStatus_Parms
{
	const AActor* OtherActor;
	bool Active;
};
static FName NAME_AOceanologyWaterVolume_NetMulticast_ChangeOverlapStatus = FName(TEXT("NetMulticast_ChangeOverlapStatus"));
void AOceanologyWaterVolume::NetMulticast_ChangeOverlapStatus(const AActor* OtherActor, bool Active)
{
	OceanologyWaterVolume_eventNetMulticast_ChangeOverlapStatus_Parms Parms;
	Parms.OtherActor=OtherActor;
	Parms.Active=Active ? true : false;
	ProcessEvent(FindFunctionChecked(NAME_AOceanologyWaterVolume_NetMulticast_ChangeOverlapStatus),&Parms);
}
struct Z_Construct_UFunction_AOceanologyWaterVolume_NetMulticast_ChangeOverlapStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Water Volume" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyWaterVolumeActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherActor_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Active_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static void NewProp_Active_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Active;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOceanologyWaterVolume_NetMulticast_ChangeOverlapStatus_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyWaterVolume_eventNetMulticast_ChangeOverlapStatus_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherActor_MetaData), NewProp_OtherActor_MetaData) };
void Z_Construct_UFunction_AOceanologyWaterVolume_NetMulticast_ChangeOverlapStatus_Statics::NewProp_Active_SetBit(void* Obj)
{
	((OceanologyWaterVolume_eventNetMulticast_ChangeOverlapStatus_Parms*)Obj)->Active = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOceanologyWaterVolume_NetMulticast_ChangeOverlapStatus_Statics::NewProp_Active = { "Active", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OceanologyWaterVolume_eventNetMulticast_ChangeOverlapStatus_Parms), &Z_Construct_UFunction_AOceanologyWaterVolume_NetMulticast_ChangeOverlapStatus_Statics::NewProp_Active_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Active_MetaData), NewProp_Active_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOceanologyWaterVolume_NetMulticast_ChangeOverlapStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOceanologyWaterVolume_NetMulticast_ChangeOverlapStatus_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOceanologyWaterVolume_NetMulticast_ChangeOverlapStatus_Statics::NewProp_Active,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOceanologyWaterVolume_NetMulticast_ChangeOverlapStatus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOceanologyWaterVolume_NetMulticast_ChangeOverlapStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOceanologyWaterVolume, nullptr, "NetMulticast_ChangeOverlapStatus", nullptr, nullptr, Z_Construct_UFunction_AOceanologyWaterVolume_NetMulticast_ChangeOverlapStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOceanologyWaterVolume_NetMulticast_ChangeOverlapStatus_Statics::PropPointers), sizeof(OceanologyWaterVolume_eventNetMulticast_ChangeOverlapStatus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOceanologyWaterVolume_NetMulticast_ChangeOverlapStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOceanologyWaterVolume_NetMulticast_ChangeOverlapStatus_Statics::Function_MetaDataParams) };
static_assert(sizeof(OceanologyWaterVolume_eventNetMulticast_ChangeOverlapStatus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOceanologyWaterVolume_NetMulticast_ChangeOverlapStatus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOceanologyWaterVolume_NetMulticast_ChangeOverlapStatus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOceanologyWaterVolume::execNetMulticast_ChangeOverlapStatus)
{
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_UBOOL(Z_Param_Active);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NetMulticast_ChangeOverlapStatus_Implementation(Z_Param_OtherActor,Z_Param_Active);
	P_NATIVE_END;
}
// End Class AOceanologyWaterVolume Function NetMulticast_ChangeOverlapStatus

// Begin Class AOceanologyWaterVolume Function OnVolume_BeginOverlap
struct Z_Construct_UFunction_AOceanologyWaterVolume_OnVolume_BeginOverlap_Statics
{
	struct OceanologyWaterVolume_eventOnVolume_BeginOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/OceanologyWaterVolumeActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOceanologyWaterVolume_OnVolume_BeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyWaterVolume_eventOnVolume_BeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOceanologyWaterVolume_OnVolume_BeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyWaterVolume_eventOnVolume_BeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOceanologyWaterVolume_OnVolume_BeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyWaterVolume_eventOnVolume_BeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOceanologyWaterVolume_OnVolume_BeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyWaterVolume_eventOnVolume_BeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AOceanologyWaterVolume_OnVolume_BeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((OceanologyWaterVolume_eventOnVolume_BeginOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOceanologyWaterVolume_OnVolume_BeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OceanologyWaterVolume_eventOnVolume_BeginOverlap_Parms), &Z_Construct_UFunction_AOceanologyWaterVolume_OnVolume_BeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOceanologyWaterVolume_OnVolume_BeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyWaterVolume_eventOnVolume_BeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOceanologyWaterVolume_OnVolume_BeginOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOceanologyWaterVolume_OnVolume_BeginOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOceanologyWaterVolume_OnVolume_BeginOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOceanologyWaterVolume_OnVolume_BeginOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOceanologyWaterVolume_OnVolume_BeginOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOceanologyWaterVolume_OnVolume_BeginOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOceanologyWaterVolume_OnVolume_BeginOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOceanologyWaterVolume_OnVolume_BeginOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOceanologyWaterVolume_OnVolume_BeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOceanologyWaterVolume, nullptr, "OnVolume_BeginOverlap", nullptr, nullptr, Z_Construct_UFunction_AOceanologyWaterVolume_OnVolume_BeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOceanologyWaterVolume_OnVolume_BeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOceanologyWaterVolume_OnVolume_BeginOverlap_Statics::OceanologyWaterVolume_eventOnVolume_BeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOceanologyWaterVolume_OnVolume_BeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOceanologyWaterVolume_OnVolume_BeginOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOceanologyWaterVolume_OnVolume_BeginOverlap_Statics::OceanologyWaterVolume_eventOnVolume_BeginOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOceanologyWaterVolume_OnVolume_BeginOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOceanologyWaterVolume_OnVolume_BeginOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOceanologyWaterVolume::execOnVolume_BeginOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnVolume_BeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class AOceanologyWaterVolume Function OnVolume_BeginOverlap

// Begin Class AOceanologyWaterVolume Function OnVolume_EndOverlap
struct Z_Construct_UFunction_AOceanologyWaterVolume_OnVolume_EndOverlap_Statics
{
	struct OceanologyWaterVolume_eventOnVolume_EndOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/OceanologyWaterVolumeActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOceanologyWaterVolume_OnVolume_EndOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyWaterVolume_eventOnVolume_EndOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOceanologyWaterVolume_OnVolume_EndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyWaterVolume_eventOnVolume_EndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOceanologyWaterVolume_OnVolume_EndOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyWaterVolume_eventOnVolume_EndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOceanologyWaterVolume_OnVolume_EndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyWaterVolume_eventOnVolume_EndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOceanologyWaterVolume_OnVolume_EndOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOceanologyWaterVolume_OnVolume_EndOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOceanologyWaterVolume_OnVolume_EndOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOceanologyWaterVolume_OnVolume_EndOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOceanologyWaterVolume_OnVolume_EndOverlap_Statics::NewProp_OtherBodyIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOceanologyWaterVolume_OnVolume_EndOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOceanologyWaterVolume_OnVolume_EndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOceanologyWaterVolume, nullptr, "OnVolume_EndOverlap", nullptr, nullptr, Z_Construct_UFunction_AOceanologyWaterVolume_OnVolume_EndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOceanologyWaterVolume_OnVolume_EndOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOceanologyWaterVolume_OnVolume_EndOverlap_Statics::OceanologyWaterVolume_eventOnVolume_EndOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOceanologyWaterVolume_OnVolume_EndOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOceanologyWaterVolume_OnVolume_EndOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOceanologyWaterVolume_OnVolume_EndOverlap_Statics::OceanologyWaterVolume_eventOnVolume_EndOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOceanologyWaterVolume_OnVolume_EndOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOceanologyWaterVolume_OnVolume_EndOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOceanologyWaterVolume::execOnVolume_EndOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnVolume_EndOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
	P_NATIVE_END;
}
// End Class AOceanologyWaterVolume Function OnVolume_EndOverlap

// Begin Class AOceanologyWaterVolume Function RegisterOverlapEvents
struct Z_Construct_UFunction_AOceanologyWaterVolume_RegisterOverlapEvents_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/OceanologyWaterVolumeActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOceanologyWaterVolume_RegisterOverlapEvents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOceanologyWaterVolume, nullptr, "RegisterOverlapEvents", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOceanologyWaterVolume_RegisterOverlapEvents_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOceanologyWaterVolume_RegisterOverlapEvents_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AOceanologyWaterVolume_RegisterOverlapEvents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOceanologyWaterVolume_RegisterOverlapEvents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOceanologyWaterVolume::execRegisterOverlapEvents)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterOverlapEvents();
	P_NATIVE_END;
}
// End Class AOceanologyWaterVolume Function RegisterOverlapEvents

// Begin Class AOceanologyWaterVolume Function Server_ChangeOverlapStatus
struct OceanologyWaterVolume_eventServer_ChangeOverlapStatus_Parms
{
	const AActor* OtherActor;
	bool Active;
};
static FName NAME_AOceanologyWaterVolume_Server_ChangeOverlapStatus = FName(TEXT("Server_ChangeOverlapStatus"));
void AOceanologyWaterVolume::Server_ChangeOverlapStatus(const AActor* OtherActor, bool Active)
{
	OceanologyWaterVolume_eventServer_ChangeOverlapStatus_Parms Parms;
	Parms.OtherActor=OtherActor;
	Parms.Active=Active ? true : false;
	ProcessEvent(FindFunctionChecked(NAME_AOceanologyWaterVolume_Server_ChangeOverlapStatus),&Parms);
}
struct Z_Construct_UFunction_AOceanologyWaterVolume_Server_ChangeOverlapStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Water Volume" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyWaterVolumeActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherActor_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Active_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static void NewProp_Active_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Active;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOceanologyWaterVolume_Server_ChangeOverlapStatus_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyWaterVolume_eventServer_ChangeOverlapStatus_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherActor_MetaData), NewProp_OtherActor_MetaData) };
void Z_Construct_UFunction_AOceanologyWaterVolume_Server_ChangeOverlapStatus_Statics::NewProp_Active_SetBit(void* Obj)
{
	((OceanologyWaterVolume_eventServer_ChangeOverlapStatus_Parms*)Obj)->Active = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOceanologyWaterVolume_Server_ChangeOverlapStatus_Statics::NewProp_Active = { "Active", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OceanologyWaterVolume_eventServer_ChangeOverlapStatus_Parms), &Z_Construct_UFunction_AOceanologyWaterVolume_Server_ChangeOverlapStatus_Statics::NewProp_Active_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Active_MetaData), NewProp_Active_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOceanologyWaterVolume_Server_ChangeOverlapStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOceanologyWaterVolume_Server_ChangeOverlapStatus_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOceanologyWaterVolume_Server_ChangeOverlapStatus_Statics::NewProp_Active,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOceanologyWaterVolume_Server_ChangeOverlapStatus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOceanologyWaterVolume_Server_ChangeOverlapStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOceanologyWaterVolume, nullptr, "Server_ChangeOverlapStatus", nullptr, nullptr, Z_Construct_UFunction_AOceanologyWaterVolume_Server_ChangeOverlapStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOceanologyWaterVolume_Server_ChangeOverlapStatus_Statics::PropPointers), sizeof(OceanologyWaterVolume_eventServer_ChangeOverlapStatus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOceanologyWaterVolume_Server_ChangeOverlapStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOceanologyWaterVolume_Server_ChangeOverlapStatus_Statics::Function_MetaDataParams) };
static_assert(sizeof(OceanologyWaterVolume_eventServer_ChangeOverlapStatus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOceanologyWaterVolume_Server_ChangeOverlapStatus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOceanologyWaterVolume_Server_ChangeOverlapStatus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOceanologyWaterVolume::execServer_ChangeOverlapStatus)
{
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_UBOOL(Z_Param_Active);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_ChangeOverlapStatus_Implementation(Z_Param_OtherActor,Z_Param_Active);
	P_NATIVE_END;
}
// End Class AOceanologyWaterVolume Function Server_ChangeOverlapStatus

// Begin Class AOceanologyWaterVolume
void AOceanologyWaterVolume::StaticRegisterNativesAOceanologyWaterVolume()
{
	UClass* Class = AOceanologyWaterVolume::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "InitialOverlappingCheck", &AOceanologyWaterVolume::execInitialOverlappingCheck },
		{ "NetMulticast_ChangeOverlapStatus", &AOceanologyWaterVolume::execNetMulticast_ChangeOverlapStatus },
		{ "OnVolume_BeginOverlap", &AOceanologyWaterVolume::execOnVolume_BeginOverlap },
		{ "OnVolume_EndOverlap", &AOceanologyWaterVolume::execOnVolume_EndOverlap },
		{ "RegisterOverlapEvents", &AOceanologyWaterVolume::execRegisterOverlapEvents },
		{ "Server_ChangeOverlapStatus", &AOceanologyWaterVolume::execServer_ChangeOverlapStatus },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOceanologyWaterVolume);
UClass* Z_Construct_UClass_AOceanologyWaterVolume_NoRegister()
{
	return AOceanologyWaterVolume::StaticClass();
}
struct Z_Construct_UClass_AOceanologyWaterVolume_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "CharacterMovement Volume HLOD Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "Actors/OceanologyWaterVolumeActor.h" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyWaterVolumeActor.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugEnabled_MetaData[] = {
		{ "Category", "Settings|Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Turning on/off debug messages of the water volume. WARNING: Debugging affects performance, do NOT use in production! */" },
#endif
		{ "ModuleRelativePath", "Public/Actors/OceanologyWaterVolumeActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Turning on/off debug messages of the water volume. WARNING: Debugging affects performance, do NOT use in production!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OceanologyWater_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The owner water of this water volume. Mandatory. Used to determine wave height. Physics & swimming logic's fundamental settings. */" },
#endif
		{ "ModuleRelativePath", "Public/Actors/OceanologyWaterVolumeActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The owner water of this water volume. Mandatory. Used to determine wave height. Physics & swimming logic's fundamental settings." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundsAlignActor_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Actor to align rotation to. If set this actor is always included in the bounds calculation. */" },
#endif
		{ "ModuleRelativePath", "Public/Actors/OceanologyWaterVolumeActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Actor to align rotation to. If set this actor is always included in the bounds calculation." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheckInitialOverlapOnBeginPlay_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyWaterVolumeActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialOverlapOnBeginPlayDelay_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyWaterVolumeActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableBuoyancyInArea_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyWaterVolumeActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableSwimmingInArea_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyWaterVolumeActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsVolumeTerminalVelocity_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "EnableSwimmingInArea" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyWaterVolumeActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsVolumePriority_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "EnableSwimmingInArea" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyWaterVolumeActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsVolumeFluidFriction_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "EnableSwimmingInArea" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyWaterVolumeActor.h" },
	};
#endif // WITH_METADATA
	static void NewProp_DebugEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DebugEnabled;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OceanologyWater;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_BoundsAlignActor;
	static void NewProp_CheckInitialOverlapOnBeginPlay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CheckInitialOverlapOnBeginPlay;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_InitialOverlapOnBeginPlayDelay;
	static void NewProp_EnableBuoyancyInArea_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableBuoyancyInArea;
	static void NewProp_EnableSwimmingInArea_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableSwimmingInArea;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PhysicsVolumeTerminalVelocity;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PhysicsVolumePriority;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PhysicsVolumeFluidFriction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AOceanologyWaterVolume_InitialOverlappingCheck, "InitialOverlappingCheck" }, // 3426430956
		{ &Z_Construct_UFunction_AOceanologyWaterVolume_NetMulticast_ChangeOverlapStatus, "NetMulticast_ChangeOverlapStatus" }, // 3200730511
		{ &Z_Construct_UFunction_AOceanologyWaterVolume_OnVolume_BeginOverlap, "OnVolume_BeginOverlap" }, // 2161689489
		{ &Z_Construct_UFunction_AOceanologyWaterVolume_OnVolume_EndOverlap, "OnVolume_EndOverlap" }, // 3588594857
		{ &Z_Construct_UFunction_AOceanologyWaterVolume_RegisterOverlapEvents, "RegisterOverlapEvents" }, // 2872873959
		{ &Z_Construct_UFunction_AOceanologyWaterVolume_Server_ChangeOverlapStatus, "Server_ChangeOverlapStatus" }, // 2387854668
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOceanologyWaterVolume>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_AOceanologyWaterVolume_Statics::NewProp_DebugEnabled_SetBit(void* Obj)
{
	((AOceanologyWaterVolume*)Obj)->DebugEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOceanologyWaterVolume_Statics::NewProp_DebugEnabled = { "DebugEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AOceanologyWaterVolume), &Z_Construct_UClass_AOceanologyWaterVolume_Statics::NewProp_DebugEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugEnabled_MetaData), NewProp_DebugEnabled_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOceanologyWaterVolume_Statics::NewProp_OceanologyWater = { "OceanologyWater", nullptr, (EPropertyFlags)0x0114000000000025, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOceanologyWaterVolume, OceanologyWater), Z_Construct_UClass_AOceanologyWaterParent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OceanologyWater_MetaData), NewProp_OceanologyWater_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_AOceanologyWaterVolume_Statics::NewProp_BoundsAlignActor = { "BoundsAlignActor", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOceanologyWaterVolume, BoundsAlignActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundsAlignActor_MetaData), NewProp_BoundsAlignActor_MetaData) };
void Z_Construct_UClass_AOceanologyWaterVolume_Statics::NewProp_CheckInitialOverlapOnBeginPlay_SetBit(void* Obj)
{
	((AOceanologyWaterVolume*)Obj)->CheckInitialOverlapOnBeginPlay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOceanologyWaterVolume_Statics::NewProp_CheckInitialOverlapOnBeginPlay = { "CheckInitialOverlapOnBeginPlay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AOceanologyWaterVolume), &Z_Construct_UClass_AOceanologyWaterVolume_Statics::NewProp_CheckInitialOverlapOnBeginPlay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheckInitialOverlapOnBeginPlay_MetaData), NewProp_CheckInitialOverlapOnBeginPlay_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_AOceanologyWaterVolume_Statics::NewProp_InitialOverlapOnBeginPlayDelay = { "InitialOverlapOnBeginPlayDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOceanologyWaterVolume, InitialOverlapOnBeginPlayDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialOverlapOnBeginPlayDelay_MetaData), NewProp_InitialOverlapOnBeginPlayDelay_MetaData) };
void Z_Construct_UClass_AOceanologyWaterVolume_Statics::NewProp_EnableBuoyancyInArea_SetBit(void* Obj)
{
	((AOceanologyWaterVolume*)Obj)->EnableBuoyancyInArea = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOceanologyWaterVolume_Statics::NewProp_EnableBuoyancyInArea = { "EnableBuoyancyInArea", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AOceanologyWaterVolume), &Z_Construct_UClass_AOceanologyWaterVolume_Statics::NewProp_EnableBuoyancyInArea_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableBuoyancyInArea_MetaData), NewProp_EnableBuoyancyInArea_MetaData) };
void Z_Construct_UClass_AOceanologyWaterVolume_Statics::NewProp_EnableSwimmingInArea_SetBit(void* Obj)
{
	((AOceanologyWaterVolume*)Obj)->EnableSwimmingInArea = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOceanologyWaterVolume_Statics::NewProp_EnableSwimmingInArea = { "EnableSwimmingInArea", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AOceanologyWaterVolume), &Z_Construct_UClass_AOceanologyWaterVolume_Statics::NewProp_EnableSwimmingInArea_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableSwimmingInArea_MetaData), NewProp_EnableSwimmingInArea_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOceanologyWaterVolume_Statics::NewProp_PhysicsVolumeTerminalVelocity = { "PhysicsVolumeTerminalVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOceanologyWaterVolume, PhysicsVolumeTerminalVelocity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysicsVolumeTerminalVelocity_MetaData), NewProp_PhysicsVolumeTerminalVelocity_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AOceanologyWaterVolume_Statics::NewProp_PhysicsVolumePriority = { "PhysicsVolumePriority", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOceanologyWaterVolume, PhysicsVolumePriority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysicsVolumePriority_MetaData), NewProp_PhysicsVolumePriority_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOceanologyWaterVolume_Statics::NewProp_PhysicsVolumeFluidFriction = { "PhysicsVolumeFluidFriction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOceanologyWaterVolume, PhysicsVolumeFluidFriction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysicsVolumeFluidFriction_MetaData), NewProp_PhysicsVolumeFluidFriction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOceanologyWaterVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanologyWaterVolume_Statics::NewProp_DebugEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanologyWaterVolume_Statics::NewProp_OceanologyWater,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanologyWaterVolume_Statics::NewProp_BoundsAlignActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanologyWaterVolume_Statics::NewProp_CheckInitialOverlapOnBeginPlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanologyWaterVolume_Statics::NewProp_InitialOverlapOnBeginPlayDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanologyWaterVolume_Statics::NewProp_EnableBuoyancyInArea,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanologyWaterVolume_Statics::NewProp_EnableSwimmingInArea,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanologyWaterVolume_Statics::NewProp_PhysicsVolumeTerminalVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanologyWaterVolume_Statics::NewProp_PhysicsVolumePriority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanologyWaterVolume_Statics::NewProp_PhysicsVolumeFluidFriction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOceanologyWaterVolume_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AOceanologyWaterVolume_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APhysicsVolume,
	(UObject* (*)())Z_Construct_UPackage__Script_Oceanology_Plugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOceanologyWaterVolume_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AOceanologyWaterVolume_Statics::ClassParams = {
	&AOceanologyWaterVolume::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AOceanologyWaterVolume_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AOceanologyWaterVolume_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOceanologyWaterVolume_Statics::Class_MetaDataParams), Z_Construct_UClass_AOceanologyWaterVolume_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AOceanologyWaterVolume()
{
	if (!Z_Registration_Info_UClass_AOceanologyWaterVolume.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOceanologyWaterVolume.OuterSingleton, Z_Construct_UClass_AOceanologyWaterVolume_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AOceanologyWaterVolume.OuterSingleton;
}
template<> OCEANOLOGY_PLUGIN_API UClass* StaticClass<AOceanologyWaterVolume>()
{
	return AOceanologyWaterVolume::StaticClass();
}
void AOceanologyWaterVolume::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_OceanologyWater(TEXT("OceanologyWater"));
	const bool bIsValid = true
		&& Name_OceanologyWater == ClassReps[(int32)ENetFields_Private::OceanologyWater].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AOceanologyWaterVolume"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AOceanologyWaterVolume);
AOceanologyWaterVolume::~AOceanologyWaterVolume() {}
// End Class AOceanologyWaterVolume

// Begin Registration
struct Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Actors_OceanologyWaterVolumeActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AOceanologyWaterVolume, AOceanologyWaterVolume::StaticClass, TEXT("AOceanologyWaterVolume"), &Z_Registration_Info_UClass_AOceanologyWaterVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOceanologyWaterVolume), 1697156874U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Actors_OceanologyWaterVolumeActor_h_1515253617(TEXT("/Script/Oceanology_Plugin"),
	Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Actors_OceanologyWaterVolumeActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Actors_OceanologyWaterVolumeActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
