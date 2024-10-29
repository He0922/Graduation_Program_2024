// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graduation_2024/Public/MovementComponent/Player_CMC.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayer_CMC() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
GRADUATION_2024_API UClass* Z_Construct_UClass_UPlayer_CMC();
GRADUATION_2024_API UClass* Z_Construct_UClass_UPlayer_CMC_NoRegister();
UPackage* Z_Construct_UPackage__Script_Graduation_2024();
// End Cross Module References

// Begin Class UPlayer_CMC
void UPlayer_CMC::StaticRegisterNativesUPlayer_CMC()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayer_CMC);
UClass* Z_Construct_UClass_UPlayer_CMC_NoRegister()
{
	return UPlayer_CMC::StaticClass();
}
struct Z_Construct_UClass_UPlayer_CMC_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MovementComponent/Player_CMC.h" },
		{ "ModuleRelativePath", "Public/MovementComponent/Player_CMC.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayer_CMC>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPlayer_CMC_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Graduation_2024,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayer_CMC_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayer_CMC_Statics::ClassParams = {
	&UPlayer_CMC::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayer_CMC_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayer_CMC_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayer_CMC()
{
	if (!Z_Registration_Info_UClass_UPlayer_CMC.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayer_CMC.OuterSingleton, Z_Construct_UClass_UPlayer_CMC_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayer_CMC.OuterSingleton;
}
template<> GRADUATION_2024_API UClass* StaticClass<UPlayer_CMC>()
{
	return UPlayer_CMC::StaticClass();
}
UPlayer_CMC::UPlayer_CMC(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayer_CMC);
UPlayer_CMC::~UPlayer_CMC() {}
// End Class UPlayer_CMC

// Begin Registration
struct Z_CompiledInDeferFile_FID_Graduation_2024_Source_Graduation_2024_Public_MovementComponent_Player_CMC_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayer_CMC, UPlayer_CMC::StaticClass, TEXT("UPlayer_CMC"), &Z_Registration_Info_UClass_UPlayer_CMC, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayer_CMC), 248458159U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Graduation_2024_Source_Graduation_2024_Public_MovementComponent_Player_CMC_h_2018793515(TEXT("/Script/Graduation_2024"),
	Z_CompiledInDeferFile_FID_Graduation_2024_Source_Graduation_2024_Public_MovementComponent_Player_CMC_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Graduation_2024_Source_Graduation_2024_Public_MovementComponent_Player_CMC_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
