// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graduation_2024/Public/Interface/CustomPlayerStatusInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomPlayerStatusInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
GRADUATION_2024_API UClass* Z_Construct_UClass_UCustomPlayerStatusInterface();
GRADUATION_2024_API UClass* Z_Construct_UClass_UCustomPlayerStatusInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Graduation_2024();
// End Cross Module References

// Begin Interface UCustomPlayerStatusInterface
void UCustomPlayerStatusInterface::StaticRegisterNativesUCustomPlayerStatusInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomPlayerStatusInterface);
UClass* Z_Construct_UClass_UCustomPlayerStatusInterface_NoRegister()
{
	return UCustomPlayerStatusInterface::StaticClass();
}
struct Z_Construct_UClass_UCustomPlayerStatusInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/CustomPlayerStatusInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICustomPlayerStatusInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCustomPlayerStatusInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Graduation_2024,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomPlayerStatusInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomPlayerStatusInterface_Statics::ClassParams = {
	&UCustomPlayerStatusInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomPlayerStatusInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UCustomPlayerStatusInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCustomPlayerStatusInterface()
{
	if (!Z_Registration_Info_UClass_UCustomPlayerStatusInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomPlayerStatusInterface.OuterSingleton, Z_Construct_UClass_UCustomPlayerStatusInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCustomPlayerStatusInterface.OuterSingleton;
}
template<> GRADUATION_2024_API UClass* StaticClass<UCustomPlayerStatusInterface>()
{
	return UCustomPlayerStatusInterface::StaticClass();
}
UCustomPlayerStatusInterface::UCustomPlayerStatusInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomPlayerStatusInterface);
UCustomPlayerStatusInterface::~UCustomPlayerStatusInterface() {}
// End Interface UCustomPlayerStatusInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Graduation_2024_Source_Graduation_2024_Public_Interface_CustomPlayerStatusInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCustomPlayerStatusInterface, UCustomPlayerStatusInterface::StaticClass, TEXT("UCustomPlayerStatusInterface"), &Z_Registration_Info_UClass_UCustomPlayerStatusInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomPlayerStatusInterface), 2494221171U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Graduation_2024_Source_Graduation_2024_Public_Interface_CustomPlayerStatusInterface_h_2148711120(TEXT("/Script/Graduation_2024"),
	Z_CompiledInDeferFile_FID_Graduation_2024_Source_Graduation_2024_Public_Interface_CustomPlayerStatusInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Graduation_2024_Source_Graduation_2024_Public_Interface_CustomPlayerStatusInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
