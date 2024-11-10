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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerSkillComponent_EndScan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerSkillComponent, nullptr, "EndScan", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerSkillComponent_EndScan_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerSkillComponent_EndScan_Statics::Function_MetaDataParams) };
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerSkillComponent_StartScan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerSkillComponent, nullptr, "StartScan", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerSkillComponent_StartScan_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerSkillComponent_StartScan_Statics::Function_MetaDataParams) };
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
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SkillComponent/PlayerSkillComponent.h" },
		{ "ModuleRelativePath", "Public/SkillComponent/PlayerSkillComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerSkillComponent_EndScan, "EndScan" }, // 3876882996
		{ &Z_Construct_UFunction_UPlayerSkillComponent_StartScan, "StartScan" }, // 3506415711
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerSkillComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
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
struct Z_CompiledInDeferFile_FID_Graduation_2024_Source_Graduation_2024_Public_SkillComponent_PlayerSkillComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerSkillComponent, UPlayerSkillComponent::StaticClass, TEXT("UPlayerSkillComponent"), &Z_Registration_Info_UClass_UPlayerSkillComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerSkillComponent), 133805910U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Graduation_2024_Source_Graduation_2024_Public_SkillComponent_PlayerSkillComponent_h_381527143(TEXT("/Script/Graduation_2024"),
	Z_CompiledInDeferFile_FID_Graduation_2024_Source_Graduation_2024_Public_SkillComponent_PlayerSkillComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Graduation_2024_Source_Graduation_2024_Public_SkillComponent_PlayerSkillComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
