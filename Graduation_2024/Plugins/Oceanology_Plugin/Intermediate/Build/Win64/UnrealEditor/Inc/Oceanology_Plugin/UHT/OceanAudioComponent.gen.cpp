// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Oceanology_Plugin/Public/Components/OceanAudioComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOceanAudioComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAudioComponent();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_AOceanologyWaterParent_NoRegister();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_UOceanAudioComponent();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_UOceanAudioComponent_NoRegister();
OCEANOLOGY_PLUGIN_API UEnum* Z_Construct_UEnum_Oceanology_Plugin_EOceanAudioMode();
UPackage* Z_Construct_UPackage__Script_Oceanology_Plugin();
// End Cross Module References

// Begin Enum EOceanAudioMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOceanAudioMode;
static UEnum* EOceanAudioMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOceanAudioMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOceanAudioMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Oceanology_Plugin_EOceanAudioMode, (UObject*)Z_Construct_UPackage__Script_Oceanology_Plugin(), TEXT("EOceanAudioMode"));
	}
	return Z_Registration_Info_UEnum_EOceanAudioMode.OuterSingleton;
}
template<> OCEANOLOGY_PLUGIN_API UEnum* StaticEnum<EOceanAudioMode>()
{
	return EOceanAudioMode_StaticEnum();
}
struct Z_Construct_UEnum_Oceanology_Plugin_EOceanAudioMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Components/OceanAudioComponent.h" },
		{ "None.Name", "EOceanAudioMode::None" },
		{ "Underwater.Name", "EOceanAudioMode::Underwater" },
		{ "Wave.Name", "EOceanAudioMode::Wave" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOceanAudioMode::None", (int64)EOceanAudioMode::None },
		{ "EOceanAudioMode::Underwater", (int64)EOceanAudioMode::Underwater },
		{ "EOceanAudioMode::Wave", (int64)EOceanAudioMode::Wave },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Oceanology_Plugin_EOceanAudioMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Oceanology_Plugin,
	nullptr,
	"EOceanAudioMode",
	"EOceanAudioMode",
	Z_Construct_UEnum_Oceanology_Plugin_EOceanAudioMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Oceanology_Plugin_EOceanAudioMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Oceanology_Plugin_EOceanAudioMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Oceanology_Plugin_EOceanAudioMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Oceanology_Plugin_EOceanAudioMode()
{
	if (!Z_Registration_Info_UEnum_EOceanAudioMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOceanAudioMode.InnerSingleton, Z_Construct_UEnum_Oceanology_Plugin_EOceanAudioMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOceanAudioMode.InnerSingleton;
}
// End Enum EOceanAudioMode

// Begin Class UOceanAudioComponent Function PlaySoundFX
struct Z_Construct_UFunction_UOceanAudioComponent_PlaySoundFX_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sound FX" },
		{ "ModuleRelativePath", "Public/Components/OceanAudioComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanAudioComponent_PlaySoundFX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanAudioComponent, nullptr, "PlaySoundFX", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanAudioComponent_PlaySoundFX_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanAudioComponent_PlaySoundFX_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UOceanAudioComponent_PlaySoundFX()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanAudioComponent_PlaySoundFX_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanAudioComponent::execPlaySoundFX)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlaySoundFX();
	P_NATIVE_END;
}
// End Class UOceanAudioComponent Function PlaySoundFX

// Begin Class UOceanAudioComponent
void UOceanAudioComponent::StaticRegisterNativesUOceanAudioComponent()
{
	UClass* Class = UOceanAudioComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "PlaySoundFX", &UOceanAudioComponent::execPlaySoundFX },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOceanAudioComponent);
UClass* Z_Construct_UClass_UOceanAudioComponent_NoRegister()
{
	return UOceanAudioComponent::StaticClass();
}
struct Z_Construct_UClass_UOceanAudioComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Object ActorComponent Physics Rendering Mobility LOD PhysicsVolume" },
		{ "IncludePath", "Components/OceanAudioComponent.h" },
		{ "ModuleRelativePath", "Public/Components/OceanAudioComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[] = {
		{ "Category", "Ocean Audio" },
		{ "ModuleRelativePath", "Public/Components/OceanAudioComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Control the mode of the Ocean Audio component. None = Disabled, Underwater = sound below waves, Waves = sound above waves" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugEnabled_MetaData[] = {
		{ "Category", "Ocean Audio|Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Turning on/off debug messages of the water audio. WARNING: Debugging affects performance, do NOT use in production! */" },
#endif
		{ "ModuleRelativePath", "Public/Components/OceanAudioComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Turning on/off debug messages of the water audio. WARNING: Debugging affects performance, do NOT use in production!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OceanologyWater_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/OceanAudioComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
	static void NewProp_DebugEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DebugEnabled;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OceanologyWater;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOceanAudioComponent_PlaySoundFX, "PlaySoundFX" }, // 1423473039
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOceanAudioComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOceanAudioComponent_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOceanAudioComponent_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanAudioComponent, Mode), Z_Construct_UEnum_Oceanology_Plugin_EOceanAudioMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mode_MetaData), NewProp_Mode_MetaData) }; // 1933340687
void Z_Construct_UClass_UOceanAudioComponent_Statics::NewProp_DebugEnabled_SetBit(void* Obj)
{
	((UOceanAudioComponent*)Obj)->DebugEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOceanAudioComponent_Statics::NewProp_DebugEnabled = { "DebugEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOceanAudioComponent), &Z_Construct_UClass_UOceanAudioComponent_Statics::NewProp_DebugEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugEnabled_MetaData), NewProp_DebugEnabled_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOceanAudioComponent_Statics::NewProp_OceanologyWater = { "OceanologyWater", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanAudioComponent, OceanologyWater), Z_Construct_UClass_AOceanologyWaterParent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OceanologyWater_MetaData), NewProp_OceanologyWater_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOceanAudioComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanAudioComponent_Statics::NewProp_Mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanAudioComponent_Statics::NewProp_Mode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanAudioComponent_Statics::NewProp_DebugEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanAudioComponent_Statics::NewProp_OceanologyWater,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOceanAudioComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOceanAudioComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAudioComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Oceanology_Plugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOceanAudioComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOceanAudioComponent_Statics::ClassParams = {
	&UOceanAudioComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOceanAudioComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOceanAudioComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOceanAudioComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UOceanAudioComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOceanAudioComponent()
{
	if (!Z_Registration_Info_UClass_UOceanAudioComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOceanAudioComponent.OuterSingleton, Z_Construct_UClass_UOceanAudioComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOceanAudioComponent.OuterSingleton;
}
template<> OCEANOLOGY_PLUGIN_API UClass* StaticClass<UOceanAudioComponent>()
{
	return UOceanAudioComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOceanAudioComponent);
UOceanAudioComponent::~UOceanAudioComponent() {}
// End Class UOceanAudioComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_OceanAudioComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EOceanAudioMode_StaticEnum, TEXT("EOceanAudioMode"), &Z_Registration_Info_UEnum_EOceanAudioMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1933340687U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOceanAudioComponent, UOceanAudioComponent::StaticClass, TEXT("UOceanAudioComponent"), &Z_Registration_Info_UClass_UOceanAudioComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOceanAudioComponent), 1705143412U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_OceanAudioComponent_h_2098991097(TEXT("/Script/Oceanology_Plugin"),
	Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_OceanAudioComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_OceanAudioComponent_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_OceanAudioComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_OceanAudioComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
