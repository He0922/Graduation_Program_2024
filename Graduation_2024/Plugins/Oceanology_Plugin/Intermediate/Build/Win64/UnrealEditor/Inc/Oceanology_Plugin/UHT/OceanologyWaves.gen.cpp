// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Oceanology_Plugin/Public/Structs/OceanologyWaves.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOceanologyWaves() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollectionInstance_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_UOceanologyWavesHelper();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_UOceanologyWavesHelper_NoRegister();
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyWave_1();
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyWave_2();
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyWave_3();
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyWave_4();
UPackage* Z_Construct_UPackage__Script_Oceanology_Plugin();
// End Cross Module References

// Begin ScriptStruct FOceanologyWave_1
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OceanologyWave_1;
class UScriptStruct* FOceanologyWave_1::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OceanologyWave_1.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OceanologyWave_1.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOceanologyWave_1, (UObject*)Z_Construct_UPackage__Script_Oceanology_Plugin(), TEXT("OceanologyWave_1"));
	}
	return Z_Registration_Info_UScriptStruct_OceanologyWave_1.OuterSingleton;
}
template<> OCEANOLOGY_PLUGIN_API UScriptStruct* StaticStruct<FOceanologyWave_1>()
{
	return FOceanologyWave_1::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOceanologyWave_1_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyWaves.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Amplitude_1_MetaData[] = {
		{ "Category", "Wave" },
		{ "DisplayName", "Amplitude \xce\xa3""1" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyWaves.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Steepness_1_MetaData[] = {
		{ "Category", "Wave" },
		{ "DisplayName", "Steepness \xce\xa3""1" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyWaves.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speed_1_MetaData[] = {
		{ "Category", "Wave" },
		{ "DisplayName", "Speed \xce\xa3""1" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyWaves.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaveLength_1_MetaData[] = {
		{ "Category", "Wave" },
		{ "DisplayName", "WaveLength \xce\xa3""1" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyWaves.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_1_MetaData[] = {
		{ "Category", "Wave" },
		{ "DisplayName", "Direction \xce\xa3""1" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyWaves.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Amplitude_1;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Steepness_1;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Speed_1;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_WaveLength_1;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Direction_1;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOceanologyWave_1>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyWave_1_Statics::NewProp_Amplitude_1 = { "Amplitude_1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyWave_1, Amplitude_1), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Amplitude_1_MetaData), NewProp_Amplitude_1_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyWave_1_Statics::NewProp_Steepness_1 = { "Steepness_1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyWave_1, Steepness_1), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Steepness_1_MetaData), NewProp_Steepness_1_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyWave_1_Statics::NewProp_Speed_1 = { "Speed_1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyWave_1, Speed_1), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speed_1_MetaData), NewProp_Speed_1_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyWave_1_Statics::NewProp_WaveLength_1 = { "WaveLength_1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyWave_1, WaveLength_1), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaveLength_1_MetaData), NewProp_WaveLength_1_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyWave_1_Statics::NewProp_Direction_1 = { "Direction_1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyWave_1, Direction_1), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_1_MetaData), NewProp_Direction_1_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOceanologyWave_1_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyWave_1_Statics::NewProp_Amplitude_1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyWave_1_Statics::NewProp_Steepness_1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyWave_1_Statics::NewProp_Speed_1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyWave_1_Statics::NewProp_WaveLength_1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyWave_1_Statics::NewProp_Direction_1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanologyWave_1_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOceanologyWave_1_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Oceanology_Plugin,
	nullptr,
	&NewStructOps,
	"OceanologyWave_1",
	Z_Construct_UScriptStruct_FOceanologyWave_1_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanologyWave_1_Statics::PropPointers),
	sizeof(FOceanologyWave_1),
	alignof(FOceanologyWave_1),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanologyWave_1_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOceanologyWave_1_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOceanologyWave_1()
{
	if (!Z_Registration_Info_UScriptStruct_OceanologyWave_1.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OceanologyWave_1.InnerSingleton, Z_Construct_UScriptStruct_FOceanologyWave_1_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OceanologyWave_1.InnerSingleton;
}
// End ScriptStruct FOceanologyWave_1

// Begin ScriptStruct FOceanologyWave_2
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OceanologyWave_2;
class UScriptStruct* FOceanologyWave_2::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OceanologyWave_2.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OceanologyWave_2.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOceanologyWave_2, (UObject*)Z_Construct_UPackage__Script_Oceanology_Plugin(), TEXT("OceanologyWave_2"));
	}
	return Z_Registration_Info_UScriptStruct_OceanologyWave_2.OuterSingleton;
}
template<> OCEANOLOGY_PLUGIN_API UScriptStruct* StaticStruct<FOceanologyWave_2>()
{
	return FOceanologyWave_2::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOceanologyWave_2_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyWaves.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Amplitude_2_MetaData[] = {
		{ "Category", "Wave" },
		{ "DisplayName", "Amplitude \xce\xa3""2" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyWaves.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Steepness_2_MetaData[] = {
		{ "Category", "Wave" },
		{ "DisplayName", "Steepness \xce\xa3""2" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyWaves.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speed_2_MetaData[] = {
		{ "Category", "Wave" },
		{ "DisplayName", "Speed \xce\xa3""2" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyWaves.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaveLength_2_MetaData[] = {
		{ "Category", "Wave" },
		{ "DisplayName", "WaveLength \xce\xa3""2" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyWaves.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_2_MetaData[] = {
		{ "Category", "Wave" },
		{ "DisplayName", "Direction \xce\xa3""2" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyWaves.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Amplitude_2;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Steepness_2;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Speed_2;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_WaveLength_2;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Direction_2;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOceanologyWave_2>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyWave_2_Statics::NewProp_Amplitude_2 = { "Amplitude_2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyWave_2, Amplitude_2), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Amplitude_2_MetaData), NewProp_Amplitude_2_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyWave_2_Statics::NewProp_Steepness_2 = { "Steepness_2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyWave_2, Steepness_2), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Steepness_2_MetaData), NewProp_Steepness_2_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyWave_2_Statics::NewProp_Speed_2 = { "Speed_2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyWave_2, Speed_2), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speed_2_MetaData), NewProp_Speed_2_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyWave_2_Statics::NewProp_WaveLength_2 = { "WaveLength_2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyWave_2, WaveLength_2), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaveLength_2_MetaData), NewProp_WaveLength_2_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyWave_2_Statics::NewProp_Direction_2 = { "Direction_2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyWave_2, Direction_2), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_2_MetaData), NewProp_Direction_2_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOceanologyWave_2_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyWave_2_Statics::NewProp_Amplitude_2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyWave_2_Statics::NewProp_Steepness_2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyWave_2_Statics::NewProp_Speed_2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyWave_2_Statics::NewProp_WaveLength_2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyWave_2_Statics::NewProp_Direction_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanologyWave_2_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOceanologyWave_2_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Oceanology_Plugin,
	nullptr,
	&NewStructOps,
	"OceanologyWave_2",
	Z_Construct_UScriptStruct_FOceanologyWave_2_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanologyWave_2_Statics::PropPointers),
	sizeof(FOceanologyWave_2),
	alignof(FOceanologyWave_2),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanologyWave_2_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOceanologyWave_2_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOceanologyWave_2()
{
	if (!Z_Registration_Info_UScriptStruct_OceanologyWave_2.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OceanologyWave_2.InnerSingleton, Z_Construct_UScriptStruct_FOceanologyWave_2_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OceanologyWave_2.InnerSingleton;
}
// End ScriptStruct FOceanologyWave_2

// Begin ScriptStruct FOceanologyWave_3
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OceanologyWave_3;
class UScriptStruct* FOceanologyWave_3::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OceanologyWave_3.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OceanologyWave_3.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOceanologyWave_3, (UObject*)Z_Construct_UPackage__Script_Oceanology_Plugin(), TEXT("OceanologyWave_3"));
	}
	return Z_Registration_Info_UScriptStruct_OceanologyWave_3.OuterSingleton;
}
template<> OCEANOLOGY_PLUGIN_API UScriptStruct* StaticStruct<FOceanologyWave_3>()
{
	return FOceanologyWave_3::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOceanologyWave_3_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyWaves.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Amplitude_3_MetaData[] = {
		{ "Category", "Wave" },
		{ "DisplayName", "Amplitude \xce\xa3""3" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyWaves.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Steepness_3_MetaData[] = {
		{ "Category", "Wave" },
		{ "DisplayName", "Steepness \xce\xa3""3" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyWaves.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speed_3_MetaData[] = {
		{ "Category", "Wave" },
		{ "DisplayName", "Speed \xce\xa3""3" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyWaves.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaveLength_3_MetaData[] = {
		{ "Category", "Wave" },
		{ "DisplayName", "WaveLength \xce\xa3""3" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyWaves.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_3_MetaData[] = {
		{ "Category", "Wave" },
		{ "DisplayName", "Direction \xce\xa3""3" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyWaves.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Amplitude_3;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Steepness_3;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Speed_3;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_WaveLength_3;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Direction_3;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOceanologyWave_3>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyWave_3_Statics::NewProp_Amplitude_3 = { "Amplitude_3", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyWave_3, Amplitude_3), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Amplitude_3_MetaData), NewProp_Amplitude_3_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyWave_3_Statics::NewProp_Steepness_3 = { "Steepness_3", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyWave_3, Steepness_3), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Steepness_3_MetaData), NewProp_Steepness_3_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyWave_3_Statics::NewProp_Speed_3 = { "Speed_3", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyWave_3, Speed_3), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speed_3_MetaData), NewProp_Speed_3_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyWave_3_Statics::NewProp_WaveLength_3 = { "WaveLength_3", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyWave_3, WaveLength_3), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaveLength_3_MetaData), NewProp_WaveLength_3_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyWave_3_Statics::NewProp_Direction_3 = { "Direction_3", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyWave_3, Direction_3), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_3_MetaData), NewProp_Direction_3_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOceanologyWave_3_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyWave_3_Statics::NewProp_Amplitude_3,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyWave_3_Statics::NewProp_Steepness_3,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyWave_3_Statics::NewProp_Speed_3,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyWave_3_Statics::NewProp_WaveLength_3,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyWave_3_Statics::NewProp_Direction_3,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanologyWave_3_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOceanologyWave_3_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Oceanology_Plugin,
	nullptr,
	&NewStructOps,
	"OceanologyWave_3",
	Z_Construct_UScriptStruct_FOceanologyWave_3_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanologyWave_3_Statics::PropPointers),
	sizeof(FOceanologyWave_3),
	alignof(FOceanologyWave_3),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanologyWave_3_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOceanologyWave_3_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOceanologyWave_3()
{
	if (!Z_Registration_Info_UScriptStruct_OceanologyWave_3.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OceanologyWave_3.InnerSingleton, Z_Construct_UScriptStruct_FOceanologyWave_3_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OceanologyWave_3.InnerSingleton;
}
// End ScriptStruct FOceanologyWave_3

// Begin ScriptStruct FOceanologyWave_4
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OceanologyWave_4;
class UScriptStruct* FOceanologyWave_4::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OceanologyWave_4.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OceanologyWave_4.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOceanologyWave_4, (UObject*)Z_Construct_UPackage__Script_Oceanology_Plugin(), TEXT("OceanologyWave_4"));
	}
	return Z_Registration_Info_UScriptStruct_OceanologyWave_4.OuterSingleton;
}
template<> OCEANOLOGY_PLUGIN_API UScriptStruct* StaticStruct<FOceanologyWave_4>()
{
	return FOceanologyWave_4::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOceanologyWave_4_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyWaves.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Amplitude_4_MetaData[] = {
		{ "Category", "Wave" },
		{ "DisplayName", "Amplitude \xce\xa3""4" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyWaves.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Steepness_4_MetaData[] = {
		{ "Category", "Wave" },
		{ "DisplayName", "Steepness \xce\xa3""4" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyWaves.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speed_4_MetaData[] = {
		{ "Category", "Wave" },
		{ "DisplayName", "Speed \xce\xa3""4" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyWaves.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaveLength_4_MetaData[] = {
		{ "Category", "Wave" },
		{ "DisplayName", "WaveLength \xce\xa3""4" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyWaves.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_4_MetaData[] = {
		{ "Category", "Wave" },
		{ "DisplayName", "Direction \xce\xa3""4" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyWaves.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Amplitude_4;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Steepness_4;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Speed_4;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_WaveLength_4;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Direction_4;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOceanologyWave_4>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyWave_4_Statics::NewProp_Amplitude_4 = { "Amplitude_4", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyWave_4, Amplitude_4), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Amplitude_4_MetaData), NewProp_Amplitude_4_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyWave_4_Statics::NewProp_Steepness_4 = { "Steepness_4", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyWave_4, Steepness_4), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Steepness_4_MetaData), NewProp_Steepness_4_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyWave_4_Statics::NewProp_Speed_4 = { "Speed_4", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyWave_4, Speed_4), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speed_4_MetaData), NewProp_Speed_4_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyWave_4_Statics::NewProp_WaveLength_4 = { "WaveLength_4", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyWave_4, WaveLength_4), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaveLength_4_MetaData), NewProp_WaveLength_4_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyWave_4_Statics::NewProp_Direction_4 = { "Direction_4", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyWave_4, Direction_4), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_4_MetaData), NewProp_Direction_4_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOceanologyWave_4_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyWave_4_Statics::NewProp_Amplitude_4,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyWave_4_Statics::NewProp_Steepness_4,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyWave_4_Statics::NewProp_Speed_4,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyWave_4_Statics::NewProp_WaveLength_4,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyWave_4_Statics::NewProp_Direction_4,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanologyWave_4_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOceanologyWave_4_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Oceanology_Plugin,
	nullptr,
	&NewStructOps,
	"OceanologyWave_4",
	Z_Construct_UScriptStruct_FOceanologyWave_4_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanologyWave_4_Statics::PropPointers),
	sizeof(FOceanologyWave_4),
	alignof(FOceanologyWave_4),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanologyWave_4_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOceanologyWave_4_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOceanologyWave_4()
{
	if (!Z_Registration_Info_UScriptStruct_OceanologyWave_4.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OceanologyWave_4.InnerSingleton, Z_Construct_UScriptStruct_FOceanologyWave_4_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OceanologyWave_4.InnerSingleton;
}
// End ScriptStruct FOceanologyWave_4

// Begin Class UOceanologyWavesHelper Function LerpWave_1
struct Z_Construct_UFunction_UOceanologyWavesHelper_LerpWave_1_Statics
{
	struct OceanologyWavesHelper_eventLerpWave_1_Parms
	{
		FOceanologyWave_1 A;
		FOceanologyWave_1 B;
		double Alpha;
		FOceanologyWave_1 OutResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Wave 1" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyWaves.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Alpha;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyWavesHelper_LerpWave_1_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyWavesHelper_eventLerpWave_1_Parms, A), Z_Construct_UScriptStruct_FOceanologyWave_1, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 2882325646
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyWavesHelper_LerpWave_1_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyWavesHelper_eventLerpWave_1_Parms, B), Z_Construct_UScriptStruct_FOceanologyWave_1, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) }; // 2882325646
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UOceanologyWavesHelper_LerpWave_1_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyWavesHelper_eventLerpWave_1_Parms, Alpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Alpha_MetaData), NewProp_Alpha_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyWavesHelper_LerpWave_1_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyWavesHelper_eventLerpWave_1_Parms, OutResult), Z_Construct_UScriptStruct_FOceanologyWave_1, METADATA_PARAMS(0, nullptr) }; // 2882325646
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanologyWavesHelper_LerpWave_1_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyWavesHelper_LerpWave_1_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyWavesHelper_LerpWave_1_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyWavesHelper_LerpWave_1_Statics::NewProp_Alpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyWavesHelper_LerpWave_1_Statics::NewProp_OutResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyWavesHelper_LerpWave_1_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologyWavesHelper_LerpWave_1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologyWavesHelper, nullptr, "LerpWave_1", nullptr, nullptr, Z_Construct_UFunction_UOceanologyWavesHelper_LerpWave_1_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyWavesHelper_LerpWave_1_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOceanologyWavesHelper_LerpWave_1_Statics::OceanologyWavesHelper_eventLerpWave_1_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyWavesHelper_LerpWave_1_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologyWavesHelper_LerpWave_1_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOceanologyWavesHelper_LerpWave_1_Statics::OceanologyWavesHelper_eventLerpWave_1_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanologyWavesHelper_LerpWave_1()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologyWavesHelper_LerpWave_1_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologyWavesHelper::execLerpWave_1)
{
	P_GET_STRUCT_REF(FOceanologyWave_1,Z_Param_Out_A);
	P_GET_STRUCT_REF(FOceanologyWave_1,Z_Param_Out_B);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Alpha);
	P_GET_STRUCT_REF(FOceanologyWave_1,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOceanologyWavesHelper::LerpWave_1(Z_Param_Out_A,Z_Param_Out_B,Z_Param_Alpha,Z_Param_Out_OutResult);
	P_NATIVE_END;
}
// End Class UOceanologyWavesHelper Function LerpWave_1

// Begin Class UOceanologyWavesHelper Function LerpWave_2
struct Z_Construct_UFunction_UOceanologyWavesHelper_LerpWave_2_Statics
{
	struct OceanologyWavesHelper_eventLerpWave_2_Parms
	{
		FOceanologyWave_2 A;
		FOceanologyWave_2 B;
		double Alpha;
		FOceanologyWave_2 OutResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Wave 2" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyWaves.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Alpha;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyWavesHelper_LerpWave_2_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyWavesHelper_eventLerpWave_2_Parms, A), Z_Construct_UScriptStruct_FOceanologyWave_2, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 4048543760
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyWavesHelper_LerpWave_2_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyWavesHelper_eventLerpWave_2_Parms, B), Z_Construct_UScriptStruct_FOceanologyWave_2, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) }; // 4048543760
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UOceanologyWavesHelper_LerpWave_2_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyWavesHelper_eventLerpWave_2_Parms, Alpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Alpha_MetaData), NewProp_Alpha_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyWavesHelper_LerpWave_2_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyWavesHelper_eventLerpWave_2_Parms, OutResult), Z_Construct_UScriptStruct_FOceanologyWave_2, METADATA_PARAMS(0, nullptr) }; // 4048543760
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanologyWavesHelper_LerpWave_2_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyWavesHelper_LerpWave_2_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyWavesHelper_LerpWave_2_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyWavesHelper_LerpWave_2_Statics::NewProp_Alpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyWavesHelper_LerpWave_2_Statics::NewProp_OutResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyWavesHelper_LerpWave_2_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologyWavesHelper_LerpWave_2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologyWavesHelper, nullptr, "LerpWave_2", nullptr, nullptr, Z_Construct_UFunction_UOceanologyWavesHelper_LerpWave_2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyWavesHelper_LerpWave_2_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOceanologyWavesHelper_LerpWave_2_Statics::OceanologyWavesHelper_eventLerpWave_2_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyWavesHelper_LerpWave_2_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologyWavesHelper_LerpWave_2_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOceanologyWavesHelper_LerpWave_2_Statics::OceanologyWavesHelper_eventLerpWave_2_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanologyWavesHelper_LerpWave_2()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologyWavesHelper_LerpWave_2_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologyWavesHelper::execLerpWave_2)
{
	P_GET_STRUCT_REF(FOceanologyWave_2,Z_Param_Out_A);
	P_GET_STRUCT_REF(FOceanologyWave_2,Z_Param_Out_B);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Alpha);
	P_GET_STRUCT_REF(FOceanologyWave_2,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOceanologyWavesHelper::LerpWave_2(Z_Param_Out_A,Z_Param_Out_B,Z_Param_Alpha,Z_Param_Out_OutResult);
	P_NATIVE_END;
}
// End Class UOceanologyWavesHelper Function LerpWave_2

// Begin Class UOceanologyWavesHelper Function LerpWave_3
struct Z_Construct_UFunction_UOceanologyWavesHelper_LerpWave_3_Statics
{
	struct OceanologyWavesHelper_eventLerpWave_3_Parms
	{
		FOceanologyWave_3 A;
		FOceanologyWave_3 B;
		double Alpha;
		FOceanologyWave_3 OutResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Wave 3" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyWaves.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Alpha;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyWavesHelper_LerpWave_3_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyWavesHelper_eventLerpWave_3_Parms, A), Z_Construct_UScriptStruct_FOceanologyWave_3, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 150167157
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyWavesHelper_LerpWave_3_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyWavesHelper_eventLerpWave_3_Parms, B), Z_Construct_UScriptStruct_FOceanologyWave_3, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) }; // 150167157
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UOceanologyWavesHelper_LerpWave_3_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyWavesHelper_eventLerpWave_3_Parms, Alpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Alpha_MetaData), NewProp_Alpha_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyWavesHelper_LerpWave_3_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyWavesHelper_eventLerpWave_3_Parms, OutResult), Z_Construct_UScriptStruct_FOceanologyWave_3, METADATA_PARAMS(0, nullptr) }; // 150167157
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanologyWavesHelper_LerpWave_3_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyWavesHelper_LerpWave_3_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyWavesHelper_LerpWave_3_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyWavesHelper_LerpWave_3_Statics::NewProp_Alpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyWavesHelper_LerpWave_3_Statics::NewProp_OutResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyWavesHelper_LerpWave_3_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologyWavesHelper_LerpWave_3_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologyWavesHelper, nullptr, "LerpWave_3", nullptr, nullptr, Z_Construct_UFunction_UOceanologyWavesHelper_LerpWave_3_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyWavesHelper_LerpWave_3_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOceanologyWavesHelper_LerpWave_3_Statics::OceanologyWavesHelper_eventLerpWave_3_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyWavesHelper_LerpWave_3_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologyWavesHelper_LerpWave_3_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOceanologyWavesHelper_LerpWave_3_Statics::OceanologyWavesHelper_eventLerpWave_3_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanologyWavesHelper_LerpWave_3()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologyWavesHelper_LerpWave_3_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologyWavesHelper::execLerpWave_3)
{
	P_GET_STRUCT_REF(FOceanologyWave_3,Z_Param_Out_A);
	P_GET_STRUCT_REF(FOceanologyWave_3,Z_Param_Out_B);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Alpha);
	P_GET_STRUCT_REF(FOceanologyWave_3,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOceanologyWavesHelper::LerpWave_3(Z_Param_Out_A,Z_Param_Out_B,Z_Param_Alpha,Z_Param_Out_OutResult);
	P_NATIVE_END;
}
// End Class UOceanologyWavesHelper Function LerpWave_3

// Begin Class UOceanologyWavesHelper Function LerpWave_4
struct Z_Construct_UFunction_UOceanologyWavesHelper_LerpWave_4_Statics
{
	struct OceanologyWavesHelper_eventLerpWave_4_Parms
	{
		FOceanologyWave_4 A;
		FOceanologyWave_4 B;
		double Alpha;
		FOceanologyWave_4 OutResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Wave 4" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyWaves.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Alpha;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyWavesHelper_LerpWave_4_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyWavesHelper_eventLerpWave_4_Parms, A), Z_Construct_UScriptStruct_FOceanologyWave_4, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 1244214835
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyWavesHelper_LerpWave_4_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyWavesHelper_eventLerpWave_4_Parms, B), Z_Construct_UScriptStruct_FOceanologyWave_4, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) }; // 1244214835
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UOceanologyWavesHelper_LerpWave_4_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyWavesHelper_eventLerpWave_4_Parms, Alpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Alpha_MetaData), NewProp_Alpha_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyWavesHelper_LerpWave_4_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyWavesHelper_eventLerpWave_4_Parms, OutResult), Z_Construct_UScriptStruct_FOceanologyWave_4, METADATA_PARAMS(0, nullptr) }; // 1244214835
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanologyWavesHelper_LerpWave_4_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyWavesHelper_LerpWave_4_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyWavesHelper_LerpWave_4_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyWavesHelper_LerpWave_4_Statics::NewProp_Alpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyWavesHelper_LerpWave_4_Statics::NewProp_OutResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyWavesHelper_LerpWave_4_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologyWavesHelper_LerpWave_4_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologyWavesHelper, nullptr, "LerpWave_4", nullptr, nullptr, Z_Construct_UFunction_UOceanologyWavesHelper_LerpWave_4_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyWavesHelper_LerpWave_4_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOceanologyWavesHelper_LerpWave_4_Statics::OceanologyWavesHelper_eventLerpWave_4_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyWavesHelper_LerpWave_4_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologyWavesHelper_LerpWave_4_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOceanologyWavesHelper_LerpWave_4_Statics::OceanologyWavesHelper_eventLerpWave_4_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanologyWavesHelper_LerpWave_4()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologyWavesHelper_LerpWave_4_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologyWavesHelper::execLerpWave_4)
{
	P_GET_STRUCT_REF(FOceanologyWave_4,Z_Param_Out_A);
	P_GET_STRUCT_REF(FOceanologyWave_4,Z_Param_Out_B);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Alpha);
	P_GET_STRUCT_REF(FOceanologyWave_4,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOceanologyWavesHelper::LerpWave_4(Z_Param_Out_A,Z_Param_Out_B,Z_Param_Alpha,Z_Param_Out_OutResult);
	P_NATIVE_END;
}
// End Class UOceanologyWavesHelper Function LerpWave_4

// Begin Class UOceanologyWavesHelper Function SetMaterialParameterCollectionsWave_1
struct Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParameterCollectionsWave_1_Statics
{
	struct OceanologyWavesHelper_eventSetMaterialParameterCollectionsWave_1_Parms
	{
		UMaterialParameterCollectionInstance* MPCI;
		FOceanologyWave_1 Wave_1;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Wave 1" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyWaves.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Wave_1_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MPCI;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Wave_1;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParameterCollectionsWave_1_Statics::NewProp_MPCI = { "MPCI", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyWavesHelper_eventSetMaterialParameterCollectionsWave_1_Parms, MPCI), Z_Construct_UClass_UMaterialParameterCollectionInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParameterCollectionsWave_1_Statics::NewProp_Wave_1 = { "Wave_1", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyWavesHelper_eventSetMaterialParameterCollectionsWave_1_Parms, Wave_1), Z_Construct_UScriptStruct_FOceanologyWave_1, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Wave_1_MetaData), NewProp_Wave_1_MetaData) }; // 2882325646
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParameterCollectionsWave_1_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParameterCollectionsWave_1_Statics::NewProp_MPCI,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParameterCollectionsWave_1_Statics::NewProp_Wave_1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParameterCollectionsWave_1_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParameterCollectionsWave_1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologyWavesHelper, nullptr, "SetMaterialParameterCollectionsWave_1", nullptr, nullptr, Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParameterCollectionsWave_1_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParameterCollectionsWave_1_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParameterCollectionsWave_1_Statics::OceanologyWavesHelper_eventSetMaterialParameterCollectionsWave_1_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParameterCollectionsWave_1_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParameterCollectionsWave_1_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParameterCollectionsWave_1_Statics::OceanologyWavesHelper_eventSetMaterialParameterCollectionsWave_1_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParameterCollectionsWave_1()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParameterCollectionsWave_1_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologyWavesHelper::execSetMaterialParameterCollectionsWave_1)
{
	P_GET_OBJECT(UMaterialParameterCollectionInstance,Z_Param_MPCI);
	P_GET_STRUCT_REF(FOceanologyWave_1,Z_Param_Out_Wave_1);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOceanologyWavesHelper::SetMaterialParameterCollectionsWave_1(Z_Param_MPCI,Z_Param_Out_Wave_1);
	P_NATIVE_END;
}
// End Class UOceanologyWavesHelper Function SetMaterialParameterCollectionsWave_1

// Begin Class UOceanologyWavesHelper Function SetMaterialParameterCollectionsWave_2
struct Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParameterCollectionsWave_2_Statics
{
	struct OceanologyWavesHelper_eventSetMaterialParameterCollectionsWave_2_Parms
	{
		UMaterialParameterCollectionInstance* MPCI;
		FOceanologyWave_2 Wave_2;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Wave 2" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyWaves.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Wave_2_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MPCI;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Wave_2;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParameterCollectionsWave_2_Statics::NewProp_MPCI = { "MPCI", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyWavesHelper_eventSetMaterialParameterCollectionsWave_2_Parms, MPCI), Z_Construct_UClass_UMaterialParameterCollectionInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParameterCollectionsWave_2_Statics::NewProp_Wave_2 = { "Wave_2", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyWavesHelper_eventSetMaterialParameterCollectionsWave_2_Parms, Wave_2), Z_Construct_UScriptStruct_FOceanologyWave_2, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Wave_2_MetaData), NewProp_Wave_2_MetaData) }; // 4048543760
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParameterCollectionsWave_2_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParameterCollectionsWave_2_Statics::NewProp_MPCI,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParameterCollectionsWave_2_Statics::NewProp_Wave_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParameterCollectionsWave_2_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParameterCollectionsWave_2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologyWavesHelper, nullptr, "SetMaterialParameterCollectionsWave_2", nullptr, nullptr, Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParameterCollectionsWave_2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParameterCollectionsWave_2_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParameterCollectionsWave_2_Statics::OceanologyWavesHelper_eventSetMaterialParameterCollectionsWave_2_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParameterCollectionsWave_2_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParameterCollectionsWave_2_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParameterCollectionsWave_2_Statics::OceanologyWavesHelper_eventSetMaterialParameterCollectionsWave_2_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParameterCollectionsWave_2()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParameterCollectionsWave_2_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologyWavesHelper::execSetMaterialParameterCollectionsWave_2)
{
	P_GET_OBJECT(UMaterialParameterCollectionInstance,Z_Param_MPCI);
	P_GET_STRUCT_REF(FOceanologyWave_2,Z_Param_Out_Wave_2);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOceanologyWavesHelper::SetMaterialParameterCollectionsWave_2(Z_Param_MPCI,Z_Param_Out_Wave_2);
	P_NATIVE_END;
}
// End Class UOceanologyWavesHelper Function SetMaterialParameterCollectionsWave_2

// Begin Class UOceanologyWavesHelper Function SetMaterialParameterCollectionsWave_3
struct Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParameterCollectionsWave_3_Statics
{
	struct OceanologyWavesHelper_eventSetMaterialParameterCollectionsWave_3_Parms
	{
		UMaterialParameterCollectionInstance* MPCI;
		FOceanologyWave_3 Wave_3;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Wave 3" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyWaves.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Wave_3_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MPCI;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Wave_3;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParameterCollectionsWave_3_Statics::NewProp_MPCI = { "MPCI", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyWavesHelper_eventSetMaterialParameterCollectionsWave_3_Parms, MPCI), Z_Construct_UClass_UMaterialParameterCollectionInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParameterCollectionsWave_3_Statics::NewProp_Wave_3 = { "Wave_3", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyWavesHelper_eventSetMaterialParameterCollectionsWave_3_Parms, Wave_3), Z_Construct_UScriptStruct_FOceanologyWave_3, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Wave_3_MetaData), NewProp_Wave_3_MetaData) }; // 150167157
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParameterCollectionsWave_3_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParameterCollectionsWave_3_Statics::NewProp_MPCI,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParameterCollectionsWave_3_Statics::NewProp_Wave_3,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParameterCollectionsWave_3_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParameterCollectionsWave_3_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologyWavesHelper, nullptr, "SetMaterialParameterCollectionsWave_3", nullptr, nullptr, Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParameterCollectionsWave_3_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParameterCollectionsWave_3_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParameterCollectionsWave_3_Statics::OceanologyWavesHelper_eventSetMaterialParameterCollectionsWave_3_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParameterCollectionsWave_3_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParameterCollectionsWave_3_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParameterCollectionsWave_3_Statics::OceanologyWavesHelper_eventSetMaterialParameterCollectionsWave_3_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParameterCollectionsWave_3()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParameterCollectionsWave_3_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologyWavesHelper::execSetMaterialParameterCollectionsWave_3)
{
	P_GET_OBJECT(UMaterialParameterCollectionInstance,Z_Param_MPCI);
	P_GET_STRUCT_REF(FOceanologyWave_3,Z_Param_Out_Wave_3);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOceanologyWavesHelper::SetMaterialParameterCollectionsWave_3(Z_Param_MPCI,Z_Param_Out_Wave_3);
	P_NATIVE_END;
}
// End Class UOceanologyWavesHelper Function SetMaterialParameterCollectionsWave_3

// Begin Class UOceanologyWavesHelper Function SetMaterialParameterCollectionsWave_4
struct Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParameterCollectionsWave_4_Statics
{
	struct OceanologyWavesHelper_eventSetMaterialParameterCollectionsWave_4_Parms
	{
		UMaterialParameterCollectionInstance* MPCI;
		FOceanologyWave_4 Wave_4;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Wave 4" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyWaves.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Wave_4_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MPCI;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Wave_4;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParameterCollectionsWave_4_Statics::NewProp_MPCI = { "MPCI", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyWavesHelper_eventSetMaterialParameterCollectionsWave_4_Parms, MPCI), Z_Construct_UClass_UMaterialParameterCollectionInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParameterCollectionsWave_4_Statics::NewProp_Wave_4 = { "Wave_4", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyWavesHelper_eventSetMaterialParameterCollectionsWave_4_Parms, Wave_4), Z_Construct_UScriptStruct_FOceanologyWave_4, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Wave_4_MetaData), NewProp_Wave_4_MetaData) }; // 1244214835
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParameterCollectionsWave_4_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParameterCollectionsWave_4_Statics::NewProp_MPCI,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParameterCollectionsWave_4_Statics::NewProp_Wave_4,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParameterCollectionsWave_4_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParameterCollectionsWave_4_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologyWavesHelper, nullptr, "SetMaterialParameterCollectionsWave_4", nullptr, nullptr, Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParameterCollectionsWave_4_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParameterCollectionsWave_4_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParameterCollectionsWave_4_Statics::OceanologyWavesHelper_eventSetMaterialParameterCollectionsWave_4_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParameterCollectionsWave_4_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParameterCollectionsWave_4_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParameterCollectionsWave_4_Statics::OceanologyWavesHelper_eventSetMaterialParameterCollectionsWave_4_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParameterCollectionsWave_4()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParameterCollectionsWave_4_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologyWavesHelper::execSetMaterialParameterCollectionsWave_4)
{
	P_GET_OBJECT(UMaterialParameterCollectionInstance,Z_Param_MPCI);
	P_GET_STRUCT_REF(FOceanologyWave_4,Z_Param_Out_Wave_4);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOceanologyWavesHelper::SetMaterialParameterCollectionsWave_4(Z_Param_MPCI,Z_Param_Out_Wave_4);
	P_NATIVE_END;
}
// End Class UOceanologyWavesHelper Function SetMaterialParameterCollectionsWave_4

// Begin Class UOceanologyWavesHelper Function SetMaterialParametersWave_1
struct Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParametersWave_1_Statics
{
	struct OceanologyWavesHelper_eventSetMaterialParametersWave_1_Parms
	{
		UMaterialInstanceDynamic* MID;
		FOceanologyWave_1 Wave_1;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Wave 1" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyWaves.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Wave_1_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Wave_1;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParametersWave_1_Statics::NewProp_MID = { "MID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyWavesHelper_eventSetMaterialParametersWave_1_Parms, MID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParametersWave_1_Statics::NewProp_Wave_1 = { "Wave_1", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyWavesHelper_eventSetMaterialParametersWave_1_Parms, Wave_1), Z_Construct_UScriptStruct_FOceanologyWave_1, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Wave_1_MetaData), NewProp_Wave_1_MetaData) }; // 2882325646
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParametersWave_1_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParametersWave_1_Statics::NewProp_MID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParametersWave_1_Statics::NewProp_Wave_1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParametersWave_1_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParametersWave_1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologyWavesHelper, nullptr, "SetMaterialParametersWave_1", nullptr, nullptr, Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParametersWave_1_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParametersWave_1_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParametersWave_1_Statics::OceanologyWavesHelper_eventSetMaterialParametersWave_1_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParametersWave_1_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParametersWave_1_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParametersWave_1_Statics::OceanologyWavesHelper_eventSetMaterialParametersWave_1_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParametersWave_1()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParametersWave_1_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologyWavesHelper::execSetMaterialParametersWave_1)
{
	P_GET_OBJECT(UMaterialInstanceDynamic,Z_Param_MID);
	P_GET_STRUCT_REF(FOceanologyWave_1,Z_Param_Out_Wave_1);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOceanologyWavesHelper::SetMaterialParametersWave_1(Z_Param_MID,Z_Param_Out_Wave_1);
	P_NATIVE_END;
}
// End Class UOceanologyWavesHelper Function SetMaterialParametersWave_1

// Begin Class UOceanologyWavesHelper Function SetMaterialParametersWave_2
struct Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParametersWave_2_Statics
{
	struct OceanologyWavesHelper_eventSetMaterialParametersWave_2_Parms
	{
		UMaterialInstanceDynamic* MID;
		FOceanologyWave_2 Wave_2;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Wave 2" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyWaves.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Wave_2_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Wave_2;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParametersWave_2_Statics::NewProp_MID = { "MID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyWavesHelper_eventSetMaterialParametersWave_2_Parms, MID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParametersWave_2_Statics::NewProp_Wave_2 = { "Wave_2", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyWavesHelper_eventSetMaterialParametersWave_2_Parms, Wave_2), Z_Construct_UScriptStruct_FOceanologyWave_2, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Wave_2_MetaData), NewProp_Wave_2_MetaData) }; // 4048543760
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParametersWave_2_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParametersWave_2_Statics::NewProp_MID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParametersWave_2_Statics::NewProp_Wave_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParametersWave_2_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParametersWave_2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologyWavesHelper, nullptr, "SetMaterialParametersWave_2", nullptr, nullptr, Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParametersWave_2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParametersWave_2_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParametersWave_2_Statics::OceanologyWavesHelper_eventSetMaterialParametersWave_2_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParametersWave_2_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParametersWave_2_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParametersWave_2_Statics::OceanologyWavesHelper_eventSetMaterialParametersWave_2_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParametersWave_2()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParametersWave_2_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologyWavesHelper::execSetMaterialParametersWave_2)
{
	P_GET_OBJECT(UMaterialInstanceDynamic,Z_Param_MID);
	P_GET_STRUCT_REF(FOceanologyWave_2,Z_Param_Out_Wave_2);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOceanologyWavesHelper::SetMaterialParametersWave_2(Z_Param_MID,Z_Param_Out_Wave_2);
	P_NATIVE_END;
}
// End Class UOceanologyWavesHelper Function SetMaterialParametersWave_2

// Begin Class UOceanologyWavesHelper Function SetMaterialParametersWave_3
struct Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParametersWave_3_Statics
{
	struct OceanologyWavesHelper_eventSetMaterialParametersWave_3_Parms
	{
		UMaterialInstanceDynamic* MID;
		FOceanologyWave_3 Wave_3;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Wave 3" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyWaves.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Wave_3_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Wave_3;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParametersWave_3_Statics::NewProp_MID = { "MID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyWavesHelper_eventSetMaterialParametersWave_3_Parms, MID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParametersWave_3_Statics::NewProp_Wave_3 = { "Wave_3", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyWavesHelper_eventSetMaterialParametersWave_3_Parms, Wave_3), Z_Construct_UScriptStruct_FOceanologyWave_3, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Wave_3_MetaData), NewProp_Wave_3_MetaData) }; // 150167157
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParametersWave_3_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParametersWave_3_Statics::NewProp_MID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParametersWave_3_Statics::NewProp_Wave_3,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParametersWave_3_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParametersWave_3_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologyWavesHelper, nullptr, "SetMaterialParametersWave_3", nullptr, nullptr, Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParametersWave_3_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParametersWave_3_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParametersWave_3_Statics::OceanologyWavesHelper_eventSetMaterialParametersWave_3_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParametersWave_3_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParametersWave_3_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParametersWave_3_Statics::OceanologyWavesHelper_eventSetMaterialParametersWave_3_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParametersWave_3()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParametersWave_3_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologyWavesHelper::execSetMaterialParametersWave_3)
{
	P_GET_OBJECT(UMaterialInstanceDynamic,Z_Param_MID);
	P_GET_STRUCT_REF(FOceanologyWave_3,Z_Param_Out_Wave_3);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOceanologyWavesHelper::SetMaterialParametersWave_3(Z_Param_MID,Z_Param_Out_Wave_3);
	P_NATIVE_END;
}
// End Class UOceanologyWavesHelper Function SetMaterialParametersWave_3

// Begin Class UOceanologyWavesHelper Function SetMaterialParametersWave_4
struct Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParametersWave_4_Statics
{
	struct OceanologyWavesHelper_eventSetMaterialParametersWave_4_Parms
	{
		UMaterialInstanceDynamic* MID;
		FOceanologyWave_4 Wave_4;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Wave 4" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyWaves.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Wave_4_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Wave_4;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParametersWave_4_Statics::NewProp_MID = { "MID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyWavesHelper_eventSetMaterialParametersWave_4_Parms, MID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParametersWave_4_Statics::NewProp_Wave_4 = { "Wave_4", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyWavesHelper_eventSetMaterialParametersWave_4_Parms, Wave_4), Z_Construct_UScriptStruct_FOceanologyWave_4, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Wave_4_MetaData), NewProp_Wave_4_MetaData) }; // 1244214835
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParametersWave_4_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParametersWave_4_Statics::NewProp_MID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParametersWave_4_Statics::NewProp_Wave_4,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParametersWave_4_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParametersWave_4_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologyWavesHelper, nullptr, "SetMaterialParametersWave_4", nullptr, nullptr, Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParametersWave_4_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParametersWave_4_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParametersWave_4_Statics::OceanologyWavesHelper_eventSetMaterialParametersWave_4_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParametersWave_4_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParametersWave_4_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParametersWave_4_Statics::OceanologyWavesHelper_eventSetMaterialParametersWave_4_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParametersWave_4()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParametersWave_4_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologyWavesHelper::execSetMaterialParametersWave_4)
{
	P_GET_OBJECT(UMaterialInstanceDynamic,Z_Param_MID);
	P_GET_STRUCT_REF(FOceanologyWave_4,Z_Param_Out_Wave_4);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOceanologyWavesHelper::SetMaterialParametersWave_4(Z_Param_MID,Z_Param_Out_Wave_4);
	P_NATIVE_END;
}
// End Class UOceanologyWavesHelper Function SetMaterialParametersWave_4

// Begin Class UOceanologyWavesHelper Function SetNiagaraVariablesWave_1
struct Z_Construct_UFunction_UOceanologyWavesHelper_SetNiagaraVariablesWave_1_Statics
{
	struct OceanologyWavesHelper_eventSetNiagaraVariablesWave_1_Parms
	{
		UNiagaraComponent* Niagara;
		FOceanologyWave_1 Wave_1;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Wave 1" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyWaves.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Niagara_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Wave_1_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Niagara;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Wave_1;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOceanologyWavesHelper_SetNiagaraVariablesWave_1_Statics::NewProp_Niagara = { "Niagara", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyWavesHelper_eventSetNiagaraVariablesWave_1_Parms, Niagara), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Niagara_MetaData), NewProp_Niagara_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyWavesHelper_SetNiagaraVariablesWave_1_Statics::NewProp_Wave_1 = { "Wave_1", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyWavesHelper_eventSetNiagaraVariablesWave_1_Parms, Wave_1), Z_Construct_UScriptStruct_FOceanologyWave_1, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Wave_1_MetaData), NewProp_Wave_1_MetaData) }; // 2882325646
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanologyWavesHelper_SetNiagaraVariablesWave_1_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyWavesHelper_SetNiagaraVariablesWave_1_Statics::NewProp_Niagara,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyWavesHelper_SetNiagaraVariablesWave_1_Statics::NewProp_Wave_1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyWavesHelper_SetNiagaraVariablesWave_1_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologyWavesHelper_SetNiagaraVariablesWave_1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologyWavesHelper, nullptr, "SetNiagaraVariablesWave_1", nullptr, nullptr, Z_Construct_UFunction_UOceanologyWavesHelper_SetNiagaraVariablesWave_1_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyWavesHelper_SetNiagaraVariablesWave_1_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOceanologyWavesHelper_SetNiagaraVariablesWave_1_Statics::OceanologyWavesHelper_eventSetNiagaraVariablesWave_1_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyWavesHelper_SetNiagaraVariablesWave_1_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologyWavesHelper_SetNiagaraVariablesWave_1_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOceanologyWavesHelper_SetNiagaraVariablesWave_1_Statics::OceanologyWavesHelper_eventSetNiagaraVariablesWave_1_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanologyWavesHelper_SetNiagaraVariablesWave_1()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologyWavesHelper_SetNiagaraVariablesWave_1_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologyWavesHelper::execSetNiagaraVariablesWave_1)
{
	P_GET_OBJECT(UNiagaraComponent,Z_Param_Niagara);
	P_GET_STRUCT_REF(FOceanologyWave_1,Z_Param_Out_Wave_1);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOceanologyWavesHelper::SetNiagaraVariablesWave_1(Z_Param_Niagara,Z_Param_Out_Wave_1);
	P_NATIVE_END;
}
// End Class UOceanologyWavesHelper Function SetNiagaraVariablesWave_1

// Begin Class UOceanologyWavesHelper Function SetNiagaraVariablesWave_2
struct Z_Construct_UFunction_UOceanologyWavesHelper_SetNiagaraVariablesWave_2_Statics
{
	struct OceanologyWavesHelper_eventSetNiagaraVariablesWave_2_Parms
	{
		UNiagaraComponent* Niagara;
		FOceanologyWave_2 Wave_2;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Wave 2" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyWaves.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Niagara_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Wave_2_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Niagara;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Wave_2;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOceanologyWavesHelper_SetNiagaraVariablesWave_2_Statics::NewProp_Niagara = { "Niagara", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyWavesHelper_eventSetNiagaraVariablesWave_2_Parms, Niagara), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Niagara_MetaData), NewProp_Niagara_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyWavesHelper_SetNiagaraVariablesWave_2_Statics::NewProp_Wave_2 = { "Wave_2", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyWavesHelper_eventSetNiagaraVariablesWave_2_Parms, Wave_2), Z_Construct_UScriptStruct_FOceanologyWave_2, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Wave_2_MetaData), NewProp_Wave_2_MetaData) }; // 4048543760
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanologyWavesHelper_SetNiagaraVariablesWave_2_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyWavesHelper_SetNiagaraVariablesWave_2_Statics::NewProp_Niagara,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyWavesHelper_SetNiagaraVariablesWave_2_Statics::NewProp_Wave_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyWavesHelper_SetNiagaraVariablesWave_2_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologyWavesHelper_SetNiagaraVariablesWave_2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologyWavesHelper, nullptr, "SetNiagaraVariablesWave_2", nullptr, nullptr, Z_Construct_UFunction_UOceanologyWavesHelper_SetNiagaraVariablesWave_2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyWavesHelper_SetNiagaraVariablesWave_2_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOceanologyWavesHelper_SetNiagaraVariablesWave_2_Statics::OceanologyWavesHelper_eventSetNiagaraVariablesWave_2_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyWavesHelper_SetNiagaraVariablesWave_2_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologyWavesHelper_SetNiagaraVariablesWave_2_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOceanologyWavesHelper_SetNiagaraVariablesWave_2_Statics::OceanologyWavesHelper_eventSetNiagaraVariablesWave_2_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanologyWavesHelper_SetNiagaraVariablesWave_2()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologyWavesHelper_SetNiagaraVariablesWave_2_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologyWavesHelper::execSetNiagaraVariablesWave_2)
{
	P_GET_OBJECT(UNiagaraComponent,Z_Param_Niagara);
	P_GET_STRUCT_REF(FOceanologyWave_2,Z_Param_Out_Wave_2);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOceanologyWavesHelper::SetNiagaraVariablesWave_2(Z_Param_Niagara,Z_Param_Out_Wave_2);
	P_NATIVE_END;
}
// End Class UOceanologyWavesHelper Function SetNiagaraVariablesWave_2

// Begin Class UOceanologyWavesHelper Function SetNiagaraVariablesWave_3
struct Z_Construct_UFunction_UOceanologyWavesHelper_SetNiagaraVariablesWave_3_Statics
{
	struct OceanologyWavesHelper_eventSetNiagaraVariablesWave_3_Parms
	{
		UNiagaraComponent* Niagara;
		FOceanologyWave_3 Wave_3;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Wave 3" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyWaves.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Niagara_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Wave_3_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Niagara;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Wave_3;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOceanologyWavesHelper_SetNiagaraVariablesWave_3_Statics::NewProp_Niagara = { "Niagara", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyWavesHelper_eventSetNiagaraVariablesWave_3_Parms, Niagara), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Niagara_MetaData), NewProp_Niagara_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyWavesHelper_SetNiagaraVariablesWave_3_Statics::NewProp_Wave_3 = { "Wave_3", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyWavesHelper_eventSetNiagaraVariablesWave_3_Parms, Wave_3), Z_Construct_UScriptStruct_FOceanologyWave_3, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Wave_3_MetaData), NewProp_Wave_3_MetaData) }; // 150167157
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanologyWavesHelper_SetNiagaraVariablesWave_3_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyWavesHelper_SetNiagaraVariablesWave_3_Statics::NewProp_Niagara,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyWavesHelper_SetNiagaraVariablesWave_3_Statics::NewProp_Wave_3,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyWavesHelper_SetNiagaraVariablesWave_3_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologyWavesHelper_SetNiagaraVariablesWave_3_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologyWavesHelper, nullptr, "SetNiagaraVariablesWave_3", nullptr, nullptr, Z_Construct_UFunction_UOceanologyWavesHelper_SetNiagaraVariablesWave_3_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyWavesHelper_SetNiagaraVariablesWave_3_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOceanologyWavesHelper_SetNiagaraVariablesWave_3_Statics::OceanologyWavesHelper_eventSetNiagaraVariablesWave_3_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyWavesHelper_SetNiagaraVariablesWave_3_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologyWavesHelper_SetNiagaraVariablesWave_3_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOceanologyWavesHelper_SetNiagaraVariablesWave_3_Statics::OceanologyWavesHelper_eventSetNiagaraVariablesWave_3_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanologyWavesHelper_SetNiagaraVariablesWave_3()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologyWavesHelper_SetNiagaraVariablesWave_3_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologyWavesHelper::execSetNiagaraVariablesWave_3)
{
	P_GET_OBJECT(UNiagaraComponent,Z_Param_Niagara);
	P_GET_STRUCT_REF(FOceanologyWave_3,Z_Param_Out_Wave_3);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOceanologyWavesHelper::SetNiagaraVariablesWave_3(Z_Param_Niagara,Z_Param_Out_Wave_3);
	P_NATIVE_END;
}
// End Class UOceanologyWavesHelper Function SetNiagaraVariablesWave_3

// Begin Class UOceanologyWavesHelper Function SetNiagaraVariablesWave_4
struct Z_Construct_UFunction_UOceanologyWavesHelper_SetNiagaraVariablesWave_4_Statics
{
	struct OceanologyWavesHelper_eventSetNiagaraVariablesWave_4_Parms
	{
		UNiagaraComponent* Niagara;
		FOceanologyWave_4 Wave_4;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Wave 4" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyWaves.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Niagara_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Wave_4_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Niagara;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Wave_4;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOceanologyWavesHelper_SetNiagaraVariablesWave_4_Statics::NewProp_Niagara = { "Niagara", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyWavesHelper_eventSetNiagaraVariablesWave_4_Parms, Niagara), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Niagara_MetaData), NewProp_Niagara_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyWavesHelper_SetNiagaraVariablesWave_4_Statics::NewProp_Wave_4 = { "Wave_4", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyWavesHelper_eventSetNiagaraVariablesWave_4_Parms, Wave_4), Z_Construct_UScriptStruct_FOceanologyWave_4, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Wave_4_MetaData), NewProp_Wave_4_MetaData) }; // 1244214835
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanologyWavesHelper_SetNiagaraVariablesWave_4_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyWavesHelper_SetNiagaraVariablesWave_4_Statics::NewProp_Niagara,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyWavesHelper_SetNiagaraVariablesWave_4_Statics::NewProp_Wave_4,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyWavesHelper_SetNiagaraVariablesWave_4_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologyWavesHelper_SetNiagaraVariablesWave_4_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologyWavesHelper, nullptr, "SetNiagaraVariablesWave_4", nullptr, nullptr, Z_Construct_UFunction_UOceanologyWavesHelper_SetNiagaraVariablesWave_4_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyWavesHelper_SetNiagaraVariablesWave_4_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOceanologyWavesHelper_SetNiagaraVariablesWave_4_Statics::OceanologyWavesHelper_eventSetNiagaraVariablesWave_4_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyWavesHelper_SetNiagaraVariablesWave_4_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologyWavesHelper_SetNiagaraVariablesWave_4_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOceanologyWavesHelper_SetNiagaraVariablesWave_4_Statics::OceanologyWavesHelper_eventSetNiagaraVariablesWave_4_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanologyWavesHelper_SetNiagaraVariablesWave_4()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologyWavesHelper_SetNiagaraVariablesWave_4_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologyWavesHelper::execSetNiagaraVariablesWave_4)
{
	P_GET_OBJECT(UNiagaraComponent,Z_Param_Niagara);
	P_GET_STRUCT_REF(FOceanologyWave_4,Z_Param_Out_Wave_4);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOceanologyWavesHelper::SetNiagaraVariablesWave_4(Z_Param_Niagara,Z_Param_Out_Wave_4);
	P_NATIVE_END;
}
// End Class UOceanologyWavesHelper Function SetNiagaraVariablesWave_4

// Begin Class UOceanologyWavesHelper
void UOceanologyWavesHelper::StaticRegisterNativesUOceanologyWavesHelper()
{
	UClass* Class = UOceanologyWavesHelper::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "LerpWave_1", &UOceanologyWavesHelper::execLerpWave_1 },
		{ "LerpWave_2", &UOceanologyWavesHelper::execLerpWave_2 },
		{ "LerpWave_3", &UOceanologyWavesHelper::execLerpWave_3 },
		{ "LerpWave_4", &UOceanologyWavesHelper::execLerpWave_4 },
		{ "SetMaterialParameterCollectionsWave_1", &UOceanologyWavesHelper::execSetMaterialParameterCollectionsWave_1 },
		{ "SetMaterialParameterCollectionsWave_2", &UOceanologyWavesHelper::execSetMaterialParameterCollectionsWave_2 },
		{ "SetMaterialParameterCollectionsWave_3", &UOceanologyWavesHelper::execSetMaterialParameterCollectionsWave_3 },
		{ "SetMaterialParameterCollectionsWave_4", &UOceanologyWavesHelper::execSetMaterialParameterCollectionsWave_4 },
		{ "SetMaterialParametersWave_1", &UOceanologyWavesHelper::execSetMaterialParametersWave_1 },
		{ "SetMaterialParametersWave_2", &UOceanologyWavesHelper::execSetMaterialParametersWave_2 },
		{ "SetMaterialParametersWave_3", &UOceanologyWavesHelper::execSetMaterialParametersWave_3 },
		{ "SetMaterialParametersWave_4", &UOceanologyWavesHelper::execSetMaterialParametersWave_4 },
		{ "SetNiagaraVariablesWave_1", &UOceanologyWavesHelper::execSetNiagaraVariablesWave_1 },
		{ "SetNiagaraVariablesWave_2", &UOceanologyWavesHelper::execSetNiagaraVariablesWave_2 },
		{ "SetNiagaraVariablesWave_3", &UOceanologyWavesHelper::execSetNiagaraVariablesWave_3 },
		{ "SetNiagaraVariablesWave_4", &UOceanologyWavesHelper::execSetNiagaraVariablesWave_4 },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOceanologyWavesHelper);
UClass* Z_Construct_UClass_UOceanologyWavesHelper_NoRegister()
{
	return UOceanologyWavesHelper::StaticClass();
}
struct Z_Construct_UClass_UOceanologyWavesHelper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Structs/OceanologyWaves.h" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyWaves.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOceanologyWavesHelper_LerpWave_1, "LerpWave_1" }, // 2396356740
		{ &Z_Construct_UFunction_UOceanologyWavesHelper_LerpWave_2, "LerpWave_2" }, // 1101019981
		{ &Z_Construct_UFunction_UOceanologyWavesHelper_LerpWave_3, "LerpWave_3" }, // 2736770508
		{ &Z_Construct_UFunction_UOceanologyWavesHelper_LerpWave_4, "LerpWave_4" }, // 933530838
		{ &Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParameterCollectionsWave_1, "SetMaterialParameterCollectionsWave_1" }, // 556325485
		{ &Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParameterCollectionsWave_2, "SetMaterialParameterCollectionsWave_2" }, // 1066947620
		{ &Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParameterCollectionsWave_3, "SetMaterialParameterCollectionsWave_3" }, // 71122819
		{ &Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParameterCollectionsWave_4, "SetMaterialParameterCollectionsWave_4" }, // 1745202763
		{ &Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParametersWave_1, "SetMaterialParametersWave_1" }, // 263732589
		{ &Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParametersWave_2, "SetMaterialParametersWave_2" }, // 2894030974
		{ &Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParametersWave_3, "SetMaterialParametersWave_3" }, // 2208935536
		{ &Z_Construct_UFunction_UOceanologyWavesHelper_SetMaterialParametersWave_4, "SetMaterialParametersWave_4" }, // 2135653305
		{ &Z_Construct_UFunction_UOceanologyWavesHelper_SetNiagaraVariablesWave_1, "SetNiagaraVariablesWave_1" }, // 2740841670
		{ &Z_Construct_UFunction_UOceanologyWavesHelper_SetNiagaraVariablesWave_2, "SetNiagaraVariablesWave_2" }, // 495538496
		{ &Z_Construct_UFunction_UOceanologyWavesHelper_SetNiagaraVariablesWave_3, "SetNiagaraVariablesWave_3" }, // 3990698861
		{ &Z_Construct_UFunction_UOceanologyWavesHelper_SetNiagaraVariablesWave_4, "SetNiagaraVariablesWave_4" }, // 3245139436
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOceanologyWavesHelper>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOceanologyWavesHelper_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Oceanology_Plugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOceanologyWavesHelper_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOceanologyWavesHelper_Statics::ClassParams = {
	&UOceanologyWavesHelper::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOceanologyWavesHelper_Statics::Class_MetaDataParams), Z_Construct_UClass_UOceanologyWavesHelper_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOceanologyWavesHelper()
{
	if (!Z_Registration_Info_UClass_UOceanologyWavesHelper.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOceanologyWavesHelper.OuterSingleton, Z_Construct_UClass_UOceanologyWavesHelper_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOceanologyWavesHelper.OuterSingleton;
}
template<> OCEANOLOGY_PLUGIN_API UClass* StaticClass<UOceanologyWavesHelper>()
{
	return UOceanologyWavesHelper::StaticClass();
}
UOceanologyWavesHelper::UOceanologyWavesHelper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOceanologyWavesHelper);
UOceanologyWavesHelper::~UOceanologyWavesHelper() {}
// End Class UOceanologyWavesHelper

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEDocument_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyWaves_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOceanologyWave_1::StaticStruct, Z_Construct_UScriptStruct_FOceanologyWave_1_Statics::NewStructOps, TEXT("OceanologyWave_1"), &Z_Registration_Info_UScriptStruct_OceanologyWave_1, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOceanologyWave_1), 2882325646U) },
		{ FOceanologyWave_2::StaticStruct, Z_Construct_UScriptStruct_FOceanologyWave_2_Statics::NewStructOps, TEXT("OceanologyWave_2"), &Z_Registration_Info_UScriptStruct_OceanologyWave_2, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOceanologyWave_2), 4048543760U) },
		{ FOceanologyWave_3::StaticStruct, Z_Construct_UScriptStruct_FOceanologyWave_3_Statics::NewStructOps, TEXT("OceanologyWave_3"), &Z_Registration_Info_UScriptStruct_OceanologyWave_3, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOceanologyWave_3), 150167157U) },
		{ FOceanologyWave_4::StaticStruct, Z_Construct_UScriptStruct_FOceanologyWave_4_Statics::NewStructOps, TEXT("OceanologyWave_4"), &Z_Registration_Info_UScriptStruct_OceanologyWave_4, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOceanologyWave_4), 1244214835U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOceanologyWavesHelper, UOceanologyWavesHelper::StaticClass, TEXT("UOceanologyWavesHelper"), &Z_Registration_Info_UClass_UOceanologyWavesHelper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOceanologyWavesHelper), 2892440227U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEDocument_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyWaves_h_637273647(TEXT("/Script/Oceanology_Plugin"),
	Z_CompiledInDeferFile_FID_UEDocument_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyWaves_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEDocument_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyWaves_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UEDocument_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyWaves_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEDocument_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyWaves_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
