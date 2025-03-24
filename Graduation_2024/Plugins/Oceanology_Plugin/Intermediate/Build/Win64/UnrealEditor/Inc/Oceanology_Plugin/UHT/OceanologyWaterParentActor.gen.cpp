// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Oceanology_Plugin/Public/Actors/OceanologyWaterParentActor.h"
#include "Oceanology_Plugin/Public/Structs/OceanologyActorHeight.h"
#include "Oceanology_Plugin/Public/Structs/OceanologyCaustics.h"
#include "Oceanology_Plugin/Public/Structs/OceanologyFlipbook.h"
#include "Oceanology_Plugin/Public/Structs/OceanologyFoam.h"
#include "Oceanology_Plugin/Public/Structs/OceanologyFolding.h"
#include "Oceanology_Plugin/Public/Structs/OceanologyGGX.h"
#include "Oceanology_Plugin/Public/Structs/OceanologyHorizonCorrection.h"
#include "Oceanology_Plugin/Public/Structs/OceanologyMask.h"
#include "Oceanology_Plugin/Public/Structs/OceanologyProcedural.h"
#include "Oceanology_Plugin/Public/Structs/OceanologyRefraction.h"
#include "Oceanology_Plugin/Public/Structs/OceanologyRVT.h"
#include "Oceanology_Plugin/Public/Structs/OceanologySurfaceScattering.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOceanologyWaterParentActor() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPostProcessComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_AOceanologyWaterParent();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_AOceanologyWaterParent_NoRegister();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_UOceanologyUnderwaterComponent_NoRegister();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_UOceanologyWaterMeshComponent_NoRegister();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_UOceanologyWaveSolverComponent_NoRegister();
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyActorHeight();
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyCaustics();
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyFlipbook();
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyFoam();
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyFolding();
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyGGX();
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyHorizonCorrection();
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyMask();
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyProcedural();
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyRefraction();
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyRVT();
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologySurfaceScattering();
UPackage* Z_Construct_UPackage__Script_Oceanology_Plugin();
// End Cross Module References

// Begin Class AOceanologyWaterParent Function CreateOrUpdateWaterFarDistanceMID
struct Z_Construct_UFunction_AOceanologyWaterParent_CreateOrUpdateWaterFarDistanceMID_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Material Instance Dynamic" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyWaterParentActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOceanologyWaterParent_CreateOrUpdateWaterFarDistanceMID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOceanologyWaterParent, nullptr, "CreateOrUpdateWaterFarDistanceMID", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOceanologyWaterParent_CreateOrUpdateWaterFarDistanceMID_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOceanologyWaterParent_CreateOrUpdateWaterFarDistanceMID_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AOceanologyWaterParent_CreateOrUpdateWaterFarDistanceMID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOceanologyWaterParent_CreateOrUpdateWaterFarDistanceMID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOceanologyWaterParent::execCreateOrUpdateWaterFarDistanceMID)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateOrUpdateWaterFarDistanceMID();
	P_NATIVE_END;
}
// End Class AOceanologyWaterParent Function CreateOrUpdateWaterFarDistanceMID

// Begin Class AOceanologyWaterParent Function CreateOrUpdateWaterMID
struct Z_Construct_UFunction_AOceanologyWaterParent_CreateOrUpdateWaterMID_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Material Instance Dynamic" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyWaterParentActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOceanologyWaterParent_CreateOrUpdateWaterMID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOceanologyWaterParent, nullptr, "CreateOrUpdateWaterMID", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOceanologyWaterParent_CreateOrUpdateWaterMID_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOceanologyWaterParent_CreateOrUpdateWaterMID_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AOceanologyWaterParent_CreateOrUpdateWaterMID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOceanologyWaterParent_CreateOrUpdateWaterMID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOceanologyWaterParent::execCreateOrUpdateWaterMID)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateOrUpdateWaterMID();
	P_NATIVE_END;
}
// End Class AOceanologyWaterParent Function CreateOrUpdateWaterMID

// Begin Class AOceanologyWaterParent Function GetValidWaveSolverByClass
struct Z_Construct_UFunction_AOceanologyWaterParent_GetValidWaveSolverByClass_Statics
{
	struct OceanologyWaterParent_eventGetValidWaveSolverByClass_Parms
	{
		TSubclassOf<UOceanologyWaveSolverComponent> InWaveSolverClass;
		UOceanologyWaveSolverComponent* OutWaveSolver;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Waves" },
		{ "DeterminesOutputType", "InWaveSolverClass" },
		{ "DynamicOutputParam", "OutWaveSolver" },
		{ "ExpandBoolAsExecs", "ReturnValue" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyWaterParentActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InWaveSolverClass_MetaData[] = {
		{ "AllowAbstract", "false" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutWaveSolver_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_InWaveSolverClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutWaveSolver;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AOceanologyWaterParent_GetValidWaveSolverByClass_Statics::NewProp_InWaveSolverClass = { "InWaveSolverClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyWaterParent_eventGetValidWaveSolverByClass_Parms, InWaveSolverClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UOceanologyWaveSolverComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InWaveSolverClass_MetaData), NewProp_InWaveSolverClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOceanologyWaterParent_GetValidWaveSolverByClass_Statics::NewProp_OutWaveSolver = { "OutWaveSolver", nullptr, (EPropertyFlags)0x0010000000080180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyWaterParent_eventGetValidWaveSolverByClass_Parms, OutWaveSolver), Z_Construct_UClass_UOceanologyWaveSolverComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutWaveSolver_MetaData), NewProp_OutWaveSolver_MetaData) };
void Z_Construct_UFunction_AOceanologyWaterParent_GetValidWaveSolverByClass_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OceanologyWaterParent_eventGetValidWaveSolverByClass_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOceanologyWaterParent_GetValidWaveSolverByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OceanologyWaterParent_eventGetValidWaveSolverByClass_Parms), &Z_Construct_UFunction_AOceanologyWaterParent_GetValidWaveSolverByClass_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOceanologyWaterParent_GetValidWaveSolverByClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOceanologyWaterParent_GetValidWaveSolverByClass_Statics::NewProp_InWaveSolverClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOceanologyWaterParent_GetValidWaveSolverByClass_Statics::NewProp_OutWaveSolver,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOceanologyWaterParent_GetValidWaveSolverByClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOceanologyWaterParent_GetValidWaveSolverByClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOceanologyWaterParent_GetValidWaveSolverByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOceanologyWaterParent, nullptr, "GetValidWaveSolverByClass", nullptr, nullptr, Z_Construct_UFunction_AOceanologyWaterParent_GetValidWaveSolverByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOceanologyWaterParent_GetValidWaveSolverByClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOceanologyWaterParent_GetValidWaveSolverByClass_Statics::OceanologyWaterParent_eventGetValidWaveSolverByClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOceanologyWaterParent_GetValidWaveSolverByClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOceanologyWaterParent_GetValidWaveSolverByClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOceanologyWaterParent_GetValidWaveSolverByClass_Statics::OceanologyWaterParent_eventGetValidWaveSolverByClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOceanologyWaterParent_GetValidWaveSolverByClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOceanologyWaterParent_GetValidWaveSolverByClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOceanologyWaterParent::execGetValidWaveSolverByClass)
{
	P_GET_OBJECT(UClass,Z_Param_InWaveSolverClass);
	P_GET_OBJECT_REF(UOceanologyWaveSolverComponent,Z_Param_Out_OutWaveSolver);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetValidWaveSolverByClass(Z_Param_InWaveSolverClass,P_ARG_GC_BARRIER(Z_Param_Out_OutWaveSolver));
	P_NATIVE_END;
}
// End Class AOceanologyWaterParent Function GetValidWaveSolverByClass

// Begin Class AOceanologyWaterParent Function GetWaterDensity
struct Z_Construct_UFunction_AOceanologyWaterParent_GetWaterDensity_Statics
{
	struct OceanologyWaterParent_eventGetWaterDensity_Parms
	{
		const AActor* Actor;
		double ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Water Surface" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyWaterParentActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOceanologyWaterParent_GetWaterDensity_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyWaterParent_eventGetWaterDensity_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actor_MetaData), NewProp_Actor_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_AOceanologyWaterParent_GetWaterDensity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyWaterParent_eventGetWaterDensity_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOceanologyWaterParent_GetWaterDensity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOceanologyWaterParent_GetWaterDensity_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOceanologyWaterParent_GetWaterDensity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOceanologyWaterParent_GetWaterDensity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOceanologyWaterParent_GetWaterDensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOceanologyWaterParent, nullptr, "GetWaterDensity", nullptr, nullptr, Z_Construct_UFunction_AOceanologyWaterParent_GetWaterDensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOceanologyWaterParent_GetWaterDensity_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOceanologyWaterParent_GetWaterDensity_Statics::OceanologyWaterParent_eventGetWaterDensity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOceanologyWaterParent_GetWaterDensity_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOceanologyWaterParent_GetWaterDensity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOceanologyWaterParent_GetWaterDensity_Statics::OceanologyWaterParent_eventGetWaterDensity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOceanologyWaterParent_GetWaterDensity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOceanologyWaterParent_GetWaterDensity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOceanologyWaterParent::execGetWaterDensity)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(double*)Z_Param__Result=P_THIS->GetWaterDensity(Z_Param_Actor);
	P_NATIVE_END;
}
// End Class AOceanologyWaterParent Function GetWaterDensity

// Begin Class AOceanologyWaterParent Function GetWaterFarDistanceMID
struct Z_Construct_UFunction_AOceanologyWaterParent_GetWaterFarDistanceMID_Statics
{
	struct OceanologyWaterParent_eventGetWaterFarDistanceMID_Parms
	{
		UMaterialInstanceDynamic* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Material Instance Dynamic" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyWaterParentActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOceanologyWaterParent_GetWaterFarDistanceMID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyWaterParent_eventGetWaterFarDistanceMID_Parms, ReturnValue), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOceanologyWaterParent_GetWaterFarDistanceMID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOceanologyWaterParent_GetWaterFarDistanceMID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOceanologyWaterParent_GetWaterFarDistanceMID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOceanologyWaterParent_GetWaterFarDistanceMID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOceanologyWaterParent, nullptr, "GetWaterFarDistanceMID", nullptr, nullptr, Z_Construct_UFunction_AOceanologyWaterParent_GetWaterFarDistanceMID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOceanologyWaterParent_GetWaterFarDistanceMID_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOceanologyWaterParent_GetWaterFarDistanceMID_Statics::OceanologyWaterParent_eventGetWaterFarDistanceMID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOceanologyWaterParent_GetWaterFarDistanceMID_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOceanologyWaterParent_GetWaterFarDistanceMID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOceanologyWaterParent_GetWaterFarDistanceMID_Statics::OceanologyWaterParent_eventGetWaterFarDistanceMID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOceanologyWaterParent_GetWaterFarDistanceMID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOceanologyWaterParent_GetWaterFarDistanceMID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOceanologyWaterParent::execGetWaterFarDistanceMID)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMaterialInstanceDynamic**)Z_Param__Result=P_THIS->GetWaterFarDistanceMID();
	P_NATIVE_END;
}
// End Class AOceanologyWaterParent Function GetWaterFarDistanceMID

// Begin Class AOceanologyWaterParent Function GetWaterMID
struct Z_Construct_UFunction_AOceanologyWaterParent_GetWaterMID_Statics
{
	struct OceanologyWaterParent_eventGetWaterMID_Parms
	{
		UMaterialInstanceDynamic* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Material Instance Dynamic" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyWaterParentActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOceanologyWaterParent_GetWaterMID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyWaterParent_eventGetWaterMID_Parms, ReturnValue), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOceanologyWaterParent_GetWaterMID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOceanologyWaterParent_GetWaterMID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOceanologyWaterParent_GetWaterMID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOceanologyWaterParent_GetWaterMID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOceanologyWaterParent, nullptr, "GetWaterMID", nullptr, nullptr, Z_Construct_UFunction_AOceanologyWaterParent_GetWaterMID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOceanologyWaterParent_GetWaterMID_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOceanologyWaterParent_GetWaterMID_Statics::OceanologyWaterParent_eventGetWaterMID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOceanologyWaterParent_GetWaterMID_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOceanologyWaterParent_GetWaterMID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOceanologyWaterParent_GetWaterMID_Statics::OceanologyWaterParent_eventGetWaterMID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOceanologyWaterParent_GetWaterMID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOceanologyWaterParent_GetWaterMID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOceanologyWaterParent::execGetWaterMID)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMaterialInstanceDynamic**)Z_Param__Result=P_THIS->GetWaterMID();
	P_NATIVE_END;
}
// End Class AOceanologyWaterParent Function GetWaterMID

// Begin Class AOceanologyWaterParent Function GetWaveHeightAtLocation
struct Z_Construct_UFunction_AOceanologyWaterParent_GetWaveHeightAtLocation_Statics
{
	struct OceanologyWaterParent_eventGetWaveHeightAtLocation_Parms
	{
		FVector Location;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Water Surface" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyWaterParentActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOceanologyWaterParent_GetWaveHeightAtLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyWaterParent_eventGetWaveHeightAtLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOceanologyWaterParent_GetWaveHeightAtLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyWaterParent_eventGetWaveHeightAtLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOceanologyWaterParent_GetWaveHeightAtLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOceanologyWaterParent_GetWaveHeightAtLocation_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOceanologyWaterParent_GetWaveHeightAtLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOceanologyWaterParent_GetWaveHeightAtLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOceanologyWaterParent_GetWaveHeightAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOceanologyWaterParent, nullptr, "GetWaveHeightAtLocation", nullptr, nullptr, Z_Construct_UFunction_AOceanologyWaterParent_GetWaveHeightAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOceanologyWaterParent_GetWaveHeightAtLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOceanologyWaterParent_GetWaveHeightAtLocation_Statics::OceanologyWaterParent_eventGetWaveHeightAtLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOceanologyWaterParent_GetWaveHeightAtLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOceanologyWaterParent_GetWaveHeightAtLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOceanologyWaterParent_GetWaveHeightAtLocation_Statics::OceanologyWaterParent_eventGetWaveHeightAtLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOceanologyWaterParent_GetWaveHeightAtLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOceanologyWaterParent_GetWaveHeightAtLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOceanologyWaterParent::execGetWaveHeightAtLocation)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetWaveHeightAtLocation(Z_Param_Out_Location);
	P_NATIVE_END;
}
// End Class AOceanologyWaterParent Function GetWaveHeightAtLocation

// Begin Class AOceanologyWaterParent Function GetWaveSolver
struct Z_Construct_UFunction_AOceanologyWaterParent_GetWaveSolver_Statics
{
	struct OceanologyWaterParent_eventGetWaveSolver_Parms
	{
		UOceanologyWaveSolverComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Waves" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyWaterParentActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOceanologyWaterParent_GetWaveSolver_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyWaterParent_eventGetWaveSolver_Parms, ReturnValue), Z_Construct_UClass_UOceanologyWaveSolverComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOceanologyWaterParent_GetWaveSolver_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOceanologyWaterParent_GetWaveSolver_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOceanologyWaterParent_GetWaveSolver_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOceanologyWaterParent_GetWaveSolver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOceanologyWaterParent, nullptr, "GetWaveSolver", nullptr, nullptr, Z_Construct_UFunction_AOceanologyWaterParent_GetWaveSolver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOceanologyWaterParent_GetWaveSolver_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOceanologyWaterParent_GetWaveSolver_Statics::OceanologyWaterParent_eventGetWaveSolver_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOceanologyWaterParent_GetWaveSolver_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOceanologyWaterParent_GetWaveSolver_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOceanologyWaterParent_GetWaveSolver_Statics::OceanologyWaterParent_eventGetWaveSolver_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOceanologyWaterParent_GetWaveSolver()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOceanologyWaterParent_GetWaveSolver_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOceanologyWaterParent::execGetWaveSolver)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOceanologyWaveSolverComponent**)Z_Param__Result=P_THIS->GetWaveSolver();
	P_NATIVE_END;
}
// End Class AOceanologyWaterParent Function GetWaveSolver

// Begin Class AOceanologyWaterParent Function GetWaveSolverClass
struct Z_Construct_UFunction_AOceanologyWaterParent_GetWaveSolverClass_Statics
{
	struct OceanologyWaterParent_eventGetWaveSolverClass_Parms
	{
		TSubclassOf<UOceanologyWaveSolverComponent> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Waves" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyWaterParentActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AOceanologyWaterParent_GetWaveSolverClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyWaterParent_eventGetWaveSolverClass_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UOceanologyWaveSolverComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOceanologyWaterParent_GetWaveSolverClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOceanologyWaterParent_GetWaveSolverClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOceanologyWaterParent_GetWaveSolverClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOceanologyWaterParent_GetWaveSolverClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOceanologyWaterParent, nullptr, "GetWaveSolverClass", nullptr, nullptr, Z_Construct_UFunction_AOceanologyWaterParent_GetWaveSolverClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOceanologyWaterParent_GetWaveSolverClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOceanologyWaterParent_GetWaveSolverClass_Statics::OceanologyWaterParent_eventGetWaveSolverClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOceanologyWaterParent_GetWaveSolverClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOceanologyWaterParent_GetWaveSolverClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOceanologyWaterParent_GetWaveSolverClass_Statics::OceanologyWaterParent_eventGetWaveSolverClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOceanologyWaterParent_GetWaveSolverClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOceanologyWaterParent_GetWaveSolverClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOceanologyWaterParent::execGetWaveSolverClass)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSubclassOf<UOceanologyWaveSolverComponent>*)Z_Param__Result=P_THIS->GetWaveSolverClass();
	P_NATIVE_END;
}
// End Class AOceanologyWaterParent Function GetWaveSolverClass

// Begin Class AOceanologyWaterParent Function InitSurface
static FName NAME_AOceanologyWaterParent_InitSurface = FName(TEXT("InitSurface"));
void AOceanologyWaterParent::InitSurface()
{
	ProcessEvent(FindFunctionChecked(NAME_AOceanologyWaterParent_InitSurface),NULL);
}
struct Z_Construct_UFunction_AOceanologyWaterParent_InitSurface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Water Surface" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyWaterParentActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOceanologyWaterParent_InitSurface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOceanologyWaterParent, nullptr, "InitSurface", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOceanologyWaterParent_InitSurface_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOceanologyWaterParent_InitSurface_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AOceanologyWaterParent_InitSurface()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOceanologyWaterParent_InitSurface_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOceanologyWaterParent::execInitSurface)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitSurface_Implementation();
	P_NATIVE_END;
}
// End Class AOceanologyWaterParent Function InitSurface

// Begin Class AOceanologyWaterParent Function ReloadSettings
struct Z_Construct_UFunction_AOceanologyWaterParent_ReloadSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyWaterParentActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOceanologyWaterParent_ReloadSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOceanologyWaterParent, nullptr, "ReloadSettings", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOceanologyWaterParent_ReloadSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOceanologyWaterParent_ReloadSettings_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AOceanologyWaterParent_ReloadSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOceanologyWaterParent_ReloadSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOceanologyWaterParent::execReloadSettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReloadSettings();
	P_NATIVE_END;
}
// End Class AOceanologyWaterParent Function ReloadSettings

// Begin Class AOceanologyWaterParent Function SetScalarParameterValue
struct Z_Construct_UFunction_AOceanologyWaterParent_SetScalarParameterValue_Statics
{
	struct OceanologyWaterParent_eventSetScalarParameterValue_Parms
	{
		FName ParameterName;
		double Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Material Instance Dynamic" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyWaterParentActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AOceanologyWaterParent_SetScalarParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyWaterParent_eventSetScalarParameterValue_Parms, ParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterName_MetaData), NewProp_ParameterName_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_AOceanologyWaterParent_SetScalarParameterValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyWaterParent_eventSetScalarParameterValue_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOceanologyWaterParent_SetScalarParameterValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOceanologyWaterParent_SetScalarParameterValue_Statics::NewProp_ParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOceanologyWaterParent_SetScalarParameterValue_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOceanologyWaterParent_SetScalarParameterValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOceanologyWaterParent_SetScalarParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOceanologyWaterParent, nullptr, "SetScalarParameterValue", nullptr, nullptr, Z_Construct_UFunction_AOceanologyWaterParent_SetScalarParameterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOceanologyWaterParent_SetScalarParameterValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOceanologyWaterParent_SetScalarParameterValue_Statics::OceanologyWaterParent_eventSetScalarParameterValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOceanologyWaterParent_SetScalarParameterValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOceanologyWaterParent_SetScalarParameterValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOceanologyWaterParent_SetScalarParameterValue_Statics::OceanologyWaterParent_eventSetScalarParameterValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOceanologyWaterParent_SetScalarParameterValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOceanologyWaterParent_SetScalarParameterValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOceanologyWaterParent::execSetScalarParameterValue)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetScalarParameterValue(Z_Param_ParameterName,Z_Param_Value);
	P_NATIVE_END;
}
// End Class AOceanologyWaterParent Function SetScalarParameterValue

// Begin Class AOceanologyWaterParent Function SetTextureParameterValue
struct Z_Construct_UFunction_AOceanologyWaterParent_SetTextureParameterValue_Statics
{
	struct OceanologyWaterParent_eventSetTextureParameterValue_Parms
	{
		FName ParameterName;
		UTexture* Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Material Instance Dynamic" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyWaterParentActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AOceanologyWaterParent_SetTextureParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyWaterParent_eventSetTextureParameterValue_Parms, ParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterName_MetaData), NewProp_ParameterName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOceanologyWaterParent_SetTextureParameterValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyWaterParent_eventSetTextureParameterValue_Parms, Value), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOceanologyWaterParent_SetTextureParameterValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOceanologyWaterParent_SetTextureParameterValue_Statics::NewProp_ParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOceanologyWaterParent_SetTextureParameterValue_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOceanologyWaterParent_SetTextureParameterValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOceanologyWaterParent_SetTextureParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOceanologyWaterParent, nullptr, "SetTextureParameterValue", nullptr, nullptr, Z_Construct_UFunction_AOceanologyWaterParent_SetTextureParameterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOceanologyWaterParent_SetTextureParameterValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOceanologyWaterParent_SetTextureParameterValue_Statics::OceanologyWaterParent_eventSetTextureParameterValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOceanologyWaterParent_SetTextureParameterValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOceanologyWaterParent_SetTextureParameterValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOceanologyWaterParent_SetTextureParameterValue_Statics::OceanologyWaterParent_eventSetTextureParameterValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOceanologyWaterParent_SetTextureParameterValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOceanologyWaterParent_SetTextureParameterValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOceanologyWaterParent::execSetTextureParameterValue)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
	P_GET_OBJECT(UTexture,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTextureParameterValue(Z_Param_ParameterName,Z_Param_Value);
	P_NATIVE_END;
}
// End Class AOceanologyWaterParent Function SetTextureParameterValue

// Begin Class AOceanologyWaterParent Function SetupWaveSolvers
struct Z_Construct_UFunction_AOceanologyWaterParent_SetupWaveSolvers_Statics
{
	struct OceanologyWaterParent_eventSetupWaveSolvers_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Waves" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyWaterParentActor.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AOceanologyWaterParent_SetupWaveSolvers_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OceanologyWaterParent_eventSetupWaveSolvers_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOceanologyWaterParent_SetupWaveSolvers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OceanologyWaterParent_eventSetupWaveSolvers_Parms), &Z_Construct_UFunction_AOceanologyWaterParent_SetupWaveSolvers_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOceanologyWaterParent_SetupWaveSolvers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOceanologyWaterParent_SetupWaveSolvers_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOceanologyWaterParent_SetupWaveSolvers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOceanologyWaterParent_SetupWaveSolvers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOceanologyWaterParent, nullptr, "SetupWaveSolvers", nullptr, nullptr, Z_Construct_UFunction_AOceanologyWaterParent_SetupWaveSolvers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOceanologyWaterParent_SetupWaveSolvers_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOceanologyWaterParent_SetupWaveSolvers_Statics::OceanologyWaterParent_eventSetupWaveSolvers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOceanologyWaterParent_SetupWaveSolvers_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOceanologyWaterParent_SetupWaveSolvers_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOceanologyWaterParent_SetupWaveSolvers_Statics::OceanologyWaterParent_eventSetupWaveSolvers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOceanologyWaterParent_SetupWaveSolvers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOceanologyWaterParent_SetupWaveSolvers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOceanologyWaterParent::execSetupWaveSolvers)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetupWaveSolvers();
	P_NATIVE_END;
}
// End Class AOceanologyWaterParent Function SetupWaveSolvers

// Begin Class AOceanologyWaterParent Function SetVectorParameterValue
struct Z_Construct_UFunction_AOceanologyWaterParent_SetVectorParameterValue_Statics
{
	struct OceanologyWaterParent_eventSetVectorParameterValue_Parms
	{
		FName ParameterName;
		FLinearColor Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Material Instance Dynamic" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyWaterParentActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AOceanologyWaterParent_SetVectorParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyWaterParent_eventSetVectorParameterValue_Parms, ParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterName_MetaData), NewProp_ParameterName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOceanologyWaterParent_SetVectorParameterValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyWaterParent_eventSetVectorParameterValue_Parms, Value), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOceanologyWaterParent_SetVectorParameterValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOceanologyWaterParent_SetVectorParameterValue_Statics::NewProp_ParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOceanologyWaterParent_SetVectorParameterValue_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOceanologyWaterParent_SetVectorParameterValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOceanologyWaterParent_SetVectorParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOceanologyWaterParent, nullptr, "SetVectorParameterValue", nullptr, nullptr, Z_Construct_UFunction_AOceanologyWaterParent_SetVectorParameterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOceanologyWaterParent_SetVectorParameterValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOceanologyWaterParent_SetVectorParameterValue_Statics::OceanologyWaterParent_eventSetVectorParameterValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOceanologyWaterParent_SetVectorParameterValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOceanologyWaterParent_SetVectorParameterValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOceanologyWaterParent_SetVectorParameterValue_Statics::OceanologyWaterParent_eventSetVectorParameterValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOceanologyWaterParent_SetVectorParameterValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOceanologyWaterParent_SetVectorParameterValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOceanologyWaterParent::execSetVectorParameterValue)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
	P_GET_STRUCT(FLinearColor,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetVectorParameterValue(Z_Param_ParameterName,Z_Param_Value);
	P_NATIVE_END;
}
// End Class AOceanologyWaterParent Function SetVectorParameterValue

// Begin Class AOceanologyWaterParent Function SetWaterMaterialParameters
struct Z_Construct_UFunction_AOceanologyWaterParent_SetWaterMaterialParameters_Statics
{
	struct OceanologyWaterParent_eventSetWaterMaterialParameters_Parms
	{
		UMaterialInstanceDynamic* MID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Water Material Parameters" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyWaterParentActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOceanologyWaterParent_SetWaterMaterialParameters_Statics::NewProp_MID = { "MID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyWaterParent_eventSetWaterMaterialParameters_Parms, MID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOceanologyWaterParent_SetWaterMaterialParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOceanologyWaterParent_SetWaterMaterialParameters_Statics::NewProp_MID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOceanologyWaterParent_SetWaterMaterialParameters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOceanologyWaterParent_SetWaterMaterialParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOceanologyWaterParent, nullptr, "SetWaterMaterialParameters", nullptr, nullptr, Z_Construct_UFunction_AOceanologyWaterParent_SetWaterMaterialParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOceanologyWaterParent_SetWaterMaterialParameters_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOceanologyWaterParent_SetWaterMaterialParameters_Statics::OceanologyWaterParent_eventSetWaterMaterialParameters_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOceanologyWaterParent_SetWaterMaterialParameters_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOceanologyWaterParent_SetWaterMaterialParameters_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOceanologyWaterParent_SetWaterMaterialParameters_Statics::OceanologyWaterParent_eventSetWaterMaterialParameters_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOceanologyWaterParent_SetWaterMaterialParameters()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOceanologyWaterParent_SetWaterMaterialParameters_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOceanologyWaterParent::execSetWaterMaterialParameters)
{
	P_GET_OBJECT(UMaterialInstanceDynamic,Z_Param_MID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetWaterMaterialParameters(Z_Param_MID);
	P_NATIVE_END;
}
// End Class AOceanologyWaterParent Function SetWaterMaterialParameters

// Begin Class AOceanologyWaterParent
void AOceanologyWaterParent::StaticRegisterNativesAOceanologyWaterParent()
{
	UClass* Class = AOceanologyWaterParent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateOrUpdateWaterFarDistanceMID", &AOceanologyWaterParent::execCreateOrUpdateWaterFarDistanceMID },
		{ "CreateOrUpdateWaterMID", &AOceanologyWaterParent::execCreateOrUpdateWaterMID },
		{ "GetValidWaveSolverByClass", &AOceanologyWaterParent::execGetValidWaveSolverByClass },
		{ "GetWaterDensity", &AOceanologyWaterParent::execGetWaterDensity },
		{ "GetWaterFarDistanceMID", &AOceanologyWaterParent::execGetWaterFarDistanceMID },
		{ "GetWaterMID", &AOceanologyWaterParent::execGetWaterMID },
		{ "GetWaveHeightAtLocation", &AOceanologyWaterParent::execGetWaveHeightAtLocation },
		{ "GetWaveSolver", &AOceanologyWaterParent::execGetWaveSolver },
		{ "GetWaveSolverClass", &AOceanologyWaterParent::execGetWaveSolverClass },
		{ "InitSurface", &AOceanologyWaterParent::execInitSurface },
		{ "ReloadSettings", &AOceanologyWaterParent::execReloadSettings },
		{ "SetScalarParameterValue", &AOceanologyWaterParent::execSetScalarParameterValue },
		{ "SetTextureParameterValue", &AOceanologyWaterParent::execSetTextureParameterValue },
		{ "SetupWaveSolvers", &AOceanologyWaterParent::execSetupWaveSolvers },
		{ "SetVectorParameterValue", &AOceanologyWaterParent::execSetVectorParameterValue },
		{ "SetWaterMaterialParameters", &AOceanologyWaterParent::execSetWaterMaterialParameters },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOceanologyWaterParent);
UClass* Z_Construct_UClass_AOceanologyWaterParent_NoRegister()
{
	return AOceanologyWaterParent::StaticClass();
}
struct Z_Construct_UClass_AOceanologyWaterParent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/OceanologyWaterParentActor.h" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyWaterParentActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSceneRoot_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyWaterParentActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaterMeshComponent_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyWaterParentActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnderwaterBoxVolumeComponent_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyWaterParentActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnderwaterPostProcessComponent_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyWaterParentActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnderwaterComponent_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyWaterParentActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VolumetricFogMeshComponent_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyWaterParentActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BubblesComponent_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyWaterParentActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaveSolverClass_MetaData[] = {
		{ "Category", "Waves" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyWaterParentActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaveSolver_MetaData[] = {
		{ "Category", "Waves" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyWaterParentActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugEnabled_MetaData[] = {
		{ "Category", "Water Parent|Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Turning on/off debug messages of the water. WARNING: Debugging affects performance, do NOT use in production! */" },
#endif
		{ "ModuleRelativePath", "Public/Actors/OceanologyWaterParentActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Turning on/off debug messages of the water. WARNING: Debugging affects performance, do NOT use in production!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceScattering_MetaData[] = {
		{ "Category", "Surface|Surface Scattering" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyWaterParentActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Caustics_MetaData[] = {
		{ "Category", "Surface|Caustics" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyWaterParentActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Refraction_MetaData[] = {
		{ "Category", "Surface|Refraction" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyWaterParentActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HorizonCorrection_MetaData[] = {
		{ "Category", "Surface|Normal Calculation" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyWaterParentActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Flipbook_MetaData[] = {
		{ "Category", "Surface|Normal Calculation" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyWaterParentActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Foam_MetaData[] = {
		{ "Category", "Foam" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyWaterParentActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Folding_MetaData[] = {
		{ "Category", "Foam|Folding" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyWaterParentActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Procedural_MetaData[] = {
		{ "Category", "Procedural" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyWaterParentActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RVT_MetaData[] = {
		{ "Category", "RVT" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyWaterParentActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mask_MetaData[] = {
		{ "Category", "Mask" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyWaterParentActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorHeight_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actors/OceanologyWaterParentActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GGX_MetaData[] = {
		{ "Category", "GGX" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyWaterParentActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserOverrideMaterial_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyWaterParentActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
		{ "Category", "Material" },
		{ "EditCondition", "UserOverrideMaterial" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyWaterParentActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialFar_MetaData[] = {
		{ "Category", "Material" },
		{ "EditCondition", "UserOverrideMaterial" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyWaterParentActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaterMID_MetaData[] = {
		{ "Category", "Material Instance Dynamic" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyWaterParentActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaterFarDistanceMID_MetaData[] = {
		{ "Category", "Material Instance Dynamic" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyWaterParentActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultSceneRoot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WaterMeshComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UnderwaterBoxVolumeComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UnderwaterPostProcessComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UnderwaterComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VolumetricFogMeshComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BubblesComponent;
	static const UECodeGen_Private::FClassPropertyParams NewProp_WaveSolverClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WaveSolver;
	static void NewProp_DebugEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DebugEnabled;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SurfaceScattering;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Caustics;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Refraction;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HorizonCorrection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Flipbook;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Foam;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Folding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Procedural;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RVT;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Mask;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActorHeight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GGX;
	static void NewProp_UserOverrideMaterial_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UserOverrideMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialFar;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WaterMID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WaterFarDistanceMID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AOceanologyWaterParent_CreateOrUpdateWaterFarDistanceMID, "CreateOrUpdateWaterFarDistanceMID" }, // 3235153357
		{ &Z_Construct_UFunction_AOceanologyWaterParent_CreateOrUpdateWaterMID, "CreateOrUpdateWaterMID" }, // 3176006751
		{ &Z_Construct_UFunction_AOceanologyWaterParent_GetValidWaveSolverByClass, "GetValidWaveSolverByClass" }, // 2821896563
		{ &Z_Construct_UFunction_AOceanologyWaterParent_GetWaterDensity, "GetWaterDensity" }, // 385097555
		{ &Z_Construct_UFunction_AOceanologyWaterParent_GetWaterFarDistanceMID, "GetWaterFarDistanceMID" }, // 40582383
		{ &Z_Construct_UFunction_AOceanologyWaterParent_GetWaterMID, "GetWaterMID" }, // 331897875
		{ &Z_Construct_UFunction_AOceanologyWaterParent_GetWaveHeightAtLocation, "GetWaveHeightAtLocation" }, // 752496238
		{ &Z_Construct_UFunction_AOceanologyWaterParent_GetWaveSolver, "GetWaveSolver" }, // 1394892172
		{ &Z_Construct_UFunction_AOceanologyWaterParent_GetWaveSolverClass, "GetWaveSolverClass" }, // 2947388120
		{ &Z_Construct_UFunction_AOceanologyWaterParent_InitSurface, "InitSurface" }, // 3926939765
		{ &Z_Construct_UFunction_AOceanologyWaterParent_ReloadSettings, "ReloadSettings" }, // 1784173407
		{ &Z_Construct_UFunction_AOceanologyWaterParent_SetScalarParameterValue, "SetScalarParameterValue" }, // 986032509
		{ &Z_Construct_UFunction_AOceanologyWaterParent_SetTextureParameterValue, "SetTextureParameterValue" }, // 960573188
		{ &Z_Construct_UFunction_AOceanologyWaterParent_SetupWaveSolvers, "SetupWaveSolvers" }, // 1734923080
		{ &Z_Construct_UFunction_AOceanologyWaterParent_SetVectorParameterValue, "SetVectorParameterValue" }, // 1933437304
		{ &Z_Construct_UFunction_AOceanologyWaterParent_SetWaterMaterialParameters, "SetWaterMaterialParameters" }, // 1689340691
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOceanologyWaterParent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOceanologyWaterParent_Statics::NewProp_DefaultSceneRoot = { "DefaultSceneRoot", nullptr, (EPropertyFlags)0x011400040008000c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOceanologyWaterParent, DefaultSceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultSceneRoot_MetaData), NewProp_DefaultSceneRoot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOceanologyWaterParent_Statics::NewProp_WaterMeshComponent = { "WaterMeshComponent", nullptr, (EPropertyFlags)0x011400000008000c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOceanologyWaterParent, WaterMeshComponent), Z_Construct_UClass_UOceanologyWaterMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaterMeshComponent_MetaData), NewProp_WaterMeshComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOceanologyWaterParent_Statics::NewProp_UnderwaterBoxVolumeComponent = { "UnderwaterBoxVolumeComponent", nullptr, (EPropertyFlags)0x01140000000b000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOceanologyWaterParent, UnderwaterBoxVolumeComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnderwaterBoxVolumeComponent_MetaData), NewProp_UnderwaterBoxVolumeComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOceanologyWaterParent_Statics::NewProp_UnderwaterPostProcessComponent = { "UnderwaterPostProcessComponent", nullptr, (EPropertyFlags)0x01140000000b000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOceanologyWaterParent, UnderwaterPostProcessComponent), Z_Construct_UClass_UPostProcessComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnderwaterPostProcessComponent_MetaData), NewProp_UnderwaterPostProcessComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOceanologyWaterParent_Statics::NewProp_UnderwaterComponent = { "UnderwaterComponent", nullptr, (EPropertyFlags)0x01140000000a080d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOceanologyWaterParent, UnderwaterComponent), Z_Construct_UClass_UOceanologyUnderwaterComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnderwaterComponent_MetaData), NewProp_UnderwaterComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOceanologyWaterParent_Statics::NewProp_VolumetricFogMeshComponent = { "VolumetricFogMeshComponent", nullptr, (EPropertyFlags)0x01140000000b000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOceanologyWaterParent, VolumetricFogMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VolumetricFogMeshComponent_MetaData), NewProp_VolumetricFogMeshComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOceanologyWaterParent_Statics::NewProp_BubblesComponent = { "BubblesComponent", nullptr, (EPropertyFlags)0x01140000000b000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOceanologyWaterParent, BubblesComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BubblesComponent_MetaData), NewProp_BubblesComponent_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AOceanologyWaterParent_Statics::NewProp_WaveSolverClass = { "WaveSolverClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOceanologyWaterParent, WaveSolverClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UOceanologyWaveSolverComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaveSolverClass_MetaData), NewProp_WaveSolverClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOceanologyWaterParent_Statics::NewProp_WaveSolver = { "WaveSolver", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOceanologyWaterParent, WaveSolver), Z_Construct_UClass_UOceanologyWaveSolverComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaveSolver_MetaData), NewProp_WaveSolver_MetaData) };
void Z_Construct_UClass_AOceanologyWaterParent_Statics::NewProp_DebugEnabled_SetBit(void* Obj)
{
	((AOceanologyWaterParent*)Obj)->DebugEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOceanologyWaterParent_Statics::NewProp_DebugEnabled = { "DebugEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AOceanologyWaterParent), &Z_Construct_UClass_AOceanologyWaterParent_Statics::NewProp_DebugEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugEnabled_MetaData), NewProp_DebugEnabled_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOceanologyWaterParent_Statics::NewProp_SurfaceScattering = { "SurfaceScattering", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOceanologyWaterParent, SurfaceScattering), Z_Construct_UScriptStruct_FOceanologySurfaceScattering, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SurfaceScattering_MetaData), NewProp_SurfaceScattering_MetaData) }; // 2426833340
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOceanologyWaterParent_Statics::NewProp_Caustics = { "Caustics", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOceanologyWaterParent, Caustics), Z_Construct_UScriptStruct_FOceanologyCaustics, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Caustics_MetaData), NewProp_Caustics_MetaData) }; // 236567494
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOceanologyWaterParent_Statics::NewProp_Refraction = { "Refraction", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOceanologyWaterParent, Refraction), Z_Construct_UScriptStruct_FOceanologyRefraction, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Refraction_MetaData), NewProp_Refraction_MetaData) }; // 3969240598
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOceanologyWaterParent_Statics::NewProp_HorizonCorrection = { "HorizonCorrection", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOceanologyWaterParent, HorizonCorrection), Z_Construct_UScriptStruct_FOceanologyHorizonCorrection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HorizonCorrection_MetaData), NewProp_HorizonCorrection_MetaData) }; // 2772329432
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOceanologyWaterParent_Statics::NewProp_Flipbook = { "Flipbook", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOceanologyWaterParent, Flipbook), Z_Construct_UScriptStruct_FOceanologyFlipbook, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Flipbook_MetaData), NewProp_Flipbook_MetaData) }; // 1692283366
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOceanologyWaterParent_Statics::NewProp_Foam = { "Foam", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOceanologyWaterParent, Foam), Z_Construct_UScriptStruct_FOceanologyFoam, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Foam_MetaData), NewProp_Foam_MetaData) }; // 1484821047
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOceanologyWaterParent_Statics::NewProp_Folding = { "Folding", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOceanologyWaterParent, Folding), Z_Construct_UScriptStruct_FOceanologyFolding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Folding_MetaData), NewProp_Folding_MetaData) }; // 1188334788
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOceanologyWaterParent_Statics::NewProp_Procedural = { "Procedural", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOceanologyWaterParent, Procedural), Z_Construct_UScriptStruct_FOceanologyProcedural, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Procedural_MetaData), NewProp_Procedural_MetaData) }; // 4058591009
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOceanologyWaterParent_Statics::NewProp_RVT = { "RVT", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOceanologyWaterParent, RVT), Z_Construct_UScriptStruct_FOceanologyRVT, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RVT_MetaData), NewProp_RVT_MetaData) }; // 1549818250
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOceanologyWaterParent_Statics::NewProp_Mask = { "Mask", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOceanologyWaterParent, Mask), Z_Construct_UScriptStruct_FOceanologyMask, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mask_MetaData), NewProp_Mask_MetaData) }; // 1049969195
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOceanologyWaterParent_Statics::NewProp_ActorHeight = { "ActorHeight", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOceanologyWaterParent, ActorHeight), Z_Construct_UScriptStruct_FOceanologyActorHeight, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorHeight_MetaData), NewProp_ActorHeight_MetaData) }; // 600064430
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOceanologyWaterParent_Statics::NewProp_GGX = { "GGX", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOceanologyWaterParent, GGX), Z_Construct_UScriptStruct_FOceanologyGGX, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GGX_MetaData), NewProp_GGX_MetaData) }; // 4287862550
void Z_Construct_UClass_AOceanologyWaterParent_Statics::NewProp_UserOverrideMaterial_SetBit(void* Obj)
{
	((AOceanologyWaterParent*)Obj)->UserOverrideMaterial = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOceanologyWaterParent_Statics::NewProp_UserOverrideMaterial = { "UserOverrideMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AOceanologyWaterParent), &Z_Construct_UClass_AOceanologyWaterParent_Statics::NewProp_UserOverrideMaterial_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserOverrideMaterial_MetaData), NewProp_UserOverrideMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOceanologyWaterParent_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOceanologyWaterParent, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Material_MetaData), NewProp_Material_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOceanologyWaterParent_Statics::NewProp_MaterialFar = { "MaterialFar", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOceanologyWaterParent, MaterialFar), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialFar_MetaData), NewProp_MaterialFar_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOceanologyWaterParent_Statics::NewProp_WaterMID = { "WaterMID", nullptr, (EPropertyFlags)0x0144c00000022801, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOceanologyWaterParent, WaterMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaterMID_MetaData), NewProp_WaterMID_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOceanologyWaterParent_Statics::NewProp_WaterFarDistanceMID = { "WaterFarDistanceMID", nullptr, (EPropertyFlags)0x0144c00000022801, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOceanologyWaterParent, WaterFarDistanceMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaterFarDistanceMID_MetaData), NewProp_WaterFarDistanceMID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOceanologyWaterParent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanologyWaterParent_Statics::NewProp_DefaultSceneRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanologyWaterParent_Statics::NewProp_WaterMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanologyWaterParent_Statics::NewProp_UnderwaterBoxVolumeComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanologyWaterParent_Statics::NewProp_UnderwaterPostProcessComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanologyWaterParent_Statics::NewProp_UnderwaterComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanologyWaterParent_Statics::NewProp_VolumetricFogMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanologyWaterParent_Statics::NewProp_BubblesComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanologyWaterParent_Statics::NewProp_WaveSolverClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanologyWaterParent_Statics::NewProp_WaveSolver,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanologyWaterParent_Statics::NewProp_DebugEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanologyWaterParent_Statics::NewProp_SurfaceScattering,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanologyWaterParent_Statics::NewProp_Caustics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanologyWaterParent_Statics::NewProp_Refraction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanologyWaterParent_Statics::NewProp_HorizonCorrection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanologyWaterParent_Statics::NewProp_Flipbook,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanologyWaterParent_Statics::NewProp_Foam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanologyWaterParent_Statics::NewProp_Folding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanologyWaterParent_Statics::NewProp_Procedural,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanologyWaterParent_Statics::NewProp_RVT,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanologyWaterParent_Statics::NewProp_Mask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanologyWaterParent_Statics::NewProp_ActorHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanologyWaterParent_Statics::NewProp_GGX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanologyWaterParent_Statics::NewProp_UserOverrideMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanologyWaterParent_Statics::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanologyWaterParent_Statics::NewProp_MaterialFar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanologyWaterParent_Statics::NewProp_WaterMID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanologyWaterParent_Statics::NewProp_WaterFarDistanceMID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOceanologyWaterParent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AOceanologyWaterParent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Oceanology_Plugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOceanologyWaterParent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AOceanologyWaterParent_Statics::ClassParams = {
	&AOceanologyWaterParent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AOceanologyWaterParent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AOceanologyWaterParent_Statics::PropPointers),
	0,
	0x009000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOceanologyWaterParent_Statics::Class_MetaDataParams), Z_Construct_UClass_AOceanologyWaterParent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AOceanologyWaterParent()
{
	if (!Z_Registration_Info_UClass_AOceanologyWaterParent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOceanologyWaterParent.OuterSingleton, Z_Construct_UClass_AOceanologyWaterParent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AOceanologyWaterParent.OuterSingleton;
}
template<> OCEANOLOGY_PLUGIN_API UClass* StaticClass<AOceanologyWaterParent>()
{
	return AOceanologyWaterParent::StaticClass();
}
void AOceanologyWaterParent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_SurfaceScattering(TEXT("SurfaceScattering"));
	static const FName Name_Caustics(TEXT("Caustics"));
	static const FName Name_Refraction(TEXT("Refraction"));
	static const FName Name_HorizonCorrection(TEXT("HorizonCorrection"));
	static const FName Name_Flipbook(TEXT("Flipbook"));
	static const FName Name_Foam(TEXT("Foam"));
	static const FName Name_Folding(TEXT("Folding"));
	static const FName Name_Procedural(TEXT("Procedural"));
	static const FName Name_RVT(TEXT("RVT"));
	static const FName Name_Mask(TEXT("Mask"));
	static const FName Name_ActorHeight(TEXT("ActorHeight"));
	static const FName Name_GGX(TEXT("GGX"));
	const bool bIsValid = true
		&& Name_SurfaceScattering == ClassReps[(int32)ENetFields_Private::SurfaceScattering].Property->GetFName()
		&& Name_Caustics == ClassReps[(int32)ENetFields_Private::Caustics].Property->GetFName()
		&& Name_Refraction == ClassReps[(int32)ENetFields_Private::Refraction].Property->GetFName()
		&& Name_HorizonCorrection == ClassReps[(int32)ENetFields_Private::HorizonCorrection].Property->GetFName()
		&& Name_Flipbook == ClassReps[(int32)ENetFields_Private::Flipbook].Property->GetFName()
		&& Name_Foam == ClassReps[(int32)ENetFields_Private::Foam].Property->GetFName()
		&& Name_Folding == ClassReps[(int32)ENetFields_Private::Folding].Property->GetFName()
		&& Name_Procedural == ClassReps[(int32)ENetFields_Private::Procedural].Property->GetFName()
		&& Name_RVT == ClassReps[(int32)ENetFields_Private::RVT].Property->GetFName()
		&& Name_Mask == ClassReps[(int32)ENetFields_Private::Mask].Property->GetFName()
		&& Name_ActorHeight == ClassReps[(int32)ENetFields_Private::ActorHeight].Property->GetFName()
		&& Name_GGX == ClassReps[(int32)ENetFields_Private::GGX].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AOceanologyWaterParent"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AOceanologyWaterParent);
AOceanologyWaterParent::~AOceanologyWaterParent() {}
// End Class AOceanologyWaterParent

// Begin Registration
struct Z_CompiledInDeferFile_FID_BS_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Actors_OceanologyWaterParentActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AOceanologyWaterParent, AOceanologyWaterParent::StaticClass, TEXT("AOceanologyWaterParent"), &Z_Registration_Info_UClass_AOceanologyWaterParent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOceanologyWaterParent), 1847892418U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BS_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Actors_OceanologyWaterParentActor_h_2309289608(TEXT("/Script/Oceanology_Plugin"),
	Z_CompiledInDeferFile_FID_BS_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Actors_OceanologyWaterParentActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BS_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Actors_OceanologyWaterParentActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
