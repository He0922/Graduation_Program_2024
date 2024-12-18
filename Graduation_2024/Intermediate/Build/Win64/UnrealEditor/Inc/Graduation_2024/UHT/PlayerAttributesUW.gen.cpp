// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graduation_2024/Public/UI/Attributes/PlayerAttributesUW.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerAttributesUW() {}

// Begin Cross Module References
GRADUATION_2024_API UClass* Z_Construct_UClass_UPlayerAttributesUW();
GRADUATION_2024_API UClass* Z_Construct_UClass_UPlayerAttributesUW_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Graduation_2024();
// End Cross Module References

// Begin Class UPlayerAttributesUW
void UPlayerAttributesUW::StaticRegisterNativesUPlayerAttributesUW()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerAttributesUW);
UClass* Z_Construct_UClass_UPlayerAttributesUW_NoRegister()
{
	return UPlayerAttributesUW::StaticClass();
}
struct Z_Construct_UClass_UPlayerAttributesUW_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/Attributes/PlayerAttributesUW.h" },
		{ "ModuleRelativePath", "Public/UI/Attributes/PlayerAttributesUW.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_playerHealthMax_MetaData[] = {
		{ "Category", "PlayerAttributes" },
		{ "ModuleRelativePath", "Public/UI/Attributes/PlayerAttributesUW.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_playerEnergyMax_MetaData[] = {
		{ "Category", "Player Attributes" },
		{ "ModuleRelativePath", "Public/UI/Attributes/PlayerAttributesUW.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_playerHealth_MetaData[] = {
		{ "Category", "Player Attributes" },
		{ "ModuleRelativePath", "Public/UI/Attributes/PlayerAttributesUW.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_playerEnergy_MetaData[] = {
		{ "Category", "Player Attributes" },
		{ "ModuleRelativePath", "Public/UI/Attributes/PlayerAttributesUW.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_playerDamage_MetaData[] = {
		{ "Category", "Player Attributes" },
		{ "ModuleRelativePath", "Public/UI/Attributes/PlayerAttributesUW.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_playerMoveSpeed_MetaData[] = {
		{ "Category", "Player Attributes" },
		{ "ModuleRelativePath", "Public/UI/Attributes/PlayerAttributesUW.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_playerHealthMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_playerEnergyMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_playerHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_playerEnergy;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_playerDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_playerMoveSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerAttributesUW>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerAttributesUW_Statics::NewProp_playerHealthMax = { "playerHealthMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerAttributesUW, playerHealthMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_playerHealthMax_MetaData), NewProp_playerHealthMax_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerAttributesUW_Statics::NewProp_playerEnergyMax = { "playerEnergyMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerAttributesUW, playerEnergyMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_playerEnergyMax_MetaData), NewProp_playerEnergyMax_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerAttributesUW_Statics::NewProp_playerHealth = { "playerHealth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerAttributesUW, playerHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_playerHealth_MetaData), NewProp_playerHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerAttributesUW_Statics::NewProp_playerEnergy = { "playerEnergy", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerAttributesUW, playerEnergy), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_playerEnergy_MetaData), NewProp_playerEnergy_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerAttributesUW_Statics::NewProp_playerDamage = { "playerDamage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerAttributesUW, playerDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_playerDamage_MetaData), NewProp_playerDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerAttributesUW_Statics::NewProp_playerMoveSpeed = { "playerMoveSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerAttributesUW, playerMoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_playerMoveSpeed_MetaData), NewProp_playerMoveSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerAttributesUW_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAttributesUW_Statics::NewProp_playerHealthMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAttributesUW_Statics::NewProp_playerEnergyMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAttributesUW_Statics::NewProp_playerHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAttributesUW_Statics::NewProp_playerEnergy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAttributesUW_Statics::NewProp_playerDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAttributesUW_Statics::NewProp_playerMoveSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAttributesUW_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPlayerAttributesUW_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Graduation_2024,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAttributesUW_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerAttributesUW_Statics::ClassParams = {
	&UPlayerAttributesUW::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPlayerAttributesUW_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAttributesUW_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAttributesUW_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerAttributesUW_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayerAttributesUW()
{
	if (!Z_Registration_Info_UClass_UPlayerAttributesUW.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerAttributesUW.OuterSingleton, Z_Construct_UClass_UPlayerAttributesUW_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayerAttributesUW.OuterSingleton;
}
template<> GRADUATION_2024_API UClass* StaticClass<UPlayerAttributesUW>()
{
	return UPlayerAttributesUW::StaticClass();
}
UPlayerAttributesUW::UPlayerAttributesUW(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerAttributesUW);
UPlayerAttributesUW::~UPlayerAttributesUW() {}
// End Class UPlayerAttributesUW

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Data_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_UI_Attributes_PlayerAttributesUW_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerAttributesUW, UPlayerAttributesUW::StaticClass, TEXT("UPlayerAttributesUW"), &Z_Registration_Info_UClass_UPlayerAttributesUW, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerAttributesUW), 2813481204U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Data_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_UI_Attributes_PlayerAttributesUW_h_692980409(TEXT("/Script/Graduation_2024"),
	Z_CompiledInDeferFile_FID_UE_Data_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_UI_Attributes_PlayerAttributesUW_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Data_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_UI_Attributes_PlayerAttributesUW_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
