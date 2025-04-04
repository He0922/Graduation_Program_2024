// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graduation_2024/Public/Character/BlackWuChang/BlackWuChangAnimInstance.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlackWuChangAnimInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
GRADUATION_2024_API UClass* Z_Construct_UClass_UBlackWuChangAnimInstance();
GRADUATION_2024_API UClass* Z_Construct_UClass_UBlackWuChangAnimInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_Graduation_2024();
// End Cross Module References

// Begin Class UBlackWuChangAnimInstance
void UBlackWuChangAnimInstance::StaticRegisterNativesUBlackWuChangAnimInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlackWuChangAnimInstance);
UClass* Z_Construct_UClass_UBlackWuChangAnimInstance_NoRegister()
{
	return UBlackWuChangAnimInstance::StaticClass();
}
struct Z_Construct_UClass_UBlackWuChangAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Character/BlackWuChang/BlackWuChangAnimInstance.h" },
		{ "ModuleRelativePath", "Public/Character/BlackWuChang/BlackWuChangAnimInstance.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlackWuChangAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBlackWuChangAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_Graduation_2024,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlackWuChangAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlackWuChangAnimInstance_Statics::ClassParams = {
	&UBlackWuChangAnimInstance::StaticClass,
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
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBlackWuChangAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UBlackWuChangAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBlackWuChangAnimInstance()
{
	if (!Z_Registration_Info_UClass_UBlackWuChangAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlackWuChangAnimInstance.OuterSingleton, Z_Construct_UClass_UBlackWuChangAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBlackWuChangAnimInstance.OuterSingleton;
}
template<> GRADUATION_2024_API UClass* StaticClass<UBlackWuChangAnimInstance>()
{
	return UBlackWuChangAnimInstance::StaticClass();
}
UBlackWuChangAnimInstance::UBlackWuChangAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBlackWuChangAnimInstance);
UBlackWuChangAnimInstance::~UBlackWuChangAnimInstance() {}
// End Class UBlackWuChangAnimInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_Character_BlackWuChang_BlackWuChangAnimInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBlackWuChangAnimInstance, UBlackWuChangAnimInstance::StaticClass, TEXT("UBlackWuChangAnimInstance"), &Z_Registration_Info_UClass_UBlackWuChangAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlackWuChangAnimInstance), 1632297966U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_Character_BlackWuChang_BlackWuChangAnimInstance_h_2385080494(TEXT("/Script/Graduation_2024"),
	Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_Character_BlackWuChang_BlackWuChangAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_Character_BlackWuChang_BlackWuChangAnimInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
