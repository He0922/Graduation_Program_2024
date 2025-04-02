// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shadersource_Waterfall2EdMode/Public/EdMode/SH_Waterfall2EditorMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSH_Waterfall2EditorMode() {}

// Begin Cross Module References
SHADERSOURCE_WATERFALL2EDMODE_API UClass* Z_Construct_UClass_USH_Waterfall2EditorMode();
SHADERSOURCE_WATERFALL2EDMODE_API UClass* Z_Construct_UClass_USH_Waterfall2EditorMode_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UEdModeDefault();
UPackage* Z_Construct_UPackage__Script_Shadersource_Waterfall2EdMode();
// End Cross Module References

// Begin Class USH_Waterfall2EditorMode
void USH_Waterfall2EditorMode::StaticRegisterNativesUSH_Waterfall2EditorMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USH_Waterfall2EditorMode);
UClass* Z_Construct_UClass_USH_Waterfall2EditorMode_NoRegister()
{
	return USH_Waterfall2EditorMode::StaticClass();
}
struct Z_Construct_UClass_USH_Waterfall2EditorMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Waterfall Tool 2 Editor Mode */" },
#endif
		{ "IncludePath", "EdMode/SH_Waterfall2EditorMode.h" },
		{ "ModuleRelativePath", "Public/EdMode/SH_Waterfall2EditorMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Waterfall Tool 2 Editor Mode" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USH_Waterfall2EditorMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USH_Waterfall2EditorMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEdModeDefault,
	(UObject* (*)())Z_Construct_UPackage__Script_Shadersource_Waterfall2EdMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USH_Waterfall2EditorMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USH_Waterfall2EditorMode_Statics::ClassParams = {
	&USH_Waterfall2EditorMode::StaticClass,
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
	0x000000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USH_Waterfall2EditorMode_Statics::Class_MetaDataParams), Z_Construct_UClass_USH_Waterfall2EditorMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USH_Waterfall2EditorMode()
{
	if (!Z_Registration_Info_UClass_USH_Waterfall2EditorMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USH_Waterfall2EditorMode.OuterSingleton, Z_Construct_UClass_USH_Waterfall2EditorMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USH_Waterfall2EditorMode.OuterSingleton;
}
template<> SHADERSOURCE_WATERFALL2EDMODE_API UClass* StaticClass<USH_Waterfall2EditorMode>()
{
	return USH_Waterfall2EditorMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USH_Waterfall2EditorMode);
// End Class USH_Waterfall2EditorMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_SHADERSOURCEWT2_Source_Shadersource_Waterfall2EdMode_Public_EdMode_SH_Waterfall2EditorMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USH_Waterfall2EditorMode, USH_Waterfall2EditorMode::StaticClass, TEXT("USH_Waterfall2EditorMode"), &Z_Registration_Info_UClass_USH_Waterfall2EditorMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USH_Waterfall2EditorMode), 1149136643U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_SHADERSOURCEWT2_Source_Shadersource_Waterfall2EdMode_Public_EdMode_SH_Waterfall2EditorMode_h_2003829939(TEXT("/Script/Shadersource_Waterfall2EdMode"),
	Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_SHADERSOURCEWT2_Source_Shadersource_Waterfall2EdMode_Public_EdMode_SH_Waterfall2EditorMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_SHADERSOURCEWT2_Source_Shadersource_Waterfall2EdMode_Public_EdMode_SH_Waterfall2EditorMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
