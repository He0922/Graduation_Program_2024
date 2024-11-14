// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graduation_2024/Public/Interface/PlayerInteractionInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerInteractionInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
GRADUATION_2024_API UClass* Z_Construct_UClass_UPlayerInteractionInterface();
GRADUATION_2024_API UClass* Z_Construct_UClass_UPlayerInteractionInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Graduation_2024();
// End Cross Module References

// Begin Interface UPlayerInteractionInterface
void UPlayerInteractionInterface::StaticRegisterNativesUPlayerInteractionInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerInteractionInterface);
UClass* Z_Construct_UClass_UPlayerInteractionInterface_NoRegister()
{
	return UPlayerInteractionInterface::StaticClass();
}
struct Z_Construct_UClass_UPlayerInteractionInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/PlayerInteractionInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPlayerInteractionInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPlayerInteractionInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Graduation_2024,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInteractionInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerInteractionInterface_Statics::ClassParams = {
	&UPlayerInteractionInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInteractionInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerInteractionInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayerInteractionInterface()
{
	if (!Z_Registration_Info_UClass_UPlayerInteractionInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerInteractionInterface.OuterSingleton, Z_Construct_UClass_UPlayerInteractionInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayerInteractionInterface.OuterSingleton;
}
template<> GRADUATION_2024_API UClass* StaticClass<UPlayerInteractionInterface>()
{
	return UPlayerInteractionInterface::StaticClass();
}
UPlayerInteractionInterface::UPlayerInteractionInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerInteractionInterface);
UPlayerInteractionInterface::~UPlayerInteractionInterface() {}
// End Interface UPlayerInteractionInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Graduation_2024_Source_Graduation_2024_Public_Interface_PlayerInteractionInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerInteractionInterface, UPlayerInteractionInterface::StaticClass, TEXT("UPlayerInteractionInterface"), &Z_Registration_Info_UClass_UPlayerInteractionInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerInteractionInterface), 1781383957U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Graduation_2024_Source_Graduation_2024_Public_Interface_PlayerInteractionInterface_h_1046582033(TEXT("/Script/Graduation_2024"),
	Z_CompiledInDeferFile_FID_Graduation_2024_Source_Graduation_2024_Public_Interface_PlayerInteractionInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Graduation_2024_Source_Graduation_2024_Public_Interface_PlayerInteractionInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
