// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Oceanology_Plugin/Public/Utils/OceanologyMessageUtils.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOceanologyMessageUtils() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_UOceanologyMessageUtils();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_UOceanologyMessageUtils_NoRegister();
UPackage* Z_Construct_UPackage__Script_Oceanology_Plugin();
// End Cross Module References

// Begin Class UOceanologyMessageUtils Function CreateMessage
struct Z_Construct_UFunction_UOceanologyMessageUtils_CreateMessage_Statics
{
	struct OceanologyMessageUtils_eventCreateMessage_Parms
	{
		const UObject* WorldContextObject;
		FString Message;
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Oceanology Messages" },
		{ "ModuleRelativePath", "Public/Utils/OceanologyMessageUtils.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOceanologyMessageUtils_CreateMessage_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyMessageUtils_eventCreateMessage_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOceanologyMessageUtils_CreateMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyMessageUtils_eventCreateMessage_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
void Z_Construct_UFunction_UOceanologyMessageUtils_CreateMessage_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((OceanologyMessageUtils_eventCreateMessage_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOceanologyMessageUtils_CreateMessage_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OceanologyMessageUtils_eventCreateMessage_Parms), &Z_Construct_UFunction_UOceanologyMessageUtils_CreateMessage_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSuccess_MetaData), NewProp_bSuccess_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanologyMessageUtils_CreateMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyMessageUtils_CreateMessage_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyMessageUtils_CreateMessage_Statics::NewProp_Message,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyMessageUtils_CreateMessage_Statics::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyMessageUtils_CreateMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologyMessageUtils_CreateMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologyMessageUtils, nullptr, "CreateMessage", nullptr, nullptr, Z_Construct_UFunction_UOceanologyMessageUtils_CreateMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyMessageUtils_CreateMessage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOceanologyMessageUtils_CreateMessage_Statics::OceanologyMessageUtils_eventCreateMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyMessageUtils_CreateMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologyMessageUtils_CreateMessage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOceanologyMessageUtils_CreateMessage_Statics::OceanologyMessageUtils_eventCreateMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanologyMessageUtils_CreateMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologyMessageUtils_CreateMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologyMessageUtils::execCreateMessage)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Message);
	P_GET_UBOOL(Z_Param_bSuccess);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOceanologyMessageUtils::CreateMessage(Z_Param_WorldContextObject,Z_Param_Message,Z_Param_bSuccess);
	P_NATIVE_END;
}
// End Class UOceanologyMessageUtils Function CreateMessage

// Begin Class UOceanologyMessageUtils
void UOceanologyMessageUtils::StaticRegisterNativesUOceanologyMessageUtils()
{
	UClass* Class = UOceanologyMessageUtils::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateMessage", &UOceanologyMessageUtils::execCreateMessage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOceanologyMessageUtils);
UClass* Z_Construct_UClass_UOceanologyMessageUtils_NoRegister()
{
	return UOceanologyMessageUtils::StaticClass();
}
struct Z_Construct_UClass_UOceanologyMessageUtils_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Utils/OceanologyMessageUtils.h" },
		{ "ModuleRelativePath", "Public/Utils/OceanologyMessageUtils.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOceanologyMessageUtils_CreateMessage, "CreateMessage" }, // 2893334201
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOceanologyMessageUtils>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOceanologyMessageUtils_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Oceanology_Plugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOceanologyMessageUtils_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOceanologyMessageUtils_Statics::ClassParams = {
	&UOceanologyMessageUtils::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOceanologyMessageUtils_Statics::Class_MetaDataParams), Z_Construct_UClass_UOceanologyMessageUtils_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOceanologyMessageUtils()
{
	if (!Z_Registration_Info_UClass_UOceanologyMessageUtils.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOceanologyMessageUtils.OuterSingleton, Z_Construct_UClass_UOceanologyMessageUtils_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOceanologyMessageUtils.OuterSingleton;
}
template<> OCEANOLOGY_PLUGIN_API UClass* StaticClass<UOceanologyMessageUtils>()
{
	return UOceanologyMessageUtils::StaticClass();
}
UOceanologyMessageUtils::UOceanologyMessageUtils(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOceanologyMessageUtils);
UOceanologyMessageUtils::~UOceanologyMessageUtils() {}
// End Class UOceanologyMessageUtils

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Utils_OceanologyMessageUtils_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOceanologyMessageUtils, UOceanologyMessageUtils::StaticClass, TEXT("UOceanologyMessageUtils"), &Z_Registration_Info_UClass_UOceanologyMessageUtils, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOceanologyMessageUtils), 3338217659U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Utils_OceanologyMessageUtils_h_857422856(TEXT("/Script/Oceanology_Plugin"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Utils_OceanologyMessageUtils_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Utils_OceanologyMessageUtils_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
