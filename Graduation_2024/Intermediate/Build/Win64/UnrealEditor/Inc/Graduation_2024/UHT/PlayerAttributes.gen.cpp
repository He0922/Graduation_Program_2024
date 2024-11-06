// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graduation_2024/Public/Character/PlayerAttributes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerAttributes() {}

// Begin Cross Module References
GRADUATION_2024_API UEnum* Z_Construct_UEnum_Graduation_2024_EPlayerAttributes();
GRADUATION_2024_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerAttributes();
UPackage* Z_Construct_UPackage__Script_Graduation_2024();
// End Cross Module References

// Begin Enum EPlayerAttributes
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPlayerAttributes;
static UEnum* EPlayerAttributes_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPlayerAttributes.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPlayerAttributes.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Graduation_2024_EPlayerAttributes, (UObject*)Z_Construct_UPackage__Script_Graduation_2024(), TEXT("EPlayerAttributes"));
	}
	return Z_Registration_Info_UEnum_EPlayerAttributes.OuterSingleton;
}
template<> GRADUATION_2024_API UEnum* StaticEnum<EPlayerAttributes>()
{
	return EPlayerAttributes_StaticEnum();
}
struct Z_Construct_UEnum_Graduation_2024_EPlayerAttributes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "edamage.DisplayName", "Damage" },
		{ "edamage.Name", "EPlayerAttributes::edamage" },
		{ "eenergy.DisplayName", "Energy" },
		{ "eenergy.Name", "EPlayerAttributes::eenergy" },
		{ "eenergyMax.DisplayName", "Energy_Max" },
		{ "eenergyMax.Name", "EPlayerAttributes::eenergyMax" },
		{ "ehealth.DisplayName", "Health" },
		{ "ehealth.Name", "EPlayerAttributes::ehealth" },
		{ "ehealthMax.DispalyName", "Health_Max" },
		{ "ehealthMax.Name", "EPlayerAttributes::ehealthMax" },
		{ "emoveSpeed.DisplayName", "MoveSpeed" },
		{ "emoveSpeed.Name", "EPlayerAttributes::emoveSpeed" },
		{ "ModuleRelativePath", "Public/Character/PlayerAttributes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPlayerAttributes::ehealthMax", (int64)EPlayerAttributes::ehealthMax },
		{ "EPlayerAttributes::eenergyMax", (int64)EPlayerAttributes::eenergyMax },
		{ "EPlayerAttributes::ehealth", (int64)EPlayerAttributes::ehealth },
		{ "EPlayerAttributes::eenergy", (int64)EPlayerAttributes::eenergy },
		{ "EPlayerAttributes::edamage", (int64)EPlayerAttributes::edamage },
		{ "EPlayerAttributes::emoveSpeed", (int64)EPlayerAttributes::emoveSpeed },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Graduation_2024_EPlayerAttributes_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Graduation_2024,
	nullptr,
	"EPlayerAttributes",
	"EPlayerAttributes",
	Z_Construct_UEnum_Graduation_2024_EPlayerAttributes_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Graduation_2024_EPlayerAttributes_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Graduation_2024_EPlayerAttributes_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Graduation_2024_EPlayerAttributes_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Graduation_2024_EPlayerAttributes()
{
	if (!Z_Registration_Info_UEnum_EPlayerAttributes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPlayerAttributes.InnerSingleton, Z_Construct_UEnum_Graduation_2024_EPlayerAttributes_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPlayerAttributes.InnerSingleton;
}
// End Enum EPlayerAttributes

// Begin ScriptStruct FPlayerAttributes
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlayerAttributes;
class UScriptStruct* FPlayerAttributes::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerAttributes.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlayerAttributes.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerAttributes, (UObject*)Z_Construct_UPackage__Script_Graduation_2024(), TEXT("PlayerAttributes"));
	}
	return Z_Registration_Info_UScriptStruct_PlayerAttributes.OuterSingleton;
}
template<> GRADUATION_2024_API UScriptStruct* StaticStruct<FPlayerAttributes>()
{
	return FPlayerAttributes::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPlayerAttributes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Character/PlayerAttributes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mapattributes_MetaData[] = {
		{ "Category", "Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xcd\xa8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb5\xef\xbf\xbd\xc4\xb7\xef\xbf\xbd\xca\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdMap\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xa8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdMap\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc8\xa1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/PlayerAttributes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xcd\xa8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb5\xef\xbf\xbd\xc4\xb7\xef\xbf\xbd\xca\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdMap\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xa8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdMap\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc8\xa1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Mapattributes_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mapattributes_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Mapattributes_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Mapattributes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerAttributes>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlayerAttributes_Statics::NewProp_Mapattributes_ValueProp = { "Mapattributes", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPlayerAttributes_Statics::NewProp_Mapattributes_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPlayerAttributes_Statics::NewProp_Mapattributes_Key_KeyProp = { "Mapattributes_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Graduation_2024_EPlayerAttributes, METADATA_PARAMS(0, nullptr) }; // 1556152350
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FPlayerAttributes_Statics::NewProp_Mapattributes = { "Mapattributes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerAttributes, Mapattributes), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mapattributes_MetaData), NewProp_Mapattributes_MetaData) }; // 1556152350
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerAttributes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerAttributes_Statics::NewProp_Mapattributes_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerAttributes_Statics::NewProp_Mapattributes_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerAttributes_Statics::NewProp_Mapattributes_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerAttributes_Statics::NewProp_Mapattributes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerAttributes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerAttributes_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Graduation_2024,
	nullptr,
	&NewStructOps,
	"PlayerAttributes",
	Z_Construct_UScriptStruct_FPlayerAttributes_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerAttributes_Statics::PropPointers),
	sizeof(FPlayerAttributes),
	alignof(FPlayerAttributes),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerAttributes_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlayerAttributes_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPlayerAttributes()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerAttributes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlayerAttributes.InnerSingleton, Z_Construct_UScriptStruct_FPlayerAttributes_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PlayerAttributes.InnerSingleton;
}
// End ScriptStruct FPlayerAttributes

// Begin Registration
struct Z_CompiledInDeferFile_FID_Graduation_2024_Source_Graduation_2024_Public_Character_PlayerAttributes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPlayerAttributes_StaticEnum, TEXT("EPlayerAttributes"), &Z_Registration_Info_UEnum_EPlayerAttributes, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1556152350U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPlayerAttributes::StaticStruct, Z_Construct_UScriptStruct_FPlayerAttributes_Statics::NewStructOps, TEXT("PlayerAttributes"), &Z_Registration_Info_UScriptStruct_PlayerAttributes, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayerAttributes), 2318221677U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Graduation_2024_Source_Graduation_2024_Public_Character_PlayerAttributes_h_4275249484(TEXT("/Script/Graduation_2024"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Graduation_2024_Source_Graduation_2024_Public_Character_PlayerAttributes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Graduation_2024_Source_Graduation_2024_Public_Character_PlayerAttributes_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Graduation_2024_Source_Graduation_2024_Public_Character_PlayerAttributes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Graduation_2024_Source_Graduation_2024_Public_Character_PlayerAttributes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
