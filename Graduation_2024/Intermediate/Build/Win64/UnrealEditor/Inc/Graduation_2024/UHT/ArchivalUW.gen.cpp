// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graduation_2024/Public/UI/Archival/ArchivalUW.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchivalUW() {}

// Begin Cross Module References
GRADUATION_2024_API UClass* Z_Construct_UClass_UArchivalUW();
GRADUATION_2024_API UClass* Z_Construct_UClass_UArchivalUW_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Graduation_2024();
// End Cross Module References

// Begin Class UArchivalUW
void UArchivalUW::StaticRegisterNativesUArchivalUW()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArchivalUW);
UClass* Z_Construct_UClass_UArchivalUW_NoRegister()
{
	return UArchivalUW::StaticClass();
}
struct Z_Construct_UClass_UArchivalUW_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/Archival/ArchivalUW.h" },
		{ "ModuleRelativePath", "Public/UI/Archival/ArchivalUW.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArchivalUW>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UArchivalUW_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Graduation_2024,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArchivalUW_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArchivalUW_Statics::ClassParams = {
	&UArchivalUW::StaticClass,
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
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArchivalUW_Statics::Class_MetaDataParams), Z_Construct_UClass_UArchivalUW_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArchivalUW()
{
	if (!Z_Registration_Info_UClass_UArchivalUW.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArchivalUW.OuterSingleton, Z_Construct_UClass_UArchivalUW_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArchivalUW.OuterSingleton;
}
template<> GRADUATION_2024_API UClass* StaticClass<UArchivalUW>()
{
	return UArchivalUW::StaticClass();
}
UArchivalUW::UArchivalUW(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArchivalUW);
UArchivalUW::~UArchivalUW() {}
// End Class UArchivalUW

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEDocument_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_UI_Archival_ArchivalUW_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UArchivalUW, UArchivalUW::StaticClass, TEXT("UArchivalUW"), &Z_Registration_Info_UClass_UArchivalUW, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArchivalUW), 1268402233U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEDocument_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_UI_Archival_ArchivalUW_h_33536396(TEXT("/Script/Graduation_2024"),
	Z_CompiledInDeferFile_FID_UEDocument_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_UI_Archival_ArchivalUW_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEDocument_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_UI_Archival_ArchivalUW_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
