// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graduation_2024/Public/SkillTriggerZone.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkillTriggerZone() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
GRADUATION_2024_API UClass* Z_Construct_UClass_ASkillTriggerZone();
GRADUATION_2024_API UClass* Z_Construct_UClass_ASkillTriggerZone_NoRegister();
UPackage* Z_Construct_UPackage__Script_Graduation_2024();
// End Cross Module References

// Begin Class ASkillTriggerZone Function OnOverlapBegin
struct Z_Construct_UFunction_ASkillTriggerZone_OnOverlapBegin_Statics
{
	struct SkillTriggerZone_eventOnOverlapBegin_Parms
	{
		UPrimitiveComponent* overlappedComp;
		AActor* otherActor;
		UPrimitiveComponent* otherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xeb\xbf\xaa\xef\xbf\xbd\xef\xbf\xbd\xce\xa7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/SkillTriggerZone.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xeb\xbf\xaa\xef\xbf\xbd\xef\xbf\xbd\xce\xa7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_overlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_otherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_overlappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_otherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_otherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASkillTriggerZone_OnOverlapBegin_Statics::NewProp_overlappedComp = { "overlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkillTriggerZone_eventOnOverlapBegin_Parms, overlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_overlappedComp_MetaData), NewProp_overlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASkillTriggerZone_OnOverlapBegin_Statics::NewProp_otherActor = { "otherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkillTriggerZone_eventOnOverlapBegin_Parms, otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASkillTriggerZone_OnOverlapBegin_Statics::NewProp_otherComp = { "otherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkillTriggerZone_eventOnOverlapBegin_Parms, otherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_otherComp_MetaData), NewProp_otherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASkillTriggerZone_OnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkillTriggerZone_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ASkillTriggerZone_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((SkillTriggerZone_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASkillTriggerZone_OnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SkillTriggerZone_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_ASkillTriggerZone_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASkillTriggerZone_OnOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkillTriggerZone_eventOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASkillTriggerZone_OnOverlapBegin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASkillTriggerZone_OnOverlapBegin_Statics::NewProp_overlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASkillTriggerZone_OnOverlapBegin_Statics::NewProp_otherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASkillTriggerZone_OnOverlapBegin_Statics::NewProp_otherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASkillTriggerZone_OnOverlapBegin_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASkillTriggerZone_OnOverlapBegin_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASkillTriggerZone_OnOverlapBegin_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASkillTriggerZone_OnOverlapBegin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASkillTriggerZone_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASkillTriggerZone, nullptr, "OnOverlapBegin", nullptr, nullptr, Z_Construct_UFunction_ASkillTriggerZone_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASkillTriggerZone_OnOverlapBegin_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASkillTriggerZone_OnOverlapBegin_Statics::SkillTriggerZone_eventOnOverlapBegin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASkillTriggerZone_OnOverlapBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASkillTriggerZone_OnOverlapBegin_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASkillTriggerZone_OnOverlapBegin_Statics::SkillTriggerZone_eventOnOverlapBegin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASkillTriggerZone_OnOverlapBegin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASkillTriggerZone_OnOverlapBegin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASkillTriggerZone::execOnOverlapBegin)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_overlappedComp);
	P_GET_OBJECT(AActor,Z_Param_otherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_otherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOverlapBegin(Z_Param_overlappedComp,Z_Param_otherActor,Z_Param_otherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class ASkillTriggerZone Function OnOverlapBegin

// Begin Class ASkillTriggerZone Function OnOverlapEnd
struct Z_Construct_UFunction_ASkillTriggerZone_OnOverlapEnd_Statics
{
	struct SkillTriggerZone_eventOnOverlapEnd_Parms
	{
		UPrimitiveComponent* overlappedComp;
		AActor* otherActor;
		UPrimitiveComponent* otherComp;
		int32 OtherBodyIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SkillTriggerZone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_overlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_otherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_overlappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_otherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_otherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASkillTriggerZone_OnOverlapEnd_Statics::NewProp_overlappedComp = { "overlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkillTriggerZone_eventOnOverlapEnd_Parms, overlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_overlappedComp_MetaData), NewProp_overlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASkillTriggerZone_OnOverlapEnd_Statics::NewProp_otherActor = { "otherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkillTriggerZone_eventOnOverlapEnd_Parms, otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASkillTriggerZone_OnOverlapEnd_Statics::NewProp_otherComp = { "otherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkillTriggerZone_eventOnOverlapEnd_Parms, otherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_otherComp_MetaData), NewProp_otherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASkillTriggerZone_OnOverlapEnd_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkillTriggerZone_eventOnOverlapEnd_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASkillTriggerZone_OnOverlapEnd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASkillTriggerZone_OnOverlapEnd_Statics::NewProp_overlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASkillTriggerZone_OnOverlapEnd_Statics::NewProp_otherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASkillTriggerZone_OnOverlapEnd_Statics::NewProp_otherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASkillTriggerZone_OnOverlapEnd_Statics::NewProp_OtherBodyIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASkillTriggerZone_OnOverlapEnd_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASkillTriggerZone_OnOverlapEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASkillTriggerZone, nullptr, "OnOverlapEnd", nullptr, nullptr, Z_Construct_UFunction_ASkillTriggerZone_OnOverlapEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASkillTriggerZone_OnOverlapEnd_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASkillTriggerZone_OnOverlapEnd_Statics::SkillTriggerZone_eventOnOverlapEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASkillTriggerZone_OnOverlapEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASkillTriggerZone_OnOverlapEnd_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASkillTriggerZone_OnOverlapEnd_Statics::SkillTriggerZone_eventOnOverlapEnd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASkillTriggerZone_OnOverlapEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASkillTriggerZone_OnOverlapEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASkillTriggerZone::execOnOverlapEnd)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_overlappedComp);
	P_GET_OBJECT(AActor,Z_Param_otherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_otherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOverlapEnd(Z_Param_overlappedComp,Z_Param_otherActor,Z_Param_otherComp,Z_Param_OtherBodyIndex);
	P_NATIVE_END;
}
// End Class ASkillTriggerZone Function OnOverlapEnd

// Begin Class ASkillTriggerZone Function TriggerSkill
struct Z_Construct_UFunction_ASkillTriggerZone_TriggerSkill_Statics
{
	struct SkillTriggerZone_eventTriggerSkill_Parms
	{
		ACharacter* playerCharactor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Skill" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdc\xb4\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/SkillTriggerZone.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdc\xb4\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_playerCharactor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASkillTriggerZone_TriggerSkill_Statics::NewProp_playerCharactor = { "playerCharactor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkillTriggerZone_eventTriggerSkill_Parms, playerCharactor), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASkillTriggerZone_TriggerSkill_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASkillTriggerZone_TriggerSkill_Statics::NewProp_playerCharactor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASkillTriggerZone_TriggerSkill_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASkillTriggerZone_TriggerSkill_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASkillTriggerZone, nullptr, "TriggerSkill", nullptr, nullptr, Z_Construct_UFunction_ASkillTriggerZone_TriggerSkill_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASkillTriggerZone_TriggerSkill_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASkillTriggerZone_TriggerSkill_Statics::SkillTriggerZone_eventTriggerSkill_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASkillTriggerZone_TriggerSkill_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASkillTriggerZone_TriggerSkill_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASkillTriggerZone_TriggerSkill_Statics::SkillTriggerZone_eventTriggerSkill_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASkillTriggerZone_TriggerSkill()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASkillTriggerZone_TriggerSkill_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASkillTriggerZone::execTriggerSkill)
{
	P_GET_OBJECT(ACharacter,Z_Param_playerCharactor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TriggerSkill(Z_Param_playerCharactor);
	P_NATIVE_END;
}
// End Class ASkillTriggerZone Function TriggerSkill

// Begin Class ASkillTriggerZone Function UpgradeSkillDamage
struct Z_Construct_UFunction_ASkillTriggerZone_UpgradeSkillDamage_Statics
{
	struct SkillTriggerZone_eventUpgradeSkillDamage_Parms
	{
		float additionalDamage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Skill" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcb\xbf\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/SkillTriggerZone.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcb\xbf\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_additionalDamage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASkillTriggerZone_UpgradeSkillDamage_Statics::NewProp_additionalDamage = { "additionalDamage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkillTriggerZone_eventUpgradeSkillDamage_Parms, additionalDamage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASkillTriggerZone_UpgradeSkillDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASkillTriggerZone_UpgradeSkillDamage_Statics::NewProp_additionalDamage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASkillTriggerZone_UpgradeSkillDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASkillTriggerZone_UpgradeSkillDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASkillTriggerZone, nullptr, "UpgradeSkillDamage", nullptr, nullptr, Z_Construct_UFunction_ASkillTriggerZone_UpgradeSkillDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASkillTriggerZone_UpgradeSkillDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASkillTriggerZone_UpgradeSkillDamage_Statics::SkillTriggerZone_eventUpgradeSkillDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASkillTriggerZone_UpgradeSkillDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASkillTriggerZone_UpgradeSkillDamage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASkillTriggerZone_UpgradeSkillDamage_Statics::SkillTriggerZone_eventUpgradeSkillDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASkillTriggerZone_UpgradeSkillDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASkillTriggerZone_UpgradeSkillDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASkillTriggerZone::execUpgradeSkillDamage)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_additionalDamage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpgradeSkillDamage(Z_Param_additionalDamage);
	P_NATIVE_END;
}
// End Class ASkillTriggerZone Function UpgradeSkillDamage

// Begin Class ASkillTriggerZone Function UpgradeSkillRange
struct Z_Construct_UFunction_ASkillTriggerZone_UpgradeSkillRange_Statics
{
	struct SkillTriggerZone_eventUpgradeSkillRange_Parms
	{
		float additionalRange;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Skill" },
		{ "ModuleRelativePath", "Public/SkillTriggerZone.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_additionalRange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASkillTriggerZone_UpgradeSkillRange_Statics::NewProp_additionalRange = { "additionalRange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkillTriggerZone_eventUpgradeSkillRange_Parms, additionalRange), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASkillTriggerZone_UpgradeSkillRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASkillTriggerZone_UpgradeSkillRange_Statics::NewProp_additionalRange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASkillTriggerZone_UpgradeSkillRange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASkillTriggerZone_UpgradeSkillRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASkillTriggerZone, nullptr, "UpgradeSkillRange", nullptr, nullptr, Z_Construct_UFunction_ASkillTriggerZone_UpgradeSkillRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASkillTriggerZone_UpgradeSkillRange_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASkillTriggerZone_UpgradeSkillRange_Statics::SkillTriggerZone_eventUpgradeSkillRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASkillTriggerZone_UpgradeSkillRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASkillTriggerZone_UpgradeSkillRange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASkillTriggerZone_UpgradeSkillRange_Statics::SkillTriggerZone_eventUpgradeSkillRange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASkillTriggerZone_UpgradeSkillRange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASkillTriggerZone_UpgradeSkillRange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASkillTriggerZone::execUpgradeSkillRange)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_additionalRange);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpgradeSkillRange(Z_Param_additionalRange);
	P_NATIVE_END;
}
// End Class ASkillTriggerZone Function UpgradeSkillRange

// Begin Class ASkillTriggerZone
void ASkillTriggerZone::StaticRegisterNativesASkillTriggerZone()
{
	UClass* Class = ASkillTriggerZone::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnOverlapBegin", &ASkillTriggerZone::execOnOverlapBegin },
		{ "OnOverlapEnd", &ASkillTriggerZone::execOnOverlapEnd },
		{ "TriggerSkill", &ASkillTriggerZone::execTriggerSkill },
		{ "UpgradeSkillDamage", &ASkillTriggerZone::execUpgradeSkillDamage },
		{ "UpgradeSkillRange", &ASkillTriggerZone::execUpgradeSkillRange },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASkillTriggerZone);
UClass* Z_Construct_UClass_ASkillTriggerZone_NoRegister()
{
	return ASkillTriggerZone::StaticClass();
}
struct Z_Construct_UClass_ASkillTriggerZone_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SkillTriggerZone.h" },
		{ "ModuleRelativePath", "Public/SkillTriggerZone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriggerBox_MetaData[] = {
		{ "Category", "Trigger" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xd7\xb2\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SkillTriggerZone.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xd7\xb2\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsPlayerInRange_MetaData[] = {
		{ "Category", "Trigger" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xb7\xef\xbf\xbd\xef\xbf\xbd\xda\xb7\xef\xbf\xbd\xce\xa7\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/SkillTriggerZone.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xb7\xef\xbf\xbd\xef\xbf\xbd\xda\xb7\xef\xbf\xbd\xce\xa7\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_skillRadius_MetaData[] = {
		{ "Category", "Skill" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xce\xa7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/SkillTriggerZone.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xce\xa7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_skillAngle_MetaData[] = {
		{ "Category", "Skill" },
		{ "ModuleRelativePath", "Public/SkillTriggerZone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_skillDamage_MetaData[] = {
		{ "Category", "Skill" },
		{ "ModuleRelativePath", "Public/SkillTriggerZone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_skillCoolDown_MetaData[] = {
		{ "Category", "Skill" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc8\xb4\xca\xb1\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/SkillTriggerZone.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc8\xb4\xca\xb1\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TriggerBox;
	static void NewProp_bIsPlayerInRange_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPlayerInRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_skillRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_skillAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_skillDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_skillCoolDown;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASkillTriggerZone_OnOverlapBegin, "OnOverlapBegin" }, // 333972765
		{ &Z_Construct_UFunction_ASkillTriggerZone_OnOverlapEnd, "OnOverlapEnd" }, // 2217521273
		{ &Z_Construct_UFunction_ASkillTriggerZone_TriggerSkill, "TriggerSkill" }, // 1089913447
		{ &Z_Construct_UFunction_ASkillTriggerZone_UpgradeSkillDamage, "UpgradeSkillDamage" }, // 1978035188
		{ &Z_Construct_UFunction_ASkillTriggerZone_UpgradeSkillRange, "UpgradeSkillRange" }, // 1641571422
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASkillTriggerZone>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASkillTriggerZone_Statics::NewProp_TriggerBox = { "TriggerBox", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASkillTriggerZone, TriggerBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriggerBox_MetaData), NewProp_TriggerBox_MetaData) };
void Z_Construct_UClass_ASkillTriggerZone_Statics::NewProp_bIsPlayerInRange_SetBit(void* Obj)
{
	((ASkillTriggerZone*)Obj)->bIsPlayerInRange = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASkillTriggerZone_Statics::NewProp_bIsPlayerInRange = { "bIsPlayerInRange", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASkillTriggerZone), &Z_Construct_UClass_ASkillTriggerZone_Statics::NewProp_bIsPlayerInRange_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsPlayerInRange_MetaData), NewProp_bIsPlayerInRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASkillTriggerZone_Statics::NewProp_skillRadius = { "skillRadius", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASkillTriggerZone, skillRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_skillRadius_MetaData), NewProp_skillRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASkillTriggerZone_Statics::NewProp_skillAngle = { "skillAngle", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASkillTriggerZone, skillAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_skillAngle_MetaData), NewProp_skillAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASkillTriggerZone_Statics::NewProp_skillDamage = { "skillDamage", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASkillTriggerZone, skillDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_skillDamage_MetaData), NewProp_skillDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASkillTriggerZone_Statics::NewProp_skillCoolDown = { "skillCoolDown", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASkillTriggerZone, skillCoolDown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_skillCoolDown_MetaData), NewProp_skillCoolDown_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASkillTriggerZone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASkillTriggerZone_Statics::NewProp_TriggerBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASkillTriggerZone_Statics::NewProp_bIsPlayerInRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASkillTriggerZone_Statics::NewProp_skillRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASkillTriggerZone_Statics::NewProp_skillAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASkillTriggerZone_Statics::NewProp_skillDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASkillTriggerZone_Statics::NewProp_skillCoolDown,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASkillTriggerZone_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASkillTriggerZone_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Graduation_2024,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASkillTriggerZone_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASkillTriggerZone_Statics::ClassParams = {
	&ASkillTriggerZone::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASkillTriggerZone_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASkillTriggerZone_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASkillTriggerZone_Statics::Class_MetaDataParams), Z_Construct_UClass_ASkillTriggerZone_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASkillTriggerZone()
{
	if (!Z_Registration_Info_UClass_ASkillTriggerZone.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASkillTriggerZone.OuterSingleton, Z_Construct_UClass_ASkillTriggerZone_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASkillTriggerZone.OuterSingleton;
}
template<> GRADUATION_2024_API UClass* StaticClass<ASkillTriggerZone>()
{
	return ASkillTriggerZone::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASkillTriggerZone);
ASkillTriggerZone::~ASkillTriggerZone() {}
// End Class ASkillTriggerZone

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Data_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_SkillTriggerZone_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASkillTriggerZone, ASkillTriggerZone::StaticClass, TEXT("ASkillTriggerZone"), &Z_Registration_Info_UClass_ASkillTriggerZone, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASkillTriggerZone), 1489513813U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Data_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_SkillTriggerZone_h_1656341070(TEXT("/Script/Graduation_2024"),
	Z_CompiledInDeferFile_FID_UE_Data_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_SkillTriggerZone_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Data_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_SkillTriggerZone_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
