// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Oceanology_Plugin/Public/Actors/OceanologyWaterNiagaraWavesVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOceanologyWaterNiagaraWavesVolume() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AVolume();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_AOceanologyWaterNiagaraWavesVolume();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_AOceanologyWaterNiagaraWavesVolume_NoRegister();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_AOceanologyWaterParent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Oceanology_Plugin();
// End Cross Module References

// Begin Class AOceanologyWaterNiagaraWavesVolume Function DebugBounds
struct Z_Construct_UFunction_AOceanologyWaterNiagaraWavesVolume_DebugBounds_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyWaterNiagaraWavesVolume.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOceanologyWaterNiagaraWavesVolume_DebugBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOceanologyWaterNiagaraWavesVolume, nullptr, "DebugBounds", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOceanologyWaterNiagaraWavesVolume_DebugBounds_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOceanologyWaterNiagaraWavesVolume_DebugBounds_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AOceanologyWaterNiagaraWavesVolume_DebugBounds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOceanologyWaterNiagaraWavesVolume_DebugBounds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOceanologyWaterNiagaraWavesVolume::execDebugBounds)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DebugBounds();
	P_NATIVE_END;
}
// End Class AOceanologyWaterNiagaraWavesVolume Function DebugBounds

// Begin Class AOceanologyWaterNiagaraWavesVolume Function ReloadSettings
struct Z_Construct_UFunction_AOceanologyWaterNiagaraWavesVolume_ReloadSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyWaterNiagaraWavesVolume.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOceanologyWaterNiagaraWavesVolume_ReloadSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOceanologyWaterNiagaraWavesVolume, nullptr, "ReloadSettings", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOceanologyWaterNiagaraWavesVolume_ReloadSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOceanologyWaterNiagaraWavesVolume_ReloadSettings_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AOceanologyWaterNiagaraWavesVolume_ReloadSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOceanologyWaterNiagaraWavesVolume_ReloadSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOceanologyWaterNiagaraWavesVolume::execReloadSettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReloadSettings();
	P_NATIVE_END;
}
// End Class AOceanologyWaterNiagaraWavesVolume Function ReloadSettings

// Begin Class AOceanologyWaterNiagaraWavesVolume
void AOceanologyWaterNiagaraWavesVolume::StaticRegisterNativesAOceanologyWaterNiagaraWavesVolume()
{
	UClass* Class = AOceanologyWaterNiagaraWavesVolume::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DebugBounds", &AOceanologyWaterNiagaraWavesVolume::execDebugBounds },
		{ "ReloadSettings", &AOceanologyWaterNiagaraWavesVolume::execReloadSettings },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOceanologyWaterNiagaraWavesVolume);
UClass* Z_Construct_UClass_AOceanologyWaterNiagaraWavesVolume_NoRegister()
{
	return AOceanologyWaterNiagaraWavesVolume::StaticClass();
}
struct Z_Construct_UClass_AOceanologyWaterNiagaraWavesVolume_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "Actors/OceanologyWaterNiagaraWavesVolume.h" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyWaterNiagaraWavesVolume.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraWavesComponent_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyWaterNiagaraWavesVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OceanologyWater_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The owner water of this water volume. Mandatory. Used to determine wave height. Physics & swimming logic's fundamental settings. */" },
#endif
		{ "ModuleRelativePath", "Public/Actors/OceanologyWaterNiagaraWavesVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The owner water of this water volume. Mandatory. Used to determine wave height. Physics & swimming logic's fundamental settings." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraWaves_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyWaterNiagaraWavesVolume.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraWavesComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OceanologyWater;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraWaves;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AOceanologyWaterNiagaraWavesVolume_DebugBounds, "DebugBounds" }, // 3780644570
		{ &Z_Construct_UFunction_AOceanologyWaterNiagaraWavesVolume_ReloadSettings, "ReloadSettings" }, // 3724554871
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOceanologyWaterNiagaraWavesVolume>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOceanologyWaterNiagaraWavesVolume_Statics::NewProp_NiagaraWavesComponent = { "NiagaraWavesComponent", nullptr, (EPropertyFlags)0x01140000000b000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOceanologyWaterNiagaraWavesVolume, NiagaraWavesComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NiagaraWavesComponent_MetaData), NewProp_NiagaraWavesComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOceanologyWaterNiagaraWavesVolume_Statics::NewProp_OceanologyWater = { "OceanologyWater", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOceanologyWaterNiagaraWavesVolume, OceanologyWater), Z_Construct_UClass_AOceanologyWaterParent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OceanologyWater_MetaData), NewProp_OceanologyWater_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOceanologyWaterNiagaraWavesVolume_Statics::NewProp_NiagaraWaves = { "NiagaraWaves", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOceanologyWaterNiagaraWavesVolume, NiagaraWaves), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NiagaraWaves_MetaData), NewProp_NiagaraWaves_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOceanologyWaterNiagaraWavesVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanologyWaterNiagaraWavesVolume_Statics::NewProp_NiagaraWavesComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanologyWaterNiagaraWavesVolume_Statics::NewProp_OceanologyWater,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanologyWaterNiagaraWavesVolume_Statics::NewProp_NiagaraWaves,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOceanologyWaterNiagaraWavesVolume_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AOceanologyWaterNiagaraWavesVolume_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AVolume,
	(UObject* (*)())Z_Construct_UPackage__Script_Oceanology_Plugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOceanologyWaterNiagaraWavesVolume_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AOceanologyWaterNiagaraWavesVolume_Statics::ClassParams = {
	&AOceanologyWaterNiagaraWavesVolume::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AOceanologyWaterNiagaraWavesVolume_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AOceanologyWaterNiagaraWavesVolume_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOceanologyWaterNiagaraWavesVolume_Statics::Class_MetaDataParams), Z_Construct_UClass_AOceanologyWaterNiagaraWavesVolume_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AOceanologyWaterNiagaraWavesVolume()
{
	if (!Z_Registration_Info_UClass_AOceanologyWaterNiagaraWavesVolume.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOceanologyWaterNiagaraWavesVolume.OuterSingleton, Z_Construct_UClass_AOceanologyWaterNiagaraWavesVolume_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AOceanologyWaterNiagaraWavesVolume.OuterSingleton;
}
template<> OCEANOLOGY_PLUGIN_API UClass* StaticClass<AOceanologyWaterNiagaraWavesVolume>()
{
	return AOceanologyWaterNiagaraWavesVolume::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AOceanologyWaterNiagaraWavesVolume);
AOceanologyWaterNiagaraWavesVolume::~AOceanologyWaterNiagaraWavesVolume() {}
// End Class AOceanologyWaterNiagaraWavesVolume

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEDocument_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Actors_OceanologyWaterNiagaraWavesVolume_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AOceanologyWaterNiagaraWavesVolume, AOceanologyWaterNiagaraWavesVolume::StaticClass, TEXT("AOceanologyWaterNiagaraWavesVolume"), &Z_Registration_Info_UClass_AOceanologyWaterNiagaraWavesVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOceanologyWaterNiagaraWavesVolume), 2240669242U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEDocument_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Actors_OceanologyWaterNiagaraWavesVolume_h_1984034002(TEXT("/Script/Oceanology_Plugin"),
	Z_CompiledInDeferFile_FID_UEDocument_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Actors_OceanologyWaterNiagaraWavesVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEDocument_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Actors_OceanologyWaterNiagaraWavesVolume_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
