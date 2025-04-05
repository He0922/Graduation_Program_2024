// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graduation_2024/Public/Controller/MayflyAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMayflyAIController() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBlackboardComponent_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBlackboardData_NoRegister();
GRADUATION_2024_API UClass* Z_Construct_UClass_AMayfly_NoRegister();
GRADUATION_2024_API UClass* Z_Construct_UClass_AMayflyAIController();
GRADUATION_2024_API UClass* Z_Construct_UClass_AMayflyAIController_NoRegister();
GRADUATION_2024_API UClass* Z_Construct_UClass_APlayerCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_Graduation_2024();
// End Cross Module References

// Begin Class AMayflyAIController
void AMayflyAIController::StaticRegisterNativesAMayflyAIController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMayflyAIController);
UClass* Z_Construct_UClass_AMayflyAIController_NoRegister()
{
	return AMayflyAIController::StaticClass();
}
struct Z_Construct_UClass_AMayflyAIController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Controller/MayflyAIController.h" },
		{ "ModuleRelativePath", "Public/Controller/MayflyAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mayflyBlackboard_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Controller/MayflyAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mayflyBlackboardData_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Component" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe9\xbb\x91\xe6\x9d\xbf\xe7\xbb\x84\xe4\xbb\xb6\n" },
#endif
		{ "ModuleRelativePath", "Public/Controller/MayflyAIController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\xbb\x91\xe6\x9d\xbf\xe7\xbb\x84\xe4\xbb\xb6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_iayflyBehaviorTree_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Component" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe9\xbb\x91\xe6\x9d\xbf\xe6\x95\xb0\xe6\x8d\xae\n" },
#endif
		{ "ModuleRelativePath", "Public/Controller/MayflyAIController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\xbb\x91\xe6\x9d\xbf\xe6\x95\xb0\xe6\x8d\xae" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isTheSameRotation_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Follow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xa1\x8c\xe4\xb8\xba\xe6\xa0\x91\xe7\xbb\x84\xe4\xbb\xb6\n" },
#endif
		{ "ModuleRelativePath", "Public/Controller/MayflyAIController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xa1\x8c\xe4\xb8\xba\xe6\xa0\x91\xe7\xbb\x84\xe4\xbb\xb6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_playerCharacter_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Public/Controller/MayflyAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mayfly_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Mayfly" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Player\n" },
#endif
		{ "ModuleRelativePath", "Public/Controller/MayflyAIController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Player" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_distanceBetween_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Follow" },
		{ "ModuleRelativePath", "Public/Controller/MayflyAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_speedGap_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Follow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Mayfly\xe5\x92\x8cPlayer\xe4\xb9\x8b\xe9\x97\xb4\xe7\x9a\x84\xe8\xb7\x9d\xe7\xa6\xbb\n" },
#endif
		{ "ModuleRelativePath", "Public/Controller/MayflyAIController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mayfly\xe5\x92\x8cPlayer\xe4\xb9\x8b\xe9\x97\xb4\xe7\x9a\x84\xe8\xb7\x9d\xe7\xa6\xbb" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isNearPlayer_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Follow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xb7\x9f\xe9\x9a\x8f\xe6\x97\xb6\xe7\x9a\x84\xe9\x80\x9f\xe5\xba\xa6\xe5\xb7\xae\xe8\xb7\x9d\n" },
#endif
		{ "ModuleRelativePath", "Public/Controller/MayflyAIController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xb7\x9f\xe9\x9a\x8f\xe6\x97\xb6\xe7\x9a\x84\xe9\x80\x9f\xe5\xba\xa6\xe5\xb7\xae\xe8\xb7\x9d" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_mayflyBlackboard;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_mayflyBlackboardData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_iayflyBehaviorTree;
	static void NewProp_isTheSameRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isTheSameRotation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_playerCharacter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_mayfly;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_distanceBetween;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_speedGap;
	static void NewProp_isNearPlayer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isNearPlayer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMayflyAIController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMayflyAIController_Statics::NewProp_mayflyBlackboard = { "mayflyBlackboard", nullptr, (EPropertyFlags)0x004000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMayflyAIController, mayflyBlackboard), Z_Construct_UClass_UBlackboardComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mayflyBlackboard_MetaData), NewProp_mayflyBlackboard_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMayflyAIController_Statics::NewProp_mayflyBlackboardData = { "mayflyBlackboardData", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMayflyAIController, mayflyBlackboardData), Z_Construct_UClass_UBlackboardData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mayflyBlackboardData_MetaData), NewProp_mayflyBlackboardData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMayflyAIController_Statics::NewProp_iayflyBehaviorTree = { "iayflyBehaviorTree", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMayflyAIController, iayflyBehaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_iayflyBehaviorTree_MetaData), NewProp_iayflyBehaviorTree_MetaData) };
void Z_Construct_UClass_AMayflyAIController_Statics::NewProp_isTheSameRotation_SetBit(void* Obj)
{
	((AMayflyAIController*)Obj)->isTheSameRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMayflyAIController_Statics::NewProp_isTheSameRotation = { "isTheSameRotation", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMayflyAIController), &Z_Construct_UClass_AMayflyAIController_Statics::NewProp_isTheSameRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isTheSameRotation_MetaData), NewProp_isTheSameRotation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMayflyAIController_Statics::NewProp_playerCharacter = { "playerCharacter", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMayflyAIController, playerCharacter), Z_Construct_UClass_APlayerCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_playerCharacter_MetaData), NewProp_playerCharacter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMayflyAIController_Statics::NewProp_mayfly = { "mayfly", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMayflyAIController, mayfly), Z_Construct_UClass_AMayfly_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mayfly_MetaData), NewProp_mayfly_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMayflyAIController_Statics::NewProp_distanceBetween = { "distanceBetween", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMayflyAIController, distanceBetween), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_distanceBetween_MetaData), NewProp_distanceBetween_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMayflyAIController_Statics::NewProp_speedGap = { "speedGap", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMayflyAIController, speedGap), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_speedGap_MetaData), NewProp_speedGap_MetaData) };
void Z_Construct_UClass_AMayflyAIController_Statics::NewProp_isNearPlayer_SetBit(void* Obj)
{
	((AMayflyAIController*)Obj)->isNearPlayer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMayflyAIController_Statics::NewProp_isNearPlayer = { "isNearPlayer", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMayflyAIController), &Z_Construct_UClass_AMayflyAIController_Statics::NewProp_isNearPlayer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isNearPlayer_MetaData), NewProp_isNearPlayer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMayflyAIController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMayflyAIController_Statics::NewProp_mayflyBlackboard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMayflyAIController_Statics::NewProp_mayflyBlackboardData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMayflyAIController_Statics::NewProp_iayflyBehaviorTree,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMayflyAIController_Statics::NewProp_isTheSameRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMayflyAIController_Statics::NewProp_playerCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMayflyAIController_Statics::NewProp_mayfly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMayflyAIController_Statics::NewProp_distanceBetween,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMayflyAIController_Statics::NewProp_speedGap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMayflyAIController_Statics::NewProp_isNearPlayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMayflyAIController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMayflyAIController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_Graduation_2024,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMayflyAIController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMayflyAIController_Statics::ClassParams = {
	&AMayflyAIController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMayflyAIController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMayflyAIController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMayflyAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_AMayflyAIController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMayflyAIController()
{
	if (!Z_Registration_Info_UClass_AMayflyAIController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMayflyAIController.OuterSingleton, Z_Construct_UClass_AMayflyAIController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMayflyAIController.OuterSingleton;
}
template<> GRADUATION_2024_API UClass* StaticClass<AMayflyAIController>()
{
	return AMayflyAIController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMayflyAIController);
AMayflyAIController::~AMayflyAIController() {}
// End Class AMayflyAIController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Programes_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_Controller_MayflyAIController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMayflyAIController, AMayflyAIController::StaticClass, TEXT("AMayflyAIController"), &Z_Registration_Info_UClass_AMayflyAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMayflyAIController), 2440907040U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Programes_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_Controller_MayflyAIController_h_144901663(TEXT("/Script/Graduation_2024"),
	Z_CompiledInDeferFile_FID_Programes_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_Controller_MayflyAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Programes_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_Controller_MayflyAIController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
