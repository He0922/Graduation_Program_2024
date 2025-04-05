// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graduation_2024/Public/Voice/AudioManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioManager() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundAttenuation_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
GRADUATION_2024_API UClass* Z_Construct_UClass_UAudioManager();
GRADUATION_2024_API UClass* Z_Construct_UClass_UAudioManager_NoRegister();
GRADUATION_2024_API UEnum* Z_Construct_UEnum_Graduation_2024_EAudioCategory();
GRADUATION_2024_API UFunction* Z_Construct_UDelegateFunction_Graduation_2024_AudioFinishedDelegate__DelegateSignature();
GRADUATION_2024_API UFunction* Z_Construct_UDelegateFunction_Graduation_2024_OnSoundEvent__DelegateSignature();
GRADUATION_2024_API UScriptStruct* Z_Construct_UScriptStruct_FAudioConfig();
UPackage* Z_Construct_UPackage__Script_Graduation_2024();
// End Cross Module References

// Begin Enum EAudioCategory
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAudioCategory;
static UEnum* EAudioCategory_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAudioCategory.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAudioCategory.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Graduation_2024_EAudioCategory, (UObject*)Z_Construct_UPackage__Script_Graduation_2024(), TEXT("EAudioCategory"));
	}
	return Z_Registration_Info_UEnum_EAudioCategory.OuterSingleton;
}
template<> GRADUATION_2024_API UEnum* StaticEnum<EAudioCategory>()
{
	return EAudioCategory_StaticEnum();
}
struct Z_Construct_UEnum_Graduation_2024_EAudioCategory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Ambient.Name", "EAudioCategory::Ambient" },
		{ "BGM.Name", "EAudioCategory::BGM" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Voice/AudioManager.h" },
		{ "SFX.Name", "EAudioCategory::SFX" },
		{ "Voice.Name", "EAudioCategory::Voice" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAudioCategory::BGM", (int64)EAudioCategory::BGM },
		{ "EAudioCategory::SFX", (int64)EAudioCategory::SFX },
		{ "EAudioCategory::Ambient", (int64)EAudioCategory::Ambient },
		{ "EAudioCategory::Voice", (int64)EAudioCategory::Voice },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Graduation_2024_EAudioCategory_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Graduation_2024,
	nullptr,
	"EAudioCategory",
	"EAudioCategory",
	Z_Construct_UEnum_Graduation_2024_EAudioCategory_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Graduation_2024_EAudioCategory_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Graduation_2024_EAudioCategory_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Graduation_2024_EAudioCategory_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Graduation_2024_EAudioCategory()
{
	if (!Z_Registration_Info_UEnum_EAudioCategory.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAudioCategory.InnerSingleton, Z_Construct_UEnum_Graduation_2024_EAudioCategory_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAudioCategory.InnerSingleton;
}
// End Enum EAudioCategory

// Begin ScriptStruct FAudioConfig
static_assert(std::is_polymorphic<FAudioConfig>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FAudioConfig cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AudioConfig;
class UScriptStruct* FAudioConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AudioConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AudioConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAudioConfig, (UObject*)Z_Construct_UPackage__Script_Graduation_2024(), TEXT("AudioConfig"));
	}
	return Z_Registration_Info_UScriptStruct_AudioConfig.OuterSingleton;
}
template<> GRADUATION_2024_API UScriptStruct* StaticStruct<FAudioConfig>()
{
	return FAudioConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAudioConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Voice/AudioManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundID_MetaData[] = {
		{ "Category", "Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xd0\xa7\xce\xa8\xd2\xbb\xef\xbf\xbd\xef\xbf\xbd\xca\xb6\n" },
#endif
		{ "ModuleRelativePath", "Public/Voice/AudioManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xd0\xa7\xce\xa8\xd2\xbb\xef\xbf\xbd\xef\xbf\xbd\xca\xb6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[] = {
		{ "Category", "Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xd0\xa7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Voice/AudioManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xd0\xa7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundAsset_MetaData[] = {
		{ "Category", "Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xd0\xa7\xef\xbf\xbd\xef\xbf\xbd\xd4\xb4\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Voice/AudioManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xd0\xa7\xef\xbf\xbd\xef\xbf\xbd\xd4\xb4\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLooping_MetaData[] = {
		{ "Category", "Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xc7\xb7\xef\xbf\xbd\xd1\xad\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Voice/AudioManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xc7\xb7\xef\xbf\xbd\xd1\xad\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultVolume_MetaData[] = {
		{ "Category", "Audio" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xc4\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Voice/AudioManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xc4\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttenuationSettings_MetaData[] = {
		{ "Category", "Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xd5\xbc\xe4\xbb\xaf\xcb\xa5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Voice/AudioManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xd5\xbc\xe4\xbb\xaf\xcb\xa5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SoundID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Category_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Category;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SoundAsset;
	static void NewProp_bLooping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLooping;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultVolume;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_AttenuationSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAudioConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAudioConfig_Statics::NewProp_SoundID = { "SoundID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioConfig, SoundID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundID_MetaData), NewProp_SoundID_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAudioConfig_Statics::NewProp_Category_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAudioConfig_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioConfig, Category), Z_Construct_UEnum_Graduation_2024_EAudioCategory, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Category_MetaData), NewProp_Category_MetaData) }; // 2568340111
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FAudioConfig_Statics::NewProp_SoundAsset = { "SoundAsset", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioConfig, SoundAsset), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundAsset_MetaData), NewProp_SoundAsset_MetaData) };
void Z_Construct_UScriptStruct_FAudioConfig_Statics::NewProp_bLooping_SetBit(void* Obj)
{
	((FAudioConfig*)Obj)->bLooping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAudioConfig_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAudioConfig), &Z_Construct_UScriptStruct_FAudioConfig_Statics::NewProp_bLooping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLooping_MetaData), NewProp_bLooping_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAudioConfig_Statics::NewProp_DefaultVolume = { "DefaultVolume", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioConfig, DefaultVolume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultVolume_MetaData), NewProp_DefaultVolume_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FAudioConfig_Statics::NewProp_AttenuationSettings = { "AttenuationSettings", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioConfig, AttenuationSettings), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttenuationSettings_MetaData), NewProp_AttenuationSettings_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAudioConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioConfig_Statics::NewProp_SoundID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioConfig_Statics::NewProp_Category_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioConfig_Statics::NewProp_Category,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioConfig_Statics::NewProp_SoundAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioConfig_Statics::NewProp_bLooping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioConfig_Statics::NewProp_DefaultVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioConfig_Statics::NewProp_AttenuationSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAudioConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Graduation_2024,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"AudioConfig",
	Z_Construct_UScriptStruct_FAudioConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioConfig_Statics::PropPointers),
	sizeof(FAudioConfig),
	alignof(FAudioConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAudioConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAudioConfig()
{
	if (!Z_Registration_Info_UScriptStruct_AudioConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AudioConfig.InnerSingleton, Z_Construct_UScriptStruct_FAudioConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AudioConfig.InnerSingleton;
}
// End ScriptStruct FAudioConfig

// Begin Delegate FOnSoundEvent
struct Z_Construct_UDelegateFunction_Graduation_2024_OnSoundEvent__DelegateSignature_Statics
{
	struct _Script_Graduation_2024_eventOnSoundEvent_Parms
	{
		FName SoundID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Voice/AudioManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SoundID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_Graduation_2024_OnSoundEvent__DelegateSignature_Statics::NewProp_SoundID = { "SoundID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Graduation_2024_eventOnSoundEvent_Parms, SoundID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Graduation_2024_OnSoundEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Graduation_2024_OnSoundEvent__DelegateSignature_Statics::NewProp_SoundID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Graduation_2024_OnSoundEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Graduation_2024_OnSoundEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Graduation_2024, nullptr, "OnSoundEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Graduation_2024_OnSoundEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Graduation_2024_OnSoundEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Graduation_2024_OnSoundEvent__DelegateSignature_Statics::_Script_Graduation_2024_eventOnSoundEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Graduation_2024_OnSoundEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Graduation_2024_OnSoundEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Graduation_2024_OnSoundEvent__DelegateSignature_Statics::_Script_Graduation_2024_eventOnSoundEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Graduation_2024_OnSoundEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Graduation_2024_OnSoundEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSoundEvent_DelegateWrapper(const FMulticastScriptDelegate& OnSoundEvent, FName SoundID)
{
	struct _Script_Graduation_2024_eventOnSoundEvent_Parms
	{
		FName SoundID;
	};
	_Script_Graduation_2024_eventOnSoundEvent_Parms Parms;
	Parms.SoundID=SoundID;
	OnSoundEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnSoundEvent

// Begin Delegate FAudioFinishedDelegate
struct Z_Construct_UDelegateFunction_Graduation_2024_AudioFinishedDelegate__DelegateSignature_Statics
{
	struct _Script_Graduation_2024_eventAudioFinishedDelegate_Parms
	{
		FName SoundID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Voice/AudioManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SoundID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_Graduation_2024_AudioFinishedDelegate__DelegateSignature_Statics::NewProp_SoundID = { "SoundID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Graduation_2024_eventAudioFinishedDelegate_Parms, SoundID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Graduation_2024_AudioFinishedDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Graduation_2024_AudioFinishedDelegate__DelegateSignature_Statics::NewProp_SoundID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Graduation_2024_AudioFinishedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Graduation_2024_AudioFinishedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Graduation_2024, nullptr, "AudioFinishedDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Graduation_2024_AudioFinishedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Graduation_2024_AudioFinishedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Graduation_2024_AudioFinishedDelegate__DelegateSignature_Statics::_Script_Graduation_2024_eventAudioFinishedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Graduation_2024_AudioFinishedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Graduation_2024_AudioFinishedDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Graduation_2024_AudioFinishedDelegate__DelegateSignature_Statics::_Script_Graduation_2024_eventAudioFinishedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Graduation_2024_AudioFinishedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Graduation_2024_AudioFinishedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FAudioFinishedDelegate_DelegateWrapper(const FScriptDelegate& AudioFinishedDelegate, FName SoundID)
{
	struct _Script_Graduation_2024_eventAudioFinishedDelegate_Parms
	{
		FName SoundID;
	};
	_Script_Graduation_2024_eventAudioFinishedDelegate_Parms Parms;
	Parms.SoundID=SoundID;
	AudioFinishedDelegate.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FAudioFinishedDelegate

// Begin Class UAudioManager Function GetInstance
struct Z_Construct_UFunction_UAudioManager_GetInstance_Statics
{
	struct AudioManager_eventGetInstance_Parms
	{
		UAudioManager* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AudioManager" },
		{ "ModuleRelativePath", "Public/Voice/AudioManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioManager_GetInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioManager_eventGetInstance_Parms, ReturnValue), Z_Construct_UClass_UAudioManager_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioManager_GetInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioManager_GetInstance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioManager_GetInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioManager_GetInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioManager, nullptr, "GetInstance", nullptr, nullptr, Z_Construct_UFunction_UAudioManager_GetInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioManager_GetInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioManager_GetInstance_Statics::AudioManager_eventGetInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioManager_GetInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioManager_GetInstance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAudioManager_GetInstance_Statics::AudioManager_eventGetInstance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioManager_GetInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioManager_GetInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioManager::execGetInstance)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAudioManager**)Z_Param__Result=UAudioManager::GetInstance();
	P_NATIVE_END;
}
// End Class UAudioManager Function GetInstance

// Begin Class UAudioManager Function HandleAudioFinished
struct Z_Construct_UFunction_UAudioManager_HandleAudioFinished_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Voice/AudioManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioManager_HandleAudioFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioManager, nullptr, "HandleAudioFinished", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioManager_HandleAudioFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioManager_HandleAudioFinished_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAudioManager_HandleAudioFinished()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioManager_HandleAudioFinished_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioManager::execHandleAudioFinished)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleAudioFinished();
	P_NATIVE_END;
}
// End Class UAudioManager Function HandleAudioFinished

// Begin Class UAudioManager Function Initialize
struct Z_Construct_UFunction_UAudioManager_Initialize_Statics
{
	struct AudioManager_eventInitialize_Parms
	{
		UDataTable* InAudioDataTable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AudioManager" },
		{ "ModuleRelativePath", "Public/Voice/AudioManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InAudioDataTable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioManager_Initialize_Statics::NewProp_InAudioDataTable = { "InAudioDataTable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioManager_eventInitialize_Parms, InAudioDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioManager_Initialize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioManager_Initialize_Statics::NewProp_InAudioDataTable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioManager_Initialize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioManager_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioManager, nullptr, "Initialize", nullptr, nullptr, Z_Construct_UFunction_UAudioManager_Initialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioManager_Initialize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioManager_Initialize_Statics::AudioManager_eventInitialize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioManager_Initialize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioManager_Initialize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAudioManager_Initialize_Statics::AudioManager_eventInitialize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioManager_Initialize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioManager_Initialize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioManager::execInitialize)
{
	P_GET_OBJECT(UDataTable,Z_Param_InAudioDataTable);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Initialize(Z_Param_InAudioDataTable);
	P_NATIVE_END;
}
// End Class UAudioManager Function Initialize

// Begin Class UAudioManager Function PlaySound
struct Z_Construct_UFunction_UAudioManager_PlaySound_Statics
{
	struct AudioManager_eventPlaySound_Parms
	{
		UObject* WorldContextObject;
		FName SoundID;
		AActor* AttachActor;
		FVector Location;
		float FadeInTime;
		float Delay;
		UAudioComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AudioManager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd3\xb3\xd9\xb2\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "CPP_Default_AttachActor", "None" },
		{ "CPP_Default_Delay", "0.000000" },
		{ "CPP_Default_FadeInTime", "0.000000" },
		{ "CPP_Default_Location", "" },
		{ "ModuleRelativePath", "Public/Voice/AudioManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd3\xb3\xd9\xb2\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SoundID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttachActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeInTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Delay;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioManager_PlaySound_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioManager_eventPlaySound_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAudioManager_PlaySound_Statics::NewProp_SoundID = { "SoundID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioManager_eventPlaySound_Parms, SoundID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioManager_PlaySound_Statics::NewProp_AttachActor = { "AttachActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioManager_eventPlaySound_Parms, AttachActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAudioManager_PlaySound_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioManager_eventPlaySound_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioManager_PlaySound_Statics::NewProp_FadeInTime = { "FadeInTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioManager_eventPlaySound_Parms, FadeInTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioManager_PlaySound_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioManager_eventPlaySound_Parms, Delay), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioManager_PlaySound_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioManager_eventPlaySound_Parms, ReturnValue), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioManager_PlaySound_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioManager_PlaySound_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioManager_PlaySound_Statics::NewProp_SoundID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioManager_PlaySound_Statics::NewProp_AttachActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioManager_PlaySound_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioManager_PlaySound_Statics::NewProp_FadeInTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioManager_PlaySound_Statics::NewProp_Delay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioManager_PlaySound_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioManager_PlaySound_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioManager_PlaySound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioManager, nullptr, "PlaySound", nullptr, nullptr, Z_Construct_UFunction_UAudioManager_PlaySound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioManager_PlaySound_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioManager_PlaySound_Statics::AudioManager_eventPlaySound_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioManager_PlaySound_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioManager_PlaySound_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAudioManager_PlaySound_Statics::AudioManager_eventPlaySound_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioManager_PlaySound()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioManager_PlaySound_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioManager::execPlaySound)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FNameProperty,Z_Param_SoundID);
	P_GET_OBJECT(AActor,Z_Param_AttachActor);
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_GET_PROPERTY(FFloatProperty,Z_Param_FadeInTime);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAudioComponent**)Z_Param__Result=P_THIS->PlaySound(Z_Param_WorldContextObject,Z_Param_SoundID,Z_Param_AttachActor,Z_Param_Location,Z_Param_FadeInTime,Z_Param_Delay);
	P_NATIVE_END;
}
// End Class UAudioManager Function PlaySound

// Begin Class UAudioManager Function SetCategoryVolume
struct Z_Construct_UFunction_UAudioManager_SetCategoryVolume_Statics
{
	struct AudioManager_eventSetCategoryVolume_Parms
	{
		EAudioCategory Category;
		float NewVolume;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AudioManager" },
		{ "ModuleRelativePath", "Public/Voice/AudioManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Category_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Category;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVolume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAudioManager_SetCategoryVolume_Statics::NewProp_Category_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAudioManager_SetCategoryVolume_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioManager_eventSetCategoryVolume_Parms, Category), Z_Construct_UEnum_Graduation_2024_EAudioCategory, METADATA_PARAMS(0, nullptr) }; // 2568340111
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioManager_SetCategoryVolume_Statics::NewProp_NewVolume = { "NewVolume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioManager_eventSetCategoryVolume_Parms, NewVolume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioManager_SetCategoryVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioManager_SetCategoryVolume_Statics::NewProp_Category_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioManager_SetCategoryVolume_Statics::NewProp_Category,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioManager_SetCategoryVolume_Statics::NewProp_NewVolume,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioManager_SetCategoryVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioManager_SetCategoryVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioManager, nullptr, "SetCategoryVolume", nullptr, nullptr, Z_Construct_UFunction_UAudioManager_SetCategoryVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioManager_SetCategoryVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioManager_SetCategoryVolume_Statics::AudioManager_eventSetCategoryVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioManager_SetCategoryVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioManager_SetCategoryVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAudioManager_SetCategoryVolume_Statics::AudioManager_eventSetCategoryVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioManager_SetCategoryVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioManager_SetCategoryVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioManager::execSetCategoryVolume)
{
	P_GET_ENUM(EAudioCategory,Z_Param_Category);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVolume);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCategoryVolume(EAudioCategory(Z_Param_Category),Z_Param_NewVolume);
	P_NATIVE_END;
}
// End Class UAudioManager Function SetCategoryVolume

// Begin Class UAudioManager Function StopSound
struct Z_Construct_UFunction_UAudioManager_StopSound_Statics
{
	struct AudioManager_eventStopSound_Parms
	{
		FName SoundID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AudioManager" },
		{ "ModuleRelativePath", "Public/Voice/AudioManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SoundID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAudioManager_StopSound_Statics::NewProp_SoundID = { "SoundID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioManager_eventStopSound_Parms, SoundID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioManager_StopSound_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioManager_StopSound_Statics::NewProp_SoundID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioManager_StopSound_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioManager_StopSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioManager, nullptr, "StopSound", nullptr, nullptr, Z_Construct_UFunction_UAudioManager_StopSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioManager_StopSound_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioManager_StopSound_Statics::AudioManager_eventStopSound_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioManager_StopSound_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioManager_StopSound_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAudioManager_StopSound_Statics::AudioManager_eventStopSound_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioManager_StopSound()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioManager_StopSound_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioManager::execStopSound)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_SoundID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopSound(Z_Param_SoundID);
	P_NATIVE_END;
}
// End Class UAudioManager Function StopSound

// Begin Class UAudioManager
void UAudioManager::StaticRegisterNativesUAudioManager()
{
	UClass* Class = UAudioManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetInstance", &UAudioManager::execGetInstance },
		{ "HandleAudioFinished", &UAudioManager::execHandleAudioFinished },
		{ "Initialize", &UAudioManager::execInitialize },
		{ "PlaySound", &UAudioManager::execPlaySound },
		{ "SetCategoryVolume", &UAudioManager::execSetCategoryVolume },
		{ "StopSound", &UAudioManager::execStopSound },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioManager);
UClass* Z_Construct_UClass_UAudioManager_NoRegister()
{
	return UAudioManager::StaticClass();
}
struct Z_Construct_UClass_UAudioManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Voice/AudioManager.h" },
		{ "ModuleRelativePath", "Public/Voice/AudioManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSoundStarted_MetaData[] = {
		{ "Category", "AudioManager" },
		{ "ModuleRelativePath", "Public/Voice/AudioManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSoundFinished_MetaData[] = {
		{ "Category", "AudioManager" },
		{ "ModuleRelativePath", "Public/Voice/AudioManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioDataTable_MetaData[] = {
		{ "ModuleRelativePath", "Public/Voice/AudioManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveComponentsMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/Voice/AudioManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSoundStarted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSoundFinished;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioDataTable;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ActiveComponentsMap_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveComponentsMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ActiveComponentsMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAudioManager_GetInstance, "GetInstance" }, // 4129122091
		{ &Z_Construct_UFunction_UAudioManager_HandleAudioFinished, "HandleAudioFinished" }, // 3307381517
		{ &Z_Construct_UFunction_UAudioManager_Initialize, "Initialize" }, // 992219263
		{ &Z_Construct_UFunction_UAudioManager_PlaySound, "PlaySound" }, // 1543645092
		{ &Z_Construct_UFunction_UAudioManager_SetCategoryVolume, "SetCategoryVolume" }, // 3063227776
		{ &Z_Construct_UFunction_UAudioManager_StopSound, "StopSound" }, // 4144797535
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAudioManager_Statics::NewProp_OnSoundStarted = { "OnSoundStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioManager, OnSoundStarted), Z_Construct_UDelegateFunction_Graduation_2024_OnSoundEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSoundStarted_MetaData), NewProp_OnSoundStarted_MetaData) }; // 1852029173
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAudioManager_Statics::NewProp_OnSoundFinished = { "OnSoundFinished", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioManager, OnSoundFinished), Z_Construct_UDelegateFunction_Graduation_2024_OnSoundEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSoundFinished_MetaData), NewProp_OnSoundFinished_MetaData) }; // 1852029173
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAudioManager_Statics::NewProp_AudioDataTable = { "AudioDataTable", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioManager, AudioDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioDataTable_MetaData), NewProp_AudioDataTable_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAudioManager_Statics::NewProp_ActiveComponentsMap_ValueProp = { "ActiveComponentsMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAudioManager_Statics::NewProp_ActiveComponentsMap_Key_KeyProp = { "ActiveComponentsMap_Key", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAudioManager_Statics::NewProp_ActiveComponentsMap = { "ActiveComponentsMap", nullptr, (EPropertyFlags)0x0040008000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioManager, ActiveComponentsMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveComponentsMap_MetaData), NewProp_ActiveComponentsMap_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAudioManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioManager_Statics::NewProp_OnSoundStarted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioManager_Statics::NewProp_OnSoundFinished,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioManager_Statics::NewProp_AudioDataTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioManager_Statics::NewProp_ActiveComponentsMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioManager_Statics::NewProp_ActiveComponentsMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioManager_Statics::NewProp_ActiveComponentsMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAudioManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Graduation_2024,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioManager_Statics::ClassParams = {
	&UAudioManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAudioManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAudioManager_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UAudioManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAudioManager()
{
	if (!Z_Registration_Info_UClass_UAudioManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioManager.OuterSingleton, Z_Construct_UClass_UAudioManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAudioManager.OuterSingleton;
}
template<> GRADUATION_2024_API UClass* StaticClass<UAudioManager>()
{
	return UAudioManager::StaticClass();
}
UAudioManager::UAudioManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioManager);
UAudioManager::~UAudioManager() {}
// End Class UAudioManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Programes_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_Voice_AudioManager_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAudioCategory_StaticEnum, TEXT("EAudioCategory"), &Z_Registration_Info_UEnum_EAudioCategory, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2568340111U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAudioConfig::StaticStruct, Z_Construct_UScriptStruct_FAudioConfig_Statics::NewStructOps, TEXT("AudioConfig"), &Z_Registration_Info_UScriptStruct_AudioConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAudioConfig), 171505592U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAudioManager, UAudioManager::StaticClass, TEXT("UAudioManager"), &Z_Registration_Info_UClass_UAudioManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioManager), 1978039185U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Programes_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_Voice_AudioManager_h_1886874414(TEXT("/Script/Graduation_2024"),
	Z_CompiledInDeferFile_FID_Programes_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_Voice_AudioManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Programes_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_Voice_AudioManager_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Programes_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_Voice_AudioManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Programes_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_Voice_AudioManager_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Programes_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_Voice_AudioManager_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Programes_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_Voice_AudioManager_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
