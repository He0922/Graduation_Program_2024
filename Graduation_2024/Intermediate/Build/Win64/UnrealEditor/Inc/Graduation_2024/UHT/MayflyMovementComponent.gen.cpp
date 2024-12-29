// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graduation_2024/Public/MovementComponent/MayflyMovementComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMayflyMovementComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
GRADUATION_2024_API UClass* Z_Construct_UClass_UMayflyMovementComponent();
GRADUATION_2024_API UClass* Z_Construct_UClass_UMayflyMovementComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Graduation_2024();
// End Cross Module References

// Begin Class UMayflyMovementComponent
void UMayflyMovementComponent::StaticRegisterNativesUMayflyMovementComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMayflyMovementComponent);
UClass* Z_Construct_UClass_UMayflyMovementComponent_NoRegister()
{
	return UMayflyMovementComponent::StaticClass();
}
struct Z_Construct_UClass_UMayflyMovementComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MovementComponent/MayflyMovementComponent.h" },
		{ "ModuleRelativePath", "Public/MovementComponent/MayflyMovementComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMayflyMovementComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMayflyMovementComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Graduation_2024,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMayflyMovementComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMayflyMovementComponent_Statics::ClassParams = {
	&UMayflyMovementComponent::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMayflyMovementComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMayflyMovementComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMayflyMovementComponent()
{
	if (!Z_Registration_Info_UClass_UMayflyMovementComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMayflyMovementComponent.OuterSingleton, Z_Construct_UClass_UMayflyMovementComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMayflyMovementComponent.OuterSingleton;
}
template<> GRADUATION_2024_API UClass* StaticClass<UMayflyMovementComponent>()
{
	return UMayflyMovementComponent::StaticClass();
}
UMayflyMovementComponent::UMayflyMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMayflyMovementComponent);
UMayflyMovementComponent::~UMayflyMovementComponent() {}
// End Class UMayflyMovementComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Data_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_MovementComponent_MayflyMovementComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMayflyMovementComponent, UMayflyMovementComponent::StaticClass, TEXT("UMayflyMovementComponent"), &Z_Registration_Info_UClass_UMayflyMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMayflyMovementComponent), 95116365U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Data_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_MovementComponent_MayflyMovementComponent_h_3569694118(TEXT("/Script/Graduation_2024"),
	Z_CompiledInDeferFile_FID_UE_Data_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_MovementComponent_MayflyMovementComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Data_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_MovementComponent_MayflyMovementComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
