// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shadersource_Waterfall2EdMode/Public/EdMode/SH_Settings_WaterfallSelection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSH_Settings_WaterfallSelection() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
SHADERSOURCE_WATERFALL2EDMODE_API UClass* Z_Construct_UClass_USH_Settings_WaterfallSelection();
SHADERSOURCE_WATERFALL2EDMODE_API UClass* Z_Construct_UClass_USH_Settings_WaterfallSelection_NoRegister();
UPackage* Z_Construct_UPackage__Script_Shadersource_Waterfall2EdMode();
// End Cross Module References

// Begin Class USH_Settings_WaterfallSelection
void USH_Settings_WaterfallSelection::StaticRegisterNativesUSH_Settings_WaterfallSelection()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USH_Settings_WaterfallSelection);
UClass* Z_Construct_UClass_USH_Settings_WaterfallSelection_NoRegister()
{
	return USH_Settings_WaterfallSelection::StaticClass();
}
struct Z_Construct_UClass_USH_Settings_WaterfallSelection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* The settings object to display when no waterfall actors are selected. */" },
#endif
		{ "IncludePath", "EdMode/SH_Settings_WaterfallSelection.h" },
		{ "ModuleRelativePath", "Public/EdMode/SH_Settings_WaterfallSelection.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The settings object to display when no waterfall actors are selected." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USH_Settings_WaterfallSelection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USH_Settings_WaterfallSelection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Shadersource_Waterfall2EdMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USH_Settings_WaterfallSelection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USH_Settings_WaterfallSelection_Statics::ClassParams = {
	&USH_Settings_WaterfallSelection::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USH_Settings_WaterfallSelection_Statics::Class_MetaDataParams), Z_Construct_UClass_USH_Settings_WaterfallSelection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USH_Settings_WaterfallSelection()
{
	if (!Z_Registration_Info_UClass_USH_Settings_WaterfallSelection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USH_Settings_WaterfallSelection.OuterSingleton, Z_Construct_UClass_USH_Settings_WaterfallSelection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USH_Settings_WaterfallSelection.OuterSingleton;
}
template<> SHADERSOURCE_WATERFALL2EDMODE_API UClass* StaticClass<USH_Settings_WaterfallSelection>()
{
	return USH_Settings_WaterfallSelection::StaticClass();
}
USH_Settings_WaterfallSelection::USH_Settings_WaterfallSelection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USH_Settings_WaterfallSelection);
USH_Settings_WaterfallSelection::~USH_Settings_WaterfallSelection() {}
// End Class USH_Settings_WaterfallSelection

// Begin Registration
struct Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_SHADERSOURCEWT2_Source_Shadersource_Waterfall2EdMode_Public_EdMode_SH_Settings_WaterfallSelection_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USH_Settings_WaterfallSelection, USH_Settings_WaterfallSelection::StaticClass, TEXT("USH_Settings_WaterfallSelection"), &Z_Registration_Info_UClass_USH_Settings_WaterfallSelection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USH_Settings_WaterfallSelection), 3956981700U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_SHADERSOURCEWT2_Source_Shadersource_Waterfall2EdMode_Public_EdMode_SH_Settings_WaterfallSelection_h_2193632216(TEXT("/Script/Shadersource_Waterfall2EdMode"),
	Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_SHADERSOURCEWT2_Source_Shadersource_Waterfall2EdMode_Public_EdMode_SH_Settings_WaterfallSelection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_SHADERSOURCEWT2_Source_Shadersource_Waterfall2EdMode_Public_EdMode_SH_Settings_WaterfallSelection_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
