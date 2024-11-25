// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graduation_2024/Public/InterectBlock/BlockActorManager.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlockActorManager() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESplineMeshAxis();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
GRADUATION_2024_API UClass* Z_Construct_UClass_ABlockActor_NoRegister();
GRADUATION_2024_API UClass* Z_Construct_UClass_ABlockActorManager();
GRADUATION_2024_API UClass* Z_Construct_UClass_ABlockActorManager_NoRegister();
GRADUATION_2024_API UEnum* Z_Construct_UEnum_Graduation_2024_EBlockType();
GRADUATION_2024_API UScriptStruct* Z_Construct_UScriptStruct_FBlockSettings();
UPackage* Z_Construct_UPackage__Script_Graduation_2024();
// End Cross Module References

// Begin ScriptStruct FBlockSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BlockSettings;
class UScriptStruct* FBlockSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BlockSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BlockSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlockSettings, (UObject*)Z_Construct_UPackage__Script_Graduation_2024(), TEXT("BlockSettings"));
	}
	return Z_Registration_Info_UScriptStruct_BlockSettings.OuterSingleton;
}
template<> GRADUATION_2024_API UScriptStruct* StaticStruct<FBlockSettings>()
{
	return FBlockSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBlockSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xda\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc3\xb5\xc4\xbd\xe1\xb9\xb9\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/InterectBlock/BlockActorManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xda\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc3\xb5\xc4\xbd\xe1\xb9\xb9\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_blockType_MetaData[] = {
		{ "Category", "blockSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xda\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xb6\xef\xbf\xbd\xd3\xa6\xef\xbf\xbd\xc4\xb2\xef\xbf\xbd\xef\xbf\xbd\xca\xa3\xef\xbf\xbd \xc4\xac\xef\xbf\xbd\xcf\xb2\xef\xbf\xbd\xef\xbf\xbd\xca\xa3\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xa3\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdf\xb2\xef\xbf\xbd\xef\xbf\xbd\xca\xa3\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/InterectBlock/BlockActorManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xda\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xb6\xef\xbf\xbd\xd3\xa6\xef\xbf\xbd\xc4\xb2\xef\xbf\xbd\xef\xbf\xbd\xca\xa3\xef\xbf\xbd \xc4\xac\xef\xbf\xbd\xcf\xb2\xef\xbf\xbd\xef\xbf\xbd\xca\xa3\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xa3\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdf\xb2\xef\xbf\xbd\xef\xbf\xbd\xca\xa3\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_defualtBlockMaterial_MetaData[] = {
		{ "Category", "blockSettings" },
		{ "ModuleRelativePath", "Public/InterectBlock/BlockActorManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_activeBlockMaterial_MetaData[] = {
		{ "Category", "blockSettings" },
		{ "ModuleRelativePath", "Public/InterectBlock/BlockActorManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineMaterial_MetaData[] = {
		{ "Category", "blockSettings" },
		{ "ModuleRelativePath", "Public/InterectBlock/BlockActorManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriangleMaterial_MetaData[] = {
		{ "Category", "blockSettings" },
		{ "ModuleRelativePath", "Public/InterectBlock/BlockActorManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_blockType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_blockType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_defualtBlockMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_activeBlockMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LineMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TriangleMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlockSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBlockSettings_Statics::NewProp_blockType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBlockSettings_Statics::NewProp_blockType = { "blockType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlockSettings, blockType), Z_Construct_UEnum_Graduation_2024_EBlockType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_blockType_MetaData), NewProp_blockType_MetaData) }; // 261377382
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBlockSettings_Statics::NewProp_defualtBlockMaterial = { "defualtBlockMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlockSettings, defualtBlockMaterial), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_defualtBlockMaterial_MetaData), NewProp_defualtBlockMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBlockSettings_Statics::NewProp_activeBlockMaterial = { "activeBlockMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlockSettings, activeBlockMaterial), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_activeBlockMaterial_MetaData), NewProp_activeBlockMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBlockSettings_Statics::NewProp_LineMaterial = { "LineMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlockSettings, LineMaterial), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineMaterial_MetaData), NewProp_LineMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBlockSettings_Statics::NewProp_TriangleMaterial = { "TriangleMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlockSettings, TriangleMaterial), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriangleMaterial_MetaData), NewProp_TriangleMaterial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlockSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlockSettings_Statics::NewProp_blockType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlockSettings_Statics::NewProp_blockType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlockSettings_Statics::NewProp_defualtBlockMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlockSettings_Statics::NewProp_activeBlockMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlockSettings_Statics::NewProp_LineMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlockSettings_Statics::NewProp_TriangleMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlockSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlockSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Graduation_2024,
	nullptr,
	&NewStructOps,
	"BlockSettings",
	Z_Construct_UScriptStruct_FBlockSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlockSettings_Statics::PropPointers),
	sizeof(FBlockSettings),
	alignof(FBlockSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlockSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBlockSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBlockSettings()
{
	if (!Z_Registration_Info_UScriptStruct_BlockSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BlockSettings.InnerSingleton, Z_Construct_UScriptStruct_FBlockSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BlockSettings.InnerSingleton;
}
// End ScriptStruct FBlockSettings

// Begin Class ABlockActorManager Function OnTriangleOnOverlapEnd
struct Z_Construct_UFunction_ABlockActorManager_OnTriangleOnOverlapEnd_Statics
{
	struct BlockActorManager_eventOnTriangleOnOverlapEnd_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComponent;
		int32 OtherBodyIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InterectBlock/BlockActorManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComponent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABlockActorManager_OnTriangleOnOverlapEnd_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlockActorManager_eventOnTriangleOnOverlapEnd_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABlockActorManager_OnTriangleOnOverlapEnd_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlockActorManager_eventOnTriangleOnOverlapEnd_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABlockActorManager_OnTriangleOnOverlapEnd_Statics::NewProp_OtherComponent = { "OtherComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlockActorManager_eventOnTriangleOnOverlapEnd_Parms, OtherComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComponent_MetaData), NewProp_OtherComponent_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABlockActorManager_OnTriangleOnOverlapEnd_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlockActorManager_eventOnTriangleOnOverlapEnd_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABlockActorManager_OnTriangleOnOverlapEnd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlockActorManager_OnTriangleOnOverlapEnd_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlockActorManager_OnTriangleOnOverlapEnd_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlockActorManager_OnTriangleOnOverlapEnd_Statics::NewProp_OtherComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlockActorManager_OnTriangleOnOverlapEnd_Statics::NewProp_OtherBodyIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlockActorManager_OnTriangleOnOverlapEnd_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlockActorManager_OnTriangleOnOverlapEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABlockActorManager, nullptr, "OnTriangleOnOverlapEnd", nullptr, nullptr, Z_Construct_UFunction_ABlockActorManager_OnTriangleOnOverlapEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABlockActorManager_OnTriangleOnOverlapEnd_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABlockActorManager_OnTriangleOnOverlapEnd_Statics::BlockActorManager_eventOnTriangleOnOverlapEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlockActorManager_OnTriangleOnOverlapEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABlockActorManager_OnTriangleOnOverlapEnd_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABlockActorManager_OnTriangleOnOverlapEnd_Statics::BlockActorManager_eventOnTriangleOnOverlapEnd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABlockActorManager_OnTriangleOnOverlapEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlockActorManager_OnTriangleOnOverlapEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABlockActorManager::execOnTriangleOnOverlapEnd)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTriangleOnOverlapEnd(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_OtherBodyIndex);
	P_NATIVE_END;
}
// End Class ABlockActorManager Function OnTriangleOnOverlapEnd

// Begin Class ABlockActorManager Function OnTriangleOverlapBegin
struct Z_Construct_UFunction_ABlockActorManager_OnTriangleOverlapBegin_Statics
{
	struct BlockActorManager_eventOnTriangleOverlapBegin_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComponent;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xac\xef\xbf\xbd\xd8\xb5\xef\xbf\xbd\xef\xbf\xbd\xc2\xbc\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/InterectBlock/BlockActorManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xac\xef\xbf\xbd\xd8\xb5\xef\xbf\xbd\xef\xbf\xbd\xc2\xbc\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComponent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABlockActorManager_OnTriangleOverlapBegin_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlockActorManager_eventOnTriangleOverlapBegin_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABlockActorManager_OnTriangleOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlockActorManager_eventOnTriangleOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABlockActorManager_OnTriangleOverlapBegin_Statics::NewProp_OtherComponent = { "OtherComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlockActorManager_eventOnTriangleOverlapBegin_Parms, OtherComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComponent_MetaData), NewProp_OtherComponent_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABlockActorManager_OnTriangleOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlockActorManager_eventOnTriangleOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ABlockActorManager_OnTriangleOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((BlockActorManager_eventOnTriangleOverlapBegin_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABlockActorManager_OnTriangleOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BlockActorManager_eventOnTriangleOverlapBegin_Parms), &Z_Construct_UFunction_ABlockActorManager_OnTriangleOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABlockActorManager_OnTriangleOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlockActorManager_eventOnTriangleOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABlockActorManager_OnTriangleOverlapBegin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlockActorManager_OnTriangleOverlapBegin_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlockActorManager_OnTriangleOverlapBegin_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlockActorManager_OnTriangleOverlapBegin_Statics::NewProp_OtherComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlockActorManager_OnTriangleOverlapBegin_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlockActorManager_OnTriangleOverlapBegin_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlockActorManager_OnTriangleOverlapBegin_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlockActorManager_OnTriangleOverlapBegin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlockActorManager_OnTriangleOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABlockActorManager, nullptr, "OnTriangleOverlapBegin", nullptr, nullptr, Z_Construct_UFunction_ABlockActorManager_OnTriangleOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABlockActorManager_OnTriangleOverlapBegin_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABlockActorManager_OnTriangleOverlapBegin_Statics::BlockActorManager_eventOnTriangleOverlapBegin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlockActorManager_OnTriangleOverlapBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABlockActorManager_OnTriangleOverlapBegin_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABlockActorManager_OnTriangleOverlapBegin_Statics::BlockActorManager_eventOnTriangleOverlapBegin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABlockActorManager_OnTriangleOverlapBegin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlockActorManager_OnTriangleOverlapBegin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABlockActorManager::execOnTriangleOverlapBegin)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTriangleOverlapBegin(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class ABlockActorManager Function OnTriangleOverlapBegin

// Begin Class ABlockActorManager
void ABlockActorManager::StaticRegisterNativesABlockActorManager()
{
	UClass* Class = ABlockActorManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnTriangleOnOverlapEnd", &ABlockActorManager::execOnTriangleOnOverlapEnd },
		{ "OnTriangleOverlapBegin", &ABlockActorManager::execOnTriangleOverlapBegin },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABlockActorManager);
UClass* Z_Construct_UClass_ABlockActorManager_NoRegister()
{
	return ABlockActorManager::StaticClass();
}
struct Z_Construct_UClass_ABlockActorManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "InterectBlock/BlockActorManager.h" },
		{ "ModuleRelativePath", "Public/InterectBlock/BlockActorManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_blockSettings_MetaData[] = {
		{ "Category", "blockSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xd6\xb6\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd3\xbd\xda\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/InterectBlock/BlockActorManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xd6\xb6\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd3\xbd\xda\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AblockActorsOnScene_MetaData[] = {
		{ "Category", "BlockActors" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xd6\xb6\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd3\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd0\xb5\xc4\xbd\xda\xb5\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/InterectBlock/BlockActorManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xd6\xb6\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd3\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd0\xb5\xc4\xbd\xda\xb5\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForwardAxis_MetaData[] = {
		{ "Category", "SplineForwardAxis" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xb0\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/InterectBlock/BlockActorManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xb0\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_staticMesh_MetaData[] = {
		{ "Category", "StaticMesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xda\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdf\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/InterectBlock/BlockActorManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xda\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdf\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplineWidth_MetaData[] = {
		{ "Category", "SplineWidth" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdf\xbf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/InterectBlock/BlockActorManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdf\xbf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionType_MetaData[] = {
		{ "Category", "CollisionType" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xd6\xb8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd7\xb2\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/InterectBlock/BlockActorManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xd6\xb8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd7\xb2\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_blockSettings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_blockSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AblockActorsOnScene_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AblockActorsOnScene;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ForwardAxis;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_staticMesh;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SplineWidth;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABlockActorManager_OnTriangleOnOverlapEnd, "OnTriangleOnOverlapEnd" }, // 1393815499
		{ &Z_Construct_UFunction_ABlockActorManager_OnTriangleOverlapBegin, "OnTriangleOverlapBegin" }, // 557217036
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABlockActorManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABlockActorManager_Statics::NewProp_blockSettings_Inner = { "blockSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBlockSettings, METADATA_PARAMS(0, nullptr) }; // 2608398037
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABlockActorManager_Statics::NewProp_blockSettings = { "blockSettings", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlockActorManager, blockSettings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_blockSettings_MetaData), NewProp_blockSettings_MetaData) }; // 2608398037
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlockActorManager_Statics::NewProp_AblockActorsOnScene_Inner = { "AblockActorsOnScene", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ABlockActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABlockActorManager_Statics::NewProp_AblockActorsOnScene = { "AblockActorsOnScene", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlockActorManager, AblockActorsOnScene), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AblockActorsOnScene_MetaData), NewProp_AblockActorsOnScene_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABlockActorManager_Statics::NewProp_ForwardAxis = { "ForwardAxis", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlockActorManager, ForwardAxis), Z_Construct_UEnum_Engine_ESplineMeshAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForwardAxis_MetaData), NewProp_ForwardAxis_MetaData) }; // 1838154449
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlockActorManager_Statics::NewProp_staticMesh = { "staticMesh", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlockActorManager, staticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_staticMesh_MetaData), NewProp_staticMesh_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABlockActorManager_Statics::NewProp_SplineWidth = { "SplineWidth", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlockActorManager, SplineWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplineWidth_MetaData), NewProp_SplineWidth_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABlockActorManager_Statics::NewProp_CollisionType = { "CollisionType", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlockActorManager, CollisionType), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionType_MetaData), NewProp_CollisionType_MetaData) }; // 756624936
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABlockActorManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockActorManager_Statics::NewProp_blockSettings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockActorManager_Statics::NewProp_blockSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockActorManager_Statics::NewProp_AblockActorsOnScene_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockActorManager_Statics::NewProp_AblockActorsOnScene,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockActorManager_Statics::NewProp_ForwardAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockActorManager_Statics::NewProp_staticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockActorManager_Statics::NewProp_SplineWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockActorManager_Statics::NewProp_CollisionType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABlockActorManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABlockActorManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Graduation_2024,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABlockActorManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABlockActorManager_Statics::ClassParams = {
	&ABlockActorManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABlockActorManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABlockActorManager_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABlockActorManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ABlockActorManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABlockActorManager()
{
	if (!Z_Registration_Info_UClass_ABlockActorManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABlockActorManager.OuterSingleton, Z_Construct_UClass_ABlockActorManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABlockActorManager.OuterSingleton;
}
template<> GRADUATION_2024_API UClass* StaticClass<ABlockActorManager>()
{
	return ABlockActorManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABlockActorManager);
ABlockActorManager::~ABlockActorManager() {}
// End Class ABlockActorManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Programes_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_InterectBlock_BlockActorManager_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBlockSettings::StaticStruct, Z_Construct_UScriptStruct_FBlockSettings_Statics::NewStructOps, TEXT("BlockSettings"), &Z_Registration_Info_UScriptStruct_BlockSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBlockSettings), 2608398037U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABlockActorManager, ABlockActorManager::StaticClass, TEXT("ABlockActorManager"), &Z_Registration_Info_UClass_ABlockActorManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABlockActorManager), 520007474U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Programes_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_InterectBlock_BlockActorManager_h_1037299156(TEXT("/Script/Graduation_2024"),
	Z_CompiledInDeferFile_FID_Programes_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_InterectBlock_BlockActorManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Programes_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_InterectBlock_BlockActorManager_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Programes_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_InterectBlock_BlockActorManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Programes_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_InterectBlock_BlockActorManager_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
