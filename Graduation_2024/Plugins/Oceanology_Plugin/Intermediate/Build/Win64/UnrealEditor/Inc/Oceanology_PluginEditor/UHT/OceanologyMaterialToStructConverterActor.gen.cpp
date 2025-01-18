// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Oceanology_PluginEditor/Public/Actors/OceanologyMaterialToStructConverterActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOceanologyMaterialToStructConverterActor() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_URuntimeVirtualTexture_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_AOceanologyWaterParent_NoRegister();
OCEANOLOGY_PLUGINEDITOR_API UClass* Z_Construct_UClass_AOceanologyMaterialToStructConverter();
OCEANOLOGY_PLUGINEDITOR_API UClass* Z_Construct_UClass_AOceanologyMaterialToStructConverter_NoRegister();
OCEANOLOGY_PLUGINEDITOR_API UEnum* Z_Construct_UEnum_Oceanology_PluginEditor_EOceanMaterialParameterType();
OCEANOLOGY_PLUGINEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FOceanMaterialParameter();
OCEANOLOGY_PLUGINEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FOceanMIDFile();
UPackage* Z_Construct_UPackage__Script_Oceanology_PluginEditor();
// End Cross Module References

// Begin Enum EOceanMaterialParameterType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOceanMaterialParameterType;
static UEnum* EOceanMaterialParameterType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOceanMaterialParameterType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOceanMaterialParameterType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Oceanology_PluginEditor_EOceanMaterialParameterType, (UObject*)Z_Construct_UPackage__Script_Oceanology_PluginEditor(), TEXT("EOceanMaterialParameterType"));
	}
	return Z_Registration_Info_UEnum_EOceanMaterialParameterType.OuterSingleton;
}
template<> OCEANOLOGY_PLUGINEDITOR_API UEnum* StaticEnum<EOceanMaterialParameterType>()
{
	return EOceanMaterialParameterType_StaticEnum();
}
struct Z_Construct_UEnum_Oceanology_PluginEditor_EOceanMaterialParameterType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyMaterialToStructConverterActor.h" },
		{ "None.Name", "None" },
		{ "Scalar.Name", "Scalar" },
		{ "StaticSwitch.Name", "StaticSwitch" },
		{ "Texture.Name", "Texture" },
		{ "Vector.Name", "Vector" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "None", (int64)None },
		{ "StaticSwitch", (int64)StaticSwitch },
		{ "Vector", (int64)Vector },
		{ "Scalar", (int64)Scalar },
		{ "Texture", (int64)Texture },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Oceanology_PluginEditor_EOceanMaterialParameterType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Oceanology_PluginEditor,
	nullptr,
	"EOceanMaterialParameterType",
	"EOceanMaterialParameterType",
	Z_Construct_UEnum_Oceanology_PluginEditor_EOceanMaterialParameterType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Oceanology_PluginEditor_EOceanMaterialParameterType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Oceanology_PluginEditor_EOceanMaterialParameterType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Oceanology_PluginEditor_EOceanMaterialParameterType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Oceanology_PluginEditor_EOceanMaterialParameterType()
{
	if (!Z_Registration_Info_UEnum_EOceanMaterialParameterType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOceanMaterialParameterType.InnerSingleton, Z_Construct_UEnum_Oceanology_PluginEditor_EOceanMaterialParameterType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOceanMaterialParameterType.InnerSingleton;
}
// End Enum EOceanMaterialParameterType

// Begin ScriptStruct FOceanMIDFile
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OceanMIDFile;
class UScriptStruct* FOceanMIDFile::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OceanMIDFile.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OceanMIDFile.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOceanMIDFile, (UObject*)Z_Construct_UPackage__Script_Oceanology_PluginEditor(), TEXT("OceanMIDFile"));
	}
	return Z_Registration_Info_UScriptStruct_OceanMIDFile.OuterSingleton;
}
template<> OCEANOLOGY_PLUGINEDITOR_API UScriptStruct* StaticStruct<FOceanMIDFile>()
{
	return FOceanMIDFile::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOceanMIDFile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyMaterialToStructConverterActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[] = {
		{ "Category", "Material To Struct Converter" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyMaterialToStructConverterActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MID_MetaData[] = {
		{ "Category", "Material To Struct Converter" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyMaterialToStructConverterActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_FileName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOceanMIDFile>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FOceanMIDFile_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanMIDFile, FileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileName_MetaData), NewProp_FileName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOceanMIDFile_Statics::NewProp_MID = { "MID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanMIDFile, MID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MID_MetaData), NewProp_MID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOceanMIDFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanMIDFile_Statics::NewProp_FileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanMIDFile_Statics::NewProp_MID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanMIDFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOceanMIDFile_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Oceanology_PluginEditor,
	nullptr,
	&NewStructOps,
	"OceanMIDFile",
	Z_Construct_UScriptStruct_FOceanMIDFile_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanMIDFile_Statics::PropPointers),
	sizeof(FOceanMIDFile),
	alignof(FOceanMIDFile),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanMIDFile_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOceanMIDFile_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOceanMIDFile()
{
	if (!Z_Registration_Info_UScriptStruct_OceanMIDFile.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OceanMIDFile.InnerSingleton, Z_Construct_UScriptStruct_FOceanMIDFile_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OceanMIDFile.InnerSingleton;
}
// End ScriptStruct FOceanMIDFile

// Begin ScriptStruct FOceanMaterialParameter
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OceanMaterialParameter;
class UScriptStruct* FOceanMaterialParameter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OceanMaterialParameter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OceanMaterialParameter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOceanMaterialParameter, (UObject*)Z_Construct_UPackage__Script_Oceanology_PluginEditor(), TEXT("OceanMaterialParameter"));
	}
	return Z_Registration_Info_UScriptStruct_OceanMaterialParameter.OuterSingleton;
}
template<> OCEANOLOGY_PLUGINEDITOR_API UScriptStruct* StaticStruct<FOceanMaterialParameter>()
{
	return FOceanMaterialParameter::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOceanMaterialParameter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyMaterialToStructConverterActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[] = {
		{ "Category", "Material To Struct Converter" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyMaterialToStructConverterActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Material To Struct Converter" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyMaterialToStructConverterActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "Material To Struct Converter" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyMaterialToStructConverterActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VectorValue_MetaData[] = {
		{ "Category", "Material To Struct Converter" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyMaterialToStructConverterActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScalarValue_MetaData[] = {
		{ "Category", "Material To Struct Converter" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyMaterialToStructConverterActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwitchValue_MetaData[] = {
		{ "Category", "Material To Struct Converter" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyMaterialToStructConverterActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureValue_MetaData[] = {
		{ "Category", "Material To Struct Converter" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyMaterialToStructConverterActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RVT_TextureValue_MetaData[] = {
		{ "Category", "Material To Struct Converter" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyMaterialToStructConverterActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Desc_MetaData[] = {
		{ "Category", "Material To Struct Converter" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyMaterialToStructConverterActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScalarMin_MetaData[] = {
		{ "Category", "Material To Struct Converter" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyMaterialToStructConverterActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScalarMax_MetaData[] = {
		{ "Category", "Material To Struct Converter" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyMaterialToStructConverterActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Group;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VectorValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScalarValue;
	static void NewProp_SwitchValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SwitchValue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextureValue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RVT_TextureValue;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Desc;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScalarMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScalarMax;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOceanMaterialParameter>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FOceanMaterialParameter_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanMaterialParameter, Group), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Group_MetaData), NewProp_Group_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FOceanMaterialParameter_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanMaterialParameter, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOceanMaterialParameter_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanMaterialParameter, Type), Z_Construct_UEnum_Oceanology_PluginEditor_EOceanMaterialParameterType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 33025306
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOceanMaterialParameter_Statics::NewProp_VectorValue = { "VectorValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanMaterialParameter, VectorValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VectorValue_MetaData), NewProp_VectorValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOceanMaterialParameter_Statics::NewProp_ScalarValue = { "ScalarValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanMaterialParameter, ScalarValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScalarValue_MetaData), NewProp_ScalarValue_MetaData) };
void Z_Construct_UScriptStruct_FOceanMaterialParameter_Statics::NewProp_SwitchValue_SetBit(void* Obj)
{
	((FOceanMaterialParameter*)Obj)->SwitchValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOceanMaterialParameter_Statics::NewProp_SwitchValue = { "SwitchValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FOceanMaterialParameter), &Z_Construct_UScriptStruct_FOceanMaterialParameter_Statics::NewProp_SwitchValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwitchValue_MetaData), NewProp_SwitchValue_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOceanMaterialParameter_Statics::NewProp_TextureValue = { "TextureValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanMaterialParameter, TextureValue), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureValue_MetaData), NewProp_TextureValue_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOceanMaterialParameter_Statics::NewProp_RVT_TextureValue = { "RVT_TextureValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanMaterialParameter, RVT_TextureValue), Z_Construct_UClass_URuntimeVirtualTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RVT_TextureValue_MetaData), NewProp_RVT_TextureValue_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOceanMaterialParameter_Statics::NewProp_Desc = { "Desc", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanMaterialParameter, Desc), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Desc_MetaData), NewProp_Desc_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOceanMaterialParameter_Statics::NewProp_ScalarMin = { "ScalarMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanMaterialParameter, ScalarMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScalarMin_MetaData), NewProp_ScalarMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOceanMaterialParameter_Statics::NewProp_ScalarMax = { "ScalarMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanMaterialParameter, ScalarMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScalarMax_MetaData), NewProp_ScalarMax_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOceanMaterialParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanMaterialParameter_Statics::NewProp_Group,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanMaterialParameter_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanMaterialParameter_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanMaterialParameter_Statics::NewProp_VectorValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanMaterialParameter_Statics::NewProp_ScalarValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanMaterialParameter_Statics::NewProp_SwitchValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanMaterialParameter_Statics::NewProp_TextureValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanMaterialParameter_Statics::NewProp_RVT_TextureValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanMaterialParameter_Statics::NewProp_Desc,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanMaterialParameter_Statics::NewProp_ScalarMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanMaterialParameter_Statics::NewProp_ScalarMax,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanMaterialParameter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOceanMaterialParameter_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Oceanology_PluginEditor,
	nullptr,
	&NewStructOps,
	"OceanMaterialParameter",
	Z_Construct_UScriptStruct_FOceanMaterialParameter_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanMaterialParameter_Statics::PropPointers),
	sizeof(FOceanMaterialParameter),
	alignof(FOceanMaterialParameter),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanMaterialParameter_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOceanMaterialParameter_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOceanMaterialParameter()
{
	if (!Z_Registration_Info_UScriptStruct_OceanMaterialParameter.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OceanMaterialParameter.InnerSingleton, Z_Construct_UScriptStruct_FOceanMaterialParameter_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OceanMaterialParameter.InnerSingleton;
}
// End ScriptStruct FOceanMaterialParameter

// Begin Class AOceanologyMaterialToStructConverter Function DumpMaterialParametersToStructs
struct Z_Construct_UFunction_AOceanologyMaterialToStructConverter_DumpMaterialParametersToStructs_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyMaterialToStructConverterActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOceanologyMaterialToStructConverter_DumpMaterialParametersToStructs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOceanologyMaterialToStructConverter, nullptr, "DumpMaterialParametersToStructs", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOceanologyMaterialToStructConverter_DumpMaterialParametersToStructs_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOceanologyMaterialToStructConverter_DumpMaterialParametersToStructs_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AOceanologyMaterialToStructConverter_DumpMaterialParametersToStructs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOceanologyMaterialToStructConverter_DumpMaterialParametersToStructs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOceanologyMaterialToStructConverter::execDumpMaterialParametersToStructs)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DumpMaterialParametersToStructs();
	P_NATIVE_END;
}
// End Class AOceanologyMaterialToStructConverter Function DumpMaterialParametersToStructs

// Begin Class AOceanologyMaterialToStructConverter
void AOceanologyMaterialToStructConverter::StaticRegisterNativesAOceanologyMaterialToStructConverter()
{
	UClass* Class = AOceanologyMaterialToStructConverter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DumpMaterialParametersToStructs", &AOceanologyMaterialToStructConverter::execDumpMaterialParametersToStructs },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOceanologyMaterialToStructConverter);
UClass* Z_Construct_UClass_AOceanologyMaterialToStructConverter_NoRegister()
{
	return AOceanologyMaterialToStructConverter::StaticClass();
}
struct Z_Construct_UClass_AOceanologyMaterialToStructConverter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/OceanologyMaterialToStructConverterActor.h" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyMaterialToStructConverterActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Water_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyMaterialToStructConverterActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupsToInclude_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyMaterialToStructConverterActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Water;
	static const UECodeGen_Private::FNamePropertyParams NewProp_GroupsToInclude_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GroupsToInclude;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AOceanologyMaterialToStructConverter_DumpMaterialParametersToStructs, "DumpMaterialParametersToStructs" }, // 1164918254
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOceanologyMaterialToStructConverter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOceanologyMaterialToStructConverter_Statics::NewProp_Water = { "Water", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOceanologyMaterialToStructConverter, Water), Z_Construct_UClass_AOceanologyWaterParent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Water_MetaData), NewProp_Water_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AOceanologyMaterialToStructConverter_Statics::NewProp_GroupsToInclude_Inner = { "GroupsToInclude", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AOceanologyMaterialToStructConverter_Statics::NewProp_GroupsToInclude = { "GroupsToInclude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOceanologyMaterialToStructConverter, GroupsToInclude), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupsToInclude_MetaData), NewProp_GroupsToInclude_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOceanologyMaterialToStructConverter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanologyMaterialToStructConverter_Statics::NewProp_Water,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanologyMaterialToStructConverter_Statics::NewProp_GroupsToInclude_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanologyMaterialToStructConverter_Statics::NewProp_GroupsToInclude,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOceanologyMaterialToStructConverter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AOceanologyMaterialToStructConverter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Oceanology_PluginEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOceanologyMaterialToStructConverter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AOceanologyMaterialToStructConverter_Statics::ClassParams = {
	&AOceanologyMaterialToStructConverter::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AOceanologyMaterialToStructConverter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AOceanologyMaterialToStructConverter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOceanologyMaterialToStructConverter_Statics::Class_MetaDataParams), Z_Construct_UClass_AOceanologyMaterialToStructConverter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AOceanologyMaterialToStructConverter()
{
	if (!Z_Registration_Info_UClass_AOceanologyMaterialToStructConverter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOceanologyMaterialToStructConverter.OuterSingleton, Z_Construct_UClass_AOceanologyMaterialToStructConverter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AOceanologyMaterialToStructConverter.OuterSingleton;
}
template<> OCEANOLOGY_PLUGINEDITOR_API UClass* StaticClass<AOceanologyMaterialToStructConverter>()
{
	return AOceanologyMaterialToStructConverter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AOceanologyMaterialToStructConverter);
AOceanologyMaterialToStructConverter::~AOceanologyMaterialToStructConverter() {}
// End Class AOceanologyMaterialToStructConverter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Programes_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_PluginEditor_Public_Actors_OceanologyMaterialToStructConverterActor_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EOceanMaterialParameterType_StaticEnum, TEXT("EOceanMaterialParameterType"), &Z_Registration_Info_UEnum_EOceanMaterialParameterType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 33025306U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOceanMIDFile::StaticStruct, Z_Construct_UScriptStruct_FOceanMIDFile_Statics::NewStructOps, TEXT("OceanMIDFile"), &Z_Registration_Info_UScriptStruct_OceanMIDFile, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOceanMIDFile), 3269858150U) },
		{ FOceanMaterialParameter::StaticStruct, Z_Construct_UScriptStruct_FOceanMaterialParameter_Statics::NewStructOps, TEXT("OceanMaterialParameter"), &Z_Registration_Info_UScriptStruct_OceanMaterialParameter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOceanMaterialParameter), 1408381017U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AOceanologyMaterialToStructConverter, AOceanologyMaterialToStructConverter::StaticClass, TEXT("AOceanologyMaterialToStructConverter"), &Z_Registration_Info_UClass_AOceanologyMaterialToStructConverter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOceanologyMaterialToStructConverter), 3260091760U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Programes_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_PluginEditor_Public_Actors_OceanologyMaterialToStructConverterActor_h_64247444(TEXT("/Script/Oceanology_PluginEditor"),
	Z_CompiledInDeferFile_FID_Programes_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_PluginEditor_Public_Actors_OceanologyMaterialToStructConverterActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Programes_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_PluginEditor_Public_Actors_OceanologyMaterialToStructConverterActor_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Programes_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_PluginEditor_Public_Actors_OceanologyMaterialToStructConverterActor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Programes_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_PluginEditor_Public_Actors_OceanologyMaterialToStructConverterActor_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Programes_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_PluginEditor_Public_Actors_OceanologyMaterialToStructConverterActor_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Programes_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_PluginEditor_Public_Actors_OceanologyMaterialToStructConverterActor_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
