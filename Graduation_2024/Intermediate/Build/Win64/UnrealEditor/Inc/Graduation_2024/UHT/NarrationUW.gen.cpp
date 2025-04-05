// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graduation_2024/Public/UI/Narration/NarrationUW.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrationUW() {}

// Begin Cross Module References
GRADUATION_2024_API UClass* Z_Construct_UClass_UNarrationUW();
GRADUATION_2024_API UClass* Z_Construct_UClass_UNarrationUW_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Graduation_2024();
// End Cross Module References

// Begin Class UNarrationUW
void UNarrationUW::StaticRegisterNativesUNarrationUW()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrationUW);
UClass* Z_Construct_UClass_UNarrationUW_NoRegister()
{
	return UNarrationUW::StaticClass();
}
struct Z_Construct_UClass_UNarrationUW_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/Narration/NarrationUW.h" },
		{ "ModuleRelativePath", "Public/UI/Narration/NarrationUW.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrationUW>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNarrationUW_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Graduation_2024,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrationUW_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrationUW_Statics::ClassParams = {
	&UNarrationUW::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrationUW_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrationUW_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNarrationUW()
{
	if (!Z_Registration_Info_UClass_UNarrationUW.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrationUW.OuterSingleton, Z_Construct_UClass_UNarrationUW_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNarrationUW.OuterSingleton;
}
template<> GRADUATION_2024_API UClass* StaticClass<UNarrationUW>()
{
	return UNarrationUW::StaticClass();
}
UNarrationUW::UNarrationUW(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrationUW);
UNarrationUW::~UNarrationUW() {}
// End Class UNarrationUW

// Begin Registration
struct Z_CompiledInDeferFile_FID_Programes_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_UI_Narration_NarrationUW_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNarrationUW, UNarrationUW::StaticClass, TEXT("UNarrationUW"), &Z_Registration_Info_UClass_UNarrationUW, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrationUW), 2195858714U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Programes_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_UI_Narration_NarrationUW_h_3690865350(TEXT("/Script/Graduation_2024"),
	Z_CompiledInDeferFile_FID_Programes_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_UI_Narration_NarrationUW_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Programes_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_UI_Narration_NarrationUW_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
