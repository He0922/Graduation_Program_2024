// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Oceanology_Plugin/Public/Components/Wave/OceanologyEmptyWaveSolverComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOceanologyEmptyWaveSolverComponent() {}

// Begin Cross Module References
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_UOceanologyEmptyWaveSolverComponent();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_UOceanologyEmptyWaveSolverComponent_NoRegister();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_UOceanologyWaveSolverComponent();
UPackage* Z_Construct_UPackage__Script_Oceanology_Plugin();
// End Cross Module References

// Begin Class UOceanologyEmptyWaveSolverComponent
void UOceanologyEmptyWaveSolverComponent::StaticRegisterNativesUOceanologyEmptyWaveSolverComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOceanologyEmptyWaveSolverComponent);
UClass* Z_Construct_UClass_UOceanologyEmptyWaveSolverComponent_NoRegister()
{
	return UOceanologyEmptyWaveSolverComponent::StaticClass();
}
struct Z_Construct_UClass_UOceanologyEmptyWaveSolverComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Object Activation Components|Activation Collision Lighting HLOD Navigation Replication Input MaterialParameters TextureStreaming Tags AssetUserData Cooking" },
		{ "IncludePath", "Components/Wave/OceanologyEmptyWaveSolverComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/Wave/OceanologyEmptyWaveSolverComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOceanologyEmptyWaveSolverComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOceanologyEmptyWaveSolverComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOceanologyWaveSolverComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Oceanology_Plugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOceanologyEmptyWaveSolverComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOceanologyEmptyWaveSolverComponent_Statics::ClassParams = {
	&UOceanologyEmptyWaveSolverComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOceanologyEmptyWaveSolverComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UOceanologyEmptyWaveSolverComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOceanologyEmptyWaveSolverComponent()
{
	if (!Z_Registration_Info_UClass_UOceanologyEmptyWaveSolverComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOceanologyEmptyWaveSolverComponent.OuterSingleton, Z_Construct_UClass_UOceanologyEmptyWaveSolverComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOceanologyEmptyWaveSolverComponent.OuterSingleton;
}
template<> OCEANOLOGY_PLUGIN_API UClass* StaticClass<UOceanologyEmptyWaveSolverComponent>()
{
	return UOceanologyEmptyWaveSolverComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOceanologyEmptyWaveSolverComponent);
UOceanologyEmptyWaveSolverComponent::~UOceanologyEmptyWaveSolverComponent() {}
// End Class UOceanologyEmptyWaveSolverComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_Wave_OceanologyEmptyWaveSolverComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOceanologyEmptyWaveSolverComponent, UOceanologyEmptyWaveSolverComponent::StaticClass, TEXT("UOceanologyEmptyWaveSolverComponent"), &Z_Registration_Info_UClass_UOceanologyEmptyWaveSolverComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOceanologyEmptyWaveSolverComponent), 411426025U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_Wave_OceanologyEmptyWaveSolverComponent_h_3094453646(TEXT("/Script/Oceanology_Plugin"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_Wave_OceanologyEmptyWaveSolverComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_Wave_OceanologyEmptyWaveSolverComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
