// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Oceanology_PluginEditor/Public/DataAsset/OceanologyLakePresetFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOceanologyLakePresetFactory() {}

// Begin Cross Module References
OCEANOLOGY_PLUGINEDITOR_API UClass* Z_Construct_UClass_UOceanologyLakePresetFactory();
OCEANOLOGY_PLUGINEDITOR_API UClass* Z_Construct_UClass_UOceanologyLakePresetFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_Oceanology_PluginEditor();
// End Cross Module References

// Begin Class UOceanologyLakePresetFactory
void UOceanologyLakePresetFactory::StaticRegisterNativesUOceanologyLakePresetFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOceanologyLakePresetFactory);
UClass* Z_Construct_UClass_UOceanologyLakePresetFactory_NoRegister()
{
	return UOceanologyLakePresetFactory::StaticClass();
}
struct Z_Construct_UClass_UOceanologyLakePresetFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DataAsset/OceanologyLakePresetFactory.h" },
		{ "ModuleRelativePath", "Public/DataAsset/OceanologyLakePresetFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOceanologyLakePresetFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOceanologyLakePresetFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_Oceanology_PluginEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOceanologyLakePresetFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOceanologyLakePresetFactory_Statics::ClassParams = {
	&UOceanologyLakePresetFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOceanologyLakePresetFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UOceanologyLakePresetFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOceanologyLakePresetFactory()
{
	if (!Z_Registration_Info_UClass_UOceanologyLakePresetFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOceanologyLakePresetFactory.OuterSingleton, Z_Construct_UClass_UOceanologyLakePresetFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOceanologyLakePresetFactory.OuterSingleton;
}
template<> OCEANOLOGY_PLUGINEDITOR_API UClass* StaticClass<UOceanologyLakePresetFactory>()
{
	return UOceanologyLakePresetFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOceanologyLakePresetFactory);
UOceanologyLakePresetFactory::~UOceanologyLakePresetFactory() {}
// End Class UOceanologyLakePresetFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_PluginEditor_Public_DataAsset_OceanologyLakePresetFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOceanologyLakePresetFactory, UOceanologyLakePresetFactory::StaticClass, TEXT("UOceanologyLakePresetFactory"), &Z_Registration_Info_UClass_UOceanologyLakePresetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOceanologyLakePresetFactory), 2395383837U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_PluginEditor_Public_DataAsset_OceanologyLakePresetFactory_h_2898741974(TEXT("/Script/Oceanology_PluginEditor"),
	Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_PluginEditor_Public_DataAsset_OceanologyLakePresetFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_PluginEditor_Public_DataAsset_OceanologyLakePresetFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
