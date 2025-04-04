// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Oceanology_Plugin/Public/Enums/OceanologyUnderwaterMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOceanologyUnderwaterMode() {}

// Begin Cross Module References
OCEANOLOGY_PLUGIN_API UEnum* Z_Construct_UEnum_Oceanology_Plugin_EOceanologyUnderwaterMode();
UPackage* Z_Construct_UPackage__Script_Oceanology_Plugin();
// End Cross Module References

// Begin Enum EOceanologyUnderwaterMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOceanologyUnderwaterMode;
static UEnum* EOceanologyUnderwaterMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOceanologyUnderwaterMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOceanologyUnderwaterMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Oceanology_Plugin_EOceanologyUnderwaterMode, (UObject*)Z_Construct_UPackage__Script_Oceanology_Plugin(), TEXT("EOceanologyUnderwaterMode"));
	}
	return Z_Registration_Info_UEnum_EOceanologyUnderwaterMode.OuterSingleton;
}
template<> OCEANOLOGY_PLUGIN_API UEnum* StaticEnum<EOceanologyUnderwaterMode>()
{
	return EOceanologyUnderwaterMode_StaticEnum();
}
struct Z_Construct_UEnum_Oceanology_Plugin_EOceanologyUnderwaterMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Enums/OceanologyUnderwaterMode.h" },
		{ "None.Name", "EOceanologyUnderwaterMode::None" },
		{ "Underwater.Name", "EOceanologyUnderwaterMode::Underwater" },
		{ "VolumetricFog.Name", "EOceanologyUnderwaterMode::VolumetricFog" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOceanologyUnderwaterMode::None", (int64)EOceanologyUnderwaterMode::None },
		{ "EOceanologyUnderwaterMode::Underwater", (int64)EOceanologyUnderwaterMode::Underwater },
		{ "EOceanologyUnderwaterMode::VolumetricFog", (int64)EOceanologyUnderwaterMode::VolumetricFog },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Oceanology_Plugin_EOceanologyUnderwaterMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Oceanology_Plugin,
	nullptr,
	"EOceanologyUnderwaterMode",
	"EOceanologyUnderwaterMode",
	Z_Construct_UEnum_Oceanology_Plugin_EOceanologyUnderwaterMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Oceanology_Plugin_EOceanologyUnderwaterMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Oceanology_Plugin_EOceanologyUnderwaterMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Oceanology_Plugin_EOceanologyUnderwaterMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Oceanology_Plugin_EOceanologyUnderwaterMode()
{
	if (!Z_Registration_Info_UEnum_EOceanologyUnderwaterMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOceanologyUnderwaterMode.InnerSingleton, Z_Construct_UEnum_Oceanology_Plugin_EOceanologyUnderwaterMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOceanologyUnderwaterMode.InnerSingleton;
}
// End Enum EOceanologyUnderwaterMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Enums_OceanologyUnderwaterMode_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EOceanologyUnderwaterMode_StaticEnum, TEXT("EOceanologyUnderwaterMode"), &Z_Registration_Info_UEnum_EOceanologyUnderwaterMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2998090531U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Enums_OceanologyUnderwaterMode_h_1128282090(TEXT("/Script/Oceanology_Plugin"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Enums_OceanologyUnderwaterMode_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Enums_OceanologyUnderwaterMode_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
