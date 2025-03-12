// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Oceanology_Plugin/Public/Actors/OceanologyInfiniteOceanActor.h"
#include "Oceanology_Plugin/Public/Structs/OceanologyOceanQuadTreeSettings.h"
#include "Oceanology_Plugin/Public/Structs/OceanologyWetness.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOceanologyInfiniteOceanActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDecalComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_AOceanologyInfiniteOcean();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_AOceanologyInfiniteOcean_NoRegister();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_AOceanologyWaterParent();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_UOceanAudioComponent_NoRegister();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_UOceanologyInfiniteComponent_NoRegister();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_UOceanologyOceanPreset_NoRegister();
OCEANOLOGY_PLUGIN_API UEnum* Z_Construct_UEnum_Oceanology_Plugin_EOceanologyWaterPresetMode();
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyOceanQuadTreeSettings();
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyWetness();
UPackage* Z_Construct_UPackage__Script_Oceanology_Plugin();
// End Cross Module References

// Begin Class AOceanologyInfiniteOcean Function CreateOrUpdateShorelineWetnessMID
struct Z_Construct_UFunction_AOceanologyInfiniteOcean_CreateOrUpdateShorelineWetnessMID_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Material Instance Dynamic" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyInfiniteOceanActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOceanologyInfiniteOcean_CreateOrUpdateShorelineWetnessMID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOceanologyInfiniteOcean, nullptr, "CreateOrUpdateShorelineWetnessMID", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOceanologyInfiniteOcean_CreateOrUpdateShorelineWetnessMID_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOceanologyInfiniteOcean_CreateOrUpdateShorelineWetnessMID_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AOceanologyInfiniteOcean_CreateOrUpdateShorelineWetnessMID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOceanologyInfiniteOcean_CreateOrUpdateShorelineWetnessMID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOceanologyInfiniteOcean::execCreateOrUpdateShorelineWetnessMID)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateOrUpdateShorelineWetnessMID();
	P_NATIVE_END;
}
// End Class AOceanologyInfiniteOcean Function CreateOrUpdateShorelineWetnessMID

// Begin Class AOceanologyInfiniteOcean Function ForceFollow
struct Z_Construct_UFunction_AOceanologyInfiniteOcean_ForceFollow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Infinite" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyInfiniteOceanActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Can be used to call a force follow on the actor when follow in editor is disabled." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOceanologyInfiniteOcean_ForceFollow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOceanologyInfiniteOcean, nullptr, "ForceFollow", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOceanologyInfiniteOcean_ForceFollow_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOceanologyInfiniteOcean_ForceFollow_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AOceanologyInfiniteOcean_ForceFollow()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOceanologyInfiniteOcean_ForceFollow_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOceanologyInfiniteOcean::execForceFollow)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ForceFollow();
	P_NATIVE_END;
}
// End Class AOceanologyInfiniteOcean Function ForceFollow

// Begin Class AOceanologyInfiniteOcean Function GetShorelineWetnessMID
struct Z_Construct_UFunction_AOceanologyInfiniteOcean_GetShorelineWetnessMID_Statics
{
	struct OceanologyInfiniteOcean_eventGetShorelineWetnessMID_Parms
	{
		UMaterialInstanceDynamic* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Material Instance Dynamic" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyInfiniteOceanActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOceanologyInfiniteOcean_GetShorelineWetnessMID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyInfiniteOcean_eventGetShorelineWetnessMID_Parms, ReturnValue), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOceanologyInfiniteOcean_GetShorelineWetnessMID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOceanologyInfiniteOcean_GetShorelineWetnessMID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOceanologyInfiniteOcean_GetShorelineWetnessMID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOceanologyInfiniteOcean_GetShorelineWetnessMID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOceanologyInfiniteOcean, nullptr, "GetShorelineWetnessMID", nullptr, nullptr, Z_Construct_UFunction_AOceanologyInfiniteOcean_GetShorelineWetnessMID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOceanologyInfiniteOcean_GetShorelineWetnessMID_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOceanologyInfiniteOcean_GetShorelineWetnessMID_Statics::OceanologyInfiniteOcean_eventGetShorelineWetnessMID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOceanologyInfiniteOcean_GetShorelineWetnessMID_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOceanologyInfiniteOcean_GetShorelineWetnessMID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOceanologyInfiniteOcean_GetShorelineWetnessMID_Statics::OceanologyInfiniteOcean_eventGetShorelineWetnessMID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOceanologyInfiniteOcean_GetShorelineWetnessMID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOceanologyInfiniteOcean_GetShorelineWetnessMID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOceanologyInfiniteOcean::execGetShorelineWetnessMID)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMaterialInstanceDynamic**)Z_Param__Result=P_THIS->GetShorelineWetnessMID();
	P_NATIVE_END;
}
// End Class AOceanologyInfiniteOcean Function GetShorelineWetnessMID

// Begin Class AOceanologyInfiniteOcean Function InitShorelineWetness
struct Z_Construct_UFunction_AOceanologyInfiniteOcean_InitShorelineWetness_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ocean" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyInfiniteOceanActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOceanologyInfiniteOcean_InitShorelineWetness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOceanologyInfiniteOcean, nullptr, "InitShorelineWetness", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOceanologyInfiniteOcean_InitShorelineWetness_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOceanologyInfiniteOcean_InitShorelineWetness_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AOceanologyInfiniteOcean_InitShorelineWetness()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOceanologyInfiniteOcean_InitShorelineWetness_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOceanologyInfiniteOcean::execInitShorelineWetness)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitShorelineWetness();
	P_NATIVE_END;
}
// End Class AOceanologyInfiniteOcean Function InitShorelineWetness

// Begin Class AOceanologyInfiniteOcean Function LoadPreset
struct Z_Construct_UFunction_AOceanologyInfiniteOcean_LoadPreset_Statics
{
	struct OceanologyInfiniteOcean_eventLoadPreset_Parms
	{
		UOceanologyOceanPreset* InPreset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ocean" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyInfiniteOceanActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InPreset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOceanologyInfiniteOcean_LoadPreset_Statics::NewProp_InPreset = { "InPreset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyInfiniteOcean_eventLoadPreset_Parms, InPreset), Z_Construct_UClass_UOceanologyOceanPreset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOceanologyInfiniteOcean_LoadPreset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOceanologyInfiniteOcean_LoadPreset_Statics::NewProp_InPreset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOceanologyInfiniteOcean_LoadPreset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOceanologyInfiniteOcean_LoadPreset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOceanologyInfiniteOcean, nullptr, "LoadPreset", nullptr, nullptr, Z_Construct_UFunction_AOceanologyInfiniteOcean_LoadPreset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOceanologyInfiniteOcean_LoadPreset_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOceanologyInfiniteOcean_LoadPreset_Statics::OceanologyInfiniteOcean_eventLoadPreset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOceanologyInfiniteOcean_LoadPreset_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOceanologyInfiniteOcean_LoadPreset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOceanologyInfiniteOcean_LoadPreset_Statics::OceanologyInfiniteOcean_eventLoadPreset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOceanologyInfiniteOcean_LoadPreset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOceanologyInfiniteOcean_LoadPreset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOceanologyInfiniteOcean::execLoadPreset)
{
	P_GET_OBJECT(UOceanologyOceanPreset,Z_Param_InPreset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadPreset(Z_Param_InPreset);
	P_NATIVE_END;
}
// End Class AOceanologyInfiniteOcean Function LoadPreset

// Begin Class AOceanologyInfiniteOcean
void AOceanologyInfiniteOcean::StaticRegisterNativesAOceanologyInfiniteOcean()
{
	UClass* Class = AOceanologyInfiniteOcean::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateOrUpdateShorelineWetnessMID", &AOceanologyInfiniteOcean::execCreateOrUpdateShorelineWetnessMID },
		{ "ForceFollow", &AOceanologyInfiniteOcean::execForceFollow },
		{ "GetShorelineWetnessMID", &AOceanologyInfiniteOcean::execGetShorelineWetnessMID },
		{ "InitShorelineWetness", &AOceanologyInfiniteOcean::execInitShorelineWetness },
		{ "LoadPreset", &AOceanologyInfiniteOcean::execLoadPreset },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOceanologyInfiniteOcean);
UClass* Z_Construct_UClass_AOceanologyInfiniteOcean_NoRegister()
{
	return AOceanologyInfiniteOcean::StaticClass();
}
struct Z_Construct_UClass_AOceanologyInfiniteOcean_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Actors/OceanologyInfiniteOceanActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyInfiniteOceanActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InfiniteComponent_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyInfiniteOceanActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DLWetnessComponent_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyInfiniteOceanActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OceanAudioUnderwaterComponent_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyInfiniteOceanActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuadTreeSettings_MetaData[] = {
		{ "Category", "QuadTree" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyInfiniteOceanActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Preset_MetaData[] = {
		{ "Category", "Preset" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyInfiniteOceanActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PresetMode_MetaData[] = {
		{ "Category", "Preset" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyInfiniteOceanActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PresetInclusionGroups_MetaData[] = {
		{ "Category", "Preset" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyInfiniteOceanActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableWetness_MetaData[] = {
		{ "Category", "Shoreline Wetness" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyInfiniteOceanActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Wetness_MetaData[] = {
		{ "Category", "Shoreline Wetness" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyInfiniteOceanActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShorelineWetnessMaterial_MetaData[] = {
		{ "Category", "Shoreline Wetness" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyInfiniteOceanActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShorelineWetnessMID_MetaData[] = {
		{ "Category", "Material Instance Dynamic" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyInfiniteOceanActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InfiniteComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DLWetnessComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OceanAudioUnderwaterComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_QuadTreeSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Preset;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PresetMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PresetMode;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PresetInclusionGroups_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PresetInclusionGroups;
	static void NewProp_EnableWetness_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableWetness;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Wetness;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ShorelineWetnessMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ShorelineWetnessMID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AOceanologyInfiniteOcean_CreateOrUpdateShorelineWetnessMID, "CreateOrUpdateShorelineWetnessMID" }, // 4198152009
		{ &Z_Construct_UFunction_AOceanologyInfiniteOcean_ForceFollow, "ForceFollow" }, // 2312279537
		{ &Z_Construct_UFunction_AOceanologyInfiniteOcean_GetShorelineWetnessMID, "GetShorelineWetnessMID" }, // 985715229
		{ &Z_Construct_UFunction_AOceanologyInfiniteOcean_InitShorelineWetness, "InitShorelineWetness" }, // 3934883295
		{ &Z_Construct_UFunction_AOceanologyInfiniteOcean_LoadPreset, "LoadPreset" }, // 741391174
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOceanologyInfiniteOcean>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOceanologyInfiniteOcean_Statics::NewProp_InfiniteComponent = { "InfiniteComponent", nullptr, (EPropertyFlags)0x01140000000a000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOceanologyInfiniteOcean, InfiniteComponent), Z_Construct_UClass_UOceanologyInfiniteComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InfiniteComponent_MetaData), NewProp_InfiniteComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOceanologyInfiniteOcean_Statics::NewProp_DLWetnessComponent = { "DLWetnessComponent", nullptr, (EPropertyFlags)0x01140000000b000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOceanologyInfiniteOcean, DLWetnessComponent), Z_Construct_UClass_UDecalComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DLWetnessComponent_MetaData), NewProp_DLWetnessComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOceanologyInfiniteOcean_Statics::NewProp_OceanAudioUnderwaterComponent = { "OceanAudioUnderwaterComponent", nullptr, (EPropertyFlags)0x01140000000b000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOceanologyInfiniteOcean, OceanAudioUnderwaterComponent), Z_Construct_UClass_UOceanAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OceanAudioUnderwaterComponent_MetaData), NewProp_OceanAudioUnderwaterComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOceanologyInfiniteOcean_Statics::NewProp_QuadTreeSettings = { "QuadTreeSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOceanologyInfiniteOcean, QuadTreeSettings), Z_Construct_UScriptStruct_FOceanologyOceanQuadTreeSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuadTreeSettings_MetaData), NewProp_QuadTreeSettings_MetaData) }; // 1167048829
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOceanologyInfiniteOcean_Statics::NewProp_Preset = { "Preset", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOceanologyInfiniteOcean, Preset), Z_Construct_UClass_UOceanologyOceanPreset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Preset_MetaData), NewProp_Preset_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AOceanologyInfiniteOcean_Statics::NewProp_PresetMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AOceanologyInfiniteOcean_Statics::NewProp_PresetMode = { "PresetMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOceanologyInfiniteOcean, PresetMode), Z_Construct_UEnum_Oceanology_Plugin_EOceanologyWaterPresetMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PresetMode_MetaData), NewProp_PresetMode_MetaData) }; // 718401376
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AOceanologyInfiniteOcean_Statics::NewProp_PresetInclusionGroups_Inner = { "PresetInclusionGroups", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AOceanologyInfiniteOcean_Statics::NewProp_PresetInclusionGroups = { "PresetInclusionGroups", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOceanologyInfiniteOcean, PresetInclusionGroups), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PresetInclusionGroups_MetaData), NewProp_PresetInclusionGroups_MetaData) };
void Z_Construct_UClass_AOceanologyInfiniteOcean_Statics::NewProp_EnableWetness_SetBit(void* Obj)
{
	((AOceanologyInfiniteOcean*)Obj)->EnableWetness = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOceanologyInfiniteOcean_Statics::NewProp_EnableWetness = { "EnableWetness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AOceanologyInfiniteOcean), &Z_Construct_UClass_AOceanologyInfiniteOcean_Statics::NewProp_EnableWetness_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableWetness_MetaData), NewProp_EnableWetness_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOceanologyInfiniteOcean_Statics::NewProp_Wetness = { "Wetness", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOceanologyInfiniteOcean, Wetness), Z_Construct_UScriptStruct_FOceanologyWetness, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Wetness_MetaData), NewProp_Wetness_MetaData) }; // 2569763290
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOceanologyInfiniteOcean_Statics::NewProp_ShorelineWetnessMaterial = { "ShorelineWetnessMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOceanologyInfiniteOcean, ShorelineWetnessMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShorelineWetnessMaterial_MetaData), NewProp_ShorelineWetnessMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOceanologyInfiniteOcean_Statics::NewProp_ShorelineWetnessMID = { "ShorelineWetnessMID", nullptr, (EPropertyFlags)0x0040c00000022801, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOceanologyInfiniteOcean, ShorelineWetnessMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShorelineWetnessMID_MetaData), NewProp_ShorelineWetnessMID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOceanologyInfiniteOcean_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanologyInfiniteOcean_Statics::NewProp_InfiniteComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanologyInfiniteOcean_Statics::NewProp_DLWetnessComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanologyInfiniteOcean_Statics::NewProp_OceanAudioUnderwaterComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanologyInfiniteOcean_Statics::NewProp_QuadTreeSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanologyInfiniteOcean_Statics::NewProp_Preset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanologyInfiniteOcean_Statics::NewProp_PresetMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanologyInfiniteOcean_Statics::NewProp_PresetMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanologyInfiniteOcean_Statics::NewProp_PresetInclusionGroups_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanologyInfiniteOcean_Statics::NewProp_PresetInclusionGroups,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanologyInfiniteOcean_Statics::NewProp_EnableWetness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanologyInfiniteOcean_Statics::NewProp_Wetness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanologyInfiniteOcean_Statics::NewProp_ShorelineWetnessMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanologyInfiniteOcean_Statics::NewProp_ShorelineWetnessMID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOceanologyInfiniteOcean_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AOceanologyInfiniteOcean_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AOceanologyWaterParent,
	(UObject* (*)())Z_Construct_UPackage__Script_Oceanology_Plugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOceanologyInfiniteOcean_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AOceanologyInfiniteOcean_Statics::ClassParams = {
	&AOceanologyInfiniteOcean::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AOceanologyInfiniteOcean_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AOceanologyInfiniteOcean_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOceanologyInfiniteOcean_Statics::Class_MetaDataParams), Z_Construct_UClass_AOceanologyInfiniteOcean_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AOceanologyInfiniteOcean()
{
	if (!Z_Registration_Info_UClass_AOceanologyInfiniteOcean.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOceanologyInfiniteOcean.OuterSingleton, Z_Construct_UClass_AOceanologyInfiniteOcean_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AOceanologyInfiniteOcean.OuterSingleton;
}
template<> OCEANOLOGY_PLUGIN_API UClass* StaticClass<AOceanologyInfiniteOcean>()
{
	return AOceanologyInfiniteOcean::StaticClass();
}
void AOceanologyInfiniteOcean::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_Wetness(TEXT("Wetness"));
	const bool bIsValid = true
		&& Name_Wetness == ClassReps[(int32)ENetFields_Private::Wetness].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AOceanologyInfiniteOcean"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AOceanologyInfiniteOcean);
AOceanologyInfiniteOcean::~AOceanologyInfiniteOcean() {}
// End Class AOceanologyInfiniteOcean

// Begin Registration
struct Z_CompiledInDeferFile_FID_Programes_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Actors_OceanologyInfiniteOceanActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AOceanologyInfiniteOcean, AOceanologyInfiniteOcean::StaticClass, TEXT("AOceanologyInfiniteOcean"), &Z_Registration_Info_UClass_AOceanologyInfiniteOcean, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOceanologyInfiniteOcean), 2745954556U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Programes_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Actors_OceanologyInfiniteOceanActor_h_3116418371(TEXT("/Script/Oceanology_Plugin"),
	Z_CompiledInDeferFile_FID_Programes_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Actors_OceanologyInfiniteOceanActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Programes_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Actors_OceanologyInfiniteOceanActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
