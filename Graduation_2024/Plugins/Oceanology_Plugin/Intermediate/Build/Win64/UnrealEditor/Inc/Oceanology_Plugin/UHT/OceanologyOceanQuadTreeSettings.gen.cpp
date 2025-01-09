// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Oceanology_Plugin/Public/Structs/OceanologyOceanQuadTreeSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOceanologyOceanQuadTreeSettings() {}

// Begin Cross Module References
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyOceanQuadTreeSettings();
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyWaterQuadTreeSettings();
UPackage* Z_Construct_UPackage__Script_Oceanology_Plugin();
// End Cross Module References

// Begin ScriptStruct FOceanologyOceanQuadTreeSettings
static_assert(std::is_polymorphic<FOceanologyOceanQuadTreeSettings>() == std::is_polymorphic<FOceanologyWaterQuadTreeSettings>(), "USTRUCT FOceanologyOceanQuadTreeSettings cannot be polymorphic unless super FOceanologyWaterQuadTreeSettings is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OceanologyOceanQuadTreeSettings;
class UScriptStruct* FOceanologyOceanQuadTreeSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OceanologyOceanQuadTreeSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OceanologyOceanQuadTreeSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOceanologyOceanQuadTreeSettings, (UObject*)Z_Construct_UPackage__Script_Oceanology_Plugin(), TEXT("OceanologyOceanQuadTreeSettings"));
	}
	return Z_Registration_Info_UScriptStruct_OceanologyOceanQuadTreeSettings.OuterSingleton;
}
template<> OCEANOLOGY_PLUGIN_API UScriptStruct* StaticStruct<FOceanologyOceanQuadTreeSettings>()
{
	return FOceanologyOceanQuadTreeSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOceanologyOceanQuadTreeSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyOceanQuadTreeSettings.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOceanologyOceanQuadTreeSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOceanologyOceanQuadTreeSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Oceanology_Plugin,
	Z_Construct_UScriptStruct_FOceanologyWaterQuadTreeSettings,
	&NewStructOps,
	"OceanologyOceanQuadTreeSettings",
	nullptr,
	0,
	sizeof(FOceanologyOceanQuadTreeSettings),
	alignof(FOceanologyOceanQuadTreeSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanologyOceanQuadTreeSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOceanologyOceanQuadTreeSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOceanologyOceanQuadTreeSettings()
{
	if (!Z_Registration_Info_UScriptStruct_OceanologyOceanQuadTreeSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OceanologyOceanQuadTreeSettings.InnerSingleton, Z_Construct_UScriptStruct_FOceanologyOceanQuadTreeSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OceanologyOceanQuadTreeSettings.InnerSingleton;
}
// End ScriptStruct FOceanologyOceanQuadTreeSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEDocument_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyOceanQuadTreeSettings_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOceanologyOceanQuadTreeSettings::StaticStruct, Z_Construct_UScriptStruct_FOceanologyOceanQuadTreeSettings_Statics::NewStructOps, TEXT("OceanologyOceanQuadTreeSettings"), &Z_Registration_Info_UScriptStruct_OceanologyOceanQuadTreeSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOceanologyOceanQuadTreeSettings), 1167048829U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEDocument_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyOceanQuadTreeSettings_h_3870990134(TEXT("/Script/Oceanology_Plugin"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UEDocument_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyOceanQuadTreeSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEDocument_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyOceanQuadTreeSettings_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
