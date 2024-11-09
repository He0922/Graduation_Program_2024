// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graduation_2024/Public/Character/Mayfly.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMayfly() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
GRADUATION_2024_API UClass* Z_Construct_UClass_AMayfly();
GRADUATION_2024_API UClass* Z_Construct_UClass_AMayfly_NoRegister();
GRADUATION_2024_API UClass* Z_Construct_UClass_APlayerCharacter_NoRegister();
GRADUATION_2024_API UEnum* Z_Construct_UEnum_Graduation_2024_EMayflyType();
UPackage* Z_Construct_UPackage__Script_Graduation_2024();
// End Cross Module References

// Begin Enum EMayflyType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMayflyType;
static UEnum* EMayflyType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMayflyType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMayflyType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Graduation_2024_EMayflyType, (UObject*)Z_Construct_UPackage__Script_Graduation_2024(), TEXT("EMayflyType"));
	}
	return Z_Registration_Info_UEnum_EMayflyType.OuterSingleton;
}
template<> GRADUATION_2024_API UEnum* StaticEnum<EMayflyType>()
{
	return EMayflyType_StaticEnum();
}
struct Z_Construct_UEnum_Graduation_2024_EMayflyType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "eaddEnergyMAX.Name", "EMayflyType::eaddEnergyMAX" },
		{ "eaddHPMAX.Name", "EMayflyType::eaddHPMAX" },
		{ "ModuleRelativePath", "Public/Character/Mayfly.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMayflyType::eaddHPMAX", (int64)EMayflyType::eaddHPMAX },
		{ "EMayflyType::eaddEnergyMAX", (int64)EMayflyType::eaddEnergyMAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Graduation_2024_EMayflyType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Graduation_2024,
	nullptr,
	"EMayflyType",
	"EMayflyType",
	Z_Construct_UEnum_Graduation_2024_EMayflyType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Graduation_2024_EMayflyType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Graduation_2024_EMayflyType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Graduation_2024_EMayflyType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Graduation_2024_EMayflyType()
{
	if (!Z_Registration_Info_UEnum_EMayflyType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMayflyType.InnerSingleton, Z_Construct_UEnum_Graduation_2024_EMayflyType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMayflyType.InnerSingleton;
}
// End Enum EMayflyType

// Begin Class AMayfly
void AMayfly::StaticRegisterNativesAMayfly()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMayfly);
UClass* Z_Construct_UClass_AMayfly_NoRegister()
{
	return AMayfly::StaticClass();
}
struct Z_Construct_UClass_AMayfly_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/Mayfly.h" },
		{ "ModuleRelativePath", "Public/Character/Mayfly.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mayflytype_MetaData[] = {
		{ "Category", "Mayfly Type" },
		{ "ModuleRelativePath", "Public/Character/Mayfly.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_playerCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Public/Character/Mayfly.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_playerPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/Character/Mayfly.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_pathIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Character/Mayfly.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_pathRecordInterval_MetaData[] = {
		{ "Category", "Path Recording" },
		{ "ModuleRelativePath", "Public/Character/Mayfly.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_pathRecordTimer_MetaData[] = {
		{ "ModuleRelativePath", "Public/Character/Mayfly.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isFollowing_MetaData[] = {
		{ "ModuleRelativePath", "Public/Character/Mayfly.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_speed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Character/Mayfly.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_desiredHeight_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Character/Mayfly.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_followOffset_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Character/Mayfly.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_followDistance_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Distance" },
		{ "ModuleRelativePath", "Public/Character/Mayfly.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_reengageDistance_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Distance" },
		{ "ModuleRelativePath", "Public/Character/Mayfly.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_acceptableRadius_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Distance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xae\xbe\xe7\xbd\xae\xe8\xaf\xaf\xe5\xb7\xae\xe8\x8c\x83\xe5\x9b\xb4\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/Mayfly.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xae\xbe\xe7\xbd\xae\xe8\xaf\xaf\xe5\xb7\xae\xe8\x8c\x83\xe5\x9b\xb4" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_targetLocationMember_MetaData[] = {
		{ "Category", "Target" },
		{ "ModuleRelativePath", "Public/Character/Mayfly.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isMovingToTarget_MetaData[] = {
		{ "Category", "Target" },
		{ "ModuleRelativePath", "Public/Character/Mayfly.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_mayflytype_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_mayflytype;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_playerCharacter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_playerPath_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_playerPath;
	static const UECodeGen_Private::FIntPropertyParams NewProp_pathIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_pathRecordInterval;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_pathRecordTimer;
	static void NewProp_isFollowing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isFollowing;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_speed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_desiredHeight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_followOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_followDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_reengageDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_acceptableRadius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_targetLocationMember;
	static void NewProp_isMovingToTarget_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isMovingToTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMayfly>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMayfly_Statics::NewProp_mayflytype_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AMayfly_Statics::NewProp_mayflytype = { "mayflytype", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMayfly, mayflytype), Z_Construct_UEnum_Graduation_2024_EMayflyType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mayflytype_MetaData), NewProp_mayflytype_MetaData) }; // 3410330538
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMayfly_Statics::NewProp_playerCharacter = { "playerCharacter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMayfly, playerCharacter), Z_Construct_UClass_APlayerCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_playerCharacter_MetaData), NewProp_playerCharacter_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMayfly_Statics::NewProp_playerPath_Inner = { "playerPath", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMayfly_Statics::NewProp_playerPath = { "playerPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMayfly, playerPath), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_playerPath_MetaData), NewProp_playerPath_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMayfly_Statics::NewProp_pathIndex = { "pathIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMayfly, pathIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_pathIndex_MetaData), NewProp_pathIndex_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMayfly_Statics::NewProp_pathRecordInterval = { "pathRecordInterval", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMayfly, pathRecordInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_pathRecordInterval_MetaData), NewProp_pathRecordInterval_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMayfly_Statics::NewProp_pathRecordTimer = { "pathRecordTimer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMayfly, pathRecordTimer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_pathRecordTimer_MetaData), NewProp_pathRecordTimer_MetaData) };
void Z_Construct_UClass_AMayfly_Statics::NewProp_isFollowing_SetBit(void* Obj)
{
	((AMayfly*)Obj)->isFollowing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMayfly_Statics::NewProp_isFollowing = { "isFollowing", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMayfly), &Z_Construct_UClass_AMayfly_Statics::NewProp_isFollowing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isFollowing_MetaData), NewProp_isFollowing_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMayfly_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMayfly, speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_speed_MetaData), NewProp_speed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMayfly_Statics::NewProp_desiredHeight = { "desiredHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMayfly, desiredHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_desiredHeight_MetaData), NewProp_desiredHeight_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMayfly_Statics::NewProp_followOffset = { "followOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMayfly, followOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_followOffset_MetaData), NewProp_followOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMayfly_Statics::NewProp_followDistance = { "followDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMayfly, followDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_followDistance_MetaData), NewProp_followDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMayfly_Statics::NewProp_reengageDistance = { "reengageDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMayfly, reengageDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_reengageDistance_MetaData), NewProp_reengageDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMayfly_Statics::NewProp_acceptableRadius = { "acceptableRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMayfly, acceptableRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_acceptableRadius_MetaData), NewProp_acceptableRadius_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMayfly_Statics::NewProp_targetLocationMember = { "targetLocationMember", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMayfly, targetLocationMember), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_targetLocationMember_MetaData), NewProp_targetLocationMember_MetaData) };
void Z_Construct_UClass_AMayfly_Statics::NewProp_isMovingToTarget_SetBit(void* Obj)
{
	((AMayfly*)Obj)->isMovingToTarget = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMayfly_Statics::NewProp_isMovingToTarget = { "isMovingToTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMayfly), &Z_Construct_UClass_AMayfly_Statics::NewProp_isMovingToTarget_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isMovingToTarget_MetaData), NewProp_isMovingToTarget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMayfly_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMayfly_Statics::NewProp_mayflytype_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMayfly_Statics::NewProp_mayflytype,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMayfly_Statics::NewProp_playerCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMayfly_Statics::NewProp_playerPath_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMayfly_Statics::NewProp_playerPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMayfly_Statics::NewProp_pathIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMayfly_Statics::NewProp_pathRecordInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMayfly_Statics::NewProp_pathRecordTimer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMayfly_Statics::NewProp_isFollowing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMayfly_Statics::NewProp_speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMayfly_Statics::NewProp_desiredHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMayfly_Statics::NewProp_followOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMayfly_Statics::NewProp_followDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMayfly_Statics::NewProp_reengageDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMayfly_Statics::NewProp_acceptableRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMayfly_Statics::NewProp_targetLocationMember,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMayfly_Statics::NewProp_isMovingToTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMayfly_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMayfly_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Graduation_2024,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMayfly_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMayfly_Statics::ClassParams = {
	&AMayfly::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMayfly_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMayfly_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMayfly_Statics::Class_MetaDataParams), Z_Construct_UClass_AMayfly_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMayfly()
{
	if (!Z_Registration_Info_UClass_AMayfly.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMayfly.OuterSingleton, Z_Construct_UClass_AMayfly_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMayfly.OuterSingleton;
}
template<> GRADUATION_2024_API UClass* StaticClass<AMayfly>()
{
	return AMayfly::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMayfly);
AMayfly::~AMayfly() {}
// End Class AMayfly

// Begin Registration
struct Z_CompiledInDeferFile_FID_Graduation_2024_Source_Graduation_2024_Public_Character_Mayfly_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMayflyType_StaticEnum, TEXT("EMayflyType"), &Z_Registration_Info_UEnum_EMayflyType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3410330538U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMayfly, AMayfly::StaticClass, TEXT("AMayfly"), &Z_Registration_Info_UClass_AMayfly, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMayfly), 1856264459U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Graduation_2024_Source_Graduation_2024_Public_Character_Mayfly_h_3450667528(TEXT("/Script/Graduation_2024"),
	Z_CompiledInDeferFile_FID_Graduation_2024_Source_Graduation_2024_Public_Character_Mayfly_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Graduation_2024_Source_Graduation_2024_Public_Character_Mayfly_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Graduation_2024_Source_Graduation_2024_Public_Character_Mayfly_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Graduation_2024_Source_Graduation_2024_Public_Character_Mayfly_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
