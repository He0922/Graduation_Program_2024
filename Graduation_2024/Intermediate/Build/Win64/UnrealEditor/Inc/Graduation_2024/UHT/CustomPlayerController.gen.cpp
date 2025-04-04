// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graduation_2024/Public/Controller/CustomPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomPlayerController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
GRADUATION_2024_API UClass* Z_Construct_UClass_ACustomPlayerController();
GRADUATION_2024_API UClass* Z_Construct_UClass_ACustomPlayerController_NoRegister();
GRADUATION_2024_API UEnum* Z_Construct_UEnum_Graduation_2024_ECustomPlayerStatus();
UPackage* Z_Construct_UPackage__Script_Graduation_2024();
// End Cross Module References

// Begin Class ACustomPlayerController
void ACustomPlayerController::StaticRegisterNativesACustomPlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACustomPlayerController);
UClass* Z_Construct_UClass_ACustomPlayerController_NoRegister()
{
	return ACustomPlayerController::StaticClass();
}
struct Z_Construct_UClass_ACustomPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Controller/CustomPlayerController.h" },
		{ "ModuleRelativePath", "Public/Controller/CustomPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerStatus_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "Public/Controller/CustomPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mainMappingContext_MetaData[] = {
		{ "Category", "Input|MappingContext" },
		{ "ModuleRelativePath", "Public/Controller/CustomPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_moveAction_MetaData[] = {
		{ "Category", "Input|Action" },
		{ "ModuleRelativePath", "Public/Controller/CustomPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_lookAction_MetaData[] = {
		{ "Category", "Input|Action" },
		{ "ModuleRelativePath", "Public/Controller/CustomPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_jumpAction_MetaData[] = {
		{ "Category", "Input|Action" },
		{ "ModuleRelativePath", "Public/Controller/CustomPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_objectInteraction_MetaData[] = {
		{ "Category", "Input|Action" },
		{ "ModuleRelativePath", "Public/Controller/CustomPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_climbAction_MetaData[] = {
		{ "Category", "Input|Action" },
		{ "ModuleRelativePath", "Public/Controller/CustomPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MouseLeftButtonAction_MetaData[] = {
		{ "Category", "Input|Action" },
		{ "ModuleRelativePath", "Public/Controller/CustomPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MouseRightButtonAction_MetaData[] = {
		{ "Category", "Input|Action" },
		{ "ModuleRelativePath", "Public/Controller/CustomPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Num1Action_MetaData[] = {
		{ "Category", "Input|Action" },
		{ "ModuleRelativePath", "Public/Controller/CustomPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Num2Action_MetaData[] = {
		{ "Category", "Input|Action" },
		{ "ModuleRelativePath", "Public/Controller/CustomPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Num3Action_MetaData[] = {
		{ "Category", "Input|Action" },
		{ "ModuleRelativePath", "Public/Controller/CustomPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OpenPackageAction_MetaData[] = {
		{ "Category", "Input|Action" },
		{ "ModuleRelativePath", "Public/Controller/CustomPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PickUpAction_MetaData[] = {
		{ "Category", "Input|Action" },
		{ "ModuleRelativePath", "Public/Controller/CustomPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_PlayerStatus_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PlayerStatus;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_mainMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_moveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_lookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_jumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_objectInteraction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_climbAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MouseLeftButtonAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MouseRightButtonAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Num1Action;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Num2Action;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Num3Action;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OpenPackageAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PickUpAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACustomPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACustomPlayerController_Statics::NewProp_PlayerStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACustomPlayerController_Statics::NewProp_PlayerStatus = { "PlayerStatus", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACustomPlayerController, PlayerStatus), Z_Construct_UEnum_Graduation_2024_ECustomPlayerStatus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerStatus_MetaData), NewProp_PlayerStatus_MetaData) }; // 1372204461
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACustomPlayerController_Statics::NewProp_mainMappingContext = { "mainMappingContext", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACustomPlayerController, mainMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mainMappingContext_MetaData), NewProp_mainMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACustomPlayerController_Statics::NewProp_moveAction = { "moveAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACustomPlayerController, moveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_moveAction_MetaData), NewProp_moveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACustomPlayerController_Statics::NewProp_lookAction = { "lookAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACustomPlayerController, lookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_lookAction_MetaData), NewProp_lookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACustomPlayerController_Statics::NewProp_jumpAction = { "jumpAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACustomPlayerController, jumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_jumpAction_MetaData), NewProp_jumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACustomPlayerController_Statics::NewProp_objectInteraction = { "objectInteraction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACustomPlayerController, objectInteraction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_objectInteraction_MetaData), NewProp_objectInteraction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACustomPlayerController_Statics::NewProp_climbAction = { "climbAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACustomPlayerController, climbAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_climbAction_MetaData), NewProp_climbAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACustomPlayerController_Statics::NewProp_MouseLeftButtonAction = { "MouseLeftButtonAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACustomPlayerController, MouseLeftButtonAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MouseLeftButtonAction_MetaData), NewProp_MouseLeftButtonAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACustomPlayerController_Statics::NewProp_MouseRightButtonAction = { "MouseRightButtonAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACustomPlayerController, MouseRightButtonAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MouseRightButtonAction_MetaData), NewProp_MouseRightButtonAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACustomPlayerController_Statics::NewProp_Num1Action = { "Num1Action", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACustomPlayerController, Num1Action), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Num1Action_MetaData), NewProp_Num1Action_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACustomPlayerController_Statics::NewProp_Num2Action = { "Num2Action", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACustomPlayerController, Num2Action), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Num2Action_MetaData), NewProp_Num2Action_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACustomPlayerController_Statics::NewProp_Num3Action = { "Num3Action", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACustomPlayerController, Num3Action), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Num3Action_MetaData), NewProp_Num3Action_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACustomPlayerController_Statics::NewProp_OpenPackageAction = { "OpenPackageAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACustomPlayerController, OpenPackageAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OpenPackageAction_MetaData), NewProp_OpenPackageAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACustomPlayerController_Statics::NewProp_PickUpAction = { "PickUpAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACustomPlayerController, PickUpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PickUpAction_MetaData), NewProp_PickUpAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACustomPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomPlayerController_Statics::NewProp_PlayerStatus_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomPlayerController_Statics::NewProp_PlayerStatus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomPlayerController_Statics::NewProp_mainMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomPlayerController_Statics::NewProp_moveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomPlayerController_Statics::NewProp_lookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomPlayerController_Statics::NewProp_jumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomPlayerController_Statics::NewProp_objectInteraction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomPlayerController_Statics::NewProp_climbAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomPlayerController_Statics::NewProp_MouseLeftButtonAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomPlayerController_Statics::NewProp_MouseRightButtonAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomPlayerController_Statics::NewProp_Num1Action,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomPlayerController_Statics::NewProp_Num2Action,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomPlayerController_Statics::NewProp_Num3Action,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomPlayerController_Statics::NewProp_OpenPackageAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomPlayerController_Statics::NewProp_PickUpAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACustomPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACustomPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_Graduation_2024,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACustomPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACustomPlayerController_Statics::ClassParams = {
	&ACustomPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ACustomPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ACustomPlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACustomPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ACustomPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACustomPlayerController()
{
	if (!Z_Registration_Info_UClass_ACustomPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACustomPlayerController.OuterSingleton, Z_Construct_UClass_ACustomPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACustomPlayerController.OuterSingleton;
}
template<> GRADUATION_2024_API UClass* StaticClass<ACustomPlayerController>()
{
	return ACustomPlayerController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACustomPlayerController);
ACustomPlayerController::~ACustomPlayerController() {}
// End Class ACustomPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_Controller_CustomPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACustomPlayerController, ACustomPlayerController::StaticClass, TEXT("ACustomPlayerController"), &Z_Registration_Info_UClass_ACustomPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACustomPlayerController), 1755726484U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_Controller_CustomPlayerController_h_3007297192(TEXT("/Script/Graduation_2024"),
	Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_Controller_CustomPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_Controller_CustomPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
