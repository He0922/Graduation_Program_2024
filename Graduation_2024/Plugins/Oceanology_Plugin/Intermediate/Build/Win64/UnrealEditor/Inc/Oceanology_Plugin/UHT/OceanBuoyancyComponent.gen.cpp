// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Oceanology_Plugin/Public/Components/OceanBuoyancyComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOceanBuoyancyComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_AOceanologyWaterParent_NoRegister();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_AOceanologyWaterVolume_NoRegister();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_UOceanBuoyancyComponent();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_UOceanBuoyancyComponent_NoRegister();
OCEANOLOGY_PLUGIN_API UEnum* Z_Construct_UEnum_Oceanology_Plugin_EOceanBuoyancyPontoonMode();
OCEANOLOGY_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnEnteredWater__DelegateSignature();
OCEANOLOGY_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnExitedWater__DelegateSignature();
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanBuoyancyPontoon();
UPackage* Z_Construct_UPackage__Script_Oceanology_Plugin();
// End Cross Module References

// Begin Enum EOceanBuoyancyPontoonMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOceanBuoyancyPontoonMode;
static UEnum* EOceanBuoyancyPontoonMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOceanBuoyancyPontoonMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOceanBuoyancyPontoonMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Oceanology_Plugin_EOceanBuoyancyPontoonMode, (UObject*)Z_Construct_UPackage__Script_Oceanology_Plugin(), TEXT("EOceanBuoyancyPontoonMode"));
	}
	return Z_Registration_Info_UEnum_EOceanBuoyancyPontoonMode.OuterSingleton;
}
template<> OCEANOLOGY_PLUGIN_API UEnum* StaticEnum<EOceanBuoyancyPontoonMode>()
{
	return EOceanBuoyancyPontoonMode_StaticEnum();
}
struct Z_Construct_UEnum_Oceanology_Plugin_EOceanBuoyancyPontoonMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Buoyancy.Name", "Buoyancy" },
		{ "ModuleRelativePath", "Public/Components/OceanBuoyancyComponent.h" },
		{ "WaterEnterExitEventOnly.Name", "WaterEnterExitEventOnly" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "Buoyancy", (int64)Buoyancy },
		{ "WaterEnterExitEventOnly", (int64)WaterEnterExitEventOnly },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Oceanology_Plugin_EOceanBuoyancyPontoonMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Oceanology_Plugin,
	nullptr,
	"EOceanBuoyancyPontoonMode",
	"EOceanBuoyancyPontoonMode",
	Z_Construct_UEnum_Oceanology_Plugin_EOceanBuoyancyPontoonMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Oceanology_Plugin_EOceanBuoyancyPontoonMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Oceanology_Plugin_EOceanBuoyancyPontoonMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Oceanology_Plugin_EOceanBuoyancyPontoonMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Oceanology_Plugin_EOceanBuoyancyPontoonMode()
{
	if (!Z_Registration_Info_UEnum_EOceanBuoyancyPontoonMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOceanBuoyancyPontoonMode.InnerSingleton, Z_Construct_UEnum_Oceanology_Plugin_EOceanBuoyancyPontoonMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOceanBuoyancyPontoonMode.InnerSingleton;
}
// End Enum EOceanBuoyancyPontoonMode

// Begin ScriptStruct FOceanBuoyancyPontoon
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OceanBuoyancyPontoon;
class UScriptStruct* FOceanBuoyancyPontoon::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OceanBuoyancyPontoon.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OceanBuoyancyPontoon.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOceanBuoyancyPontoon, (UObject*)Z_Construct_UPackage__Script_Oceanology_Plugin(), TEXT("OceanBuoyancyPontoon"));
	}
	return Z_Registration_Info_UScriptStruct_OceanBuoyancyPontoon.OuterSingleton;
}
template<> OCEANOLOGY_PLUGIN_API UScriptStruct* StaticStruct<FOceanBuoyancyPontoon>()
{
	return FOceanBuoyancyPontoon::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOceanBuoyancyPontoon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Components/OceanBuoyancyComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Socket_MetaData[] = {
		{ "Category", "Pontoon" },
		{ "ModuleRelativePath", "Public/Components/OceanBuoyancyComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pontoon_MetaData[] = {
		{ "Category", "Pontoon" },
		{ "ModuleRelativePath", "Public/Components/OceanBuoyancyComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "Category", "Pontoon" },
		{ "ModuleRelativePath", "Public/Components/OceanBuoyancyComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DensityOverride_MetaData[] = {
		{ "Category", "Pontoon" },
		{ "ModuleRelativePath", "Public/Components/OceanBuoyancyComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[] = {
		{ "Category", "Pontoon" },
		{ "ModuleRelativePath", "Public/Components/OceanBuoyancyComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Socket;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Pontoon;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Radius;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_DensityOverride;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOceanBuoyancyPontoon>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FOceanBuoyancyPontoon_Statics::NewProp_Socket = { "Socket", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanBuoyancyPontoon, Socket), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Socket_MetaData), NewProp_Socket_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOceanBuoyancyPontoon_Statics::NewProp_Pontoon = { "Pontoon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanBuoyancyPontoon, Pontoon), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pontoon_MetaData), NewProp_Pontoon_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanBuoyancyPontoon_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanBuoyancyPontoon, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanBuoyancyPontoon_Statics::NewProp_DensityOverride = { "DensityOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanBuoyancyPontoon, DensityOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DensityOverride_MetaData), NewProp_DensityOverride_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOceanBuoyancyPontoon_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanBuoyancyPontoon, Mode), Z_Construct_UEnum_Oceanology_Plugin_EOceanBuoyancyPontoonMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mode_MetaData), NewProp_Mode_MetaData) }; // 1954147311
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOceanBuoyancyPontoon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanBuoyancyPontoon_Statics::NewProp_Socket,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanBuoyancyPontoon_Statics::NewProp_Pontoon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanBuoyancyPontoon_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanBuoyancyPontoon_Statics::NewProp_DensityOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanBuoyancyPontoon_Statics::NewProp_Mode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanBuoyancyPontoon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOceanBuoyancyPontoon_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Oceanology_Plugin,
	nullptr,
	&NewStructOps,
	"OceanBuoyancyPontoon",
	Z_Construct_UScriptStruct_FOceanBuoyancyPontoon_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanBuoyancyPontoon_Statics::PropPointers),
	sizeof(FOceanBuoyancyPontoon),
	alignof(FOceanBuoyancyPontoon),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanBuoyancyPontoon_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOceanBuoyancyPontoon_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOceanBuoyancyPontoon()
{
	if (!Z_Registration_Info_UScriptStruct_OceanBuoyancyPontoon.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OceanBuoyancyPontoon.InnerSingleton, Z_Construct_UScriptStruct_FOceanBuoyancyPontoon_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OceanBuoyancyPontoon.InnerSingleton;
}
// End ScriptStruct FOceanBuoyancyPontoon

// Begin Delegate FOceanOnEnteredWater
struct Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnEnteredWater__DelegateSignature_Statics
{
	struct _Script_Oceanology_Plugin_eventOceanOnEnteredWater_Parms
	{
		FName Socket;
		bool Underwater;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/OceanBuoyancyComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Socket;
	static void NewProp_Underwater_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Underwater;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnEnteredWater__DelegateSignature_Statics::NewProp_Socket = { "Socket", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Oceanology_Plugin_eventOceanOnEnteredWater_Parms, Socket), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnEnteredWater__DelegateSignature_Statics::NewProp_Underwater_SetBit(void* Obj)
{
	((_Script_Oceanology_Plugin_eventOceanOnEnteredWater_Parms*)Obj)->Underwater = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnEnteredWater__DelegateSignature_Statics::NewProp_Underwater = { "Underwater", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_Oceanology_Plugin_eventOceanOnEnteredWater_Parms), &Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnEnteredWater__DelegateSignature_Statics::NewProp_Underwater_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnEnteredWater__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnEnteredWater__DelegateSignature_Statics::NewProp_Socket,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnEnteredWater__DelegateSignature_Statics::NewProp_Underwater,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnEnteredWater__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnEnteredWater__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Oceanology_Plugin, nullptr, "OceanOnEnteredWater__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnEnteredWater__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnEnteredWater__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnEnteredWater__DelegateSignature_Statics::_Script_Oceanology_Plugin_eventOceanOnEnteredWater_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnEnteredWater__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnEnteredWater__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnEnteredWater__DelegateSignature_Statics::_Script_Oceanology_Plugin_eventOceanOnEnteredWater_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnEnteredWater__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnEnteredWater__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOceanOnEnteredWater_DelegateWrapper(const FMulticastScriptDelegate& OceanOnEnteredWater, FName Socket, bool Underwater)
{
	struct _Script_Oceanology_Plugin_eventOceanOnEnteredWater_Parms
	{
		FName Socket;
		bool Underwater;
	};
	_Script_Oceanology_Plugin_eventOceanOnEnteredWater_Parms Parms;
	Parms.Socket=Socket;
	Parms.Underwater=Underwater ? true : false;
	OceanOnEnteredWater.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOceanOnEnteredWater

// Begin Delegate FOceanOnExitedWater
struct Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnExitedWater__DelegateSignature_Statics
{
	struct _Script_Oceanology_Plugin_eventOceanOnExitedWater_Parms
	{
		FName Socket;
		bool Underwater;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/OceanBuoyancyComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Socket;
	static void NewProp_Underwater_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Underwater;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnExitedWater__DelegateSignature_Statics::NewProp_Socket = { "Socket", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Oceanology_Plugin_eventOceanOnExitedWater_Parms, Socket), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnExitedWater__DelegateSignature_Statics::NewProp_Underwater_SetBit(void* Obj)
{
	((_Script_Oceanology_Plugin_eventOceanOnExitedWater_Parms*)Obj)->Underwater = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnExitedWater__DelegateSignature_Statics::NewProp_Underwater = { "Underwater", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_Oceanology_Plugin_eventOceanOnExitedWater_Parms), &Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnExitedWater__DelegateSignature_Statics::NewProp_Underwater_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnExitedWater__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnExitedWater__DelegateSignature_Statics::NewProp_Socket,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnExitedWater__DelegateSignature_Statics::NewProp_Underwater,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnExitedWater__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnExitedWater__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Oceanology_Plugin, nullptr, "OceanOnExitedWater__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnExitedWater__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnExitedWater__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnExitedWater__DelegateSignature_Statics::_Script_Oceanology_Plugin_eventOceanOnExitedWater_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnExitedWater__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnExitedWater__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnExitedWater__DelegateSignature_Statics::_Script_Oceanology_Plugin_eventOceanOnExitedWater_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnExitedWater__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnExitedWater__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOceanOnExitedWater_DelegateWrapper(const FMulticastScriptDelegate& OceanOnExitedWater, FName Socket, bool Underwater)
{
	struct _Script_Oceanology_Plugin_eventOceanOnExitedWater_Parms
	{
		FName Socket;
		bool Underwater;
	};
	_Script_Oceanology_Plugin_eventOceanOnExitedWater_Parms Parms;
	Parms.Socket=Socket;
	Parms.Underwater=Underwater ? true : false;
	OceanOnExitedWater.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOceanOnExitedWater

// Begin Class UOceanBuoyancyComponent Function AddForceAtLocation
struct Z_Construct_UFunction_UOceanBuoyancyComponent_AddForceAtLocation_Statics
{
	struct OceanBuoyancyComponent_eventAddForceAtLocation_Parms
	{
		FVector Force;
		FVector Position;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Buoyancy" },
		{ "ModuleRelativePath", "Public/Components/OceanBuoyancyComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Force_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Force;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanBuoyancyComponent_AddForceAtLocation_Statics::NewProp_Force = { "Force", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanBuoyancyComponent_eventAddForceAtLocation_Parms, Force), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Force_MetaData), NewProp_Force_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanBuoyancyComponent_AddForceAtLocation_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanBuoyancyComponent_eventAddForceAtLocation_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanBuoyancyComponent_AddForceAtLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanBuoyancyComponent_AddForceAtLocation_Statics::NewProp_Force,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanBuoyancyComponent_AddForceAtLocation_Statics::NewProp_Position,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanBuoyancyComponent_AddForceAtLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanBuoyancyComponent_AddForceAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanBuoyancyComponent, nullptr, "AddForceAtLocation", nullptr, nullptr, Z_Construct_UFunction_UOceanBuoyancyComponent_AddForceAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanBuoyancyComponent_AddForceAtLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOceanBuoyancyComponent_AddForceAtLocation_Statics::OceanBuoyancyComponent_eventAddForceAtLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanBuoyancyComponent_AddForceAtLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanBuoyancyComponent_AddForceAtLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOceanBuoyancyComponent_AddForceAtLocation_Statics::OceanBuoyancyComponent_eventAddForceAtLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanBuoyancyComponent_AddForceAtLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanBuoyancyComponent_AddForceAtLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanBuoyancyComponent::execAddForceAtLocation)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Force);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Position);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddForceAtLocation(Z_Param_Out_Force,Z_Param_Out_Position);
	P_NATIVE_END;
}
// End Class UOceanBuoyancyComponent Function AddForceAtLocation

// Begin Class UOceanBuoyancyComponent Function DebugPontoons
struct Z_Construct_UFunction_UOceanBuoyancyComponent_DebugPontoons_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Buoyancy" },
		{ "ModuleRelativePath", "Public/Components/OceanBuoyancyComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanBuoyancyComponent_DebugPontoons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanBuoyancyComponent, nullptr, "DebugPontoons", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanBuoyancyComponent_DebugPontoons_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanBuoyancyComponent_DebugPontoons_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UOceanBuoyancyComponent_DebugPontoons()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanBuoyancyComponent_DebugPontoons_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanBuoyancyComponent::execDebugPontoons)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DebugPontoons();
	P_NATIVE_END;
}
// End Class UOceanBuoyancyComponent Function DebugPontoons

// Begin Class UOceanBuoyancyComponent Function GetCharacterMovement
struct OceanBuoyancyComponent_eventGetCharacterMovement_Parms
{
	UCharacterMovementComponent* ReturnValue;

	/** Constructor, initializes return property only **/
	OceanBuoyancyComponent_eventGetCharacterMovement_Parms()
		: ReturnValue(NULL)
	{
	}
};
static FName NAME_UOceanBuoyancyComponent_GetCharacterMovement = FName(TEXT("GetCharacterMovement"));
UCharacterMovementComponent* UOceanBuoyancyComponent::GetCharacterMovement()
{
	OceanBuoyancyComponent_eventGetCharacterMovement_Parms Parms;
	ProcessEvent(FindFunctionChecked(NAME_UOceanBuoyancyComponent_GetCharacterMovement),&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UOceanBuoyancyComponent_GetCharacterMovement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Buoyancy" },
		{ "ModuleRelativePath", "Public/Components/OceanBuoyancyComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOceanBuoyancyComponent_GetCharacterMovement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanBuoyancyComponent_eventGetCharacterMovement_Parms, ReturnValue), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanBuoyancyComponent_GetCharacterMovement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanBuoyancyComponent_GetCharacterMovement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanBuoyancyComponent_GetCharacterMovement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanBuoyancyComponent_GetCharacterMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanBuoyancyComponent, nullptr, "GetCharacterMovement", nullptr, nullptr, Z_Construct_UFunction_UOceanBuoyancyComponent_GetCharacterMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanBuoyancyComponent_GetCharacterMovement_Statics::PropPointers), sizeof(OceanBuoyancyComponent_eventGetCharacterMovement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanBuoyancyComponent_GetCharacterMovement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanBuoyancyComponent_GetCharacterMovement_Statics::Function_MetaDataParams) };
static_assert(sizeof(OceanBuoyancyComponent_eventGetCharacterMovement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanBuoyancyComponent_GetCharacterMovement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanBuoyancyComponent_GetCharacterMovement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanBuoyancyComponent::execGetCharacterMovement)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCharacterMovementComponent**)Z_Param__Result=P_THIS->GetCharacterMovement_Implementation();
	P_NATIVE_END;
}
// End Class UOceanBuoyancyComponent Function GetCharacterMovement

// Begin Class UOceanBuoyancyComponent Function GetCurrentWater
struct Z_Construct_UFunction_UOceanBuoyancyComponent_GetCurrentWater_Statics
{
	struct OceanBuoyancyComponent_eventGetCurrentWater_Parms
	{
		AOceanologyWaterParent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Buoyancy" },
		{ "ModuleRelativePath", "Public/Components/OceanBuoyancyComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOceanBuoyancyComponent_GetCurrentWater_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanBuoyancyComponent_eventGetCurrentWater_Parms, ReturnValue), Z_Construct_UClass_AOceanologyWaterParent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanBuoyancyComponent_GetCurrentWater_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanBuoyancyComponent_GetCurrentWater_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanBuoyancyComponent_GetCurrentWater_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanBuoyancyComponent_GetCurrentWater_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanBuoyancyComponent, nullptr, "GetCurrentWater", nullptr, nullptr, Z_Construct_UFunction_UOceanBuoyancyComponent_GetCurrentWater_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanBuoyancyComponent_GetCurrentWater_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOceanBuoyancyComponent_GetCurrentWater_Statics::OceanBuoyancyComponent_eventGetCurrentWater_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanBuoyancyComponent_GetCurrentWater_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanBuoyancyComponent_GetCurrentWater_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOceanBuoyancyComponent_GetCurrentWater_Statics::OceanBuoyancyComponent_eventGetCurrentWater_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanBuoyancyComponent_GetCurrentWater()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanBuoyancyComponent_GetCurrentWater_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanBuoyancyComponent::execGetCurrentWater)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AOceanologyWaterParent**)Z_Param__Result=P_THIS->GetCurrentWater();
	P_NATIVE_END;
}
// End Class UOceanBuoyancyComponent Function GetCurrentWater

// Begin Class UOceanBuoyancyComponent Function GetCurrentWaterVolume
struct Z_Construct_UFunction_UOceanBuoyancyComponent_GetCurrentWaterVolume_Statics
{
	struct OceanBuoyancyComponent_eventGetCurrentWaterVolume_Parms
	{
		AOceanologyWaterVolume* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Buoyancy" },
		{ "ModuleRelativePath", "Public/Components/OceanBuoyancyComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOceanBuoyancyComponent_GetCurrentWaterVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanBuoyancyComponent_eventGetCurrentWaterVolume_Parms, ReturnValue), Z_Construct_UClass_AOceanologyWaterVolume_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanBuoyancyComponent_GetCurrentWaterVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanBuoyancyComponent_GetCurrentWaterVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanBuoyancyComponent_GetCurrentWaterVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanBuoyancyComponent_GetCurrentWaterVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanBuoyancyComponent, nullptr, "GetCurrentWaterVolume", nullptr, nullptr, Z_Construct_UFunction_UOceanBuoyancyComponent_GetCurrentWaterVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanBuoyancyComponent_GetCurrentWaterVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOceanBuoyancyComponent_GetCurrentWaterVolume_Statics::OceanBuoyancyComponent_eventGetCurrentWaterVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanBuoyancyComponent_GetCurrentWaterVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanBuoyancyComponent_GetCurrentWaterVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOceanBuoyancyComponent_GetCurrentWaterVolume_Statics::OceanBuoyancyComponent_eventGetCurrentWaterVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanBuoyancyComponent_GetCurrentWaterVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanBuoyancyComponent_GetCurrentWaterVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanBuoyancyComponent::execGetCurrentWaterVolume)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AOceanologyWaterVolume**)Z_Param__Result=P_THIS->GetCurrentWaterVolume();
	P_NATIVE_END;
}
// End Class UOceanBuoyancyComponent Function GetCurrentWaterVolume

// Begin Class UOceanBuoyancyComponent Function GetCurrentWaveHeight
struct Z_Construct_UFunction_UOceanBuoyancyComponent_GetCurrentWaveHeight_Statics
{
	struct OceanBuoyancyComponent_eventGetCurrentWaveHeight_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Buoyancy" },
		{ "ModuleRelativePath", "Public/Components/OceanBuoyancyComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanBuoyancyComponent_GetCurrentWaveHeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanBuoyancyComponent_eventGetCurrentWaveHeight_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanBuoyancyComponent_GetCurrentWaveHeight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanBuoyancyComponent_GetCurrentWaveHeight_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanBuoyancyComponent_GetCurrentWaveHeight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanBuoyancyComponent_GetCurrentWaveHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanBuoyancyComponent, nullptr, "GetCurrentWaveHeight", nullptr, nullptr, Z_Construct_UFunction_UOceanBuoyancyComponent_GetCurrentWaveHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanBuoyancyComponent_GetCurrentWaveHeight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOceanBuoyancyComponent_GetCurrentWaveHeight_Statics::OceanBuoyancyComponent_eventGetCurrentWaveHeight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanBuoyancyComponent_GetCurrentWaveHeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanBuoyancyComponent_GetCurrentWaveHeight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOceanBuoyancyComponent_GetCurrentWaveHeight_Statics::OceanBuoyancyComponent_eventGetCurrentWaveHeight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanBuoyancyComponent_GetCurrentWaveHeight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanBuoyancyComponent_GetCurrentWaveHeight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanBuoyancyComponent::execGetCurrentWaveHeight)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetCurrentWaveHeight();
	P_NATIVE_END;
}
// End Class UOceanBuoyancyComponent Function GetCurrentWaveHeight

// Begin Class UOceanBuoyancyComponent Function GetFlowControlSpline
struct Z_Construct_UFunction_UOceanBuoyancyComponent_GetFlowControlSpline_Statics
{
	struct OceanBuoyancyComponent_eventGetFlowControlSpline_Parms
	{
		USplineComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Buoyancy|Flow" },
		{ "ModuleRelativePath", "Public/Components/OceanBuoyancyComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOceanBuoyancyComponent_GetFlowControlSpline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanBuoyancyComponent_eventGetFlowControlSpline_Parms, ReturnValue), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanBuoyancyComponent_GetFlowControlSpline_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanBuoyancyComponent_GetFlowControlSpline_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanBuoyancyComponent_GetFlowControlSpline_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanBuoyancyComponent_GetFlowControlSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanBuoyancyComponent, nullptr, "GetFlowControlSpline", nullptr, nullptr, Z_Construct_UFunction_UOceanBuoyancyComponent_GetFlowControlSpline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanBuoyancyComponent_GetFlowControlSpline_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOceanBuoyancyComponent_GetFlowControlSpline_Statics::OceanBuoyancyComponent_eventGetFlowControlSpline_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanBuoyancyComponent_GetFlowControlSpline_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanBuoyancyComponent_GetFlowControlSpline_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOceanBuoyancyComponent_GetFlowControlSpline_Statics::OceanBuoyancyComponent_eventGetFlowControlSpline_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanBuoyancyComponent_GetFlowControlSpline()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanBuoyancyComponent_GetFlowControlSpline_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanBuoyancyComponent::execGetFlowControlSpline)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USplineComponent**)Z_Param__Result=P_THIS->GetFlowControlSpline();
	P_NATIVE_END;
}
// End Class UOceanBuoyancyComponent Function GetFlowControlSpline

// Begin Class UOceanBuoyancyComponent Function GetOwnerMesh
struct OceanBuoyancyComponent_eventGetOwnerMesh_Parms
{
	UPrimitiveComponent* ReturnValue;

	/** Constructor, initializes return property only **/
	OceanBuoyancyComponent_eventGetOwnerMesh_Parms()
		: ReturnValue(NULL)
	{
	}
};
static FName NAME_UOceanBuoyancyComponent_GetOwnerMesh = FName(TEXT("GetOwnerMesh"));
UPrimitiveComponent* UOceanBuoyancyComponent::GetOwnerMesh() const
{
	OceanBuoyancyComponent_eventGetOwnerMesh_Parms Parms;
	const_cast<UOceanBuoyancyComponent*>(this)->ProcessEvent(FindFunctionChecked(NAME_UOceanBuoyancyComponent_GetOwnerMesh),&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UOceanBuoyancyComponent_GetOwnerMesh_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Buoyancy" },
		{ "ModuleRelativePath", "Public/Components/OceanBuoyancyComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOceanBuoyancyComponent_GetOwnerMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanBuoyancyComponent_eventGetOwnerMesh_Parms, ReturnValue), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanBuoyancyComponent_GetOwnerMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanBuoyancyComponent_GetOwnerMesh_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanBuoyancyComponent_GetOwnerMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanBuoyancyComponent_GetOwnerMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanBuoyancyComponent, nullptr, "GetOwnerMesh", nullptr, nullptr, Z_Construct_UFunction_UOceanBuoyancyComponent_GetOwnerMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanBuoyancyComponent_GetOwnerMesh_Statics::PropPointers), sizeof(OceanBuoyancyComponent_eventGetOwnerMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanBuoyancyComponent_GetOwnerMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanBuoyancyComponent_GetOwnerMesh_Statics::Function_MetaDataParams) };
static_assert(sizeof(OceanBuoyancyComponent_eventGetOwnerMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanBuoyancyComponent_GetOwnerMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanBuoyancyComponent_GetOwnerMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanBuoyancyComponent::execGetOwnerMesh)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPrimitiveComponent**)Z_Param__Result=P_THIS->GetOwnerMesh_Implementation();
	P_NATIVE_END;
}
// End Class UOceanBuoyancyComponent Function GetOwnerMesh

// Begin Class UOceanBuoyancyComponent Function GetOwnerWaveHeightDistance
struct Z_Construct_UFunction_UOceanBuoyancyComponent_GetOwnerWaveHeightDistance_Statics
{
	struct OceanBuoyancyComponent_eventGetOwnerWaveHeightDistance_Parms
	{
		double ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Buoyancy" },
		{ "ModuleRelativePath", "Public/Components/OceanBuoyancyComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UOceanBuoyancyComponent_GetOwnerWaveHeightDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanBuoyancyComponent_eventGetOwnerWaveHeightDistance_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanBuoyancyComponent_GetOwnerWaveHeightDistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanBuoyancyComponent_GetOwnerWaveHeightDistance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanBuoyancyComponent_GetOwnerWaveHeightDistance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanBuoyancyComponent_GetOwnerWaveHeightDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanBuoyancyComponent, nullptr, "GetOwnerWaveHeightDistance", nullptr, nullptr, Z_Construct_UFunction_UOceanBuoyancyComponent_GetOwnerWaveHeightDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanBuoyancyComponent_GetOwnerWaveHeightDistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOceanBuoyancyComponent_GetOwnerWaveHeightDistance_Statics::OceanBuoyancyComponent_eventGetOwnerWaveHeightDistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanBuoyancyComponent_GetOwnerWaveHeightDistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanBuoyancyComponent_GetOwnerWaveHeightDistance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOceanBuoyancyComponent_GetOwnerWaveHeightDistance_Statics::OceanBuoyancyComponent_eventGetOwnerWaveHeightDistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanBuoyancyComponent_GetOwnerWaveHeightDistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanBuoyancyComponent_GetOwnerWaveHeightDistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanBuoyancyComponent::execGetOwnerWaveHeightDistance)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(double*)Z_Param__Result=P_THIS->GetOwnerWaveHeightDistance();
	P_NATIVE_END;
}
// End Class UOceanBuoyancyComponent Function GetOwnerWaveHeightDistance

// Begin Class UOceanBuoyancyComponent Function GetVelocityAtLocation
struct Z_Construct_UFunction_UOceanBuoyancyComponent_GetVelocityAtLocation_Statics
{
	struct OceanBuoyancyComponent_eventGetVelocityAtLocation_Parms
	{
		FVector Point;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Buoyancy" },
		{ "ModuleRelativePath", "Public/Components/OceanBuoyancyComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Point_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Point;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanBuoyancyComponent_GetVelocityAtLocation_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanBuoyancyComponent_eventGetVelocityAtLocation_Parms, Point), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Point_MetaData), NewProp_Point_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanBuoyancyComponent_GetVelocityAtLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanBuoyancyComponent_eventGetVelocityAtLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanBuoyancyComponent_GetVelocityAtLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanBuoyancyComponent_GetVelocityAtLocation_Statics::NewProp_Point,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanBuoyancyComponent_GetVelocityAtLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanBuoyancyComponent_GetVelocityAtLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanBuoyancyComponent_GetVelocityAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanBuoyancyComponent, nullptr, "GetVelocityAtLocation", nullptr, nullptr, Z_Construct_UFunction_UOceanBuoyancyComponent_GetVelocityAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanBuoyancyComponent_GetVelocityAtLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOceanBuoyancyComponent_GetVelocityAtLocation_Statics::OceanBuoyancyComponent_eventGetVelocityAtLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanBuoyancyComponent_GetVelocityAtLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanBuoyancyComponent_GetVelocityAtLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOceanBuoyancyComponent_GetVelocityAtLocation_Statics::OceanBuoyancyComponent_eventGetVelocityAtLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanBuoyancyComponent_GetVelocityAtLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanBuoyancyComponent_GetVelocityAtLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanBuoyancyComponent::execGetVelocityAtLocation)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Point);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetVelocityAtLocation(Z_Param_Out_Point);
	P_NATIVE_END;
}
// End Class UOceanBuoyancyComponent Function GetVelocityAtLocation

// Begin Class UOceanBuoyancyComponent Function SetFlowControlSpline
struct Z_Construct_UFunction_UOceanBuoyancyComponent_SetFlowControlSpline_Statics
{
	struct OceanBuoyancyComponent_eventSetFlowControlSpline_Parms
	{
		USplineComponent* InFlowControlSpline;
		double InUnscaledSplineWidth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Buoyancy|Flow" },
		{ "ModuleRelativePath", "Public/Components/OceanBuoyancyComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InFlowControlSpline_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InUnscaledSplineWidth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InFlowControlSpline;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_InUnscaledSplineWidth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOceanBuoyancyComponent_SetFlowControlSpline_Statics::NewProp_InFlowControlSpline = { "InFlowControlSpline", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanBuoyancyComponent_eventSetFlowControlSpline_Parms, InFlowControlSpline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InFlowControlSpline_MetaData), NewProp_InFlowControlSpline_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UOceanBuoyancyComponent_SetFlowControlSpline_Statics::NewProp_InUnscaledSplineWidth = { "InUnscaledSplineWidth", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanBuoyancyComponent_eventSetFlowControlSpline_Parms, InUnscaledSplineWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InUnscaledSplineWidth_MetaData), NewProp_InUnscaledSplineWidth_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanBuoyancyComponent_SetFlowControlSpline_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanBuoyancyComponent_SetFlowControlSpline_Statics::NewProp_InFlowControlSpline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanBuoyancyComponent_SetFlowControlSpline_Statics::NewProp_InUnscaledSplineWidth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanBuoyancyComponent_SetFlowControlSpline_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanBuoyancyComponent_SetFlowControlSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanBuoyancyComponent, nullptr, "SetFlowControlSpline", nullptr, nullptr, Z_Construct_UFunction_UOceanBuoyancyComponent_SetFlowControlSpline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanBuoyancyComponent_SetFlowControlSpline_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOceanBuoyancyComponent_SetFlowControlSpline_Statics::OceanBuoyancyComponent_eventSetFlowControlSpline_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanBuoyancyComponent_SetFlowControlSpline_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanBuoyancyComponent_SetFlowControlSpline_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOceanBuoyancyComponent_SetFlowControlSpline_Statics::OceanBuoyancyComponent_eventSetFlowControlSpline_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanBuoyancyComponent_SetFlowControlSpline()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanBuoyancyComponent_SetFlowControlSpline_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanBuoyancyComponent::execSetFlowControlSpline)
{
	P_GET_OBJECT(USplineComponent,Z_Param_InFlowControlSpline);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_InUnscaledSplineWidth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFlowControlSpline(Z_Param_InFlowControlSpline,Z_Param_InUnscaledSplineWidth);
	P_NATIVE_END;
}
// End Class UOceanBuoyancyComponent Function SetFlowControlSpline

// Begin Class UOceanBuoyancyComponent Function ToggleDebug
struct Z_Construct_UFunction_UOceanBuoyancyComponent_ToggleDebug_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Buoyancy" },
		{ "ModuleRelativePath", "Public/Components/OceanBuoyancyComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanBuoyancyComponent_ToggleDebug_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanBuoyancyComponent, nullptr, "ToggleDebug", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanBuoyancyComponent_ToggleDebug_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanBuoyancyComponent_ToggleDebug_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UOceanBuoyancyComponent_ToggleDebug()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanBuoyancyComponent_ToggleDebug_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanBuoyancyComponent::execToggleDebug)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ToggleDebug();
	P_NATIVE_END;
}
// End Class UOceanBuoyancyComponent Function ToggleDebug

// Begin Class UOceanBuoyancyComponent
void UOceanBuoyancyComponent::StaticRegisterNativesUOceanBuoyancyComponent()
{
	UClass* Class = UOceanBuoyancyComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddForceAtLocation", &UOceanBuoyancyComponent::execAddForceAtLocation },
		{ "DebugPontoons", &UOceanBuoyancyComponent::execDebugPontoons },
		{ "GetCharacterMovement", &UOceanBuoyancyComponent::execGetCharacterMovement },
		{ "GetCurrentWater", &UOceanBuoyancyComponent::execGetCurrentWater },
		{ "GetCurrentWaterVolume", &UOceanBuoyancyComponent::execGetCurrentWaterVolume },
		{ "GetCurrentWaveHeight", &UOceanBuoyancyComponent::execGetCurrentWaveHeight },
		{ "GetFlowControlSpline", &UOceanBuoyancyComponent::execGetFlowControlSpline },
		{ "GetOwnerMesh", &UOceanBuoyancyComponent::execGetOwnerMesh },
		{ "GetOwnerWaveHeightDistance", &UOceanBuoyancyComponent::execGetOwnerWaveHeightDistance },
		{ "GetVelocityAtLocation", &UOceanBuoyancyComponent::execGetVelocityAtLocation },
		{ "SetFlowControlSpline", &UOceanBuoyancyComponent::execSetFlowControlSpline },
		{ "ToggleDebug", &UOceanBuoyancyComponent::execToggleDebug },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOceanBuoyancyComponent);
UClass* Z_Construct_UClass_UOceanBuoyancyComponent_NoRegister()
{
	return UOceanBuoyancyComponent::StaticClass();
}
struct Z_Construct_UClass_UOceanBuoyancyComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Buoyancy" },
		{ "IncludePath", "Components/OceanBuoyancyComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/OceanBuoyancyComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuoyancyUpdateInterval_MetaData[] = {
		{ "Category", "Buoyancy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Value 0 means real-time buoyancy. Increasing the value provides better performance, but buoyancy might become more inaccurate. Be careful changing this. This controls tick rate. */" },
#endif
		{ "ModuleRelativePath", "Public/Components/OceanBuoyancyComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Value 0 means real-time buoyancy. Increasing the value provides better performance, but buoyancy might become more inaccurate. Be careful changing this. This controls tick rate." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMeshDensity_MetaData[] = {
		{ "Category", "Buoyancy" },
		{ "ModuleRelativePath", "Public/Components/OceanBuoyancyComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaterFluidDensity_MetaData[] = {
		{ "Category", "Buoyancy" },
		{ "ModuleRelativePath", "Public/Components/OceanBuoyancyComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaterFluidLinearDamping_MetaData[] = {
		{ "Category", "Buoyancy" },
		{ "ModuleRelativePath", "Public/Components/OceanBuoyancyComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaterFluidAngularDamping_MetaData[] = {
		{ "Category", "Buoyancy" },
		{ "ModuleRelativePath", "Public/Components/OceanBuoyancyComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaterVelocityDamper_MetaData[] = {
		{ "Category", "Buoyancy" },
		{ "ModuleRelativePath", "Public/Components/OceanBuoyancyComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LimitUnderwaterMaxVelocity_MetaData[] = {
		{ "Category", "Buoyancy" },
		{ "ModuleRelativePath", "Public/Components/OceanBuoyancyComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxUnderwaterVelocity_MetaData[] = {
		{ "Category", "Buoyancy" },
		{ "ModuleRelativePath", "Public/Components/OceanBuoyancyComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pontoons_MetaData[] = {
		{ "Category", "Buoyancy" },
		{ "ModuleRelativePath", "Public/Components/OceanBuoyancyComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalWaveForceMultiplier_MetaData[] = {
		{ "Category", "Buoyancy" },
		{ "ModuleRelativePath", "Public/Components/OceanBuoyancyComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalWaveForceEnabled_MetaData[] = {
		{ "Category", "Buoyancy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enabling this will make global wave forces of the ocean affect the buoyancy direction. */" },
#endif
		{ "ModuleRelativePath", "Public/Components/OceanBuoyancyComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enabling this will make global wave forces of the ocean affect the buoyancy direction." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngleAdjustedForceStrength_MetaData[] = {
		{ "Category", "Buoyancy|Flow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** This defines the force strength of the flow physics based on angle. Turn on debug to see the angles. */" },
#endif
		{ "ModuleRelativePath", "Public/Components/OceanBuoyancyComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This defines the force strength of the flow physics based on angle. Turn on debug to see the angles." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrientMeshRotationYawTowardsFlowDirection_MetaData[] = {
		{ "Category", "Buoyancy|Flow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Orient the mesh rotation towards the direction of the flow if a flow is present. */" },
#endif
		{ "ModuleRelativePath", "Public/Components/OceanBuoyancyComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Orient the mesh rotation towards the direction of the flow if a flow is present." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugEnabled_MetaData[] = {
		{ "Category", "Buoyancy|Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enable/disable special debug messages and spheres that indicate buoyancy interactions. WARNING: Debugging affects performance, do NOT use in production! */" },
#endif
		{ "ModuleRelativePath", "Public/Components/OceanBuoyancyComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable/disable special debug messages and spheres that indicate buoyancy interactions. WARNING: Debugging affects performance, do NOT use in production!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugSphereColorPontoons_MetaData[] = {
		{ "Category", "Buoyancy|Debug" },
		{ "ModuleRelativePath", "Public/Components/OceanBuoyancyComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugSphereColorBuoyancyLocation_MetaData[] = {
		{ "Category", "Buoyancy|Debug" },
		{ "ModuleRelativePath", "Public/Components/OceanBuoyancyComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugSphereColorBuoyancyLocationUnderwater_MetaData[] = {
		{ "Category", "Buoyancy|Debug" },
		{ "ModuleRelativePath", "Public/Components/OceanBuoyancyComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugSphereRadiusMultiplier_MetaData[] = {
		{ "Category", "Buoyancy|Debug" },
		{ "ModuleRelativePath", "Public/Components/OceanBuoyancyComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnteredWaterVolume_MetaData[] = {
		{ "Category", "Buoyancy" },
		{ "ModuleRelativePath", "Public/Components/OceanBuoyancyComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnEnteredWater_MetaData[] = {
		{ "Category", "Buoyancy" },
		{ "ModuleRelativePath", "Public/Components/OceanBuoyancyComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnExitedWater_MetaData[] = {
		{ "Category", "Buoyancy" },
		{ "ModuleRelativePath", "Public/Components/OceanBuoyancyComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterMovementForceMultiplier_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/OceanBuoyancyComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnterExitWaterTolerance_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/OceanBuoyancyComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OceanologyWater_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/OceanBuoyancyComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OceanologyWaterVolume_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/OceanBuoyancyComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/OceanBuoyancyComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterMovement_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/OceanBuoyancyComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlowControlSpline_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/OceanBuoyancyComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentWaveHeight_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/OceanBuoyancyComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BuoyancyUpdateInterval;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_DefaultMeshDensity;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_WaterFluidDensity;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_WaterFluidLinearDamping;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_WaterFluidAngularDamping;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WaterVelocityDamper;
	static void NewProp_LimitUnderwaterMaxVelocity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_LimitUnderwaterMaxVelocity;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MaxUnderwaterVelocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Pontoons_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Pontoons;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_GlobalWaveForceMultiplier;
	static void NewProp_GlobalWaveForceEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_GlobalWaveForceEnabled;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_AngleAdjustedForceStrength;
	static void NewProp_OrientMeshRotationYawTowardsFlowDirection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OrientMeshRotationYawTowardsFlowDirection;
	static void NewProp_DebugEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DebugEnabled;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DebugSphereColorPontoons;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DebugSphereColorBuoyancyLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DebugSphereColorBuoyancyLocationUnderwater;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_DebugSphereRadiusMultiplier;
	static void NewProp_EnteredWaterVolume_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnteredWaterVolume;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEnteredWater;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnExitedWater;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_CharacterMovementForceMultiplier;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_EnterExitWaterTolerance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OceanologyWater;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OceanologyWaterVolume;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterMovement;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FlowControlSpline;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentWaveHeight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOceanBuoyancyComponent_AddForceAtLocation, "AddForceAtLocation" }, // 2865778090
		{ &Z_Construct_UFunction_UOceanBuoyancyComponent_DebugPontoons, "DebugPontoons" }, // 2518132870
		{ &Z_Construct_UFunction_UOceanBuoyancyComponent_GetCharacterMovement, "GetCharacterMovement" }, // 2990537445
		{ &Z_Construct_UFunction_UOceanBuoyancyComponent_GetCurrentWater, "GetCurrentWater" }, // 2669410034
		{ &Z_Construct_UFunction_UOceanBuoyancyComponent_GetCurrentWaterVolume, "GetCurrentWaterVolume" }, // 669380823
		{ &Z_Construct_UFunction_UOceanBuoyancyComponent_GetCurrentWaveHeight, "GetCurrentWaveHeight" }, // 1744826862
		{ &Z_Construct_UFunction_UOceanBuoyancyComponent_GetFlowControlSpline, "GetFlowControlSpline" }, // 3439224037
		{ &Z_Construct_UFunction_UOceanBuoyancyComponent_GetOwnerMesh, "GetOwnerMesh" }, // 1699999754
		{ &Z_Construct_UFunction_UOceanBuoyancyComponent_GetOwnerWaveHeightDistance, "GetOwnerWaveHeightDistance" }, // 4233314087
		{ &Z_Construct_UFunction_UOceanBuoyancyComponent_GetVelocityAtLocation, "GetVelocityAtLocation" }, // 1874720928
		{ &Z_Construct_UFunction_UOceanBuoyancyComponent_SetFlowControlSpline, "SetFlowControlSpline" }, // 1932765725
		{ &Z_Construct_UFunction_UOceanBuoyancyComponent_ToggleDebug, "ToggleDebug" }, // 330335982
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOceanBuoyancyComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOceanBuoyancyComponent_Statics::NewProp_BuoyancyUpdateInterval = { "BuoyancyUpdateInterval", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanBuoyancyComponent, BuoyancyUpdateInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuoyancyUpdateInterval_MetaData), NewProp_BuoyancyUpdateInterval_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UOceanBuoyancyComponent_Statics::NewProp_DefaultMeshDensity = { "DefaultMeshDensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanBuoyancyComponent, DefaultMeshDensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMeshDensity_MetaData), NewProp_DefaultMeshDensity_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UOceanBuoyancyComponent_Statics::NewProp_WaterFluidDensity = { "WaterFluidDensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanBuoyancyComponent, WaterFluidDensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaterFluidDensity_MetaData), NewProp_WaterFluidDensity_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UOceanBuoyancyComponent_Statics::NewProp_WaterFluidLinearDamping = { "WaterFluidLinearDamping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanBuoyancyComponent, WaterFluidLinearDamping), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaterFluidLinearDamping_MetaData), NewProp_WaterFluidLinearDamping_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UOceanBuoyancyComponent_Statics::NewProp_WaterFluidAngularDamping = { "WaterFluidAngularDamping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanBuoyancyComponent, WaterFluidAngularDamping), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaterFluidAngularDamping_MetaData), NewProp_WaterFluidAngularDamping_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOceanBuoyancyComponent_Statics::NewProp_WaterVelocityDamper = { "WaterVelocityDamper", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanBuoyancyComponent, WaterVelocityDamper), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaterVelocityDamper_MetaData), NewProp_WaterVelocityDamper_MetaData) };
void Z_Construct_UClass_UOceanBuoyancyComponent_Statics::NewProp_LimitUnderwaterMaxVelocity_SetBit(void* Obj)
{
	((UOceanBuoyancyComponent*)Obj)->LimitUnderwaterMaxVelocity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOceanBuoyancyComponent_Statics::NewProp_LimitUnderwaterMaxVelocity = { "LimitUnderwaterMaxVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOceanBuoyancyComponent), &Z_Construct_UClass_UOceanBuoyancyComponent_Statics::NewProp_LimitUnderwaterMaxVelocity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LimitUnderwaterMaxVelocity_MetaData), NewProp_LimitUnderwaterMaxVelocity_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UOceanBuoyancyComponent_Statics::NewProp_MaxUnderwaterVelocity = { "MaxUnderwaterVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanBuoyancyComponent, MaxUnderwaterVelocity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxUnderwaterVelocity_MetaData), NewProp_MaxUnderwaterVelocity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOceanBuoyancyComponent_Statics::NewProp_Pontoons_Inner = { "Pontoons", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOceanBuoyancyPontoon, METADATA_PARAMS(0, nullptr) }; // 3963780799
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOceanBuoyancyComponent_Statics::NewProp_Pontoons = { "Pontoons", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanBuoyancyComponent, Pontoons), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pontoons_MetaData), NewProp_Pontoons_MetaData) }; // 3963780799
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UOceanBuoyancyComponent_Statics::NewProp_GlobalWaveForceMultiplier = { "GlobalWaveForceMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanBuoyancyComponent, GlobalWaveForceMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalWaveForceMultiplier_MetaData), NewProp_GlobalWaveForceMultiplier_MetaData) };
void Z_Construct_UClass_UOceanBuoyancyComponent_Statics::NewProp_GlobalWaveForceEnabled_SetBit(void* Obj)
{
	((UOceanBuoyancyComponent*)Obj)->GlobalWaveForceEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOceanBuoyancyComponent_Statics::NewProp_GlobalWaveForceEnabled = { "GlobalWaveForceEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOceanBuoyancyComponent), &Z_Construct_UClass_UOceanBuoyancyComponent_Statics::NewProp_GlobalWaveForceEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalWaveForceEnabled_MetaData), NewProp_GlobalWaveForceEnabled_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UOceanBuoyancyComponent_Statics::NewProp_AngleAdjustedForceStrength = { "AngleAdjustedForceStrength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanBuoyancyComponent, AngleAdjustedForceStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngleAdjustedForceStrength_MetaData), NewProp_AngleAdjustedForceStrength_MetaData) };
void Z_Construct_UClass_UOceanBuoyancyComponent_Statics::NewProp_OrientMeshRotationYawTowardsFlowDirection_SetBit(void* Obj)
{
	((UOceanBuoyancyComponent*)Obj)->OrientMeshRotationYawTowardsFlowDirection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOceanBuoyancyComponent_Statics::NewProp_OrientMeshRotationYawTowardsFlowDirection = { "OrientMeshRotationYawTowardsFlowDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOceanBuoyancyComponent), &Z_Construct_UClass_UOceanBuoyancyComponent_Statics::NewProp_OrientMeshRotationYawTowardsFlowDirection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrientMeshRotationYawTowardsFlowDirection_MetaData), NewProp_OrientMeshRotationYawTowardsFlowDirection_MetaData) };
void Z_Construct_UClass_UOceanBuoyancyComponent_Statics::NewProp_DebugEnabled_SetBit(void* Obj)
{
	((UOceanBuoyancyComponent*)Obj)->DebugEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOceanBuoyancyComponent_Statics::NewProp_DebugEnabled = { "DebugEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOceanBuoyancyComponent), &Z_Construct_UClass_UOceanBuoyancyComponent_Statics::NewProp_DebugEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugEnabled_MetaData), NewProp_DebugEnabled_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOceanBuoyancyComponent_Statics::NewProp_DebugSphereColorPontoons = { "DebugSphereColorPontoons", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanBuoyancyComponent, DebugSphereColorPontoons), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugSphereColorPontoons_MetaData), NewProp_DebugSphereColorPontoons_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOceanBuoyancyComponent_Statics::NewProp_DebugSphereColorBuoyancyLocation = { "DebugSphereColorBuoyancyLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanBuoyancyComponent, DebugSphereColorBuoyancyLocation), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugSphereColorBuoyancyLocation_MetaData), NewProp_DebugSphereColorBuoyancyLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOceanBuoyancyComponent_Statics::NewProp_DebugSphereColorBuoyancyLocationUnderwater = { "DebugSphereColorBuoyancyLocationUnderwater", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanBuoyancyComponent, DebugSphereColorBuoyancyLocationUnderwater), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugSphereColorBuoyancyLocationUnderwater_MetaData), NewProp_DebugSphereColorBuoyancyLocationUnderwater_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UOceanBuoyancyComponent_Statics::NewProp_DebugSphereRadiusMultiplier = { "DebugSphereRadiusMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanBuoyancyComponent, DebugSphereRadiusMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugSphereRadiusMultiplier_MetaData), NewProp_DebugSphereRadiusMultiplier_MetaData) };
void Z_Construct_UClass_UOceanBuoyancyComponent_Statics::NewProp_EnteredWaterVolume_SetBit(void* Obj)
{
	((UOceanBuoyancyComponent*)Obj)->EnteredWaterVolume = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOceanBuoyancyComponent_Statics::NewProp_EnteredWaterVolume = { "EnteredWaterVolume", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOceanBuoyancyComponent), &Z_Construct_UClass_UOceanBuoyancyComponent_Statics::NewProp_EnteredWaterVolume_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnteredWaterVolume_MetaData), NewProp_EnteredWaterVolume_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOceanBuoyancyComponent_Statics::NewProp_OnEnteredWater = { "OnEnteredWater", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanBuoyancyComponent, OnEnteredWater), Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnEnteredWater__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnEnteredWater_MetaData), NewProp_OnEnteredWater_MetaData) }; // 1905366077
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOceanBuoyancyComponent_Statics::NewProp_OnExitedWater = { "OnExitedWater", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanBuoyancyComponent, OnExitedWater), Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnExitedWater__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnExitedWater_MetaData), NewProp_OnExitedWater_MetaData) }; // 126689985
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UOceanBuoyancyComponent_Statics::NewProp_CharacterMovementForceMultiplier = { "CharacterMovementForceMultiplier", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanBuoyancyComponent, CharacterMovementForceMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterMovementForceMultiplier_MetaData), NewProp_CharacterMovementForceMultiplier_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UOceanBuoyancyComponent_Statics::NewProp_EnterExitWaterTolerance = { "EnterExitWaterTolerance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanBuoyancyComponent, EnterExitWaterTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnterExitWaterTolerance_MetaData), NewProp_EnterExitWaterTolerance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOceanBuoyancyComponent_Statics::NewProp_OceanologyWater = { "OceanologyWater", nullptr, (EPropertyFlags)0x0114000000000020, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanBuoyancyComponent, OceanologyWater), Z_Construct_UClass_AOceanologyWaterParent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OceanologyWater_MetaData), NewProp_OceanologyWater_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOceanBuoyancyComponent_Statics::NewProp_OceanologyWaterVolume = { "OceanologyWaterVolume", nullptr, (EPropertyFlags)0x0114000000000020, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanBuoyancyComponent, OceanologyWaterVolume), Z_Construct_UClass_AOceanologyWaterVolume_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OceanologyWaterVolume_MetaData), NewProp_OceanologyWaterVolume_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOceanBuoyancyComponent_Statics::NewProp_OwnerMesh = { "OwnerMesh", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanBuoyancyComponent, OwnerMesh), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerMesh_MetaData), NewProp_OwnerMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOceanBuoyancyComponent_Statics::NewProp_CharacterMovement = { "CharacterMovement", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanBuoyancyComponent, CharacterMovement), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterMovement_MetaData), NewProp_CharacterMovement_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOceanBuoyancyComponent_Statics::NewProp_FlowControlSpline = { "FlowControlSpline", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanBuoyancyComponent, FlowControlSpline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlowControlSpline_MetaData), NewProp_FlowControlSpline_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOceanBuoyancyComponent_Statics::NewProp_CurrentWaveHeight = { "CurrentWaveHeight", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanBuoyancyComponent, CurrentWaveHeight), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentWaveHeight_MetaData), NewProp_CurrentWaveHeight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOceanBuoyancyComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanBuoyancyComponent_Statics::NewProp_BuoyancyUpdateInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanBuoyancyComponent_Statics::NewProp_DefaultMeshDensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanBuoyancyComponent_Statics::NewProp_WaterFluidDensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanBuoyancyComponent_Statics::NewProp_WaterFluidLinearDamping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanBuoyancyComponent_Statics::NewProp_WaterFluidAngularDamping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanBuoyancyComponent_Statics::NewProp_WaterVelocityDamper,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanBuoyancyComponent_Statics::NewProp_LimitUnderwaterMaxVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanBuoyancyComponent_Statics::NewProp_MaxUnderwaterVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanBuoyancyComponent_Statics::NewProp_Pontoons_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanBuoyancyComponent_Statics::NewProp_Pontoons,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanBuoyancyComponent_Statics::NewProp_GlobalWaveForceMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanBuoyancyComponent_Statics::NewProp_GlobalWaveForceEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanBuoyancyComponent_Statics::NewProp_AngleAdjustedForceStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanBuoyancyComponent_Statics::NewProp_OrientMeshRotationYawTowardsFlowDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanBuoyancyComponent_Statics::NewProp_DebugEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanBuoyancyComponent_Statics::NewProp_DebugSphereColorPontoons,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanBuoyancyComponent_Statics::NewProp_DebugSphereColorBuoyancyLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanBuoyancyComponent_Statics::NewProp_DebugSphereColorBuoyancyLocationUnderwater,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanBuoyancyComponent_Statics::NewProp_DebugSphereRadiusMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanBuoyancyComponent_Statics::NewProp_EnteredWaterVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanBuoyancyComponent_Statics::NewProp_OnEnteredWater,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanBuoyancyComponent_Statics::NewProp_OnExitedWater,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanBuoyancyComponent_Statics::NewProp_CharacterMovementForceMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanBuoyancyComponent_Statics::NewProp_EnterExitWaterTolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanBuoyancyComponent_Statics::NewProp_OceanologyWater,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanBuoyancyComponent_Statics::NewProp_OceanologyWaterVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanBuoyancyComponent_Statics::NewProp_OwnerMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanBuoyancyComponent_Statics::NewProp_CharacterMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanBuoyancyComponent_Statics::NewProp_FlowControlSpline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanBuoyancyComponent_Statics::NewProp_CurrentWaveHeight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOceanBuoyancyComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOceanBuoyancyComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Oceanology_Plugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOceanBuoyancyComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOceanBuoyancyComponent_Statics::ClassParams = {
	&UOceanBuoyancyComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOceanBuoyancyComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOceanBuoyancyComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOceanBuoyancyComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UOceanBuoyancyComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOceanBuoyancyComponent()
{
	if (!Z_Registration_Info_UClass_UOceanBuoyancyComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOceanBuoyancyComponent.OuterSingleton, Z_Construct_UClass_UOceanBuoyancyComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOceanBuoyancyComponent.OuterSingleton;
}
template<> OCEANOLOGY_PLUGIN_API UClass* StaticClass<UOceanBuoyancyComponent>()
{
	return UOceanBuoyancyComponent::StaticClass();
}
void UOceanBuoyancyComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_EnteredWaterVolume(TEXT("EnteredWaterVolume"));
	static const FName Name_OceanologyWater(TEXT("OceanologyWater"));
	static const FName Name_OceanologyWaterVolume(TEXT("OceanologyWaterVolume"));
	static const FName Name_CurrentWaveHeight(TEXT("CurrentWaveHeight"));
	const bool bIsValid = true
		&& Name_EnteredWaterVolume == ClassReps[(int32)ENetFields_Private::EnteredWaterVolume].Property->GetFName()
		&& Name_OceanologyWater == ClassReps[(int32)ENetFields_Private::OceanologyWater].Property->GetFName()
		&& Name_OceanologyWaterVolume == ClassReps[(int32)ENetFields_Private::OceanologyWaterVolume].Property->GetFName()
		&& Name_CurrentWaveHeight == ClassReps[(int32)ENetFields_Private::CurrentWaveHeight].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UOceanBuoyancyComponent"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOceanBuoyancyComponent);
UOceanBuoyancyComponent::~UOceanBuoyancyComponent() {}
// End Class UOceanBuoyancyComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_OceanBuoyancyComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EOceanBuoyancyPontoonMode_StaticEnum, TEXT("EOceanBuoyancyPontoonMode"), &Z_Registration_Info_UEnum_EOceanBuoyancyPontoonMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1954147311U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOceanBuoyancyPontoon::StaticStruct, Z_Construct_UScriptStruct_FOceanBuoyancyPontoon_Statics::NewStructOps, TEXT("OceanBuoyancyPontoon"), &Z_Registration_Info_UScriptStruct_OceanBuoyancyPontoon, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOceanBuoyancyPontoon), 3963780799U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOceanBuoyancyComponent, UOceanBuoyancyComponent::StaticClass, TEXT("UOceanBuoyancyComponent"), &Z_Registration_Info_UClass_UOceanBuoyancyComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOceanBuoyancyComponent), 2672189427U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_OceanBuoyancyComponent_h_4057423036(TEXT("/Script/Oceanology_Plugin"),
	Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_OceanBuoyancyComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_OceanBuoyancyComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_OceanBuoyancyComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_OceanBuoyancyComponent_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_OceanBuoyancyComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_OceanBuoyancyComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
