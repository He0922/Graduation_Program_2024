// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graduation_2024/Public/Archival/ArchiveID.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchiveID() {}

// Begin Cross Module References
GRADUATION_2024_API UEnum* Z_Construct_UEnum_Graduation_2024_EArchiveID();
UPackage* Z_Construct_UPackage__Script_Graduation_2024();
// End Cross Module References

// Begin Enum EArchiveID
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EArchiveID;
static UEnum* EArchiveID_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EArchiveID.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EArchiveID.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Graduation_2024_EArchiveID, (UObject*)Z_Construct_UPackage__Script_Graduation_2024(), TEXT("EArchiveID"));
	}
	return Z_Registration_Info_UEnum_EArchiveID.OuterSingleton;
}
template<> GRADUATION_2024_API UEnum* StaticEnum<EArchiveID>()
{
	return EArchiveID_StaticEnum();
}
struct Z_Construct_UEnum_Graduation_2024_EArchiveID_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Archive1.DisplayName", "Archive Point 1" },
		{ "Archive1.Name", "EArchiveID::Archive1" },
		{ "Archive10.DisplayName", "Archive Point 10" },
		{ "Archive10.Name", "EArchiveID::Archive10" },
		{ "Archive2.DisplayName", "Archive Point 2" },
		{ "Archive2.Name", "EArchiveID::Archive2" },
		{ "Archive3.DisplayName", "Archive Point 3" },
		{ "Archive3.Name", "EArchiveID::Archive3" },
		{ "Archive4.DisplayName", "Archive Point 4" },
		{ "Archive4.Name", "EArchiveID::Archive4" },
		{ "Archive5.DisplayName", "Archive Point 5" },
		{ "Archive5.Name", "EArchiveID::Archive5" },
		{ "Archive6.DisplayName", "Archive Point 6" },
		{ "Archive6.Name", "EArchiveID::Archive6" },
		{ "Archive7.DisplayName", "Archive Point 7" },
		{ "Archive7.Name", "EArchiveID::Archive7" },
		{ "Archive8.DisplayName", "Archive Point 8" },
		{ "Archive8.Name", "EArchiveID::Archive8" },
		{ "Archive9.DisplayName", "Archive Point 9" },
		{ "Archive9.Name", "EArchiveID::Archive9" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Archival/ArchiveID.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EArchiveID::None" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EArchiveID::None", (int64)EArchiveID::None },
		{ "EArchiveID::Archive1", (int64)EArchiveID::Archive1 },
		{ "EArchiveID::Archive2", (int64)EArchiveID::Archive2 },
		{ "EArchiveID::Archive3", (int64)EArchiveID::Archive3 },
		{ "EArchiveID::Archive4", (int64)EArchiveID::Archive4 },
		{ "EArchiveID::Archive5", (int64)EArchiveID::Archive5 },
		{ "EArchiveID::Archive6", (int64)EArchiveID::Archive6 },
		{ "EArchiveID::Archive7", (int64)EArchiveID::Archive7 },
		{ "EArchiveID::Archive8", (int64)EArchiveID::Archive8 },
		{ "EArchiveID::Archive9", (int64)EArchiveID::Archive9 },
		{ "EArchiveID::Archive10", (int64)EArchiveID::Archive10 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Graduation_2024_EArchiveID_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Graduation_2024,
	nullptr,
	"EArchiveID",
	"EArchiveID",
	Z_Construct_UEnum_Graduation_2024_EArchiveID_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Graduation_2024_EArchiveID_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Graduation_2024_EArchiveID_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Graduation_2024_EArchiveID_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Graduation_2024_EArchiveID()
{
	if (!Z_Registration_Info_UEnum_EArchiveID.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EArchiveID.InnerSingleton, Z_Construct_UEnum_Graduation_2024_EArchiveID_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EArchiveID.InnerSingleton;
}
// End Enum EArchiveID

// Begin Registration
struct Z_CompiledInDeferFile_FID_Graduation_2024_Source_Graduation_2024_Public_Archival_ArchiveID_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EArchiveID_StaticEnum, TEXT("EArchiveID"), &Z_Registration_Info_UEnum_EArchiveID, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1920841488U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Graduation_2024_Source_Graduation_2024_Public_Archival_ArchiveID_h_475077242(TEXT("/Script/Graduation_2024"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Graduation_2024_Source_Graduation_2024_Public_Archival_ArchiveID_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Graduation_2024_Source_Graduation_2024_Public_Archival_ArchiveID_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
