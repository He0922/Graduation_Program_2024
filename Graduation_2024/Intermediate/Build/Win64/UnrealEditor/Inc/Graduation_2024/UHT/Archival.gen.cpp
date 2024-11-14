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
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
GRADUATION_2024_API UClass* Z_Construct_UClass_AArchival();
GRADUATION_2024_API UClass* Z_Construct_UClass_AArchival_NoRegister();
GRADUATION_2024_API UClass* Z_Construct_UClass_UPlayerInteractionInterface_NoRegister();
GRADUATION_2024_API UEnum* Z_Construct_UEnum_Graduation_2024_EArchiveID();
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_archiveID_MetaData[] = {
		{ "Category", "Archive ID" },
		{ "ModuleRelativePath", "Public/Archival/Archival.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_archiveMesh_MetaData[] = {
		{ "Category", "Archive Point Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Archival/Archival.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_playerStandSphere_MetaData[] = {
		{ "Category", "Player Stand in Postion" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Archival/Archival.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_archiveCollision_MetaData[] = {
		{ "Category", "Archive Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Archival/Archival.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_playerHealthMax_MetaData[] = {
		{ "Category", "Player Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Archival/Archival.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_playerEnergyMax_MetaData[] = {
		{ "Category", "Player Attributes" },
		{ "ModuleRelativePath", "Public/Archival/Archival.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_playerHealth_MetaData[] = {
		{ "Category", "Player Attributes" },
		{ "ModuleRelativePath", "Public/Archival/Archival.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_playerEnergy_MetaData[] = {
		{ "Category", "Player Attributes" },
		{ "ModuleRelativePath", "Public/Archival/Archival.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_playerDamage_MetaData[] = {
		{ "Category", "Player Attributes" },
		{ "ModuleRelativePath", "Public/Archival/Archival.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_playerMoveSpeed_MetaData[] = {
		{ "Category", "Player Attributes" },
		{ "ModuleRelativePath", "Public/Archival/Archival.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_archiveID_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_archiveID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_archiveMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_playerStandSphere;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_archiveCollision;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_playerHealthMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_playerEnergyMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_playerHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_playerEnergy;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_playerDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_playerMoveSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArchival>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AArchival_Statics::NewProp_archiveID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AArchival_Statics::NewProp_archiveID = { "archiveID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArchival, archiveID), Z_Construct_UEnum_Graduation_2024_EArchiveID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_archiveID_MetaData), NewProp_archiveID_MetaData) }; // 1920841488
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArchival_Statics::NewProp_archiveMesh = { "archiveMesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArchival, archiveMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_archiveMesh_MetaData), NewProp_archiveMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArchival_Statics::NewProp_playerStandSphere = { "playerStandSphere", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArchival, playerStandSphere), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_playerStandSphere_MetaData), NewProp_playerStandSphere_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArchival_Statics::NewProp_archiveCollision = { "archiveCollision", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArchival, archiveCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_archiveCollision_MetaData), NewProp_archiveCollision_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AArchival_Statics::NewProp_playerHealthMax = { "playerHealthMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArchival, playerHealthMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_playerHealthMax_MetaData), NewProp_playerHealthMax_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AArchival_Statics::NewProp_playerEnergyMax = { "playerEnergyMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArchival, playerEnergyMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_playerEnergyMax_MetaData), NewProp_playerEnergyMax_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AArchival_Statics::NewProp_playerHealth = { "playerHealth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArchival, playerHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_playerHealth_MetaData), NewProp_playerHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AArchival_Statics::NewProp_playerEnergy = { "playerEnergy", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArchival, playerEnergy), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_playerEnergy_MetaData), NewProp_playerEnergy_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AArchival_Statics::NewProp_playerDamage = { "playerDamage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArchival, playerDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_playerDamage_MetaData), NewProp_playerDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AArchival_Statics::NewProp_playerMoveSpeed = { "playerMoveSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArchival, playerMoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_playerMoveSpeed_MetaData), NewProp_playerMoveSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AArchival_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArchival_Statics::NewProp_archiveID_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArchival_Statics::NewProp_archiveID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArchival_Statics::NewProp_archiveMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArchival_Statics::NewProp_playerStandSphere,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArchival_Statics::NewProp_archiveCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArchival_Statics::NewProp_playerHealthMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArchival_Statics::NewProp_playerEnergyMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArchival_Statics::NewProp_playerHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArchival_Statics::NewProp_playerEnergy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArchival_Statics::NewProp_playerDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArchival_Statics::NewProp_playerMoveSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AArchival_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AArchival_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Graduation_2024,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AArchival_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AArchival_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UPlayerInteractionInterface_NoRegister, (int32)VTABLE_OFFSET(AArchival, IPlayerInteractionInterface), false },  // 1781383957
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AArchival_Statics::ClassParams = {
	&AArchival::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AArchival_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AArchival_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
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
		{ Z_Construct_UClass_AArchival, AArchival::StaticClass, TEXT("AArchival"), &Z_Registration_Info_UClass_AArchival, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AArchival), 1603212135U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Graduation_2024_Source_Graduation_2024_Public_Archival_Archival_h_3450682718(TEXT("/Script/Graduation_2024"),
	Z_CompiledInDeferFile_FID_Graduation_2024_Source_Graduation_2024_Public_Archival_Archival_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Graduation_2024_Source_Graduation_2024_Public_Archival_Archival_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
