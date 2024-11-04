// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graduation_2024/Public/UI/Attributes/PlayerAttributesUW.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerAttributesUW() {}

// Begin Cross Module References
GRADUATION_2024_API UClass* Z_Construct_UClass_UPlayerAttributesUW();
GRADUATION_2024_API UClass* Z_Construct_UClass_UPlayerAttributesUW_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Graduation_2024();
// End Cross Module References

// Begin Class UPlayerAttributesUW
void UPlayerAttributesUW::StaticRegisterNativesUPlayerAttributesUW()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerAttributesUW);
UClass* Z_Construct_UClass_UPlayerAttributesUW_NoRegister()
{
	return UPlayerAttributesUW::StaticClass();
}
struct Z_Construct_UClass_UPlayerAttributesUW_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/Attributes/PlayerAttributesUW.h" },
		{ "ModuleRelativePath", "Public/UI/Attributes/PlayerAttributesUW.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerAttributesUW>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPlayerAttributesUW_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Graduation_2024,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAttributesUW_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerAttributesUW_Statics::ClassParams = {
	&UPlayerAttributesUW::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAttributesUW_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerAttributesUW_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayerAttributesUW()
{
	if (!Z_Registration_Info_UClass_UPlayerAttributesUW.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerAttributesUW.OuterSingleton, Z_Construct_UClass_UPlayerAttributesUW_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayerAttributesUW.OuterSingleton;
}
template<> GRADUATION_2024_API UClass* StaticClass<UPlayerAttributesUW>()
{
	return UPlayerAttributesUW::StaticClass();
}
UPlayerAttributesUW::UPlayerAttributesUW(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerAttributesUW);
UPlayerAttributesUW::~UPlayerAttributesUW() {}
// End Class UPlayerAttributesUW

// Begin Registration
struct Z_CompiledInDeferFile_FID_Graduation_2024_Source_Graduation_2024_Public_UI_Attributes_PlayerAttributesUW_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerAttributesUW, UPlayerAttributesUW::StaticClass, TEXT("UPlayerAttributesUW"), &Z_Registration_Info_UClass_UPlayerAttributesUW, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerAttributesUW), 591425729U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Graduation_2024_Source_Graduation_2024_Public_UI_Attributes_PlayerAttributesUW_h_227814721(TEXT("/Script/Graduation_2024"),
	Z_CompiledInDeferFile_FID_Graduation_2024_Source_Graduation_2024_Public_UI_Attributes_PlayerAttributesUW_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Graduation_2024_Source_Graduation_2024_Public_UI_Attributes_PlayerAttributesUW_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
