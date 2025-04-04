// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shadersource_Waterfall2Runtime/Public/SH_WaterfallTool2Statics.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSH_WaterfallTool2Statics() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
SHADERSOURCE_WATERFALL2RUNTIME_API UClass* Z_Construct_UClass_USH_WaterfallTool2Statics();
SHADERSOURCE_WATERFALL2RUNTIME_API UClass* Z_Construct_UClass_USH_WaterfallTool2Statics_NoRegister();
UPackage* Z_Construct_UPackage__Script_Shadersource_Waterfall2Runtime();
// End Cross Module References

// Begin Class USH_WaterfallTool2Statics
void USH_WaterfallTool2Statics::StaticRegisterNativesUSH_WaterfallTool2Statics()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USH_WaterfallTool2Statics);
UClass* Z_Construct_UClass_USH_WaterfallTool2Statics_NoRegister()
{
	return USH_WaterfallTool2Statics::StaticClass();
}
struct Z_Construct_UClass_USH_WaterfallTool2Statics_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Static functions for use across the Waterfall Tool 2 plugin. */" },
#endif
		{ "IncludePath", "SH_WaterfallTool2Statics.h" },
		{ "ModuleRelativePath", "Public/SH_WaterfallTool2Statics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Static functions for use across the Waterfall Tool 2 plugin." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USH_WaterfallTool2Statics>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USH_WaterfallTool2Statics_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Shadersource_Waterfall2Runtime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USH_WaterfallTool2Statics_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USH_WaterfallTool2Statics_Statics::ClassParams = {
	&USH_WaterfallTool2Statics::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USH_WaterfallTool2Statics_Statics::Class_MetaDataParams), Z_Construct_UClass_USH_WaterfallTool2Statics_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USH_WaterfallTool2Statics()
{
	if (!Z_Registration_Info_UClass_USH_WaterfallTool2Statics.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USH_WaterfallTool2Statics.OuterSingleton, Z_Construct_UClass_USH_WaterfallTool2Statics_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USH_WaterfallTool2Statics.OuterSingleton;
}
template<> SHADERSOURCE_WATERFALL2RUNTIME_API UClass* StaticClass<USH_WaterfallTool2Statics>()
{
	return USH_WaterfallTool2Statics::StaticClass();
}
USH_WaterfallTool2Statics::USH_WaterfallTool2Statics(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USH_WaterfallTool2Statics);
USH_WaterfallTool2Statics::~USH_WaterfallTool2Statics() {}
// End Class USH_WaterfallTool2Statics

// Begin Registration
struct Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_SHADERSOURCEWT2_Source_Shadersource_Waterfall2Runtime_Public_SH_WaterfallTool2Statics_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USH_WaterfallTool2Statics, USH_WaterfallTool2Statics::StaticClass, TEXT("USH_WaterfallTool2Statics"), &Z_Registration_Info_UClass_USH_WaterfallTool2Statics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USH_WaterfallTool2Statics), 2215227184U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_SHADERSOURCEWT2_Source_Shadersource_Waterfall2Runtime_Public_SH_WaterfallTool2Statics_h_3246863046(TEXT("/Script/Shadersource_Waterfall2Runtime"),
	Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_SHADERSOURCEWT2_Source_Shadersource_Waterfall2Runtime_Public_SH_WaterfallTool2Statics_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_SHADERSOURCEWT2_Source_Shadersource_Waterfall2Runtime_Public_SH_WaterfallTool2Statics_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
