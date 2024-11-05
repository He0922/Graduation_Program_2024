// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graduation_2024/Public/Archival/Archival.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchival() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
GRADUATION_2024_API UClass* Z_Construct_UClass_AArchival();
GRADUATION_2024_API UClass* Z_Construct_UClass_AArchival_NoRegister();
UPackage* Z_Construct_UPackage__Script_Graduation_2024();
// End Cross Module References

// Begin Class AArchival
void AArchival::StaticRegisterNativesAArchival()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AArchival);
UClass* Z_Construct_UClass_AArchival_NoRegister()
{
	return AArchival::StaticClass();
}
struct Z_Construct_UClass_AArchival_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Archival/Archival.h" },
		{ "ModuleRelativePath", "Public/Archival/Archival.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArchival>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AArchival_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Graduation_2024,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AArchival_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AArchival_Statics::ClassParams = {
	&AArchival::StaticClass,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AArchival_Statics::Class_MetaDataParams), Z_Construct_UClass_AArchival_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AArchival()
{
	if (!Z_Registration_Info_UClass_AArchival.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AArchival.OuterSingleton, Z_Construct_UClass_AArchival_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AArchival.OuterSingleton;
}
template<> GRADUATION_2024_API UClass* StaticClass<AArchival>()
{
	return AArchival::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AArchival);
AArchival::~AArchival() {}
// End Class AArchival

// Begin Registration
struct Z_CompiledInDeferFile_FID_Graduation_2024_Source_Graduation_2024_Public_Archival_Archival_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AArchival, AArchival::StaticClass, TEXT("AArchival"), &Z_Registration_Info_UClass_AArchival, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AArchival), 2828050945U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Graduation_2024_Source_Graduation_2024_Public_Archival_Archival_h_1231521453(TEXT("/Script/Graduation_2024"),
	Z_CompiledInDeferFile_FID_Graduation_2024_Source_Graduation_2024_Public_Archival_Archival_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Graduation_2024_Source_Graduation_2024_Public_Archival_Archival_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
