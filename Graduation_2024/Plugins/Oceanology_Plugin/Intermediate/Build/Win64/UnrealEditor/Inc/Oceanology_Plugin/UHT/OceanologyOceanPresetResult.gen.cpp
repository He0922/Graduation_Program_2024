// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Oceanology_Plugin/Public/Structs/OceanologyOceanPresetResult.h"
#include "Oceanology_Plugin/Public/Structs/OceanologyWetness.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOceanologyOceanPresetResult() {}

// Begin Cross Module References
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyOceanPresetResult();
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyWetness();
UPackage* Z_Construct_UPackage__Script_Oceanology_Plugin();
// End Cross Module References

// Begin ScriptStruct FOceanologyOceanPresetResult
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OceanologyOceanPresetResult;
class UScriptStruct* FOceanologyOceanPresetResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OceanologyOceanPresetResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OceanologyOceanPresetResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOceanologyOceanPresetResult, (UObject*)Z_Construct_UPackage__Script_Oceanology_Plugin(), TEXT("OceanologyOceanPresetResult"));
	}
	return Z_Registration_Info_UScriptStruct_OceanologyOceanPresetResult.OuterSingleton;
}
template<> OCEANOLOGY_PLUGIN_API UScriptStruct* StaticStruct<FOceanologyOceanPresetResult>()
{
	return FOceanologyOceanPresetResult::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOceanologyOceanPresetResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// has to be in SYNC with OceanologyOceanPreset fields\n" },
#endif
		{ "ModuleRelativePath", "Public/Structs/OceanologyOceanPresetResult.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "has to be in SYNC with OceanologyOceanPreset fields" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Wetness_MetaData[] = {
		{ "Category", "Shoreline Wetness" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\n// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"Shoreline Wetness\")\n// bool EnableWetness = true;\n" },
#endif
		{ "ModuleRelativePath", "Public/Structs/OceanologyOceanPresetResult.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"Shoreline Wetness\")\nbool EnableWetness = true;" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Wetness;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOceanologyOceanPresetResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOceanologyOceanPresetResult_Statics::NewProp_Wetness = { "Wetness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyOceanPresetResult, Wetness), Z_Construct_UScriptStruct_FOceanologyWetness, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Wetness_MetaData), NewProp_Wetness_MetaData) }; // 2569763290
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOceanologyOceanPresetResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyOceanPresetResult_Statics::NewProp_Wetness,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanologyOceanPresetResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOceanologyOceanPresetResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Oceanology_Plugin,
	nullptr,
	&NewStructOps,
	"OceanologyOceanPresetResult",
	Z_Construct_UScriptStruct_FOceanologyOceanPresetResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanologyOceanPresetResult_Statics::PropPointers),
	sizeof(FOceanologyOceanPresetResult),
	alignof(FOceanologyOceanPresetResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanologyOceanPresetResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOceanologyOceanPresetResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOceanologyOceanPresetResult()
{
	if (!Z_Registration_Info_UScriptStruct_OceanologyOceanPresetResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OceanologyOceanPresetResult.InnerSingleton, Z_Construct_UScriptStruct_FOceanologyOceanPresetResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OceanologyOceanPresetResult.InnerSingleton;
}
// End ScriptStruct FOceanologyOceanPresetResult

// Begin Registration
struct Z_CompiledInDeferFile_FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyOceanPresetResult_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOceanologyOceanPresetResult::StaticStruct, Z_Construct_UScriptStruct_FOceanologyOceanPresetResult_Statics::NewStructOps, TEXT("OceanologyOceanPresetResult"), &Z_Registration_Info_UScriptStruct_OceanologyOceanPresetResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOceanologyOceanPresetResult), 3964374628U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyOceanPresetResult_h_42735985(TEXT("/Script/Oceanology_Plugin"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyOceanPresetResult_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyOceanPresetResult_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
