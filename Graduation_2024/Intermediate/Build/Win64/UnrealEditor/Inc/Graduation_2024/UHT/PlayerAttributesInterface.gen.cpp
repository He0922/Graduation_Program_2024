// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graduation_2024/Public/Interface/PlayerAttributesInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerAttributesInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
GRADUATION_2024_API UClass* Z_Construct_UClass_UPlayerAttributesInterface();
GRADUATION_2024_API UClass* Z_Construct_UClass_UPlayerAttributesInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Graduation_2024();
// End Cross Module References

// Begin Interface UPlayerAttributesInterface
void UPlayerAttributesInterface::StaticRegisterNativesUPlayerAttributesInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerAttributesInterface);
UClass* Z_Construct_UClass_UPlayerAttributesInterface_NoRegister()
{
	return UPlayerAttributesInterface::StaticClass();
}
struct Z_Construct_UClass_UPlayerAttributesInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/PlayerAttributesInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPlayerAttributesInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPlayerAttributesInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Graduation_2024,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAttributesInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerAttributesInterface_Statics::ClassParams = {
	&UPlayerAttributesInterface::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAttributesInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerAttributesInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayerAttributesInterface()
{
	if (!Z_Registration_Info_UClass_UPlayerAttributesInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerAttributesInterface.OuterSingleton, Z_Construct_UClass_UPlayerAttributesInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayerAttributesInterface.OuterSingleton;
}
template<> GRADUATION_2024_API UClass* StaticClass<UPlayerAttributesInterface>()
{
	return UPlayerAttributesInterface::StaticClass();
}
UPlayerAttributesInterface::UPlayerAttributesInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerAttributesInterface);
UPlayerAttributesInterface::~UPlayerAttributesInterface() {}
// End Interface UPlayerAttributesInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_Interface_PlayerAttributesInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerAttributesInterface, UPlayerAttributesInterface::StaticClass, TEXT("UPlayerAttributesInterface"), &Z_Registration_Info_UClass_UPlayerAttributesInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerAttributesInterface), 2585127547U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_Interface_PlayerAttributesInterface_h_513048026(TEXT("/Script/Graduation_2024"),
	Z_CompiledInDeferFile_FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_Interface_PlayerAttributesInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_Interface_PlayerAttributesInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
