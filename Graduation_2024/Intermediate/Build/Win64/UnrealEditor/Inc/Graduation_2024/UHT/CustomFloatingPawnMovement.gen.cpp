// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graduation_2024/Public/MovementComponent/CustomFloatingPawnMovement.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomFloatingPawnMovement() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UFloatingPawnMovement();
GRADUATION_2024_API UClass* Z_Construct_UClass_UCustomFloatingPawnMovement();
GRADUATION_2024_API UClass* Z_Construct_UClass_UCustomFloatingPawnMovement_NoRegister();
UPackage* Z_Construct_UPackage__Script_Graduation_2024();
// End Cross Module References

// Begin Class UCustomFloatingPawnMovement
void UCustomFloatingPawnMovement::StaticRegisterNativesUCustomFloatingPawnMovement()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomFloatingPawnMovement);
UClass* Z_Construct_UClass_UCustomFloatingPawnMovement_NoRegister()
{
	return UCustomFloatingPawnMovement::StaticClass();
}
struct Z_Construct_UClass_UCustomFloatingPawnMovement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MovementComponent/CustomFloatingPawnMovement.h" },
		{ "ModuleRelativePath", "Public/MovementComponent/CustomFloatingPawnMovement.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomFloatingPawnMovement>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCustomFloatingPawnMovement_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFloatingPawnMovement,
	(UObject* (*)())Z_Construct_UPackage__Script_Graduation_2024,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomFloatingPawnMovement_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomFloatingPawnMovement_Statics::ClassParams = {
	&UCustomFloatingPawnMovement::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomFloatingPawnMovement_Statics::Class_MetaDataParams), Z_Construct_UClass_UCustomFloatingPawnMovement_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCustomFloatingPawnMovement()
{
	if (!Z_Registration_Info_UClass_UCustomFloatingPawnMovement.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomFloatingPawnMovement.OuterSingleton, Z_Construct_UClass_UCustomFloatingPawnMovement_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCustomFloatingPawnMovement.OuterSingleton;
}
template<> GRADUATION_2024_API UClass* StaticClass<UCustomFloatingPawnMovement>()
{
	return UCustomFloatingPawnMovement::StaticClass();
}
UCustomFloatingPawnMovement::UCustomFloatingPawnMovement(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomFloatingPawnMovement);
UCustomFloatingPawnMovement::~UCustomFloatingPawnMovement() {}
// End Class UCustomFloatingPawnMovement

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Data_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_MovementComponent_CustomFloatingPawnMovement_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCustomFloatingPawnMovement, UCustomFloatingPawnMovement::StaticClass, TEXT("UCustomFloatingPawnMovement"), &Z_Registration_Info_UClass_UCustomFloatingPawnMovement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomFloatingPawnMovement), 1554089260U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Data_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_MovementComponent_CustomFloatingPawnMovement_h_3379737652(TEXT("/Script/Graduation_2024"),
	Z_CompiledInDeferFile_FID_UE_Data_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_MovementComponent_CustomFloatingPawnMovement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Data_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_MovementComponent_CustomFloatingPawnMovement_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
