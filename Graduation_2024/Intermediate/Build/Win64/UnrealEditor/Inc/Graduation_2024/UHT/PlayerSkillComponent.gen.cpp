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
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
GRADUATION_2024_API UClass* Z_Construct_UClass_UPlayerSkillComponent();
GRADUATION_2024_API UClass* Z_Construct_UClass_UPlayerSkillComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Graduation_2024();
// End Cross Module References

// Begin Class UPlayerSkillComponent Function GetPlayerNowEnergy
struct Z_Construct_UFunction_UPlayerSkillComponent_GetPlayerNowEnergy_Statics
{
	struct PlayerSkillComponent_eventGetPlayerNowEnergy_Parms
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerSkillComponent_GetScanDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerSkillComponent, nullptr, "GetScanDistance", nullptr, nullptr, Z_Construct_UFunction_UPlayerSkillComponent_GetScanDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerSkillComponent_GetScanDistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerSkillComponent_GetScanDistance_Statics::PlayerSkillComponent_eventGetScanDistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerSkillComponent_GetScanDistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerSkillComponent_GetScanDistance_Statics::Function_MetaDataParams) };
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

// Begin Class UPlayerSkillComponent
void UPlayerSkillComponent::StaticRegisterNativesUPlayerSkillComponent()
{
	UClass* Class = UPlayerSkillComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetPlayerNowEnergy", &UPlayerSkillComponent::execGetPlayerNowEnergy },
		{ "GetScanDistance", &UPlayerSkillComponent::execGetScanDistance },
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
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScanDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScanEnergyCost;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScanECFrequency;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerSkillComponent_GetPlayerNowEnergy, "GetPlayerNowEnergy" }, // 2832822393
		{ &Z_Construct_UFunction_UPlayerSkillComponent_GetScanDistance, "GetScanDistance" }, // 4221617695
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
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerSkillComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerSkillComponent_Statics::NewProp_ScanDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerSkillComponent_Statics::NewProp_ScanEnergyCost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerSkillComponent_Statics::NewProp_ScanECFrequency,
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
struct Z_CompiledInDeferFile_FID_Programes_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_SkillComponent_PlayerSkillComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerSkillComponent, UPlayerSkillComponent::StaticClass, TEXT("UPlayerSkillComponent"), &Z_Registration_Info_UClass_UPlayerSkillComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerSkillComponent), 3547163890U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Programes_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_SkillComponent_PlayerSkillComponent_h_233325725(TEXT("/Script/Graduation_2024"),
	Z_CompiledInDeferFile_FID_Programes_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_SkillComponent_PlayerSkillComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Programes_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_SkillComponent_PlayerSkillComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
