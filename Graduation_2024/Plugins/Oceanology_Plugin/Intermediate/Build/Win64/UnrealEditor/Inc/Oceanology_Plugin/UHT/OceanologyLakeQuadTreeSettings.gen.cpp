// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Oceanology_Plugin/Public/Structs/OceanologyLakeQuadTreeSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOceanologyLakeQuadTreeSettings() {}

// Begin Cross Module References
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyLakeQuadTreeSettings();
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyWaterQuadTreeSettings();
UPackage* Z_Construct_UPackage__Script_Oceanology_Plugin();
// End Cross Module References

// Begin ScriptStruct FOceanologyLakeQuadTreeSettings
static_assert(std::is_polymorphic<FOceanologyLakeQuadTreeSettings>() == std::is_polymorphic<FOceanologyWaterQuadTreeSettings>(), "USTRUCT FOceanologyLakeQuadTreeSettings cannot be polymorphic unless super FOceanologyWaterQuadTreeSettings is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OceanologyLakeQuadTreeSettings;
class UScriptStruct* FOceanologyLakeQuadTreeSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OceanologyLakeQuadTreeSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OceanologyLakeQuadTreeSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOceanologyLakeQuadTreeSettings, (UObject*)Z_Construct_UPackage__Script_Oceanology_Plugin(), TEXT("OceanologyLakeQuadTreeSettings"));
	}
	return Z_Registration_Info_UScriptStruct_OceanologyLakeQuadTreeSettings.OuterSingleton;
}
template<> OCEANOLOGY_PLUGIN_API UScriptStruct* StaticStruct<FOceanologyLakeQuadTreeSettings>()
{
	return FOceanologyLakeQuadTreeSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOceanologyLakeQuadTreeSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyLakeQuadTreeSettings.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOceanologyLakeQuadTreeSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOceanologyLakeQuadTreeSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Oceanology_Plugin,
	Z_Construct_UScriptStruct_FOceanologyWaterQuadTreeSettings,
	&NewStructOps,
	"OceanologyLakeQuadTreeSettings",
	nullptr,
	0,
	sizeof(FOceanologyLakeQuadTreeSettings),
	alignof(FOceanologyLakeQuadTreeSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanologyLakeQuadTreeSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOceanologyLakeQuadTreeSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOceanologyLakeQuadTreeSettings()
{
	if (!Z_Registration_Info_UScriptStruct_OceanologyLakeQuadTreeSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OceanologyLakeQuadTreeSettings.InnerSingleton, Z_Construct_UScriptStruct_FOceanologyLakeQuadTreeSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OceanologyLakeQuadTreeSettings.InnerSingleton;
}
// End ScriptStruct FOceanologyLakeQuadTreeSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_BS_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyLakeQuadTreeSettings_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOceanologyLakeQuadTreeSettings::StaticStruct, Z_Construct_UScriptStruct_FOceanologyLakeQuadTreeSettings_Statics::NewStructOps, TEXT("OceanologyLakeQuadTreeSettings"), &Z_Registration_Info_UScriptStruct_OceanologyLakeQuadTreeSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOceanologyLakeQuadTreeSettings), 820369329U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BS_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyLakeQuadTreeSettings_h_779878438(TEXT("/Script/Oceanology_Plugin"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_BS_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyLakeQuadTreeSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BS_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyLakeQuadTreeSettings_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
