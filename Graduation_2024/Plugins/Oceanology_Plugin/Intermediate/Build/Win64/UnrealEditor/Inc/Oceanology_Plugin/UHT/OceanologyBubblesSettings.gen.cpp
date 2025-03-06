// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Oceanology_Plugin/Public/Structs/OceanologyBubblesSettings.h"
#include "Oceanology_Plugin/Public/Structs/OceanologyBubbles.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOceanologyBubblesSettings() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
OCEANOLOGY_PLUGIN_API UEnum* Z_Construct_UEnum_Oceanology_Plugin_EOceanologyBubbleActivation();
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyBubbles();
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyBubblesSettings();
UPackage* Z_Construct_UPackage__Script_Oceanology_Plugin();
// End Cross Module References

// Begin Enum EOceanologyBubbleActivation
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOceanologyBubbleActivation;
static UEnum* EOceanologyBubbleActivation_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOceanologyBubbleActivation.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOceanologyBubbleActivation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Oceanology_Plugin_EOceanologyBubbleActivation, (UObject*)Z_Construct_UPackage__Script_Oceanology_Plugin(), TEXT("EOceanologyBubbleActivation"));
	}
	return Z_Registration_Info_UEnum_EOceanologyBubbleActivation.OuterSingleton;
}
template<> OCEANOLOGY_PLUGIN_API UEnum* StaticEnum<EOceanologyBubbleActivation>()
{
	return EOceanologyBubbleActivation_StaticEnum();
}
struct Z_Construct_UEnum_Oceanology_Plugin_EOceanologyBubbleActivation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Disabled.Name", "Disabled" },
		{ "Enabled.Name", "Enabled" },
		{ "EnabledOnInteraction.Name", "EnabledOnInteraction" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyBubblesSettings.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "Disabled", (int64)Disabled },
		{ "Enabled", (int64)Enabled },
		{ "EnabledOnInteraction", (int64)EnabledOnInteraction },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Oceanology_Plugin_EOceanologyBubbleActivation_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Oceanology_Plugin,
	nullptr,
	"EOceanologyBubbleActivation",
	"EOceanologyBubbleActivation",
	Z_Construct_UEnum_Oceanology_Plugin_EOceanologyBubbleActivation_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Oceanology_Plugin_EOceanologyBubbleActivation_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Oceanology_Plugin_EOceanologyBubbleActivation_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Oceanology_Plugin_EOceanologyBubbleActivation_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Oceanology_Plugin_EOceanologyBubbleActivation()
{
	if (!Z_Registration_Info_UEnum_EOceanologyBubbleActivation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOceanologyBubbleActivation.InnerSingleton, Z_Construct_UEnum_Oceanology_Plugin_EOceanologyBubbleActivation_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOceanologyBubbleActivation.InnerSingleton;
}
// End Enum EOceanologyBubbleActivation

// Begin ScriptStruct FOceanologyBubblesSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OceanologyBubblesSettings;
class UScriptStruct* FOceanologyBubblesSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OceanologyBubblesSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OceanologyBubblesSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOceanologyBubblesSettings, (UObject*)Z_Construct_UPackage__Script_Oceanology_Plugin(), TEXT("OceanologyBubblesSettings"));
	}
	return Z_Registration_Info_UScriptStruct_OceanologyBubblesSettings.OuterSingleton;
}
template<> OCEANOLOGY_PLUGIN_API UScriptStruct* StaticStruct<FOceanologyBubblesSettings>()
{
	return FOceanologyBubblesSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOceanologyBubblesSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyBubblesSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableBubbles_MetaData[] = {
		{ "Category", "Bubbles Settings" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyBubblesSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bubbles_MetaData[] = {
		{ "Category", "Bubbles Settings" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyBubblesSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BubbleSpawnCount_MetaData[] = {
		{ "Category", "Bubbles Settings" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyBubblesSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BubbleSpeed_MetaData[] = {
		{ "Category", "Bubbles Settings" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyBubblesSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BubblesMaterial_MetaData[] = {
		{ "Category", "Bubbles Settings" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyBubblesSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BubblesEffect_MetaData[] = {
		{ "Category", "Bubbles Settings" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyBubblesSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_EnableBubbles;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bubbles;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BubbleSpawnCount;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_BubbleSpeed;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_BubblesMaterial;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_BubblesEffect;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOceanologyBubblesSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOceanologyBubblesSettings_Statics::NewProp_EnableBubbles = { "EnableBubbles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyBubblesSettings, EnableBubbles), Z_Construct_UEnum_Oceanology_Plugin_EOceanologyBubbleActivation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableBubbles_MetaData), NewProp_EnableBubbles_MetaData) }; // 2927082868
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOceanologyBubblesSettings_Statics::NewProp_Bubbles = { "Bubbles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyBubblesSettings, Bubbles), Z_Construct_UScriptStruct_FOceanologyBubbles, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bubbles_MetaData), NewProp_Bubbles_MetaData) }; // 2296796678
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOceanologyBubblesSettings_Statics::NewProp_BubbleSpawnCount = { "BubbleSpawnCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyBubblesSettings, BubbleSpawnCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BubbleSpawnCount_MetaData), NewProp_BubbleSpawnCount_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyBubblesSettings_Statics::NewProp_BubbleSpeed = { "BubbleSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyBubblesSettings, BubbleSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BubbleSpeed_MetaData), NewProp_BubbleSpeed_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FOceanologyBubblesSettings_Statics::NewProp_BubblesMaterial = { "BubblesMaterial", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyBubblesSettings, BubblesMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BubblesMaterial_MetaData), NewProp_BubblesMaterial_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FOceanologyBubblesSettings_Statics::NewProp_BubblesEffect = { "BubblesEffect", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyBubblesSettings, BubblesEffect), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BubblesEffect_MetaData), NewProp_BubblesEffect_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOceanologyBubblesSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyBubblesSettings_Statics::NewProp_EnableBubbles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyBubblesSettings_Statics::NewProp_Bubbles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyBubblesSettings_Statics::NewProp_BubbleSpawnCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyBubblesSettings_Statics::NewProp_BubbleSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyBubblesSettings_Statics::NewProp_BubblesMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyBubblesSettings_Statics::NewProp_BubblesEffect,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanologyBubblesSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOceanologyBubblesSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Oceanology_Plugin,
	nullptr,
	&NewStructOps,
	"OceanologyBubblesSettings",
	Z_Construct_UScriptStruct_FOceanologyBubblesSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanologyBubblesSettings_Statics::PropPointers),
	sizeof(FOceanologyBubblesSettings),
	alignof(FOceanologyBubblesSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanologyBubblesSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOceanologyBubblesSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOceanologyBubblesSettings()
{
	if (!Z_Registration_Info_UScriptStruct_OceanologyBubblesSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OceanologyBubblesSettings.InnerSingleton, Z_Construct_UScriptStruct_FOceanologyBubblesSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OceanologyBubblesSettings.InnerSingleton;
}
// End ScriptStruct FOceanologyBubblesSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyBubblesSettings_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EOceanologyBubbleActivation_StaticEnum, TEXT("EOceanologyBubbleActivation"), &Z_Registration_Info_UEnum_EOceanologyBubbleActivation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2927082868U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOceanologyBubblesSettings::StaticStruct, Z_Construct_UScriptStruct_FOceanologyBubblesSettings_Statics::NewStructOps, TEXT("OceanologyBubblesSettings"), &Z_Registration_Info_UScriptStruct_OceanologyBubblesSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOceanologyBubblesSettings), 2775026522U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyBubblesSettings_h_209032722(TEXT("/Script/Oceanology_Plugin"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyBubblesSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyBubblesSettings_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyBubblesSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyBubblesSettings_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
