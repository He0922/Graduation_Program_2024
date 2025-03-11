// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graduation_2024/Public/Character/BlackWuChang.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlackWuChang() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
GRADUATION_2024_API UClass* Z_Construct_UClass_ABlackWuChang();
GRADUATION_2024_API UClass* Z_Construct_UClass_ABlackWuChang_NoRegister();
UPackage* Z_Construct_UPackage__Script_Graduation_2024();
// End Cross Module References

// Begin Class ABlackWuChang
void ABlackWuChang::StaticRegisterNativesABlackWuChang()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABlackWuChang);
UClass* Z_Construct_UClass_ABlackWuChang_NoRegister()
{
	return ABlackWuChang::StaticClass();
}
struct Z_Construct_UClass_ABlackWuChang_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/BlackWuChang.h" },
		{ "ModuleRelativePath", "Public/Character/BlackWuChang.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABlackWuChang>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABlackWuChang_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Graduation_2024,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABlackWuChang_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABlackWuChang_Statics::ClassParams = {
	&ABlackWuChang::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABlackWuChang_Statics::Class_MetaDataParams), Z_Construct_UClass_ABlackWuChang_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABlackWuChang()
{
	if (!Z_Registration_Info_UClass_ABlackWuChang.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABlackWuChang.OuterSingleton, Z_Construct_UClass_ABlackWuChang_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABlackWuChang.OuterSingleton;
}
template<> GRADUATION_2024_API UClass* StaticClass<ABlackWuChang>()
{
	return ABlackWuChang::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABlackWuChang);
ABlackWuChang::~ABlackWuChang() {}
// End Class ABlackWuChang

// Begin Registration
struct Z_CompiledInDeferFile_FID_Programes_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_Character_BlackWuChang_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABlackWuChang, ABlackWuChang::StaticClass, TEXT("ABlackWuChang"), &Z_Registration_Info_UClass_ABlackWuChang, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABlackWuChang), 2163050794U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Programes_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_Character_BlackWuChang_h_1825076455(TEXT("/Script/Graduation_2024"),
	Z_CompiledInDeferFile_FID_Programes_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_Character_BlackWuChang_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Programes_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_Character_BlackWuChang_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
