// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Oceanology_Plugin/Public/Components/OceanologyInfiniteComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOceanologyInfiniteComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_UOceanologyInfiniteComponent();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_UOceanologyInfiniteComponent_NoRegister();
OCEANOLOGY_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanInfiniteLocationChanged__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_Oceanology_Plugin();
// End Cross Module References

// Begin Delegate FOceanInfiniteLocationChanged
struct Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanInfiniteLocationChanged__DelegateSignature_Statics
{
	struct _Script_Oceanology_Plugin_eventOceanInfiniteLocationChanged_Parms
	{
		FVector CameraLocation;
		FVector LastLocation;
		FVector NewParentLocation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/OceanologyInfiniteComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewParentLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanInfiniteLocationChanged__DelegateSignature_Statics::NewProp_CameraLocation = { "CameraLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Oceanology_Plugin_eventOceanInfiniteLocationChanged_Parms, CameraLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanInfiniteLocationChanged__DelegateSignature_Statics::NewProp_LastLocation = { "LastLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Oceanology_Plugin_eventOceanInfiniteLocationChanged_Parms, LastLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanInfiniteLocationChanged__DelegateSignature_Statics::NewProp_NewParentLocation = { "NewParentLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Oceanology_Plugin_eventOceanInfiniteLocationChanged_Parms, NewParentLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanInfiniteLocationChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanInfiniteLocationChanged__DelegateSignature_Statics::NewProp_CameraLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanInfiniteLocationChanged__DelegateSignature_Statics::NewProp_LastLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanInfiniteLocationChanged__DelegateSignature_Statics::NewProp_NewParentLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanInfiniteLocationChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanInfiniteLocationChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Oceanology_Plugin, nullptr, "OceanInfiniteLocationChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanInfiniteLocationChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanInfiniteLocationChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanInfiniteLocationChanged__DelegateSignature_Statics::_Script_Oceanology_Plugin_eventOceanInfiniteLocationChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanInfiniteLocationChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanInfiniteLocationChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanInfiniteLocationChanged__DelegateSignature_Statics::_Script_Oceanology_Plugin_eventOceanInfiniteLocationChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanInfiniteLocationChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanInfiniteLocationChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOceanInfiniteLocationChanged_DelegateWrapper(const FMulticastScriptDelegate& OceanInfiniteLocationChanged, FVector CameraLocation, FVector LastLocation, FVector NewParentLocation)
{
	struct _Script_Oceanology_Plugin_eventOceanInfiniteLocationChanged_Parms
	{
		FVector CameraLocation;
		FVector LastLocation;
		FVector NewParentLocation;
	};
	_Script_Oceanology_Plugin_eventOceanInfiniteLocationChanged_Parms Parms;
	Parms.CameraLocation=CameraLocation;
	Parms.LastLocation=LastLocation;
	Parms.NewParentLocation=NewParentLocation;
	OceanInfiniteLocationChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOceanInfiniteLocationChanged

// Begin Class UOceanologyInfiniteComponent Function Follow
struct Z_Construct_UFunction_UOceanologyInfiniteComponent_Follow_Statics
{
	struct OceanologyInfiniteComponent_eventFollow_Parms
	{
		bool ForceFollow;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/OceanologyInfiniteComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForceFollow_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_ForceFollow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ForceFollow;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOceanologyInfiniteComponent_Follow_Statics::NewProp_ForceFollow_SetBit(void* Obj)
{
	((OceanologyInfiniteComponent_eventFollow_Parms*)Obj)->ForceFollow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOceanologyInfiniteComponent_Follow_Statics::NewProp_ForceFollow = { "ForceFollow", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OceanologyInfiniteComponent_eventFollow_Parms), &Z_Construct_UFunction_UOceanologyInfiniteComponent_Follow_Statics::NewProp_ForceFollow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForceFollow_MetaData), NewProp_ForceFollow_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanologyInfiniteComponent_Follow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyInfiniteComponent_Follow_Statics::NewProp_ForceFollow,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyInfiniteComponent_Follow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologyInfiniteComponent_Follow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologyInfiniteComponent, nullptr, "Follow", nullptr, nullptr, Z_Construct_UFunction_UOceanologyInfiniteComponent_Follow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyInfiniteComponent_Follow_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOceanologyInfiniteComponent_Follow_Statics::OceanologyInfiniteComponent_eventFollow_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyInfiniteComponent_Follow_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologyInfiniteComponent_Follow_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOceanologyInfiniteComponent_Follow_Statics::OceanologyInfiniteComponent_eventFollow_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanologyInfiniteComponent_Follow()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologyInfiniteComponent_Follow_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologyInfiniteComponent::execFollow)
{
	P_GET_UBOOL(Z_Param_ForceFollow);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Follow(Z_Param_ForceFollow);
	P_NATIVE_END;
}
// End Class UOceanologyInfiniteComponent Function Follow

// Begin Class UOceanologyInfiniteComponent Function ForceFollow
struct Z_Construct_UFunction_UOceanologyInfiniteComponent_ForceFollow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Infinite" },
		{ "ModuleRelativePath", "Public/Components/OceanologyInfiniteComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Can be used to call a force follow on the actor when follow in editor is disabled." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologyInfiniteComponent_ForceFollow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologyInfiniteComponent, nullptr, "ForceFollow", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyInfiniteComponent_ForceFollow_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologyInfiniteComponent_ForceFollow_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UOceanologyInfiniteComponent_ForceFollow()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologyInfiniteComponent_ForceFollow_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologyInfiniteComponent::execForceFollow)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ForceFollow();
	P_NATIVE_END;
}
// End Class UOceanologyInfiniteComponent Function ForceFollow

// Begin Class UOceanologyInfiniteComponent Function Init
struct Z_Construct_UFunction_UOceanologyInfiniteComponent_Init_Statics
{
	struct OceanologyInfiniteComponent_eventInit_Parms
	{
		AActor* Actor;
		UWorld* InOrigin;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Infinite" },
		{ "ModuleRelativePath", "Public/Components/OceanologyInfiniteComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InOrigin;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOceanologyInfiniteComponent_Init_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyInfiniteComponent_eventInit_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOceanologyInfiniteComponent_Init_Statics::NewProp_InOrigin = { "InOrigin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyInfiniteComponent_eventInit_Parms, InOrigin), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanologyInfiniteComponent_Init_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyInfiniteComponent_Init_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyInfiniteComponent_Init_Statics::NewProp_InOrigin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyInfiniteComponent_Init_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologyInfiniteComponent_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologyInfiniteComponent, nullptr, "Init", nullptr, nullptr, Z_Construct_UFunction_UOceanologyInfiniteComponent_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyInfiniteComponent_Init_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOceanologyInfiniteComponent_Init_Statics::OceanologyInfiniteComponent_eventInit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyInfiniteComponent_Init_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologyInfiniteComponent_Init_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOceanologyInfiniteComponent_Init_Statics::OceanologyInfiniteComponent_eventInit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanologyInfiniteComponent_Init()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologyInfiniteComponent_Init_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologyInfiniteComponent::execInit)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_OBJECT(UWorld,Z_Param_InOrigin);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Init(Z_Param_Actor,Z_Param_InOrigin);
	P_NATIVE_END;
}
// End Class UOceanologyInfiniteComponent Function Init

// Begin Class UOceanologyInfiniteComponent Function InitDefaultOrigin
struct Z_Construct_UFunction_UOceanologyInfiniteComponent_InitDefaultOrigin_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Infinite" },
		{ "ModuleRelativePath", "Public/Components/OceanologyInfiniteComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologyInfiniteComponent_InitDefaultOrigin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologyInfiniteComponent, nullptr, "InitDefaultOrigin", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyInfiniteComponent_InitDefaultOrigin_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologyInfiniteComponent_InitDefaultOrigin_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UOceanologyInfiniteComponent_InitDefaultOrigin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologyInfiniteComponent_InitDefaultOrigin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologyInfiniteComponent::execInitDefaultOrigin)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitDefaultOrigin();
	P_NATIVE_END;
}
// End Class UOceanologyInfiniteComponent Function InitDefaultOrigin

// Begin Class UOceanologyInfiniteComponent Function SetOrigin
struct Z_Construct_UFunction_UOceanologyInfiniteComponent_SetOrigin_Statics
{
	struct OceanologyInfiniteComponent_eventSetOrigin_Parms
	{
		UWorld* InOrigin;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Infinite" },
		{ "ModuleRelativePath", "Public/Components/OceanologyInfiniteComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InOrigin;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOceanologyInfiniteComponent_SetOrigin_Statics::NewProp_InOrigin = { "InOrigin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyInfiniteComponent_eventSetOrigin_Parms, InOrigin), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanologyInfiniteComponent_SetOrigin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyInfiniteComponent_SetOrigin_Statics::NewProp_InOrigin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyInfiniteComponent_SetOrigin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologyInfiniteComponent_SetOrigin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologyInfiniteComponent, nullptr, "SetOrigin", nullptr, nullptr, Z_Construct_UFunction_UOceanologyInfiniteComponent_SetOrigin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyInfiniteComponent_SetOrigin_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOceanologyInfiniteComponent_SetOrigin_Statics::OceanologyInfiniteComponent_eventSetOrigin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyInfiniteComponent_SetOrigin_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologyInfiniteComponent_SetOrigin_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOceanologyInfiniteComponent_SetOrigin_Statics::OceanologyInfiniteComponent_eventSetOrigin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanologyInfiniteComponent_SetOrigin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologyInfiniteComponent_SetOrigin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologyInfiniteComponent::execSetOrigin)
{
	P_GET_OBJECT(UWorld,Z_Param_InOrigin);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOrigin(Z_Param_InOrigin);
	P_NATIVE_END;
}
// End Class UOceanologyInfiniteComponent Function SetOrigin

// Begin Class UOceanologyInfiniteComponent Function SetParentActor
struct Z_Construct_UFunction_UOceanologyInfiniteComponent_SetParentActor_Statics
{
	struct OceanologyInfiniteComponent_eventSetParentActor_Parms
	{
		AActor* Actor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Infinite" },
		{ "ModuleRelativePath", "Public/Components/OceanologyInfiniteComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOceanologyInfiniteComponent_SetParentActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyInfiniteComponent_eventSetParentActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanologyInfiniteComponent_SetParentActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyInfiniteComponent_SetParentActor_Statics::NewProp_Actor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyInfiniteComponent_SetParentActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologyInfiniteComponent_SetParentActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologyInfiniteComponent, nullptr, "SetParentActor", nullptr, nullptr, Z_Construct_UFunction_UOceanologyInfiniteComponent_SetParentActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyInfiniteComponent_SetParentActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOceanologyInfiniteComponent_SetParentActor_Statics::OceanologyInfiniteComponent_eventSetParentActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyInfiniteComponent_SetParentActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologyInfiniteComponent_SetParentActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOceanologyInfiniteComponent_SetParentActor_Statics::OceanologyInfiniteComponent_eventSetParentActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanologyInfiniteComponent_SetParentActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologyInfiniteComponent_SetParentActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologyInfiniteComponent::execSetParentActor)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetParentActor(Z_Param_Actor);
	P_NATIVE_END;
}
// End Class UOceanologyInfiniteComponent Function SetParentActor

// Begin Class UOceanologyInfiniteComponent
void UOceanologyInfiniteComponent::StaticRegisterNativesUOceanologyInfiniteComponent()
{
	UClass* Class = UOceanologyInfiniteComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Follow", &UOceanologyInfiniteComponent::execFollow },
		{ "ForceFollow", &UOceanologyInfiniteComponent::execForceFollow },
		{ "Init", &UOceanologyInfiniteComponent::execInit },
		{ "InitDefaultOrigin", &UOceanologyInfiniteComponent::execInitDefaultOrigin },
		{ "SetOrigin", &UOceanologyInfiniteComponent::execSetOrigin },
		{ "SetParentActor", &UOceanologyInfiniteComponent::execSetParentActor },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOceanologyInfiniteComponent);
UClass* Z_Construct_UClass_UOceanologyInfiniteComponent_NoRegister()
{
	return UOceanologyInfiniteComponent::StaticClass();
}
struct Z_Construct_UClass_UOceanologyInfiniteComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "AssetUserData Activation Tags Cooking" },
		{ "IncludePath", "Components/OceanologyInfiniteComponent.h" },
		{ "ModuleRelativePath", "Public/Components/OceanologyInfiniteComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableInfinity_MetaData[] = {
		{ "Category", "Infinite" },
		{ "ModuleRelativePath", "Public/Components/OceanologyInfiniteComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable/disable the Infinite follow system." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableInfinityInEditor_MetaData[] = {
		{ "Category", "Infinite" },
		{ "ModuleRelativePath", "Public/Components/OceanologyInfiniteComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable/disable the Infinite follow system in editor. Affects ONLY the editor!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableInfinityInGame_MetaData[] = {
		{ "Category", "Infinite" },
		{ "ModuleRelativePath", "Public/Components/OceanologyInfiniteComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable/disable the Infinite follow system in game. Affects ONLY the game after BeginPlay!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowUpdateInterval_MetaData[] = {
		{ "Category", "Infinite" },
		{ "ModuleRelativePath", "Public/Components/OceanologyInfiniteComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Value 0 means real-time update checking (not real-time relocation!). Increasing the value provides better performance via delayed updates. This affects how often the Event Tick checks for follow requests." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeJump_MetaData[] = {
		{ "Category", "Infinite" },
		{ "ModuleRelativePath", "Public/Components/OceanologyInfiniteComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This controls the distance based on GridJump when the follow request happens. 0 = real-time relocation IF FollowUpdateInterval is = 0 as well." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableDebug_MetaData[] = {
		{ "Category", "Infinite|Debug" },
		{ "ModuleRelativePath", "Public/Components/OceanologyInfiniteComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable/disable debug messages of the infinite component." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnInfiniteLocationChanged_MetaData[] = {
		{ "Category", "Infinite" },
		{ "ModuleRelativePath", "Public/Components/OceanologyInfiniteComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/OceanologyInfiniteComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/OceanologyInfiniteComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/OceanologyInfiniteComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_EnableInfinity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableInfinity;
	static void NewProp_EnableInfinityInEditor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableInfinityInEditor;
	static void NewProp_EnableInfinityInGame_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableInfinityInGame;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FollowUpdateInterval;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeJump;
	static void NewProp_EnableDebug_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableDebug;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInfiniteLocationChanged;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Origin;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOceanologyInfiniteComponent_Follow, "Follow" }, // 3944292482
		{ &Z_Construct_UFunction_UOceanologyInfiniteComponent_ForceFollow, "ForceFollow" }, // 2916027632
		{ &Z_Construct_UFunction_UOceanologyInfiniteComponent_Init, "Init" }, // 1832706839
		{ &Z_Construct_UFunction_UOceanologyInfiniteComponent_InitDefaultOrigin, "InitDefaultOrigin" }, // 2188614554
		{ &Z_Construct_UFunction_UOceanologyInfiniteComponent_SetOrigin, "SetOrigin" }, // 3564809616
		{ &Z_Construct_UFunction_UOceanologyInfiniteComponent_SetParentActor, "SetParentActor" }, // 94037333
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOceanologyInfiniteComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UOceanologyInfiniteComponent_Statics::NewProp_EnableInfinity_SetBit(void* Obj)
{
	((UOceanologyInfiniteComponent*)Obj)->EnableInfinity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOceanologyInfiniteComponent_Statics::NewProp_EnableInfinity = { "EnableInfinity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOceanologyInfiniteComponent), &Z_Construct_UClass_UOceanologyInfiniteComponent_Statics::NewProp_EnableInfinity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableInfinity_MetaData), NewProp_EnableInfinity_MetaData) };
void Z_Construct_UClass_UOceanologyInfiniteComponent_Statics::NewProp_EnableInfinityInEditor_SetBit(void* Obj)
{
	((UOceanologyInfiniteComponent*)Obj)->EnableInfinityInEditor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOceanologyInfiniteComponent_Statics::NewProp_EnableInfinityInEditor = { "EnableInfinityInEditor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOceanologyInfiniteComponent), &Z_Construct_UClass_UOceanologyInfiniteComponent_Statics::NewProp_EnableInfinityInEditor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableInfinityInEditor_MetaData), NewProp_EnableInfinityInEditor_MetaData) };
void Z_Construct_UClass_UOceanologyInfiniteComponent_Statics::NewProp_EnableInfinityInGame_SetBit(void* Obj)
{
	((UOceanologyInfiniteComponent*)Obj)->EnableInfinityInGame = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOceanologyInfiniteComponent_Statics::NewProp_EnableInfinityInGame = { "EnableInfinityInGame", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOceanologyInfiniteComponent), &Z_Construct_UClass_UOceanologyInfiniteComponent_Statics::NewProp_EnableInfinityInGame_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableInfinityInGame_MetaData), NewProp_EnableInfinityInGame_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOceanologyInfiniteComponent_Statics::NewProp_FollowUpdateInterval = { "FollowUpdateInterval", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyInfiniteComponent, FollowUpdateInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowUpdateInterval_MetaData), NewProp_FollowUpdateInterval_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOceanologyInfiniteComponent_Statics::NewProp_TimeJump = { "TimeJump", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyInfiniteComponent, TimeJump), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeJump_MetaData), NewProp_TimeJump_MetaData) };
void Z_Construct_UClass_UOceanologyInfiniteComponent_Statics::NewProp_EnableDebug_SetBit(void* Obj)
{
	((UOceanologyInfiniteComponent*)Obj)->EnableDebug = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOceanologyInfiniteComponent_Statics::NewProp_EnableDebug = { "EnableDebug", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOceanologyInfiniteComponent), &Z_Construct_UClass_UOceanologyInfiniteComponent_Statics::NewProp_EnableDebug_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableDebug_MetaData), NewProp_EnableDebug_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOceanologyInfiniteComponent_Statics::NewProp_OnInfiniteLocationChanged = { "OnInfiniteLocationChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyInfiniteComponent, OnInfiniteLocationChanged), Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanInfiniteLocationChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnInfiniteLocationChanged_MetaData), NewProp_OnInfiniteLocationChanged_MetaData) }; // 2449685895
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOceanologyInfiniteComponent_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyInfiniteComponent, Origin), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Origin_MetaData), NewProp_Origin_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOceanologyInfiniteComponent_Statics::NewProp_ParentActor = { "ParentActor", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyInfiniteComponent, ParentActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentActor_MetaData), NewProp_ParentActor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOceanologyInfiniteComponent_Statics::NewProp_LastLocation = { "LastLocation", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyInfiniteComponent, LastLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastLocation_MetaData), NewProp_LastLocation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOceanologyInfiniteComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyInfiniteComponent_Statics::NewProp_EnableInfinity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyInfiniteComponent_Statics::NewProp_EnableInfinityInEditor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyInfiniteComponent_Statics::NewProp_EnableInfinityInGame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyInfiniteComponent_Statics::NewProp_FollowUpdateInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyInfiniteComponent_Statics::NewProp_TimeJump,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyInfiniteComponent_Statics::NewProp_EnableDebug,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyInfiniteComponent_Statics::NewProp_OnInfiniteLocationChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyInfiniteComponent_Statics::NewProp_Origin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyInfiniteComponent_Statics::NewProp_ParentActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyInfiniteComponent_Statics::NewProp_LastLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOceanologyInfiniteComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOceanologyInfiniteComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Oceanology_Plugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOceanologyInfiniteComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOceanologyInfiniteComponent_Statics::ClassParams = {
	&UOceanologyInfiniteComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOceanologyInfiniteComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOceanologyInfiniteComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOceanologyInfiniteComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UOceanologyInfiniteComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOceanologyInfiniteComponent()
{
	if (!Z_Registration_Info_UClass_UOceanologyInfiniteComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOceanologyInfiniteComponent.OuterSingleton, Z_Construct_UClass_UOceanologyInfiniteComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOceanologyInfiniteComponent.OuterSingleton;
}
template<> OCEANOLOGY_PLUGIN_API UClass* StaticClass<UOceanologyInfiniteComponent>()
{
	return UOceanologyInfiniteComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOceanologyInfiniteComponent);
UOceanologyInfiniteComponent::~UOceanologyInfiniteComponent() {}
// End Class UOceanologyInfiniteComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Programes_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_OceanologyInfiniteComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOceanologyInfiniteComponent, UOceanologyInfiniteComponent::StaticClass, TEXT("UOceanologyInfiniteComponent"), &Z_Registration_Info_UClass_UOceanologyInfiniteComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOceanologyInfiniteComponent), 996692349U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Programes_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_OceanologyInfiniteComponent_h_2386206599(TEXT("/Script/Oceanology_Plugin"),
	Z_CompiledInDeferFile_FID_Programes_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_OceanologyInfiniteComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Programes_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_OceanologyInfiniteComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
