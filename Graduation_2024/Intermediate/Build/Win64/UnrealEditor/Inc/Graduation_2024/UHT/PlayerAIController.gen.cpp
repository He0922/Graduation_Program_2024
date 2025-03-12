// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graduation_2024/Public/Controller/PlayerAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerAIController() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
GRADUATION_2024_API UClass* Z_Construct_UClass_APlayerAIController();
GRADUATION_2024_API UClass* Z_Construct_UClass_APlayerAIController_NoRegister();
UPackage* Z_Construct_UPackage__Script_Graduation_2024();
// End Cross Module References

// Begin Class APlayerAIController
void APlayerAIController::StaticRegisterNativesAPlayerAIController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerAIController);
UClass* Z_Construct_UClass_APlayerAIController_NoRegister()
{
	return APlayerAIController::StaticClass();
}
struct Z_Construct_UClass_APlayerAIController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Controller/PlayerAIController.h" },
		{ "ModuleRelativePath", "Public/Controller/PlayerAIController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerAIController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APlayerAIController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_Graduation_2024,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerAIController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerAIController_Statics::ClassParams = {
	&APlayerAIController::StaticClass,
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
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayerAIController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APlayerAIController()
{
	if (!Z_Registration_Info_UClass_APlayerAIController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerAIController.OuterSingleton, Z_Construct_UClass_APlayerAIController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlayerAIController.OuterSingleton;
}
template<> GRADUATION_2024_API UClass* StaticClass<APlayerAIController>()
{
	return APlayerAIController::StaticClass();
}
APlayerAIController::APlayerAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerAIController);
APlayerAIController::~APlayerAIController() {}
// End Class APlayerAIController

// Begin Registration
struct Z_CompiledInDeferFile_FID_BS_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_Controller_PlayerAIController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlayerAIController, APlayerAIController::StaticClass, TEXT("APlayerAIController"), &Z_Registration_Info_UClass_APlayerAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerAIController), 3765900384U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BS_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_Controller_PlayerAIController_h_89876272(TEXT("/Script/Graduation_2024"),
	Z_CompiledInDeferFile_FID_BS_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_Controller_PlayerAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BS_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_Controller_PlayerAIController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
