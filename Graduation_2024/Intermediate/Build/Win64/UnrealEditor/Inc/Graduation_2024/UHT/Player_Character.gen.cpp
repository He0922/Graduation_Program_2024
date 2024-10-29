// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graduation_2024/Public/Character/Player_Character.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayer_Character() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
GRADUATION_2024_API UClass* Z_Construct_UClass_APlayer_Character();
GRADUATION_2024_API UClass* Z_Construct_UClass_APlayer_Character_NoRegister();
UPackage* Z_Construct_UPackage__Script_Graduation_2024();
// End Cross Module References

// Begin Class APlayer_Character
void APlayer_Character::StaticRegisterNativesAPlayer_Character()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayer_Character);
UClass* Z_Construct_UClass_APlayer_Character_NoRegister()
{
	return APlayer_Character::StaticClass();
}
struct Z_Construct_UClass_APlayer_Character_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/Player_Character.h" },
		{ "ModuleRelativePath", "Public/Character/Player_Character.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayer_Character>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APlayer_Character_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Graduation_2024,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayer_Character_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayer_Character_Statics::ClassParams = {
	&APlayer_Character::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayer_Character_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayer_Character_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APlayer_Character()
{
	if (!Z_Registration_Info_UClass_APlayer_Character.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayer_Character.OuterSingleton, Z_Construct_UClass_APlayer_Character_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlayer_Character.OuterSingleton;
}
template<> GRADUATION_2024_API UClass* StaticClass<APlayer_Character>()
{
	return APlayer_Character::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APlayer_Character);
APlayer_Character::~APlayer_Character() {}
// End Class APlayer_Character

// Begin Registration
struct Z_CompiledInDeferFile_FID_Graduation_2024_Source_Graduation_2024_Public_Character_Player_Character_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlayer_Character, APlayer_Character::StaticClass, TEXT("APlayer_Character"), &Z_Registration_Info_UClass_APlayer_Character, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayer_Character), 3971604138U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Graduation_2024_Source_Graduation_2024_Public_Character_Player_Character_h_2035690181(TEXT("/Script/Graduation_2024"),
	Z_CompiledInDeferFile_FID_Graduation_2024_Source_Graduation_2024_Public_Character_Player_Character_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Graduation_2024_Source_Graduation_2024_Public_Character_Player_Character_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
