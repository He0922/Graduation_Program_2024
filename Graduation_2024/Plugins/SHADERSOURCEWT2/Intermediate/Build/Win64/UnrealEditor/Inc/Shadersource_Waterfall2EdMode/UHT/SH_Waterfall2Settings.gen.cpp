// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shadersource_Waterfall2EdMode/Public/Settings/SH_Waterfall2Settings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSH_Waterfall2Settings() {}

// Begin Cross Module References
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
SHADERSOURCE_WATERFALL2EDMODE_API UClass* Z_Construct_UClass_USH_Waterfall2Settings();
SHADERSOURCE_WATERFALL2EDMODE_API UClass* Z_Construct_UClass_USH_Waterfall2Settings_NoRegister();
UPackage* Z_Construct_UPackage__Script_Shadersource_Waterfall2EdMode();
// End Cross Module References

// Begin Class USH_Waterfall2Settings
void USH_Waterfall2Settings::StaticRegisterNativesUSH_Waterfall2Settings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USH_Waterfall2Settings);
UClass* Z_Construct_UClass_USH_Waterfall2Settings_NoRegister()
{
	return USH_Waterfall2Settings::StaticClass();
}
struct Z_Construct_UClass_USH_Waterfall2Settings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Waterfall Tool 2 settings for display in Project Settings. */" },
#endif
		{ "DisplayName", "SHADERSOURCE: Waterfall Tool 2 Settings" },
		{ "IncludePath", "Settings/SH_Waterfall2Settings.h" },
		{ "ModuleRelativePath", "Public/Settings/SH_Waterfall2Settings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Waterfall Tool 2 settings for display in Project Settings." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoFocusWaterfallOnSelection_MetaData[] = {
		{ "Category", "Selection" },
		{ "ModuleRelativePath", "Public/Settings/SH_Waterfall2Settings.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bAutoFocusWaterfallOnSelection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoFocusWaterfallOnSelection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USH_Waterfall2Settings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_USH_Waterfall2Settings_Statics::NewProp_bAutoFocusWaterfallOnSelection_SetBit(void* Obj)
{
	((USH_Waterfall2Settings*)Obj)->bAutoFocusWaterfallOnSelection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USH_Waterfall2Settings_Statics::NewProp_bAutoFocusWaterfallOnSelection = { "bAutoFocusWaterfallOnSelection", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USH_Waterfall2Settings), &Z_Construct_UClass_USH_Waterfall2Settings_Statics::NewProp_bAutoFocusWaterfallOnSelection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoFocusWaterfallOnSelection_MetaData), NewProp_bAutoFocusWaterfallOnSelection_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USH_Waterfall2Settings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_Waterfall2Settings_Statics::NewProp_bAutoFocusWaterfallOnSelection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USH_Waterfall2Settings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USH_Waterfall2Settings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_Shadersource_Waterfall2EdMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USH_Waterfall2Settings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USH_Waterfall2Settings_Statics::ClassParams = {
	&USH_Waterfall2Settings::StaticClass,
	"SHADERSOURCEPerProjectSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USH_Waterfall2Settings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USH_Waterfall2Settings_Statics::PropPointers),
	0,
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USH_Waterfall2Settings_Statics::Class_MetaDataParams), Z_Construct_UClass_USH_Waterfall2Settings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USH_Waterfall2Settings()
{
	if (!Z_Registration_Info_UClass_USH_Waterfall2Settings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USH_Waterfall2Settings.OuterSingleton, Z_Construct_UClass_USH_Waterfall2Settings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USH_Waterfall2Settings.OuterSingleton;
}
template<> SHADERSOURCE_WATERFALL2EDMODE_API UClass* StaticClass<USH_Waterfall2Settings>()
{
	return USH_Waterfall2Settings::StaticClass();
}
USH_Waterfall2Settings::USH_Waterfall2Settings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USH_Waterfall2Settings);
USH_Waterfall2Settings::~USH_Waterfall2Settings() {}
// End Class USH_Waterfall2Settings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_SHADERSOURCEWT2_Source_Shadersource_Waterfall2EdMode_Public_Settings_SH_Waterfall2Settings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USH_Waterfall2Settings, USH_Waterfall2Settings::StaticClass, TEXT("USH_Waterfall2Settings"), &Z_Registration_Info_UClass_USH_Waterfall2Settings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USH_Waterfall2Settings), 1866687050U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_SHADERSOURCEWT2_Source_Shadersource_Waterfall2EdMode_Public_Settings_SH_Waterfall2Settings_h_1742465421(TEXT("/Script/Shadersource_Waterfall2EdMode"),
	Z_CompiledInDeferFile_FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_SHADERSOURCEWT2_Source_Shadersource_Waterfall2EdMode_Public_Settings_SH_Waterfall2Settings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_SHADERSOURCEWT2_Source_Shadersource_Waterfall2EdMode_Public_Settings_SH_Waterfall2Settings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
