// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Oceanology_Plugin/Public/Enums/OceanologyWaterPresetMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOceanologyWaterPresetMode() {}

// Begin Cross Module References
OCEANOLOGY_PLUGIN_API UEnum* Z_Construct_UEnum_Oceanology_Plugin_EOceanologyWaterPresetMode();
UPackage* Z_Construct_UPackage__Script_Oceanology_Plugin();
// End Cross Module References

// Begin Enum EOceanologyWaterPresetMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOceanologyWaterPresetMode;
static UEnum* EOceanologyWaterPresetMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOceanologyWaterPresetMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOceanologyWaterPresetMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Oceanology_Plugin_EOceanologyWaterPresetMode, (UObject*)Z_Construct_UPackage__Script_Oceanology_Plugin(), TEXT("EOceanologyWaterPresetMode"));
	}
	return Z_Registration_Info_UEnum_EOceanologyWaterPresetMode.OuterSingleton;
}
template<> OCEANOLOGY_PLUGIN_API UEnum* StaticEnum<EOceanologyWaterPresetMode>()
{
	return EOceanologyWaterPresetMode_StaticEnum();
}
struct Z_Construct_UEnum_Oceanology_Plugin_EOceanologyWaterPresetMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ApplyPresetToCurrentSettings.Name", "EOceanologyWaterPresetMode::ApplyPresetToCurrentSettings" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Enums/OceanologyWaterPresetMode.h" },
		{ "UsePresetDirectly.Name", "EOceanologyWaterPresetMode::UsePresetDirectly" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOceanologyWaterPresetMode::UsePresetDirectly", (int64)EOceanologyWaterPresetMode::UsePresetDirectly },
		{ "EOceanologyWaterPresetMode::ApplyPresetToCurrentSettings", (int64)EOceanologyWaterPresetMode::ApplyPresetToCurrentSettings },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Oceanology_Plugin_EOceanologyWaterPresetMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Oceanology_Plugin,
	nullptr,
	"EOceanologyWaterPresetMode",
	"EOceanologyWaterPresetMode",
	Z_Construct_UEnum_Oceanology_Plugin_EOceanologyWaterPresetMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Oceanology_Plugin_EOceanologyWaterPresetMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Oceanology_Plugin_EOceanologyWaterPresetMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Oceanology_Plugin_EOceanologyWaterPresetMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Oceanology_Plugin_EOceanologyWaterPresetMode()
{
	if (!Z_Registration_Info_UEnum_EOceanologyWaterPresetMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOceanologyWaterPresetMode.InnerSingleton, Z_Construct_UEnum_Oceanology_Plugin_EOceanologyWaterPresetMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOceanologyWaterPresetMode.InnerSingleton;
}
// End Enum EOceanologyWaterPresetMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEDocument_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Enums_OceanologyWaterPresetMode_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EOceanologyWaterPresetMode_StaticEnum, TEXT("EOceanologyWaterPresetMode"), &Z_Registration_Info_UEnum_EOceanologyWaterPresetMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 718401376U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEDocument_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Enums_OceanologyWaterPresetMode_h_2734235690(TEXT("/Script/Oceanology_Plugin"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UEDocument_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Enums_OceanologyWaterPresetMode_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEDocument_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Enums_OceanologyWaterPresetMode_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
