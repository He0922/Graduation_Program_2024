// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Oceanology_Plugin/Public/Components/Wave/OceanologyWaveSolverComponent.h"
#include "Oceanology_Plugin/Public/Structs/OceanologyWaterPresetResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOceanologyWaveSolverComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollection_NoRegister();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_AOceanologyWaterParent_NoRegister();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_UOceanologyWaveSolverComponent();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_UOceanologyWaveSolverComponent_NoRegister();
OCEANOLOGY_PLUGIN_API UEnum* Z_Construct_UEnum_Oceanology_Plugin_EOceanologyWaveTimeMode();
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyWaterPresetResult();
UPackage* Z_Construct_UPackage__Script_Oceanology_Plugin();
// End Cross Module References

// Begin Enum EOceanologyWaveTimeMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOceanologyWaveTimeMode;
static UEnum* EOceanologyWaveTimeMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOceanologyWaveTimeMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOceanologyWaveTimeMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Oceanology_Plugin_EOceanologyWaveTimeMode, (UObject*)Z_Construct_UPackage__Script_Oceanology_Plugin(), TEXT("EOceanologyWaveTimeMode"));
	}
	return Z_Registration_Info_UEnum_EOceanologyWaveTimeMode.OuterSingleton;
}
template<> OCEANOLOGY_PLUGIN_API UEnum* StaticEnum<EOceanologyWaveTimeMode>()
{
	return EOceanologyWaveTimeMode_StaticEnum();
}
struct Z_Construct_UEnum_Oceanology_Plugin_EOceanologyWaveTimeMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "LocalTime.Name", "EOceanologyWaveTimeMode::LocalTime" },
		{ "ModuleRelativePath", "Public/Components/Wave/OceanologyWaveSolverComponent.h" },
		{ "ServerTimeForReplication.Name", "EOceanologyWaveTimeMode::ServerTimeForReplication" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOceanologyWaveTimeMode::LocalTime", (int64)EOceanologyWaveTimeMode::LocalTime },
		{ "EOceanologyWaveTimeMode::ServerTimeForReplication", (int64)EOceanologyWaveTimeMode::ServerTimeForReplication },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Oceanology_Plugin_EOceanologyWaveTimeMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Oceanology_Plugin,
	nullptr,
	"EOceanologyWaveTimeMode",
	"EOceanologyWaveTimeMode",
	Z_Construct_UEnum_Oceanology_Plugin_EOceanologyWaveTimeMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Oceanology_Plugin_EOceanologyWaveTimeMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Oceanology_Plugin_EOceanologyWaveTimeMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Oceanology_Plugin_EOceanologyWaveTimeMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Oceanology_Plugin_EOceanologyWaveTimeMode()
{
	if (!Z_Registration_Info_UEnum_EOceanologyWaveTimeMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOceanologyWaveTimeMode.InnerSingleton, Z_Construct_UEnum_Oceanology_Plugin_EOceanologyWaveTimeMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOceanologyWaveTimeMode.InnerSingleton;
}
// End Enum EOceanologyWaveTimeMode

// Begin Class UOceanologyWaveSolverComponent Function GetGlobalWaveDirection
struct OceanologyWaveSolverComponent_eventGetGlobalWaveDirection_Parms
{
	double ReturnValue;

	/** Constructor, initializes return property only **/
	OceanologyWaveSolverComponent_eventGetGlobalWaveDirection_Parms()
		: ReturnValue(0)
	{
	}
};
static FName NAME_UOceanologyWaveSolverComponent_GetGlobalWaveDirection = FName(TEXT("GetGlobalWaveDirection"));
double UOceanologyWaveSolverComponent::GetGlobalWaveDirection()
{
	OceanologyWaveSolverComponent_eventGetGlobalWaveDirection_Parms Parms;
	ProcessEvent(FindFunctionChecked(NAME_UOceanologyWaveSolverComponent_GetGlobalWaveDirection),&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UOceanologyWaveSolverComponent_GetGlobalWaveDirection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Waves" },
		{ "ModuleRelativePath", "Public/Components/Wave/OceanologyWaveSolverComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UOceanologyWaveSolverComponent_GetGlobalWaveDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyWaveSolverComponent_eventGetGlobalWaveDirection_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanologyWaveSolverComponent_GetGlobalWaveDirection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyWaveSolverComponent_GetGlobalWaveDirection_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyWaveSolverComponent_GetGlobalWaveDirection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologyWaveSolverComponent_GetGlobalWaveDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologyWaveSolverComponent, nullptr, "GetGlobalWaveDirection", nullptr, nullptr, Z_Construct_UFunction_UOceanologyWaveSolverComponent_GetGlobalWaveDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyWaveSolverComponent_GetGlobalWaveDirection_Statics::PropPointers), sizeof(OceanologyWaveSolverComponent_eventGetGlobalWaveDirection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyWaveSolverComponent_GetGlobalWaveDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologyWaveSolverComponent_GetGlobalWaveDirection_Statics::Function_MetaDataParams) };
static_assert(sizeof(OceanologyWaveSolverComponent_eventGetGlobalWaveDirection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanologyWaveSolverComponent_GetGlobalWaveDirection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologyWaveSolverComponent_GetGlobalWaveDirection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologyWaveSolverComponent::execGetGlobalWaveDirection)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(double*)Z_Param__Result=P_THIS->GetGlobalWaveDirection_Implementation();
	P_NATIVE_END;
}
// End Class UOceanologyWaveSolverComponent Function GetGlobalWaveDirection

// Begin Class UOceanologyWaveSolverComponent Function GetMaxWaveHeight
struct OceanologyWaveSolverComponent_eventGetMaxWaveHeight_Parms
{
	double ReturnValue;

	/** Constructor, initializes return property only **/
	OceanologyWaveSolverComponent_eventGetMaxWaveHeight_Parms()
		: ReturnValue(0)
	{
	}
};
static FName NAME_UOceanologyWaveSolverComponent_GetMaxWaveHeight = FName(TEXT("GetMaxWaveHeight"));
double UOceanologyWaveSolverComponent::GetMaxWaveHeight()
{
	OceanologyWaveSolverComponent_eventGetMaxWaveHeight_Parms Parms;
	ProcessEvent(FindFunctionChecked(NAME_UOceanologyWaveSolverComponent_GetMaxWaveHeight),&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UOceanologyWaveSolverComponent_GetMaxWaveHeight_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Waves" },
		{ "ModuleRelativePath", "Public/Components/Wave/OceanologyWaveSolverComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UOceanologyWaveSolverComponent_GetMaxWaveHeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyWaveSolverComponent_eventGetMaxWaveHeight_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanologyWaveSolverComponent_GetMaxWaveHeight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyWaveSolverComponent_GetMaxWaveHeight_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyWaveSolverComponent_GetMaxWaveHeight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologyWaveSolverComponent_GetMaxWaveHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologyWaveSolverComponent, nullptr, "GetMaxWaveHeight", nullptr, nullptr, Z_Construct_UFunction_UOceanologyWaveSolverComponent_GetMaxWaveHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyWaveSolverComponent_GetMaxWaveHeight_Statics::PropPointers), sizeof(OceanologyWaveSolverComponent_eventGetMaxWaveHeight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyWaveSolverComponent_GetMaxWaveHeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologyWaveSolverComponent_GetMaxWaveHeight_Statics::Function_MetaDataParams) };
static_assert(sizeof(OceanologyWaveSolverComponent_eventGetMaxWaveHeight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanologyWaveSolverComponent_GetMaxWaveHeight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologyWaveSolverComponent_GetMaxWaveHeight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologyWaveSolverComponent::execGetMaxWaveHeight)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(double*)Z_Param__Result=P_THIS->GetMaxWaveHeight_Implementation();
	P_NATIVE_END;
}
// End Class UOceanologyWaveSolverComponent Function GetMaxWaveHeight

// Begin Class UOceanologyWaveSolverComponent Function GetMinWaveHeight
struct OceanologyWaveSolverComponent_eventGetMinWaveHeight_Parms
{
	double ReturnValue;

	/** Constructor, initializes return property only **/
	OceanologyWaveSolverComponent_eventGetMinWaveHeight_Parms()
		: ReturnValue(0)
	{
	}
};
static FName NAME_UOceanologyWaveSolverComponent_GetMinWaveHeight = FName(TEXT("GetMinWaveHeight"));
double UOceanologyWaveSolverComponent::GetMinWaveHeight()
{
	OceanologyWaveSolverComponent_eventGetMinWaveHeight_Parms Parms;
	ProcessEvent(FindFunctionChecked(NAME_UOceanologyWaveSolverComponent_GetMinWaveHeight),&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UOceanologyWaveSolverComponent_GetMinWaveHeight_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Waves" },
		{ "ModuleRelativePath", "Public/Components/Wave/OceanologyWaveSolverComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UOceanologyWaveSolverComponent_GetMinWaveHeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyWaveSolverComponent_eventGetMinWaveHeight_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanologyWaveSolverComponent_GetMinWaveHeight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyWaveSolverComponent_GetMinWaveHeight_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyWaveSolverComponent_GetMinWaveHeight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologyWaveSolverComponent_GetMinWaveHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologyWaveSolverComponent, nullptr, "GetMinWaveHeight", nullptr, nullptr, Z_Construct_UFunction_UOceanologyWaveSolverComponent_GetMinWaveHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyWaveSolverComponent_GetMinWaveHeight_Statics::PropPointers), sizeof(OceanologyWaveSolverComponent_eventGetMinWaveHeight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyWaveSolverComponent_GetMinWaveHeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologyWaveSolverComponent_GetMinWaveHeight_Statics::Function_MetaDataParams) };
static_assert(sizeof(OceanologyWaveSolverComponent_eventGetMinWaveHeight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanologyWaveSolverComponent_GetMinWaveHeight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologyWaveSolverComponent_GetMinWaveHeight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologyWaveSolverComponent::execGetMinWaveHeight)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(double*)Z_Param__Result=P_THIS->GetMinWaveHeight_Implementation();
	P_NATIVE_END;
}
// End Class UOceanologyWaveSolverComponent Function GetMinWaveHeight

// Begin Class UOceanologyWaveSolverComponent Function GetWaveHeightAtLocation
struct OceanologyWaveSolverComponent_eventGetWaveHeightAtLocation_Parms
{
	FVector Location;
	FVector ReturnValue;

	/** Constructor, initializes return property only **/
	OceanologyWaveSolverComponent_eventGetWaveHeightAtLocation_Parms()
		: ReturnValue(ForceInit)
	{
	}
};
static FName NAME_UOceanologyWaveSolverComponent_GetWaveHeightAtLocation = FName(TEXT("GetWaveHeightAtLocation"));
FVector UOceanologyWaveSolverComponent::GetWaveHeightAtLocation(FVector const& Location)
{
	OceanologyWaveSolverComponent_eventGetWaveHeightAtLocation_Parms Parms;
	Parms.Location=Location;
	ProcessEvent(FindFunctionChecked(NAME_UOceanologyWaveSolverComponent_GetWaveHeightAtLocation),&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UOceanologyWaveSolverComponent_GetWaveHeightAtLocation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Waves" },
		{ "ModuleRelativePath", "Public/Components/Wave/OceanologyWaveSolverComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyWaveSolverComponent_GetWaveHeightAtLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyWaveSolverComponent_eventGetWaveHeightAtLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyWaveSolverComponent_GetWaveHeightAtLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyWaveSolverComponent_eventGetWaveHeightAtLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanologyWaveSolverComponent_GetWaveHeightAtLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyWaveSolverComponent_GetWaveHeightAtLocation_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyWaveSolverComponent_GetWaveHeightAtLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyWaveSolverComponent_GetWaveHeightAtLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologyWaveSolverComponent_GetWaveHeightAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologyWaveSolverComponent, nullptr, "GetWaveHeightAtLocation", nullptr, nullptr, Z_Construct_UFunction_UOceanologyWaveSolverComponent_GetWaveHeightAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyWaveSolverComponent_GetWaveHeightAtLocation_Statics::PropPointers), sizeof(OceanologyWaveSolverComponent_eventGetWaveHeightAtLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1CC20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyWaveSolverComponent_GetWaveHeightAtLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologyWaveSolverComponent_GetWaveHeightAtLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(OceanologyWaveSolverComponent_eventGetWaveHeightAtLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanologyWaveSolverComponent_GetWaveHeightAtLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologyWaveSolverComponent_GetWaveHeightAtLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologyWaveSolverComponent::execGetWaveHeightAtLocation)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetWaveHeightAtLocation_Implementation(Z_Param_Out_Location);
	P_NATIVE_END;
}
// End Class UOceanologyWaveSolverComponent Function GetWaveHeightAtLocation

// Begin Class UOceanologyWaveSolverComponent Function InitWaves
struct OceanologyWaveSolverComponent_eventInitWaves_Parms
{
	AOceanologyWaterParent* InOwner;
	bool InUsingMPC_Waves;
};
static FName NAME_UOceanologyWaveSolverComponent_InitWaves = FName(TEXT("InitWaves"));
void UOceanologyWaveSolverComponent::InitWaves(AOceanologyWaterParent* InOwner, bool InUsingMPC_Waves)
{
	OceanologyWaveSolverComponent_eventInitWaves_Parms Parms;
	Parms.InOwner=InOwner;
	Parms.InUsingMPC_Waves=InUsingMPC_Waves ? true : false;
	ProcessEvent(FindFunctionChecked(NAME_UOceanologyWaveSolverComponent_InitWaves),&Parms);
}
struct Z_Construct_UFunction_UOceanologyWaveSolverComponent_InitWaves_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Waves" },
		{ "ModuleRelativePath", "Public/Components/Wave/OceanologyWaveSolverComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InUsingMPC_Waves_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InOwner;
	static void NewProp_InUsingMPC_Waves_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InUsingMPC_Waves;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOceanologyWaveSolverComponent_InitWaves_Statics::NewProp_InOwner = { "InOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyWaveSolverComponent_eventInitWaves_Parms, InOwner), Z_Construct_UClass_AOceanologyWaterParent_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOceanologyWaveSolverComponent_InitWaves_Statics::NewProp_InUsingMPC_Waves_SetBit(void* Obj)
{
	((OceanologyWaveSolverComponent_eventInitWaves_Parms*)Obj)->InUsingMPC_Waves = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOceanologyWaveSolverComponent_InitWaves_Statics::NewProp_InUsingMPC_Waves = { "InUsingMPC_Waves", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OceanologyWaveSolverComponent_eventInitWaves_Parms), &Z_Construct_UFunction_UOceanologyWaveSolverComponent_InitWaves_Statics::NewProp_InUsingMPC_Waves_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InUsingMPC_Waves_MetaData), NewProp_InUsingMPC_Waves_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanologyWaveSolverComponent_InitWaves_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyWaveSolverComponent_InitWaves_Statics::NewProp_InOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyWaveSolverComponent_InitWaves_Statics::NewProp_InUsingMPC_Waves,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyWaveSolverComponent_InitWaves_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologyWaveSolverComponent_InitWaves_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologyWaveSolverComponent, nullptr, "InitWaves", nullptr, nullptr, Z_Construct_UFunction_UOceanologyWaveSolverComponent_InitWaves_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyWaveSolverComponent_InitWaves_Statics::PropPointers), sizeof(OceanologyWaveSolverComponent_eventInitWaves_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyWaveSolverComponent_InitWaves_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologyWaveSolverComponent_InitWaves_Statics::Function_MetaDataParams) };
static_assert(sizeof(OceanologyWaveSolverComponent_eventInitWaves_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanologyWaveSolverComponent_InitWaves()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologyWaveSolverComponent_InitWaves_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologyWaveSolverComponent::execInitWaves)
{
	P_GET_OBJECT(AOceanologyWaterParent,Z_Param_InOwner);
	P_GET_UBOOL(Z_Param_InUsingMPC_Waves);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitWaves_Implementation(Z_Param_InOwner,Z_Param_InUsingMPC_Waves);
	P_NATIVE_END;
}
// End Class UOceanologyWaveSolverComponent Function InitWaves

// Begin Class UOceanologyWaveSolverComponent Function IsUsingMPC_Waves
struct Z_Construct_UFunction_UOceanologyWaveSolverComponent_IsUsingMPC_Waves_Statics
{
	struct OceanologyWaveSolverComponent_eventIsUsingMPC_Waves_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Waves" },
		{ "ModuleRelativePath", "Public/Components/Wave/OceanologyWaveSolverComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOceanologyWaveSolverComponent_IsUsingMPC_Waves_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OceanologyWaveSolverComponent_eventIsUsingMPC_Waves_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOceanologyWaveSolverComponent_IsUsingMPC_Waves_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OceanologyWaveSolverComponent_eventIsUsingMPC_Waves_Parms), &Z_Construct_UFunction_UOceanologyWaveSolverComponent_IsUsingMPC_Waves_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanologyWaveSolverComponent_IsUsingMPC_Waves_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyWaveSolverComponent_IsUsingMPC_Waves_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyWaveSolverComponent_IsUsingMPC_Waves_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologyWaveSolverComponent_IsUsingMPC_Waves_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologyWaveSolverComponent, nullptr, "IsUsingMPC_Waves", nullptr, nullptr, Z_Construct_UFunction_UOceanologyWaveSolverComponent_IsUsingMPC_Waves_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyWaveSolverComponent_IsUsingMPC_Waves_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOceanologyWaveSolverComponent_IsUsingMPC_Waves_Statics::OceanologyWaveSolverComponent_eventIsUsingMPC_Waves_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyWaveSolverComponent_IsUsingMPC_Waves_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologyWaveSolverComponent_IsUsingMPC_Waves_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOceanologyWaveSolverComponent_IsUsingMPC_Waves_Statics::OceanologyWaveSolverComponent_eventIsUsingMPC_Waves_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanologyWaveSolverComponent_IsUsingMPC_Waves()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologyWaveSolverComponent_IsUsingMPC_Waves_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologyWaveSolverComponent::execIsUsingMPC_Waves)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsUsingMPC_Waves();
	P_NATIVE_END;
}
// End Class UOceanologyWaveSolverComponent Function IsUsingMPC_Waves

// Begin Class UOceanologyWaveSolverComponent Function StartWaveSimulation
struct Z_Construct_UFunction_UOceanologyWaveSolverComponent_StartWaveSimulation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Waves" },
		{ "ModuleRelativePath", "Public/Components/Wave/OceanologyWaveSolverComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologyWaveSolverComponent_StartWaveSimulation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologyWaveSolverComponent, nullptr, "StartWaveSimulation", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyWaveSolverComponent_StartWaveSimulation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologyWaveSolverComponent_StartWaveSimulation_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UOceanologyWaveSolverComponent_StartWaveSimulation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologyWaveSolverComponent_StartWaveSimulation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologyWaveSolverComponent::execStartWaveSimulation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartWaveSimulation();
	P_NATIVE_END;
}
// End Class UOceanologyWaveSolverComponent Function StartWaveSimulation

// Begin Class UOceanologyWaveSolverComponent Function StopWaveSimulation
struct Z_Construct_UFunction_UOceanologyWaveSolverComponent_StopWaveSimulation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Waves" },
		{ "ModuleRelativePath", "Public/Components/Wave/OceanologyWaveSolverComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologyWaveSolverComponent_StopWaveSimulation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologyWaveSolverComponent, nullptr, "StopWaveSimulation", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyWaveSolverComponent_StopWaveSimulation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologyWaveSolverComponent_StopWaveSimulation_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UOceanologyWaveSolverComponent_StopWaveSimulation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologyWaveSolverComponent_StopWaveSimulation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologyWaveSolverComponent::execStopWaveSimulation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopWaveSimulation();
	P_NATIVE_END;
}
// End Class UOceanologyWaveSolverComponent Function StopWaveSimulation

// Begin Class UOceanologyWaveSolverComponent Function UpdateWaves
static FName NAME_UOceanologyWaveSolverComponent_UpdateWaves = FName(TEXT("UpdateWaves"));
void UOceanologyWaveSolverComponent::UpdateWaves()
{
	ProcessEvent(FindFunctionChecked(NAME_UOceanologyWaveSolverComponent_UpdateWaves),NULL);
}
struct Z_Construct_UFunction_UOceanologyWaveSolverComponent_UpdateWaves_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Waves" },
		{ "ModuleRelativePath", "Public/Components/Wave/OceanologyWaveSolverComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologyWaveSolverComponent_UpdateWaves_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologyWaveSolverComponent, nullptr, "UpdateWaves", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyWaveSolverComponent_UpdateWaves_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologyWaveSolverComponent_UpdateWaves_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UOceanologyWaveSolverComponent_UpdateWaves()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologyWaveSolverComponent_UpdateWaves_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologyWaveSolverComponent::execUpdateWaves)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateWaves_Implementation();
	P_NATIVE_END;
}
// End Class UOceanologyWaveSolverComponent Function UpdateWaves

// Begin Class UOceanologyWaveSolverComponent Function UpdateWavesByPresetResult
struct OceanologyWaveSolverComponent_eventUpdateWavesByPresetResult_Parms
{
	AOceanologyWaterParent* Water;
	FOceanologyWaterPresetResult WaterPresetResult;
};
static FName NAME_UOceanologyWaveSolverComponent_UpdateWavesByPresetResult = FName(TEXT("UpdateWavesByPresetResult"));
void UOceanologyWaveSolverComponent::UpdateWavesByPresetResult(AOceanologyWaterParent* Water, FOceanologyWaterPresetResult const& WaterPresetResult)
{
	OceanologyWaveSolverComponent_eventUpdateWavesByPresetResult_Parms Parms;
	Parms.Water=Water;
	Parms.WaterPresetResult=WaterPresetResult;
	ProcessEvent(FindFunctionChecked(NAME_UOceanologyWaveSolverComponent_UpdateWavesByPresetResult),&Parms);
}
struct Z_Construct_UFunction_UOceanologyWaveSolverComponent_UpdateWavesByPresetResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Waves" },
		{ "ModuleRelativePath", "Public/Components/Wave/OceanologyWaveSolverComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaterPresetResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Water;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WaterPresetResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOceanologyWaveSolverComponent_UpdateWavesByPresetResult_Statics::NewProp_Water = { "Water", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyWaveSolverComponent_eventUpdateWavesByPresetResult_Parms, Water), Z_Construct_UClass_AOceanologyWaterParent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyWaveSolverComponent_UpdateWavesByPresetResult_Statics::NewProp_WaterPresetResult = { "WaterPresetResult", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyWaveSolverComponent_eventUpdateWavesByPresetResult_Parms, WaterPresetResult), Z_Construct_UScriptStruct_FOceanologyWaterPresetResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaterPresetResult_MetaData), NewProp_WaterPresetResult_MetaData) }; // 1369265139
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanologyWaveSolverComponent_UpdateWavesByPresetResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyWaveSolverComponent_UpdateWavesByPresetResult_Statics::NewProp_Water,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyWaveSolverComponent_UpdateWavesByPresetResult_Statics::NewProp_WaterPresetResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyWaveSolverComponent_UpdateWavesByPresetResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologyWaveSolverComponent_UpdateWavesByPresetResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologyWaveSolverComponent, nullptr, "UpdateWavesByPresetResult", nullptr, nullptr, Z_Construct_UFunction_UOceanologyWaveSolverComponent_UpdateWavesByPresetResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyWaveSolverComponent_UpdateWavesByPresetResult_Statics::PropPointers), sizeof(OceanologyWaveSolverComponent_eventUpdateWavesByPresetResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyWaveSolverComponent_UpdateWavesByPresetResult_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologyWaveSolverComponent_UpdateWavesByPresetResult_Statics::Function_MetaDataParams) };
static_assert(sizeof(OceanologyWaveSolverComponent_eventUpdateWavesByPresetResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanologyWaveSolverComponent_UpdateWavesByPresetResult()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologyWaveSolverComponent_UpdateWavesByPresetResult_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologyWaveSolverComponent::execUpdateWavesByPresetResult)
{
	P_GET_OBJECT(AOceanologyWaterParent,Z_Param_Water);
	P_GET_STRUCT_REF(FOceanologyWaterPresetResult,Z_Param_Out_WaterPresetResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateWavesByPresetResult_Implementation(Z_Param_Water,Z_Param_Out_WaterPresetResult);
	P_NATIVE_END;
}
// End Class UOceanologyWaveSolverComponent Function UpdateWavesByPresetResult

// Begin Class UOceanologyWaveSolverComponent
void UOceanologyWaveSolverComponent::StaticRegisterNativesUOceanologyWaveSolverComponent()
{
	UClass* Class = UOceanologyWaveSolverComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetGlobalWaveDirection", &UOceanologyWaveSolverComponent::execGetGlobalWaveDirection },
		{ "GetMaxWaveHeight", &UOceanologyWaveSolverComponent::execGetMaxWaveHeight },
		{ "GetMinWaveHeight", &UOceanologyWaveSolverComponent::execGetMinWaveHeight },
		{ "GetWaveHeightAtLocation", &UOceanologyWaveSolverComponent::execGetWaveHeightAtLocation },
		{ "InitWaves", &UOceanologyWaveSolverComponent::execInitWaves },
		{ "IsUsingMPC_Waves", &UOceanologyWaveSolverComponent::execIsUsingMPC_Waves },
		{ "StartWaveSimulation", &UOceanologyWaveSolverComponent::execStartWaveSimulation },
		{ "StopWaveSimulation", &UOceanologyWaveSolverComponent::execStopWaveSimulation },
		{ "UpdateWaves", &UOceanologyWaveSolverComponent::execUpdateWaves },
		{ "UpdateWavesByPresetResult", &UOceanologyWaveSolverComponent::execUpdateWavesByPresetResult },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOceanologyWaveSolverComponent);
UClass* Z_Construct_UClass_UOceanologyWaveSolverComponent_NoRegister()
{
	return UOceanologyWaveSolverComponent::StaticClass();
}
struct Z_Construct_UClass_UOceanologyWaveSolverComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Object Activation Components|Activation Collision Lighting HLOD Navigation Replication Input MaterialParameters TextureStreaming Tags AssetUserData Cooking" },
		{ "IncludePath", "Components/Wave/OceanologyWaveSolverComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/Wave/OceanologyWaveSolverComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaveTimeMode_MetaData[] = {
		{ "Category", "Waves" },
		{ "ModuleRelativePath", "Public/Components/Wave/OceanologyWaveSolverComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaveSolverUpdateInterval_MetaData[] = {
		{ "Category", "Waves" },
		{ "ModuleRelativePath", "Public/Components/Wave/OceanologyWaveSolverComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[] = {
		{ "Category", "Waves" },
		{ "ModuleRelativePath", "Public/Components/Wave/OceanologyWaveSolverComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MPC_Waves_MetaData[] = {
		{ "Category", "Waves" },
		{ "ModuleRelativePath", "Public/Components/Wave/OceanologyWaveSolverComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameTimeInSeconds_MetaData[] = {
		{ "Category", "Waves" },
		{ "ModuleRelativePath", "Public/Components/Wave/OceanologyWaveSolverComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimulateWaves_MetaData[] = {
		{ "Category", "Waves" },
		{ "ModuleRelativePath", "Public/Components/Wave/OceanologyWaveSolverComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstWaterInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/Wave/OceanologyWaveSolverComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_WaveTimeMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WaveTimeMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WaveSolverUpdateInterval;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MPC_Waves;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_GameTimeInSeconds;
	static void NewProp_SimulateWaves_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SimulateWaves;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstWaterInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOceanologyWaveSolverComponent_GetGlobalWaveDirection, "GetGlobalWaveDirection" }, // 3534463718
		{ &Z_Construct_UFunction_UOceanologyWaveSolverComponent_GetMaxWaveHeight, "GetMaxWaveHeight" }, // 4046658573
		{ &Z_Construct_UFunction_UOceanologyWaveSolverComponent_GetMinWaveHeight, "GetMinWaveHeight" }, // 3312230295
		{ &Z_Construct_UFunction_UOceanologyWaveSolverComponent_GetWaveHeightAtLocation, "GetWaveHeightAtLocation" }, // 1253347954
		{ &Z_Construct_UFunction_UOceanologyWaveSolverComponent_InitWaves, "InitWaves" }, // 2900265951
		{ &Z_Construct_UFunction_UOceanologyWaveSolverComponent_IsUsingMPC_Waves, "IsUsingMPC_Waves" }, // 1243897520
		{ &Z_Construct_UFunction_UOceanologyWaveSolverComponent_StartWaveSimulation, "StartWaveSimulation" }, // 1363728437
		{ &Z_Construct_UFunction_UOceanologyWaveSolverComponent_StopWaveSimulation, "StopWaveSimulation" }, // 4099575770
		{ &Z_Construct_UFunction_UOceanologyWaveSolverComponent_UpdateWaves, "UpdateWaves" }, // 2050690403
		{ &Z_Construct_UFunction_UOceanologyWaveSolverComponent_UpdateWavesByPresetResult, "UpdateWavesByPresetResult" }, // 1757773863
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOceanologyWaveSolverComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOceanologyWaveSolverComponent_Statics::NewProp_WaveTimeMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOceanologyWaveSolverComponent_Statics::NewProp_WaveTimeMode = { "WaveTimeMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyWaveSolverComponent, WaveTimeMode), Z_Construct_UEnum_Oceanology_Plugin_EOceanologyWaveTimeMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaveTimeMode_MetaData), NewProp_WaveTimeMode_MetaData) }; // 226266094
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOceanologyWaveSolverComponent_Statics::NewProp_WaveSolverUpdateInterval = { "WaveSolverUpdateInterval", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyWaveSolverComponent, WaveSolverUpdateInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaveSolverUpdateInterval_MetaData), NewProp_WaveSolverUpdateInterval_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOceanologyWaveSolverComponent_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0020080000000034, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyWaveSolverComponent, Owner), Z_Construct_UClass_AOceanologyWaterParent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Owner_MetaData), NewProp_Owner_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOceanologyWaveSolverComponent_Statics::NewProp_MPC_Waves = { "MPC_Waves", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyWaveSolverComponent, MPC_Waves), Z_Construct_UClass_UMaterialParameterCollection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MPC_Waves_MetaData), NewProp_MPC_Waves_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UOceanologyWaveSolverComponent_Statics::NewProp_GameTimeInSeconds = { "GameTimeInSeconds", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyWaveSolverComponent, GameTimeInSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameTimeInSeconds_MetaData), NewProp_GameTimeInSeconds_MetaData) };
void Z_Construct_UClass_UOceanologyWaveSolverComponent_Statics::NewProp_SimulateWaves_SetBit(void* Obj)
{
	((UOceanologyWaveSolverComponent*)Obj)->SimulateWaves = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOceanologyWaveSolverComponent_Statics::NewProp_SimulateWaves = { "SimulateWaves", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOceanologyWaveSolverComponent), &Z_Construct_UClass_UOceanologyWaveSolverComponent_Statics::NewProp_SimulateWaves_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimulateWaves_MetaData), NewProp_SimulateWaves_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOceanologyWaveSolverComponent_Statics::NewProp_FirstWaterInstance = { "FirstWaterInstance", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyWaveSolverComponent, FirstWaterInstance), Z_Construct_UClass_AOceanologyWaterParent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstWaterInstance_MetaData), NewProp_FirstWaterInstance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOceanologyWaveSolverComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyWaveSolverComponent_Statics::NewProp_WaveTimeMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyWaveSolverComponent_Statics::NewProp_WaveTimeMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyWaveSolverComponent_Statics::NewProp_WaveSolverUpdateInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyWaveSolverComponent_Statics::NewProp_Owner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyWaveSolverComponent_Statics::NewProp_MPC_Waves,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyWaveSolverComponent_Statics::NewProp_GameTimeInSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyWaveSolverComponent_Statics::NewProp_SimulateWaves,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyWaveSolverComponent_Statics::NewProp_FirstWaterInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOceanologyWaveSolverComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOceanologyWaveSolverComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Oceanology_Plugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOceanologyWaveSolverComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOceanologyWaveSolverComponent_Statics::ClassParams = {
	&UOceanologyWaveSolverComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOceanologyWaveSolverComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOceanologyWaveSolverComponent_Statics::PropPointers),
	0,
	0x00B000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOceanologyWaveSolverComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UOceanologyWaveSolverComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOceanologyWaveSolverComponent()
{
	if (!Z_Registration_Info_UClass_UOceanologyWaveSolverComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOceanologyWaveSolverComponent.OuterSingleton, Z_Construct_UClass_UOceanologyWaveSolverComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOceanologyWaveSolverComponent.OuterSingleton;
}
template<> OCEANOLOGY_PLUGIN_API UClass* StaticClass<UOceanologyWaveSolverComponent>()
{
	return UOceanologyWaveSolverComponent::StaticClass();
}
void UOceanologyWaveSolverComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_Owner(TEXT("Owner"));
	const bool bIsValid = true
		&& Name_Owner == ClassReps[(int32)ENetFields_Private::Owner].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UOceanologyWaveSolverComponent"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOceanologyWaveSolverComponent);
UOceanologyWaveSolverComponent::~UOceanologyWaveSolverComponent() {}
// End Class UOceanologyWaveSolverComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEDocument_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_Wave_OceanologyWaveSolverComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EOceanologyWaveTimeMode_StaticEnum, TEXT("EOceanologyWaveTimeMode"), &Z_Registration_Info_UEnum_EOceanologyWaveTimeMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 226266094U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOceanologyWaveSolverComponent, UOceanologyWaveSolverComponent::StaticClass, TEXT("UOceanologyWaveSolverComponent"), &Z_Registration_Info_UClass_UOceanologyWaveSolverComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOceanologyWaveSolverComponent), 1299323745U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEDocument_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_Wave_OceanologyWaveSolverComponent_h_2473233039(TEXT("/Script/Oceanology_Plugin"),
	Z_CompiledInDeferFile_FID_UEDocument_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_Wave_OceanologyWaveSolverComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEDocument_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_Wave_OceanologyWaveSolverComponent_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UEDocument_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_Wave_OceanologyWaveSolverComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEDocument_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_Wave_OceanologyWaveSolverComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
