// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graduation_2024/Public/GameModeBase/Custom_GameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustom_GameModeBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
GRADUATION_2024_API UClass* Z_Construct_UClass_ACustom_GameModeBase();
GRADUATION_2024_API UClass* Z_Construct_UClass_ACustom_GameModeBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_Graduation_2024();
// End Cross Module References

// Begin Class ACustom_GameModeBase
void ACustom_GameModeBase::StaticRegisterNativesACustom_GameModeBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACustom_GameModeBase);
UClass* Z_Construct_UClass_ACustom_GameModeBase_NoRegister()
{
	return ACustom_GameModeBase::StaticClass();
}
struct Z_Construct_UClass_ACustom_GameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameModeBase/Custom_GameModeBase.h" },
		{ "ModuleRelativePath", "Public/GameModeBase/Custom_GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACustom_GameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACustom_GameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Graduation_2024,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACustom_GameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACustom_GameModeBase_Statics::ClassParams = {
	&ACustom_GameModeBase::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACustom_GameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ACustom_GameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACustom_GameModeBase()
{
	if (!Z_Registration_Info_UClass_ACustom_GameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACustom_GameModeBase.OuterSingleton, Z_Construct_UClass_ACustom_GameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACustom_GameModeBase.OuterSingleton;
}
template<> GRADUATION_2024_API UClass* StaticClass<ACustom_GameModeBase>()
{
	return ACustom_GameModeBase::StaticClass();
}
ACustom_GameModeBase::ACustom_GameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACustom_GameModeBase);
ACustom_GameModeBase::~ACustom_GameModeBase() {}
// End Class ACustom_GameModeBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Graduation_2024_Source_Graduation_2024_Public_GameModeBase_Custom_GameModeBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACustom_GameModeBase, ACustom_GameModeBase::StaticClass, TEXT("ACustom_GameModeBase"), &Z_Registration_Info_UClass_ACustom_GameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACustom_GameModeBase), 1472060287U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Graduation_2024_Source_Graduation_2024_Public_GameModeBase_Custom_GameModeBase_h_1147002041(TEXT("/Script/Graduation_2024"),
	Z_CompiledInDeferFile_FID_Graduation_2024_Source_Graduation_2024_Public_GameModeBase_Custom_GameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Graduation_2024_Source_Graduation_2024_Public_GameModeBase_Custom_GameModeBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
