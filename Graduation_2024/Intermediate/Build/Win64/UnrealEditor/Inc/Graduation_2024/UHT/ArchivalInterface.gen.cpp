// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graduation_2024/Public/Interface/ArchivalInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchivalInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
GRADUATION_2024_API UClass* Z_Construct_UClass_UArchivalInterface();
GRADUATION_2024_API UClass* Z_Construct_UClass_UArchivalInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Graduation_2024();
// End Cross Module References

// Begin Interface UArchivalInterface
void UArchivalInterface::StaticRegisterNativesUArchivalInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArchivalInterface);
UClass* Z_Construct_UClass_UArchivalInterface_NoRegister()
{
	return UArchivalInterface::StaticClass();
}
struct Z_Construct_UClass_UArchivalInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/ArchivalInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IArchivalInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UArchivalInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Graduation_2024,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArchivalInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArchivalInterface_Statics::ClassParams = {
	&UArchivalInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArchivalInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UArchivalInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArchivalInterface()
{
	if (!Z_Registration_Info_UClass_UArchivalInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArchivalInterface.OuterSingleton, Z_Construct_UClass_UArchivalInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArchivalInterface.OuterSingleton;
}
template<> GRADUATION_2024_API UClass* StaticClass<UArchivalInterface>()
{
	return UArchivalInterface::StaticClass();
}
UArchivalInterface::UArchivalInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArchivalInterface);
UArchivalInterface::~UArchivalInterface() {}
// End Interface UArchivalInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEDocument_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_Interface_ArchivalInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UArchivalInterface, UArchivalInterface::StaticClass, TEXT("UArchivalInterface"), &Z_Registration_Info_UClass_UArchivalInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArchivalInterface), 3750295440U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEDocument_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_Interface_ArchivalInterface_h_4123681080(TEXT("/Script/Graduation_2024"),
	Z_CompiledInDeferFile_FID_UEDocument_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_Interface_ArchivalInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEDocument_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_Interface_ArchivalInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
