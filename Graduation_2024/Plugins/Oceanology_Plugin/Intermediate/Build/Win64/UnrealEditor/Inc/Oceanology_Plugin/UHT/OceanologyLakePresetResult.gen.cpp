// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Oceanology_Plugin/Public/Structs/OceanologyLakePresetResult.h"
#include "Oceanology_Plugin/Public/Structs/OceanologyGroundCaustics.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOceanologyLakePresetResult() {}

// Begin Cross Module References
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyGroundCaustics();
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyLakePresetResult();
UPackage* Z_Construct_UPackage__Script_Oceanology_Plugin();
// End Cross Module References

// Begin ScriptStruct FOceanologyLakePresetResult
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OceanologyLakePresetResult;
class UScriptStruct* FOceanologyLakePresetResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OceanologyLakePresetResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OceanologyLakePresetResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOceanologyLakePresetResult, (UObject*)Z_Construct_UPackage__Script_Oceanology_Plugin(), TEXT("OceanologyLakePresetResult"));
	}
	return Z_Registration_Info_UScriptStruct_OceanologyLakePresetResult.OuterSingleton;
}
template<> OCEANOLOGY_PLUGIN_API UScriptStruct* StaticStruct<FOceanologyLakePresetResult>()
{
	return FOceanologyLakePresetResult::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOceanologyLakePresetResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// has to be in SYNC with OceanologyLakePreset fields\n" },
#endif
		{ "ModuleRelativePath", "Public/Structs/OceanologyLakePresetResult.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "has to be in SYNC with OceanologyLakePreset fields" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundCaustics_MetaData[] = {
		{ "Category", "Caustics" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyLakePresetResult.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GroundCaustics;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOceanologyLakePresetResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOceanologyLakePresetResult_Statics::NewProp_GroundCaustics = { "GroundCaustics", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyLakePresetResult, GroundCaustics), Z_Construct_UScriptStruct_FOceanologyGroundCaustics, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundCaustics_MetaData), NewProp_GroundCaustics_MetaData) }; // 1718873675
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOceanologyLakePresetResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyLakePresetResult_Statics::NewProp_GroundCaustics,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanologyLakePresetResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOceanologyLakePresetResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Oceanology_Plugin,
	nullptr,
	&NewStructOps,
	"OceanologyLakePresetResult",
	Z_Construct_UScriptStruct_FOceanologyLakePresetResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanologyLakePresetResult_Statics::PropPointers),
	sizeof(FOceanologyLakePresetResult),
	alignof(FOceanologyLakePresetResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanologyLakePresetResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOceanologyLakePresetResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOceanologyLakePresetResult()
{
	if (!Z_Registration_Info_UScriptStruct_OceanologyLakePresetResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OceanologyLakePresetResult.InnerSingleton, Z_Construct_UScriptStruct_FOceanologyLakePresetResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OceanologyLakePresetResult.InnerSingleton;
}
// End ScriptStruct FOceanologyLakePresetResult

// Begin Registration
struct Z_CompiledInDeferFile_FID_Programes_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyLakePresetResult_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOceanologyLakePresetResult::StaticStruct, Z_Construct_UScriptStruct_FOceanologyLakePresetResult_Statics::NewStructOps, TEXT("OceanologyLakePresetResult"), &Z_Registration_Info_UScriptStruct_OceanologyLakePresetResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOceanologyLakePresetResult), 2522097882U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Programes_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyLakePresetResult_h_1594422405(TEXT("/Script/Oceanology_Plugin"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Programes_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyLakePresetResult_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Programes_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyLakePresetResult_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
