// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shadersource_Waterfall2Runtime/Public/Components/ISH_WaterfallFxComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeISH_WaterfallFxComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
SHADERSOURCE_WATERFALL2RUNTIME_API UClass* Z_Construct_UClass_USH_WaterfallFxComponent();
SHADERSOURCE_WATERFALL2RUNTIME_API UClass* Z_Construct_UClass_USH_WaterfallFxComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Shadersource_Waterfall2Runtime();
// End Cross Module References

// Begin Interface USH_WaterfallFxComponent
void USH_WaterfallFxComponent::StaticRegisterNativesUSH_WaterfallFxComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USH_WaterfallFxComponent);
UClass* Z_Construct_UClass_USH_WaterfallFxComponent_NoRegister()
{
	return USH_WaterfallFxComponent::StaticClass();
}
struct Z_Construct_UClass_USH_WaterfallFxComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Components/ISH_WaterfallFxComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISH_WaterfallFxComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USH_WaterfallFxComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Shadersource_Waterfall2Runtime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USH_WaterfallFxComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USH_WaterfallFxComponent_Statics::ClassParams = {
	&USH_WaterfallFxComponent::StaticClass,
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
	0x001040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USH_WaterfallFxComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USH_WaterfallFxComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USH_WaterfallFxComponent()
{
	if (!Z_Registration_Info_UClass_USH_WaterfallFxComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USH_WaterfallFxComponent.OuterSingleton, Z_Construct_UClass_USH_WaterfallFxComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USH_WaterfallFxComponent.OuterSingleton;
}
template<> SHADERSOURCE_WATERFALL2RUNTIME_API UClass* StaticClass<USH_WaterfallFxComponent>()
{
	return USH_WaterfallFxComponent::StaticClass();
}
USH_WaterfallFxComponent::USH_WaterfallFxComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USH_WaterfallFxComponent);
USH_WaterfallFxComponent::~USH_WaterfallFxComponent() {}
// End Interface USH_WaterfallFxComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_SHADERSOURCEWT2_Source_Shadersource_Waterfall2Runtime_Public_Components_ISH_WaterfallFxComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USH_WaterfallFxComponent, USH_WaterfallFxComponent::StaticClass, TEXT("USH_WaterfallFxComponent"), &Z_Registration_Info_UClass_USH_WaterfallFxComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USH_WaterfallFxComponent), 1337201197U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_SHADERSOURCEWT2_Source_Shadersource_Waterfall2Runtime_Public_Components_ISH_WaterfallFxComponent_h_1441058265(TEXT("/Script/Shadersource_Waterfall2Runtime"),
	Z_CompiledInDeferFile_FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_SHADERSOURCEWT2_Source_Shadersource_Waterfall2Runtime_Public_Components_ISH_WaterfallFxComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_SHADERSOURCEWT2_Source_Shadersource_Waterfall2Runtime_Public_Components_ISH_WaterfallFxComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
