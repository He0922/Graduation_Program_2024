// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graduation_2024/Public/MovementComponent/PlayerCharacterMovementComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerCharacterMovementComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
GRADUATION_2024_API UClass* Z_Construct_UClass_UPlayerCharacterMovementComponent();
GRADUATION_2024_API UClass* Z_Construct_UClass_UPlayerCharacterMovementComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Graduation_2024();
// End Cross Module References

// Begin Class UPlayerCharacterMovementComponent
void UPlayerCharacterMovementComponent::StaticRegisterNativesUPlayerCharacterMovementComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerCharacterMovementComponent);
UClass* Z_Construct_UClass_UPlayerCharacterMovementComponent_NoRegister()
{
	return UPlayerCharacterMovementComponent::StaticClass();
}
struct Z_Construct_UClass_UPlayerCharacterMovementComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MovementComponent/PlayerCharacterMovementComponent.h" },
		{ "ModuleRelativePath", "Public/MovementComponent/PlayerCharacterMovementComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerCharacterMovementComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPlayerCharacterMovementComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Graduation_2024,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCharacterMovementComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerCharacterMovementComponent_Statics::ClassParams = {
	&UPlayerCharacterMovementComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCharacterMovementComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerCharacterMovementComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayerCharacterMovementComponent()
{
	if (!Z_Registration_Info_UClass_UPlayerCharacterMovementComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerCharacterMovementComponent.OuterSingleton, Z_Construct_UClass_UPlayerCharacterMovementComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayerCharacterMovementComponent.OuterSingleton;
}
template<> GRADUATION_2024_API UClass* StaticClass<UPlayerCharacterMovementComponent>()
{
	return UPlayerCharacterMovementComponent::StaticClass();
}
UPlayerCharacterMovementComponent::UPlayerCharacterMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerCharacterMovementComponent);
UPlayerCharacterMovementComponent::~UPlayerCharacterMovementComponent() {}
// End Class UPlayerCharacterMovementComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Programes_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_MovementComponent_PlayerCharacterMovementComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerCharacterMovementComponent, UPlayerCharacterMovementComponent::StaticClass, TEXT("UPlayerCharacterMovementComponent"), &Z_Registration_Info_UClass_UPlayerCharacterMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerCharacterMovementComponent), 1677519694U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Programes_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_MovementComponent_PlayerCharacterMovementComponent_h_2516687447(TEXT("/Script/Graduation_2024"),
	Z_CompiledInDeferFile_FID_Programes_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_MovementComponent_PlayerCharacterMovementComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Programes_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_MovementComponent_PlayerCharacterMovementComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
