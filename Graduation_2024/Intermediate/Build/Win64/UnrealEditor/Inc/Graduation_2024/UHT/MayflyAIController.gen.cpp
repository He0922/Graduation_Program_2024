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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MayflyBlackboard_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Controller/MayflyAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MayflyBlackboardData_MetaData[] = {
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MayflyBehaviorTree_MetaData[] = {
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsTheSameRotation_MetaData[] = {
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCharacter_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Public/Controller/MayflyAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mayfly_MetaData[] = {
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceBetween_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Follow" },
		{ "ModuleRelativePath", "Public/Controller/MayflyAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeedGap_MetaData[] = {
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsNearPlayer_MetaData[] = {
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
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MayflyBlackboard;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MayflyBlackboardData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MayflyBehaviorTree;
	static void NewProp_IsTheSameRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsTheSameRotation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerCharacter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mayfly;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceBetween;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedGap;
	static void NewProp_IsNearPlayer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsNearPlayer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMayflyAIController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMayflyAIController_Statics::NewProp_MayflyBlackboard = { "MayflyBlackboard", nullptr, (EPropertyFlags)0x004000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMayflyAIController, MayflyBlackboard), Z_Construct_UClass_UBlackboardComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MayflyBlackboard_MetaData), NewProp_MayflyBlackboard_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMayflyAIController_Statics::NewProp_MayflyBlackboardData = { "MayflyBlackboardData", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMayflyAIController, MayflyBlackboardData), Z_Construct_UClass_UBlackboardData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MayflyBlackboardData_MetaData), NewProp_MayflyBlackboardData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMayflyAIController_Statics::NewProp_MayflyBehaviorTree = { "MayflyBehaviorTree", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMayflyAIController, MayflyBehaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MayflyBehaviorTree_MetaData), NewProp_MayflyBehaviorTree_MetaData) };
void Z_Construct_UClass_AMayflyAIController_Statics::NewProp_IsTheSameRotation_SetBit(void* Obj)
{
	((AMayflyAIController*)Obj)->IsTheSameRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMayflyAIController_Statics::NewProp_IsTheSameRotation = { "IsTheSameRotation", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMayflyAIController), &Z_Construct_UClass_AMayflyAIController_Statics::NewProp_IsTheSameRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsTheSameRotation_MetaData), NewProp_IsTheSameRotation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMayflyAIController_Statics::NewProp_PlayerCharacter = { "PlayerCharacter", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMayflyAIController, PlayerCharacter), Z_Construct_UClass_APlayerCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerCharacter_MetaData), NewProp_PlayerCharacter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMayflyAIController_Statics::NewProp_Mayfly = { "Mayfly", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMayflyAIController, Mayfly), Z_Construct_UClass_AMayfly_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mayfly_MetaData), NewProp_Mayfly_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMayflyAIController_Statics::NewProp_DistanceBetween = { "DistanceBetween", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMayflyAIController, DistanceBetween), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceBetween_MetaData), NewProp_DistanceBetween_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMayflyAIController_Statics::NewProp_SpeedGap = { "SpeedGap", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMayflyAIController, SpeedGap), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeedGap_MetaData), NewProp_SpeedGap_MetaData) };
void Z_Construct_UClass_AMayflyAIController_Statics::NewProp_IsNearPlayer_SetBit(void* Obj)
{
	((AMayflyAIController*)Obj)->IsNearPlayer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMayflyAIController_Statics::NewProp_IsNearPlayer = { "IsNearPlayer", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMayflyAIController), &Z_Construct_UClass_AMayflyAIController_Statics::NewProp_IsNearPlayer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsNearPlayer_MetaData), NewProp_IsNearPlayer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMayflyAIController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMayflyAIController_Statics::NewProp_MayflyBlackboard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMayflyAIController_Statics::NewProp_MayflyBlackboardData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMayflyAIController_Statics::NewProp_MayflyBehaviorTree,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMayflyAIController_Statics::NewProp_IsTheSameRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMayflyAIController_Statics::NewProp_PlayerCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMayflyAIController_Statics::NewProp_Mayfly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMayflyAIController_Statics::NewProp_DistanceBetween,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMayflyAIController_Statics::NewProp_SpeedGap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMayflyAIController_Statics::NewProp_IsNearPlayer,
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
		{ Z_Construct_UClass_AMayflyAIController, AMayflyAIController::StaticClass, TEXT("AMayflyAIController"), &Z_Registration_Info_UClass_AMayflyAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMayflyAIController), 442441373U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Programes_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_Controller_MayflyAIController_h_2159041122(TEXT("/Script/Graduation_2024"),
	Z_CompiledInDeferFile_FID_Programes_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_Controller_MayflyAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Programes_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_Controller_MayflyAIController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
