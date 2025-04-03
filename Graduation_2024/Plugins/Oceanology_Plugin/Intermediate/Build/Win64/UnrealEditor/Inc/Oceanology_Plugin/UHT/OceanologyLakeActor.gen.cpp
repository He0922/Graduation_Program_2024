// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Oceanology_Plugin/Public/Actors/OceanologyLakeActor.h"
#include "Oceanology_Plugin/Public/Structs/OceanologyGroundCaustics.h"
#include "Oceanology_Plugin/Public/Structs/OceanologyLakeQuadTreeSettings.h"
#include "Oceanology_Plugin/Public/Structs/OceanologyWaterProjection.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOceanologyLakeActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDecalComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_AOceanologyLake();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_AOceanologyLake_NoRegister();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_AOceanologyWaterParent();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_UOceanAudioComponent_NoRegister();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_UOceanologyLakePreset_NoRegister();
OCEANOLOGY_PLUGIN_API UEnum* Z_Construct_UEnum_Oceanology_Plugin_EOceanologyWaterPresetMode();
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyGroundCaustics();
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyLakeQuadTreeSettings();
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyWaterProjection();
UPackage* Z_Construct_UPackage__Script_Oceanology_Plugin();
// End Cross Module References

// Begin Class AOceanologyLake Function CreateOrUpdateCausticsMID
struct Z_Construct_UFunction_AOceanologyLake_CreateOrUpdateCausticsMID_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Material Instance Dynamic" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyLakeActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOceanologyLake_CreateOrUpdateCausticsMID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOceanologyLake, nullptr, "CreateOrUpdateCausticsMID", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOceanologyLake_CreateOrUpdateCausticsMID_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOceanologyLake_CreateOrUpdateCausticsMID_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AOceanologyLake_CreateOrUpdateCausticsMID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOceanologyLake_CreateOrUpdateCausticsMID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOceanologyLake::execCreateOrUpdateCausticsMID)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateOrUpdateCausticsMID();
	P_NATIVE_END;
}
// End Class AOceanologyLake Function CreateOrUpdateCausticsMID

// Begin Class AOceanologyLake Function GetCausticsMID
struct Z_Construct_UFunction_AOceanologyLake_GetCausticsMID_Statics
{
	struct OceanologyLake_eventGetCausticsMID_Parms
	{
		UMaterialInstanceDynamic* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Material Instance Dynamic" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyLakeActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOceanologyLake_GetCausticsMID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyLake_eventGetCausticsMID_Parms, ReturnValue), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOceanologyLake_GetCausticsMID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOceanologyLake_GetCausticsMID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOceanologyLake_GetCausticsMID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOceanologyLake_GetCausticsMID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOceanologyLake, nullptr, "GetCausticsMID", nullptr, nullptr, Z_Construct_UFunction_AOceanologyLake_GetCausticsMID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOceanologyLake_GetCausticsMID_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOceanologyLake_GetCausticsMID_Statics::OceanologyLake_eventGetCausticsMID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOceanologyLake_GetCausticsMID_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOceanologyLake_GetCausticsMID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOceanologyLake_GetCausticsMID_Statics::OceanologyLake_eventGetCausticsMID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOceanologyLake_GetCausticsMID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOceanologyLake_GetCausticsMID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOceanologyLake::execGetCausticsMID)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMaterialInstanceDynamic**)Z_Param__Result=P_THIS->GetCausticsMID();
	P_NATIVE_END;
}
// End Class AOceanologyLake Function GetCausticsMID

// Begin Class AOceanologyLake Function InitAudio
struct Z_Construct_UFunction_AOceanologyLake_InitAudio_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lake" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyLakeActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOceanologyLake_InitAudio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOceanologyLake, nullptr, "InitAudio", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOceanologyLake_InitAudio_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOceanologyLake_InitAudio_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AOceanologyLake_InitAudio()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOceanologyLake_InitAudio_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOceanologyLake::execInitAudio)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitAudio();
	P_NATIVE_END;
}
// End Class AOceanologyLake Function InitAudio

// Begin Class AOceanologyLake Function InitCaustics
struct Z_Construct_UFunction_AOceanologyLake_InitCaustics_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lake" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyLakeActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOceanologyLake_InitCaustics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOceanologyLake, nullptr, "InitCaustics", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOceanologyLake_InitCaustics_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOceanologyLake_InitCaustics_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AOceanologyLake_InitCaustics()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOceanologyLake_InitCaustics_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOceanologyLake::execInitCaustics)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitCaustics();
	P_NATIVE_END;
}
// End Class AOceanologyLake Function InitCaustics

// Begin Class AOceanologyLake Function LoadPreset
struct Z_Construct_UFunction_AOceanologyLake_LoadPreset_Statics
{
	struct OceanologyLake_eventLoadPreset_Parms
	{
		UOceanologyLakePreset* InPreset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lake" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyLakeActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InPreset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOceanologyLake_LoadPreset_Statics::NewProp_InPreset = { "InPreset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyLake_eventLoadPreset_Parms, InPreset), Z_Construct_UClass_UOceanologyLakePreset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOceanologyLake_LoadPreset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOceanologyLake_LoadPreset_Statics::NewProp_InPreset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOceanologyLake_LoadPreset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOceanologyLake_LoadPreset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOceanologyLake, nullptr, "LoadPreset", nullptr, nullptr, Z_Construct_UFunction_AOceanologyLake_LoadPreset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOceanologyLake_LoadPreset_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOceanologyLake_LoadPreset_Statics::OceanologyLake_eventLoadPreset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOceanologyLake_LoadPreset_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOceanologyLake_LoadPreset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOceanologyLake_LoadPreset_Statics::OceanologyLake_eventLoadPreset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOceanologyLake_LoadPreset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOceanologyLake_LoadPreset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOceanologyLake::execLoadPreset)
{
	P_GET_OBJECT(UOceanologyLakePreset,Z_Param_InPreset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadPreset(Z_Param_InPreset);
	P_NATIVE_END;
}
// End Class AOceanologyLake Function LoadPreset

// Begin Class AOceanologyLake Function OnUnderwater_BeginOverlap
struct Z_Construct_UFunction_AOceanologyLake_OnUnderwater_BeginOverlap_Statics
{
	struct OceanologyLake_eventOnUnderwater_BeginOverlap_Parms
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
		{ "ModuleRelativePath", "Public/Actors/OceanologyLakeActor.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOceanologyLake_OnUnderwater_BeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyLake_eventOnUnderwater_BeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOceanologyLake_OnUnderwater_BeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyLake_eventOnUnderwater_BeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOceanologyLake_OnUnderwater_BeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyLake_eventOnUnderwater_BeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOceanologyLake_OnUnderwater_BeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyLake_eventOnUnderwater_BeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AOceanologyLake_OnUnderwater_BeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((OceanologyLake_eventOnUnderwater_BeginOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOceanologyLake_OnUnderwater_BeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OceanologyLake_eventOnUnderwater_BeginOverlap_Parms), &Z_Construct_UFunction_AOceanologyLake_OnUnderwater_BeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOceanologyLake_OnUnderwater_BeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyLake_eventOnUnderwater_BeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOceanologyLake_OnUnderwater_BeginOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOceanologyLake_OnUnderwater_BeginOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOceanologyLake_OnUnderwater_BeginOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOceanologyLake_OnUnderwater_BeginOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOceanologyLake_OnUnderwater_BeginOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOceanologyLake_OnUnderwater_BeginOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOceanologyLake_OnUnderwater_BeginOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOceanologyLake_OnUnderwater_BeginOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOceanologyLake_OnUnderwater_BeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOceanologyLake, nullptr, "OnUnderwater_BeginOverlap", nullptr, nullptr, Z_Construct_UFunction_AOceanologyLake_OnUnderwater_BeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOceanologyLake_OnUnderwater_BeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOceanologyLake_OnUnderwater_BeginOverlap_Statics::OceanologyLake_eventOnUnderwater_BeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOceanologyLake_OnUnderwater_BeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOceanologyLake_OnUnderwater_BeginOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOceanologyLake_OnUnderwater_BeginOverlap_Statics::OceanologyLake_eventOnUnderwater_BeginOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOceanologyLake_OnUnderwater_BeginOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOceanologyLake_OnUnderwater_BeginOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOceanologyLake::execOnUnderwater_BeginOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnUnderwater_BeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class AOceanologyLake Function OnUnderwater_BeginOverlap

// Begin Class AOceanologyLake Function OnUnderwater_EndOverlap
struct Z_Construct_UFunction_AOceanologyLake_OnUnderwater_EndOverlap_Statics
{
	struct OceanologyLake_eventOnUnderwater_EndOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/OceanologyLakeActor.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOceanologyLake_OnUnderwater_EndOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyLake_eventOnUnderwater_EndOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOceanologyLake_OnUnderwater_EndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyLake_eventOnUnderwater_EndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOceanologyLake_OnUnderwater_EndOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyLake_eventOnUnderwater_EndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOceanologyLake_OnUnderwater_EndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyLake_eventOnUnderwater_EndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOceanologyLake_OnUnderwater_EndOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOceanologyLake_OnUnderwater_EndOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOceanologyLake_OnUnderwater_EndOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOceanologyLake_OnUnderwater_EndOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOceanologyLake_OnUnderwater_EndOverlap_Statics::NewProp_OtherBodyIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOceanologyLake_OnUnderwater_EndOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOceanologyLake_OnUnderwater_EndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOceanologyLake, nullptr, "OnUnderwater_EndOverlap", nullptr, nullptr, Z_Construct_UFunction_AOceanologyLake_OnUnderwater_EndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOceanologyLake_OnUnderwater_EndOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOceanologyLake_OnUnderwater_EndOverlap_Statics::OceanologyLake_eventOnUnderwater_EndOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOceanologyLake_OnUnderwater_EndOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOceanologyLake_OnUnderwater_EndOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOceanologyLake_OnUnderwater_EndOverlap_Statics::OceanologyLake_eventOnUnderwater_EndOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOceanologyLake_OnUnderwater_EndOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOceanologyLake_OnUnderwater_EndOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOceanologyLake::execOnUnderwater_EndOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnUnderwater_EndOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
	P_NATIVE_END;
}
// End Class AOceanologyLake Function OnUnderwater_EndOverlap

// Begin Class AOceanologyLake Function RegisterUnderwaterOverlapEvents
struct Z_Construct_UFunction_AOceanologyLake_RegisterUnderwaterOverlapEvents_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/OceanologyLakeActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOceanologyLake_RegisterUnderwaterOverlapEvents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOceanologyLake, nullptr, "RegisterUnderwaterOverlapEvents", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOceanologyLake_RegisterUnderwaterOverlapEvents_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOceanologyLake_RegisterUnderwaterOverlapEvents_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AOceanologyLake_RegisterUnderwaterOverlapEvents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOceanologyLake_RegisterUnderwaterOverlapEvents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOceanologyLake::execRegisterUnderwaterOverlapEvents)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterUnderwaterOverlapEvents();
	P_NATIVE_END;
}
// End Class AOceanologyLake Function RegisterUnderwaterOverlapEvents

// Begin Class AOceanologyLake
void AOceanologyLake::StaticRegisterNativesAOceanologyLake()
{
	UClass* Class = AOceanologyLake::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateOrUpdateCausticsMID", &AOceanologyLake::execCreateOrUpdateCausticsMID },
		{ "GetCausticsMID", &AOceanologyLake::execGetCausticsMID },
		{ "InitAudio", &AOceanologyLake::execInitAudio },
		{ "InitCaustics", &AOceanologyLake::execInitCaustics },
		{ "LoadPreset", &AOceanologyLake::execLoadPreset },
		{ "OnUnderwater_BeginOverlap", &AOceanologyLake::execOnUnderwater_BeginOverlap },
		{ "OnUnderwater_EndOverlap", &AOceanologyLake::execOnUnderwater_EndOverlap },
		{ "RegisterUnderwaterOverlapEvents", &AOceanologyLake::execRegisterUnderwaterOverlapEvents },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOceanologyLake);
UClass* Z_Construct_UClass_AOceanologyLake_NoRegister()
{
	return AOceanologyLake::StaticClass();
}
struct Z_Construct_UClass_AOceanologyLake_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Actors/OceanologyLakeActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyLakeActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OceanAudioUnderwaterComponent_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyLakeActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OceanAudioWaveComponent_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyLakeActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CausticsComponent_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyLakeActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuadTreeSettings_MetaData[] = {
		{ "Category", "QuadTree" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyLakeActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Preset_MetaData[] = {
		{ "Category", "Preset" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyLakeActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PresetMode_MetaData[] = {
		{ "Category", "Preset" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyLakeActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PresetInclusionGroups_MetaData[] = {
		{ "Category", "Preset" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyLakeActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableCausticsOnGround_MetaData[] = {
		{ "Category", "Caustics" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyLakeActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundCaustics_MetaData[] = {
		{ "Category", "Caustics" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyLakeActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaterProjection_MetaData[] = {
		{ "Category", "Caustics" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyLakeActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CausticsMaterial_MetaData[] = {
		{ "Category", "Caustics" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyLakeActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CausticsMID_MetaData[] = {
		{ "Category", "Material Instance Dynamic" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyLakeActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OceanAudioUnderwaterComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OceanAudioWaveComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CausticsComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_QuadTreeSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Preset;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PresetMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PresetMode;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PresetInclusionGroups_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PresetInclusionGroups;
	static void NewProp_EnableCausticsOnGround_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableCausticsOnGround;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GroundCaustics;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WaterProjection;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CausticsMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CausticsMID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AOceanologyLake_CreateOrUpdateCausticsMID, "CreateOrUpdateCausticsMID" }, // 2688506049
		{ &Z_Construct_UFunction_AOceanologyLake_GetCausticsMID, "GetCausticsMID" }, // 165620869
		{ &Z_Construct_UFunction_AOceanologyLake_InitAudio, "InitAudio" }, // 1409279560
		{ &Z_Construct_UFunction_AOceanologyLake_InitCaustics, "InitCaustics" }, // 634724438
		{ &Z_Construct_UFunction_AOceanologyLake_LoadPreset, "LoadPreset" }, // 405147218
		{ &Z_Construct_UFunction_AOceanologyLake_OnUnderwater_BeginOverlap, "OnUnderwater_BeginOverlap" }, // 2974988221
		{ &Z_Construct_UFunction_AOceanologyLake_OnUnderwater_EndOverlap, "OnUnderwater_EndOverlap" }, // 2415275627
		{ &Z_Construct_UFunction_AOceanologyLake_RegisterUnderwaterOverlapEvents, "RegisterUnderwaterOverlapEvents" }, // 3982156862
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOceanologyLake>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOceanologyLake_Statics::NewProp_OceanAudioUnderwaterComponent = { "OceanAudioUnderwaterComponent", nullptr, (EPropertyFlags)0x01140000000b000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOceanologyLake, OceanAudioUnderwaterComponent), Z_Construct_UClass_UOceanAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OceanAudioUnderwaterComponent_MetaData), NewProp_OceanAudioUnderwaterComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOceanologyLake_Statics::NewProp_OceanAudioWaveComponent = { "OceanAudioWaveComponent", nullptr, (EPropertyFlags)0x01140000000b000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOceanologyLake, OceanAudioWaveComponent), Z_Construct_UClass_UOceanAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OceanAudioWaveComponent_MetaData), NewProp_OceanAudioWaveComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOceanologyLake_Statics::NewProp_CausticsComponent = { "CausticsComponent", nullptr, (EPropertyFlags)0x01140000000b000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOceanologyLake, CausticsComponent), Z_Construct_UClass_UDecalComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CausticsComponent_MetaData), NewProp_CausticsComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOceanologyLake_Statics::NewProp_QuadTreeSettings = { "QuadTreeSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOceanologyLake, QuadTreeSettings), Z_Construct_UScriptStruct_FOceanologyLakeQuadTreeSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuadTreeSettings_MetaData), NewProp_QuadTreeSettings_MetaData) }; // 820369329
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOceanologyLake_Statics::NewProp_Preset = { "Preset", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOceanologyLake, Preset), Z_Construct_UClass_UOceanologyLakePreset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Preset_MetaData), NewProp_Preset_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AOceanologyLake_Statics::NewProp_PresetMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AOceanologyLake_Statics::NewProp_PresetMode = { "PresetMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOceanologyLake, PresetMode), Z_Construct_UEnum_Oceanology_Plugin_EOceanologyWaterPresetMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PresetMode_MetaData), NewProp_PresetMode_MetaData) }; // 718401376
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AOceanologyLake_Statics::NewProp_PresetInclusionGroups_Inner = { "PresetInclusionGroups", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AOceanologyLake_Statics::NewProp_PresetInclusionGroups = { "PresetInclusionGroups", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOceanologyLake, PresetInclusionGroups), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PresetInclusionGroups_MetaData), NewProp_PresetInclusionGroups_MetaData) };
void Z_Construct_UClass_AOceanologyLake_Statics::NewProp_EnableCausticsOnGround_SetBit(void* Obj)
{
	((AOceanologyLake*)Obj)->EnableCausticsOnGround = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOceanologyLake_Statics::NewProp_EnableCausticsOnGround = { "EnableCausticsOnGround", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AOceanologyLake), &Z_Construct_UClass_AOceanologyLake_Statics::NewProp_EnableCausticsOnGround_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableCausticsOnGround_MetaData), NewProp_EnableCausticsOnGround_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOceanologyLake_Statics::NewProp_GroundCaustics = { "GroundCaustics", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOceanologyLake, GroundCaustics), Z_Construct_UScriptStruct_FOceanologyGroundCaustics, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundCaustics_MetaData), NewProp_GroundCaustics_MetaData) }; // 1718873675
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOceanologyLake_Statics::NewProp_WaterProjection = { "WaterProjection", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOceanologyLake, WaterProjection), Z_Construct_UScriptStruct_FOceanologyWaterProjection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaterProjection_MetaData), NewProp_WaterProjection_MetaData) }; // 1198342164
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOceanologyLake_Statics::NewProp_CausticsMaterial = { "CausticsMaterial", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOceanologyLake, CausticsMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CausticsMaterial_MetaData), NewProp_CausticsMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOceanologyLake_Statics::NewProp_CausticsMID = { "CausticsMID", nullptr, (EPropertyFlags)0x0040c00000022801, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOceanologyLake, CausticsMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CausticsMID_MetaData), NewProp_CausticsMID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOceanologyLake_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanologyLake_Statics::NewProp_OceanAudioUnderwaterComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanologyLake_Statics::NewProp_OceanAudioWaveComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanologyLake_Statics::NewProp_CausticsComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanologyLake_Statics::NewProp_QuadTreeSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanologyLake_Statics::NewProp_Preset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanologyLake_Statics::NewProp_PresetMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanologyLake_Statics::NewProp_PresetMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanologyLake_Statics::NewProp_PresetInclusionGroups_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanologyLake_Statics::NewProp_PresetInclusionGroups,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanologyLake_Statics::NewProp_EnableCausticsOnGround,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanologyLake_Statics::NewProp_GroundCaustics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanologyLake_Statics::NewProp_WaterProjection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanologyLake_Statics::NewProp_CausticsMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanologyLake_Statics::NewProp_CausticsMID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOceanologyLake_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AOceanologyLake_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AOceanologyWaterParent,
	(UObject* (*)())Z_Construct_UPackage__Script_Oceanology_Plugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOceanologyLake_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AOceanologyLake_Statics::ClassParams = {
	&AOceanologyLake::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AOceanologyLake_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AOceanologyLake_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOceanologyLake_Statics::Class_MetaDataParams), Z_Construct_UClass_AOceanologyLake_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AOceanologyLake()
{
	if (!Z_Registration_Info_UClass_AOceanologyLake.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOceanologyLake.OuterSingleton, Z_Construct_UClass_AOceanologyLake_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AOceanologyLake.OuterSingleton;
}
template<> OCEANOLOGY_PLUGIN_API UClass* StaticClass<AOceanologyLake>()
{
	return AOceanologyLake::StaticClass();
}
void AOceanologyLake::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_GroundCaustics(TEXT("GroundCaustics"));
	static const FName Name_WaterProjection(TEXT("WaterProjection"));
	const bool bIsValid = true
		&& Name_GroundCaustics == ClassReps[(int32)ENetFields_Private::GroundCaustics].Property->GetFName()
		&& Name_WaterProjection == ClassReps[(int32)ENetFields_Private::WaterProjection].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AOceanologyLake"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AOceanologyLake);
AOceanologyLake::~AOceanologyLake() {}
// End Class AOceanologyLake

// Begin Registration
struct Z_CompiledInDeferFile_FID_Programes_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Actors_OceanologyLakeActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AOceanologyLake, AOceanologyLake::StaticClass, TEXT("AOceanologyLake"), &Z_Registration_Info_UClass_AOceanologyLake, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOceanologyLake), 2038199193U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Programes_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Actors_OceanologyLakeActor_h_2793245311(TEXT("/Script/Oceanology_Plugin"),
	Z_CompiledInDeferFile_FID_Programes_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Actors_OceanologyLakeActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Programes_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Actors_OceanologyLakeActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
