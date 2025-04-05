// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Oceanology_PluginEditor/Public/DataAsset/OceanologyOceanPresetFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOceanologyOceanPresetFactory() {}

// Begin Cross Module References
OCEANOLOGY_PLUGINEDITOR_API UClass* Z_Construct_UClass_UOceanologyOceanPresetFactory();
OCEANOLOGY_PLUGINEDITOR_API UClass* Z_Construct_UClass_UOceanologyOceanPresetFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_Oceanology_PluginEditor();
// End Cross Module References

// Begin Class UOceanologyOceanPresetFactory
void UOceanologyOceanPresetFactory::StaticRegisterNativesUOceanologyOceanPresetFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOceanologyOceanPresetFactory);
UClass* Z_Construct_UClass_UOceanologyOceanPresetFactory_NoRegister()
{
	return UOceanologyOceanPresetFactory::StaticClass();
}
struct Z_Construct_UClass_UOceanologyOceanPresetFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DataAsset/OceanologyOceanPresetFactory.h" },
		{ "ModuleRelativePath", "Public/DataAsset/OceanologyOceanPresetFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOceanologyOceanPresetFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOceanologyOceanPresetFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_Oceanology_PluginEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOceanologyOceanPresetFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOceanologyOceanPresetFactory_Statics::ClassParams = {
	&UOceanologyOceanPresetFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOceanologyOceanPresetFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UOceanologyOceanPresetFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOceanologyOceanPresetFactory()
{
	if (!Z_Registration_Info_UClass_UOceanologyOceanPresetFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOceanologyOceanPresetFactory.OuterSingleton, Z_Construct_UClass_UOceanologyOceanPresetFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOceanologyOceanPresetFactory.OuterSingleton;
}
template<> OCEANOLOGY_PLUGINEDITOR_API UClass* StaticClass<UOceanologyOceanPresetFactory>()
{
	return UOceanologyOceanPresetFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOceanologyOceanPresetFactory);
UOceanologyOceanPresetFactory::~UOceanologyOceanPresetFactory() {}
// End Class UOceanologyOceanPresetFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_PluginEditor_Public_DataAsset_OceanologyOceanPresetFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOceanologyOceanPresetFactory, UOceanologyOceanPresetFactory::StaticClass, TEXT("UOceanologyOceanPresetFactory"), &Z_Registration_Info_UClass_UOceanologyOceanPresetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOceanologyOceanPresetFactory), 1149280298U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_PluginEditor_Public_DataAsset_OceanologyOceanPresetFactory_h_3606275787(TEXT("/Script/Oceanology_PluginEditor"),
	Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_PluginEditor_Public_DataAsset_OceanologyOceanPresetFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_PluginEditor_Public_DataAsset_OceanologyOceanPresetFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
