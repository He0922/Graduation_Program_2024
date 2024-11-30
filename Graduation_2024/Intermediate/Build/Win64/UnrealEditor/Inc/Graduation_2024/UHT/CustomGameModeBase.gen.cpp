// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graduation_2024/Public/GameModeBase/CustomGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomGameModeBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
GRADUATION_2024_API UClass* Z_Construct_UClass_ACustomGameModeBase();
GRADUATION_2024_API UClass* Z_Construct_UClass_ACustomGameModeBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_Graduation_2024();
// End Cross Module References

// Begin Class ACustomGameModeBase
void ACustomGameModeBase::StaticRegisterNativesACustomGameModeBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACustomGameModeBase);
UClass* Z_Construct_UClass_ACustomGameModeBase_NoRegister()
{
	return ACustomGameModeBase::StaticClass();
}
struct Z_Construct_UClass_ACustomGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameModeBase/CustomGameModeBase.h" },
		{ "ModuleRelativePath", "Public/GameModeBase/CustomGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACustomGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACustomGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Graduation_2024,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACustomGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACustomGameModeBase_Statics::ClassParams = {
	&ACustomGameModeBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACustomGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ACustomGameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACustomGameModeBase()
{
	if (!Z_Registration_Info_UClass_ACustomGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACustomGameModeBase.OuterSingleton, Z_Construct_UClass_ACustomGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACustomGameModeBase.OuterSingleton;
}
template<> GRADUATION_2024_API UClass* StaticClass<ACustomGameModeBase>()
{
	return ACustomGameModeBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACustomGameModeBase);
ACustomGameModeBase::~ACustomGameModeBase() {}
// End Class ACustomGameModeBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Graduation_2024_Source_Graduation_2024_Public_GameModeBase_CustomGameModeBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACustomGameModeBase, ACustomGameModeBase::StaticClass, TEXT("ACustomGameModeBase"), &Z_Registration_Info_UClass_ACustomGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACustomGameModeBase), 337336623U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Graduation_2024_Source_Graduation_2024_Public_GameModeBase_CustomGameModeBase_h_527771441(TEXT("/Script/Graduation_2024"),
	Z_CompiledInDeferFile_FID_Graduation_2024_Source_Graduation_2024_Public_GameModeBase_CustomGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Graduation_2024_Source_Graduation_2024_Public_GameModeBase_CustomGameModeBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
