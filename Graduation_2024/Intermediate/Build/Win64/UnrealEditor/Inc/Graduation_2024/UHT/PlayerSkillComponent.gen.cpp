// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graduation_2024/Public/SkillComponent/PlayerSkillComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerSkillComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
GRADUATION_2024_API UClass* Z_Construct_UClass_ARunepaper_NoRegister();
GRADUATION_2024_API UClass* Z_Construct_UClass_UPlayerSkillComponent();
GRADUATION_2024_API UClass* Z_Construct_UClass_UPlayerSkillComponent_NoRegister();
GRADUATION_2024_API UEnum* Z_Construct_UEnum_Graduation_2024_ESkillType();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_Graduation_2024();
// End Cross Module References

// Begin Enum ESkillType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESkillType;
static UEnum* ESkillType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESkillType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESkillType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Graduation_2024_ESkillType, (UObject*)Z_Construct_UPackage__Script_Graduation_2024(), TEXT("ESkillType"));
	}
	return Z_Registration_Info_UEnum_ESkillType.OuterSingleton;
}
template<> GRADUATION_2024_API UEnum* StaticEnum<ESkillType>()
{
	return ESkillType_StaticEnum();
}
struct Z_Construct_UEnum_Graduation_2024_ESkillType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "Inter.Name", "ESkillType::Inter" },
		{ "ModuleRelativePath", "Public/SkillComponent/PlayerSkillComponent.h" },
		{ "Other.Name", "ESkillType::Other" },
		{ "Scan.Name", "ESkillType::Scan" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESkillType::Scan", (int64)ESkillType::Scan },
		{ "ESkillType::Inter", (int64)ESkillType::Inter },
		{ "ESkillType::Other", (int64)ESkillType::Other },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Graduation_2024_ESkillType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Graduation_2024,
	nullptr,
	"ESkillType",
	"ESkillType",
	Z_Construct_UEnum_Graduation_2024_ESkillType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Graduation_2024_ESkillType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Graduation_2024_ESkillType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Graduation_2024_ESkillType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Graduation_2024_ESkillType()
{
	if (!Z_Registration_Info_UEnum_ESkillType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESkillType.InnerSingleton, Z_Construct_UEnum_Graduation_2024_ESkillType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESkillType.InnerSingleton;
}
// End Enum ESkillType

// Begin Class UPlayerSkillComponent Function EndScan
struct Z_Construct_UFunction_UPlayerSkillComponent_EndScan_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SkillComponent/PlayerSkillComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerSkillComponent_EndScan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerSkillComponent, nullptr, "EndScan", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerSkillComponent_EndScan_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerSkillComponent_EndScan_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPlayerSkillComponent_EndScan()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerSkillComponent_EndScan_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerSkillComponent::execEndScan)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndScan();
	P_NATIVE_END;
}
// End Class UPlayerSkillComponent Function EndScan

// Begin Class UPlayerSkillComponent Function GetPlayerNowEnergy
struct Z_Construct_UFunction_UPlayerSkillComponent_GetPlayerNowEnergy_Statics
{
	struct PlayerSkillComponent_eventGetPlayerNowEnergy_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xc8\xa1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/SkillComponent/PlayerSkillComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc8\xa1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerSkillComponent_GetPlayerNowEnergy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerSkillComponent_eventGetPlayerNowEnergy_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerSkillComponent_GetPlayerNowEnergy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerSkillComponent_GetPlayerNowEnergy_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerSkillComponent_GetPlayerNowEnergy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerSkillComponent_GetPlayerNowEnergy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerSkillComponent, nullptr, "GetPlayerNowEnergy", nullptr, nullptr, Z_Construct_UFunction_UPlayerSkillComponent_GetPlayerNowEnergy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerSkillComponent_GetPlayerNowEnergy_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerSkillComponent_GetPlayerNowEnergy_Statics::PlayerSkillComponent_eventGetPlayerNowEnergy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerSkillComponent_GetPlayerNowEnergy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerSkillComponent_GetPlayerNowEnergy_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayerSkillComponent_GetPlayerNowEnergy_Statics::PlayerSkillComponent_eventGetPlayerNowEnergy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerSkillComponent_GetPlayerNowEnergy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerSkillComponent_GetPlayerNowEnergy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerSkillComponent::execGetPlayerNowEnergy)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetPlayerNowEnergy();
	P_NATIVE_END;
}
// End Class UPlayerSkillComponent Function GetPlayerNowEnergy

// Begin Class UPlayerSkillComponent Function GetScanColdState
struct Z_Construct_UFunction_UPlayerSkillComponent_GetScanColdState_Statics
{
	struct PlayerSkillComponent_eventGetScanColdState_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SkillComponent/PlayerSkillComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UPlayerSkillComponent_GetScanColdState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PlayerSkillComponent_eventGetScanColdState_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayerSkillComponent_GetScanColdState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerSkillComponent_eventGetScanColdState_Parms), &Z_Construct_UFunction_UPlayerSkillComponent_GetScanColdState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerSkillComponent_GetScanColdState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerSkillComponent_GetScanColdState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerSkillComponent_GetScanColdState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerSkillComponent_GetScanColdState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerSkillComponent, nullptr, "GetScanColdState", nullptr, nullptr, Z_Construct_UFunction_UPlayerSkillComponent_GetScanColdState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerSkillComponent_GetScanColdState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerSkillComponent_GetScanColdState_Statics::PlayerSkillComponent_eventGetScanColdState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerSkillComponent_GetScanColdState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerSkillComponent_GetScanColdState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayerSkillComponent_GetScanColdState_Statics::PlayerSkillComponent_eventGetScanColdState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerSkillComponent_GetScanColdState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerSkillComponent_GetScanColdState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerSkillComponent::execGetScanColdState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetScanColdState();
	P_NATIVE_END;
}
// End Class UPlayerSkillComponent Function GetScanColdState

// Begin Class UPlayerSkillComponent Function GetScanDistance
struct Z_Construct_UFunction_UPlayerSkillComponent_GetScanDistance_Statics
{
	struct PlayerSkillComponent_eventGetScanDistance_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SkillComponent/PlayerSkillComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerSkillComponent_GetScanDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerSkillComponent_eventGetScanDistance_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerSkillComponent_GetScanDistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerSkillComponent_GetScanDistance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerSkillComponent_GetScanDistance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerSkillComponent_GetScanDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerSkillComponent, nullptr, "GetScanDistance", nullptr, nullptr, Z_Construct_UFunction_UPlayerSkillComponent_GetScanDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerSkillComponent_GetScanDistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerSkillComponent_GetScanDistance_Statics::PlayerSkillComponent_eventGetScanDistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerSkillComponent_GetScanDistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerSkillComponent_GetScanDistance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayerSkillComponent_GetScanDistance_Statics::PlayerSkillComponent_eventGetScanDistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerSkillComponent_GetScanDistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerSkillComponent_GetScanDistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerSkillComponent::execGetScanDistance)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetScanDistance();
	P_NATIVE_END;
}
// End Class UPlayerSkillComponent Function GetScanDistance

// Begin Class UPlayerSkillComponent Function StartScan
struct Z_Construct_UFunction_UPlayerSkillComponent_StartScan_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SkillComponent/PlayerSkillComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerSkillComponent_StartScan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerSkillComponent, nullptr, "StartScan", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerSkillComponent_StartScan_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerSkillComponent_StartScan_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPlayerSkillComponent_StartScan()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerSkillComponent_StartScan_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerSkillComponent::execStartScan)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartScan();
	P_NATIVE_END;
}
// End Class UPlayerSkillComponent Function StartScan

// Begin Class UPlayerSkillComponent
void UPlayerSkillComponent::StaticRegisterNativesUPlayerSkillComponent()
{
	UClass* Class = UPlayerSkillComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EndScan", &UPlayerSkillComponent::execEndScan },
		{ "GetPlayerNowEnergy", &UPlayerSkillComponent::execGetPlayerNowEnergy },
		{ "GetScanColdState", &UPlayerSkillComponent::execGetScanColdState },
		{ "GetScanDistance", &UPlayerSkillComponent::execGetScanDistance },
		{ "StartScan", &UPlayerSkillComponent::execStartScan },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerSkillComponent);
UClass* Z_Construct_UClass_UPlayerSkillComponent_NoRegister()
{
	return UPlayerSkillComponent::StaticClass();
}
struct Z_Construct_UClass_UPlayerSkillComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SkillComponent/PlayerSkillComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SkillComponent/PlayerSkillComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScanDistance_MetaData[] = {
		{ "Category", "ScanProperty" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xc9\xa8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/SkillComponent/PlayerSkillComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xc9\xa8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScanEnergyCost_MetaData[] = {
		{ "Category", "ScanProperty" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xc9\xa8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/SkillComponent/PlayerSkillComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xc9\xa8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScanECFrequency_MetaData[] = {
		{ "Category", "ScanProperty" },
		{ "ModuleRelativePath", "Public/SkillComponent/PlayerSkillComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScanColdTime_MetaData[] = {
		{ "Category", "ScanProperty" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xc9\xa8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc8\xb4\xca\xb1\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/SkillComponent/PlayerSkillComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xc9\xa8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc8\xb4\xca\xb1\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheckRadius_MetaData[] = {
		{ "Category", "Inter Range" },
		{ "ModuleRelativePath", "Public/SkillComponent/PlayerSkillComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheckViewAngle_MetaData[] = {
		{ "Category", "Inter Range" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xeb\xbe\xb6\n" },
#endif
		{ "ModuleRelativePath", "Public/SkillComponent/PlayerSkillComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xeb\xbe\xb6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterDelayTime_MetaData[] = {
		{ "Category", "RunePaper" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd2\xb0\xef\xbf\xbd\xc4\xbd\xc7\xb6\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/SkillComponent/PlayerSkillComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd2\xb0\xef\xbf\xbd\xc4\xbd\xc7\xb6\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterBackDelayTime_MetaData[] = {
		{ "Category", "RunePaper" },
		{ "ModuleRelativePath", "Public/SkillComponent/PlayerSkillComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bullet_MetaData[] = {
		{ "Category", "RunePaper" },
		{ "ModuleRelativePath", "Public/SkillComponent/PlayerSkillComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocketLocationName_MetaData[] = {
		{ "Category", "RunePaper" },
		{ "ModuleRelativePath", "Public/SkillComponent/PlayerSkillComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitPosOffset_MetaData[] = {
		{ "Category", "RunePaper" },
		{ "ModuleRelativePath", "Public/SkillComponent/PlayerSkillComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RunepaperFire_MetaData[] = {
		{ "Category", "RunePaper" },
		{ "ModuleRelativePath", "Public/SkillComponent/PlayerSkillComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScanDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScanEnergyCost;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScanECFrequency;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScanColdTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CheckRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CheckViewAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InterDelayTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InterBackDelayTime;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Bullet;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SocketLocationName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitPosOffset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RunepaperFire;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerSkillComponent_EndScan, "EndScan" }, // 2430249800
		{ &Z_Construct_UFunction_UPlayerSkillComponent_GetPlayerNowEnergy, "GetPlayerNowEnergy" }, // 4036743481
		{ &Z_Construct_UFunction_UPlayerSkillComponent_GetScanColdState, "GetScanColdState" }, // 1862270726
		{ &Z_Construct_UFunction_UPlayerSkillComponent_GetScanDistance, "GetScanDistance" }, // 2075880884
		{ &Z_Construct_UFunction_UPlayerSkillComponent_StartScan, "StartScan" }, // 3570409872
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerSkillComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerSkillComponent_Statics::NewProp_ScanDistance = { "ScanDistance", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerSkillComponent, ScanDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScanDistance_MetaData), NewProp_ScanDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerSkillComponent_Statics::NewProp_ScanEnergyCost = { "ScanEnergyCost", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerSkillComponent, ScanEnergyCost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScanEnergyCost_MetaData), NewProp_ScanEnergyCost_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerSkillComponent_Statics::NewProp_ScanECFrequency = { "ScanECFrequency", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerSkillComponent, ScanECFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScanECFrequency_MetaData), NewProp_ScanECFrequency_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerSkillComponent_Statics::NewProp_ScanColdTime = { "ScanColdTime", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerSkillComponent, ScanColdTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScanColdTime_MetaData), NewProp_ScanColdTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerSkillComponent_Statics::NewProp_CheckRadius = { "CheckRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerSkillComponent, CheckRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheckRadius_MetaData), NewProp_CheckRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerSkillComponent_Statics::NewProp_CheckViewAngle = { "CheckViewAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerSkillComponent, CheckViewAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheckViewAngle_MetaData), NewProp_CheckViewAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerSkillComponent_Statics::NewProp_InterDelayTime = { "InterDelayTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerSkillComponent, InterDelayTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterDelayTime_MetaData), NewProp_InterDelayTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerSkillComponent_Statics::NewProp_InterBackDelayTime = { "InterBackDelayTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerSkillComponent, InterBackDelayTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterBackDelayTime_MetaData), NewProp_InterBackDelayTime_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPlayerSkillComponent_Statics::NewProp_Bullet = { "Bullet", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerSkillComponent, Bullet), Z_Construct_UClass_UClass, Z_Construct_UClass_ARunepaper_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bullet_MetaData), NewProp_Bullet_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPlayerSkillComponent_Statics::NewProp_SocketLocationName = { "SocketLocationName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerSkillComponent, SocketLocationName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocketLocationName_MetaData), NewProp_SocketLocationName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerSkillComponent_Statics::NewProp_InitPosOffset = { "InitPosOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerSkillComponent, InitPosOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitPosOffset_MetaData), NewProp_InitPosOffset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerSkillComponent_Statics::NewProp_RunepaperFire = { "RunepaperFire", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerSkillComponent, RunepaperFire), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RunepaperFire_MetaData), NewProp_RunepaperFire_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerSkillComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerSkillComponent_Statics::NewProp_ScanDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerSkillComponent_Statics::NewProp_ScanEnergyCost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerSkillComponent_Statics::NewProp_ScanECFrequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerSkillComponent_Statics::NewProp_ScanColdTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerSkillComponent_Statics::NewProp_CheckRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerSkillComponent_Statics::NewProp_CheckViewAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerSkillComponent_Statics::NewProp_InterDelayTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerSkillComponent_Statics::NewProp_InterBackDelayTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerSkillComponent_Statics::NewProp_Bullet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerSkillComponent_Statics::NewProp_SocketLocationName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerSkillComponent_Statics::NewProp_InitPosOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerSkillComponent_Statics::NewProp_RunepaperFire,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerSkillComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPlayerSkillComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Graduation_2024,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerSkillComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerSkillComponent_Statics::ClassParams = {
	&UPlayerSkillComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPlayerSkillComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerSkillComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerSkillComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerSkillComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayerSkillComponent()
{
	if (!Z_Registration_Info_UClass_UPlayerSkillComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerSkillComponent.OuterSingleton, Z_Construct_UClass_UPlayerSkillComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayerSkillComponent.OuterSingleton;
}
template<> GRADUATION_2024_API UClass* StaticClass<UPlayerSkillComponent>()
{
	return UPlayerSkillComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerSkillComponent);
UPlayerSkillComponent::~UPlayerSkillComponent() {}
// End Class UPlayerSkillComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_BS_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_SkillComponent_PlayerSkillComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESkillType_StaticEnum, TEXT("ESkillType"), &Z_Registration_Info_UEnum_ESkillType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2243955677U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerSkillComponent, UPlayerSkillComponent::StaticClass, TEXT("UPlayerSkillComponent"), &Z_Registration_Info_UClass_UPlayerSkillComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerSkillComponent), 1907708241U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BS_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_SkillComponent_PlayerSkillComponent_h_4033850326(TEXT("/Script/Graduation_2024"),
	Z_CompiledInDeferFile_FID_BS_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_SkillComponent_PlayerSkillComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BS_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_SkillComponent_PlayerSkillComponent_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_BS_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_SkillComponent_PlayerSkillComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BS_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_SkillComponent_PlayerSkillComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
