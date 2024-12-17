// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graduation_2024/Public/Character/Player/CustomPlayerStatus.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomPlayerStatus() {}

// Begin Cross Module References
GRADUATION_2024_API UEnum* Z_Construct_UEnum_Graduation_2024_ECustomPlayerStatus();
UPackage* Z_Construct_UPackage__Script_Graduation_2024();
// End Cross Module References

// Begin Enum ECustomPlayerStatus
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECustomPlayerStatus;
static UEnum* ECustomPlayerStatus_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECustomPlayerStatus.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECustomPlayerStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Graduation_2024_ECustomPlayerStatus, (UObject*)Z_Construct_UPackage__Script_Graduation_2024(), TEXT("ECustomPlayerStatus"));
	}
	return Z_Registration_Info_UEnum_ECustomPlayerStatus.OuterSingleton;
}
template<> GRADUATION_2024_API UEnum* StaticEnum<ECustomPlayerStatus>()
{
	return ECustomPlayerStatus_StaticEnum();
}
struct Z_Construct_UEnum_Graduation_2024_ECustomPlayerStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "eattack.DisplayName", "Attack" },
		{ "eattack.Name", "ECustomPlayerStatus::eattack" },
		{ "eclimbing.DisplayName", "Climbing" },
		{ "eclimbing.Name", "ECustomPlayerStatus::eclimbing" },
		{ "eidle.DisplayName", "Idle" },
		{ "eidle.Name", "ECustomPlayerStatus::eidle" },
		{ "ejump.DisplayName", "Jump" },
		{ "ejump.Name", "ECustomPlayerStatus::ejump" },
		{ "emove.DisplayName", "Move" },
		{ "emove.Name", "ECustomPlayerStatus::emove" },
		{ "erowing.DisplayName", "Rowing" },
		{ "erowing.Name", "ECustomPlayerStatus::erowing" },
		{ "erun.DisplayName", "Run" },
		{ "erun.Name", "ECustomPlayerStatus::erun" },
		{ "ModuleRelativePath", "Public/Character/Player/CustomPlayerStatus.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECustomPlayerStatus::eidle", (int64)ECustomPlayerStatus::eidle },
		{ "ECustomPlayerStatus::emove", (int64)ECustomPlayerStatus::emove },
		{ "ECustomPlayerStatus::erun", (int64)ECustomPlayerStatus::erun },
		{ "ECustomPlayerStatus::ejump", (int64)ECustomPlayerStatus::ejump },
		{ "ECustomPlayerStatus::eattack", (int64)ECustomPlayerStatus::eattack },
		{ "ECustomPlayerStatus::erowing", (int64)ECustomPlayerStatus::erowing },
		{ "ECustomPlayerStatus::eclimbing", (int64)ECustomPlayerStatus::eclimbing },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Graduation_2024_ECustomPlayerStatus_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Graduation_2024,
	nullptr,
	"ECustomPlayerStatus",
	"ECustomPlayerStatus",
	Z_Construct_UEnum_Graduation_2024_ECustomPlayerStatus_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Graduation_2024_ECustomPlayerStatus_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Graduation_2024_ECustomPlayerStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Graduation_2024_ECustomPlayerStatus_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Graduation_2024_ECustomPlayerStatus()
{
	if (!Z_Registration_Info_UEnum_ECustomPlayerStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECustomPlayerStatus.InnerSingleton, Z_Construct_UEnum_Graduation_2024_ECustomPlayerStatus_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECustomPlayerStatus.InnerSingleton;
}
// End Enum ECustomPlayerStatus

// Begin Registration
struct Z_CompiledInDeferFile_FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_Character_Player_CustomPlayerStatus_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECustomPlayerStatus_StaticEnum, TEXT("ECustomPlayerStatus"), &Z_Registration_Info_UEnum_ECustomPlayerStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1372204461U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_Character_Player_CustomPlayerStatus_h_1478606403(TEXT("/Script/Graduation_2024"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_Character_Player_CustomPlayerStatus_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_Character_Player_CustomPlayerStatus_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
