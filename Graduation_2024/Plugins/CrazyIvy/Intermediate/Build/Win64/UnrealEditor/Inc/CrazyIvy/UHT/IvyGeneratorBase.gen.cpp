// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CrazyIvy/Public/IvyGeneratorBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIvyGeneratorBase() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
CRAZYIVY_API UClass* Z_Construct_UClass_AIvyGeneratorBase();
CRAZYIVY_API UClass* Z_Construct_UClass_AIvyGeneratorBase_NoRegister();
CRAZYIVY_API UClass* Z_Construct_UClass_UIvyNode();
CRAZYIVY_API UClass* Z_Construct_UClass_UIvyNode_NoRegister();
CRAZYIVY_API UClass* Z_Construct_UClass_UIvyRoot();
CRAZYIVY_API UClass* Z_Construct_UClass_UIvyRoot_NoRegister();
CRAZYIVY_API UEnum* Z_Construct_UEnum_CrazyIvy_EButtonState();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
STATICMESHEDITOR_API UClass* Z_Construct_UClass_UStaticMeshEditorSubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_CrazyIvy();
// End Cross Module References

// Begin Enum EButtonState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EButtonState;
static UEnum* EButtonState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EButtonState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EButtonState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CrazyIvy_EButtonState, (UObject*)Z_Construct_UPackage__Script_CrazyIvy(), TEXT("EButtonState"));
	}
	return Z_Registration_Info_UEnum_EButtonState.OuterSingleton;
}
template<> CRAZYIVY_API UEnum* StaticEnum<EButtonState>()
{
	return EButtonState_StaticEnum();
}
struct Z_Construct_UEnum_CrazyIvy_EButtonState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Grow.DisplayName", "Grow" },
		{ "Grow.Name", "Grow" },
		{ "ModuleRelativePath", "Public/IvyGeneratorBase.h" },
		{ "Reset.DisplayName", "Reset" },
		{ "Reset.Name", "Reset" },
		{ "Stop.DisplayName", "Stop" },
		{ "Stop.Name", "Stop" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "Reset", (int64)Reset },
		{ "Grow", (int64)Grow },
		{ "Stop", (int64)Stop },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CrazyIvy_EButtonState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CrazyIvy,
	nullptr,
	"EButtonState",
	"EButtonState",
	Z_Construct_UEnum_CrazyIvy_EButtonState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CrazyIvy_EButtonState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CrazyIvy_EButtonState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CrazyIvy_EButtonState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CrazyIvy_EButtonState()
{
	if (!Z_Registration_Info_UEnum_EButtonState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EButtonState.InnerSingleton, Z_Construct_UEnum_CrazyIvy_EButtonState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EButtonState.InnerSingleton;
}
// End Enum EButtonState

// Begin Class UIvyNode
void UIvyNode::StaticRegisterNativesUIvyNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIvyNode);
UClass* Z_Construct_UClass_UIvyNode_NoRegister()
{
	return UIvyNode::StaticClass();
}
struct Z_Construct_UClass_UIvyNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** an ivy node */" },
#endif
		{ "IncludePath", "IvyGeneratorBase.h" },
		{ "ModuleRelativePath", "Public/IvyGeneratorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "an ivy node" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIvyNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIvyNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_CrazyIvy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIvyNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIvyNode_Statics::ClassParams = {
	&UIvyNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIvyNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UIvyNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIvyNode()
{
	if (!Z_Registration_Info_UClass_UIvyNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIvyNode.OuterSingleton, Z_Construct_UClass_UIvyNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIvyNode.OuterSingleton;
}
template<> CRAZYIVY_API UClass* StaticClass<UIvyNode>()
{
	return UIvyNode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIvyNode);
UIvyNode::~UIvyNode() {}
// End Class UIvyNode

// Begin Class UIvyRoot
void UIvyRoot::StaticRegisterNativesUIvyRoot()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIvyRoot);
UClass* Z_Construct_UClass_UIvyRoot_NoRegister()
{
	return UIvyRoot::StaticClass();
}
struct Z_Construct_UClass_UIvyRoot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** an ivy root point */" },
#endif
		{ "IncludePath", "IvyGeneratorBase.h" },
		{ "ModuleRelativePath", "Public/IvyGeneratorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "an ivy root point" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Nodes_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** a number of nodes */" },
#endif
		{ "ModuleRelativePath", "Public/IvyGeneratorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "a number of nodes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Alive_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** alive state */" },
#endif
		{ "ModuleRelativePath", "Public/IvyGeneratorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "alive state" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parents_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** number of parents, represents the level in the root hierarchy */" },
#endif
		{ "ModuleRelativePath", "Public/IvyGeneratorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "number of parents, represents the level in the root hierarchy" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Nodes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Nodes;
	static void NewProp_Alive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Alive;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Parents;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIvyRoot>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIvyRoot_Statics::NewProp_Nodes_Inner = { "Nodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UIvyNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIvyRoot_Statics::NewProp_Nodes = { "Nodes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIvyRoot, Nodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Nodes_MetaData), NewProp_Nodes_MetaData) };
void Z_Construct_UClass_UIvyRoot_Statics::NewProp_Alive_SetBit(void* Obj)
{
	((UIvyRoot*)Obj)->Alive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIvyRoot_Statics::NewProp_Alive = { "Alive", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIvyRoot), &Z_Construct_UClass_UIvyRoot_Statics::NewProp_Alive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Alive_MetaData), NewProp_Alive_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UIvyRoot_Statics::NewProp_Parents = { "Parents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIvyRoot, Parents), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parents_MetaData), NewProp_Parents_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIvyRoot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIvyRoot_Statics::NewProp_Nodes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIvyRoot_Statics::NewProp_Nodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIvyRoot_Statics::NewProp_Alive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIvyRoot_Statics::NewProp_Parents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIvyRoot_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIvyRoot_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_CrazyIvy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIvyRoot_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIvyRoot_Statics::ClassParams = {
	&UIvyRoot::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UIvyRoot_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UIvyRoot_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIvyRoot_Statics::Class_MetaDataParams), Z_Construct_UClass_UIvyRoot_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIvyRoot()
{
	if (!Z_Registration_Info_UClass_UIvyRoot.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIvyRoot.OuterSingleton, Z_Construct_UClass_UIvyRoot_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIvyRoot.OuterSingleton;
}
template<> CRAZYIVY_API UClass* StaticClass<UIvyRoot>()
{
	return UIvyRoot::StaticClass();
}
UIvyRoot::UIvyRoot(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIvyRoot);
UIvyRoot::~UIvyRoot() {}
// End Class UIvyRoot

// Begin Class AIvyGeneratorBase Function Birth
struct Z_Construct_UFunction_AIvyGeneratorBase_Birth_Statics
{
	struct IvyGeneratorBase_eventBirth_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Public/IvyGeneratorBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AIvyGeneratorBase_Birth_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((IvyGeneratorBase_eventBirth_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AIvyGeneratorBase_Birth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IvyGeneratorBase_eventBirth_Parms), &Z_Construct_UFunction_AIvyGeneratorBase_Birth_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AIvyGeneratorBase_Birth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIvyGeneratorBase_Birth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AIvyGeneratorBase_Birth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AIvyGeneratorBase_Birth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AIvyGeneratorBase, nullptr, "Birth", nullptr, nullptr, Z_Construct_UFunction_AIvyGeneratorBase_Birth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AIvyGeneratorBase_Birth_Statics::PropPointers), sizeof(Z_Construct_UFunction_AIvyGeneratorBase_Birth_Statics::IvyGeneratorBase_eventBirth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AIvyGeneratorBase_Birth_Statics::Function_MetaDataParams), Z_Construct_UFunction_AIvyGeneratorBase_Birth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AIvyGeneratorBase_Birth_Statics::IvyGeneratorBase_eventBirth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AIvyGeneratorBase_Birth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AIvyGeneratorBase_Birth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AIvyGeneratorBase::execBirth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Birth();
	P_NATIVE_END;
}
// End Class AIvyGeneratorBase Function Birth

// Begin Class AIvyGeneratorBase Function ClearAll
struct Z_Construct_UFunction_AIvyGeneratorBase_ClearAll_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Public/IvyGeneratorBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AIvyGeneratorBase_ClearAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AIvyGeneratorBase, nullptr, "ClearAll", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AIvyGeneratorBase_ClearAll_Statics::Function_MetaDataParams), Z_Construct_UFunction_AIvyGeneratorBase_ClearAll_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AIvyGeneratorBase_ClearAll()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AIvyGeneratorBase_ClearAll_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AIvyGeneratorBase::execClearAll)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearAll();
	P_NATIVE_END;
}
// End Class AIvyGeneratorBase Function ClearAll

// Begin Class AIvyGeneratorBase Function ComputeRandomLeafMaterialIndex
struct Z_Construct_UFunction_AIvyGeneratorBase_ComputeRandomLeafMaterialIndex_Statics
{
	struct IvyGeneratorBase_eventComputeRandomLeafMaterialIndex_Parms
	{
		float weight;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Public/IvyGeneratorBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_weight;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AIvyGeneratorBase_ComputeRandomLeafMaterialIndex_Statics::NewProp_weight = { "weight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IvyGeneratorBase_eventComputeRandomLeafMaterialIndex_Parms, weight), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AIvyGeneratorBase_ComputeRandomLeafMaterialIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IvyGeneratorBase_eventComputeRandomLeafMaterialIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AIvyGeneratorBase_ComputeRandomLeafMaterialIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIvyGeneratorBase_ComputeRandomLeafMaterialIndex_Statics::NewProp_weight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIvyGeneratorBase_ComputeRandomLeafMaterialIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AIvyGeneratorBase_ComputeRandomLeafMaterialIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AIvyGeneratorBase_ComputeRandomLeafMaterialIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AIvyGeneratorBase, nullptr, "ComputeRandomLeafMaterialIndex", nullptr, nullptr, Z_Construct_UFunction_AIvyGeneratorBase_ComputeRandomLeafMaterialIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AIvyGeneratorBase_ComputeRandomLeafMaterialIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_AIvyGeneratorBase_ComputeRandomLeafMaterialIndex_Statics::IvyGeneratorBase_eventComputeRandomLeafMaterialIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AIvyGeneratorBase_ComputeRandomLeafMaterialIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_AIvyGeneratorBase_ComputeRandomLeafMaterialIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AIvyGeneratorBase_ComputeRandomLeafMaterialIndex_Statics::IvyGeneratorBase_eventComputeRandomLeafMaterialIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AIvyGeneratorBase_ComputeRandomLeafMaterialIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AIvyGeneratorBase_ComputeRandomLeafMaterialIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AIvyGeneratorBase::execComputeRandomLeafMaterialIndex)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_weight);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->ComputeRandomLeafMaterialIndex(Z_Param_weight);
	P_NATIVE_END;
}
// End Class AIvyGeneratorBase Function ComputeRandomLeafMaterialIndex

// Begin Class AIvyGeneratorBase Function CreateMesh
struct Z_Construct_UFunction_AIvyGeneratorBase_CreateMesh_Statics
{
	struct IvyGeneratorBase_eventCreateMesh_Parms
	{
		TArray<UPrimitiveComponent*> ComponentsToMerge;
		FString InBasePackageName;
		TArray<UObject*> OutAssetsToSync;
		float ScreenSize;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Public/IvyGeneratorBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentsToMerge_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InBasePackageName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScreenSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ComponentsToMerge_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ComponentsToMerge;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InBasePackageName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutAssetsToSync_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutAssetsToSync;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScreenSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AIvyGeneratorBase_CreateMesh_Statics::NewProp_ComponentsToMerge_Inner = { "ComponentsToMerge", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AIvyGeneratorBase_CreateMesh_Statics::NewProp_ComponentsToMerge = { "ComponentsToMerge", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IvyGeneratorBase_eventCreateMesh_Parms, ComponentsToMerge), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentsToMerge_MetaData), NewProp_ComponentsToMerge_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AIvyGeneratorBase_CreateMesh_Statics::NewProp_InBasePackageName = { "InBasePackageName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IvyGeneratorBase_eventCreateMesh_Parms, InBasePackageName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InBasePackageName_MetaData), NewProp_InBasePackageName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AIvyGeneratorBase_CreateMesh_Statics::NewProp_OutAssetsToSync_Inner = { "OutAssetsToSync", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AIvyGeneratorBase_CreateMesh_Statics::NewProp_OutAssetsToSync = { "OutAssetsToSync", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IvyGeneratorBase_eventCreateMesh_Parms, OutAssetsToSync), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AIvyGeneratorBase_CreateMesh_Statics::NewProp_ScreenSize = { "ScreenSize", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IvyGeneratorBase_eventCreateMesh_Parms, ScreenSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScreenSize_MetaData), NewProp_ScreenSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AIvyGeneratorBase_CreateMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIvyGeneratorBase_CreateMesh_Statics::NewProp_ComponentsToMerge_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIvyGeneratorBase_CreateMesh_Statics::NewProp_ComponentsToMerge,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIvyGeneratorBase_CreateMesh_Statics::NewProp_InBasePackageName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIvyGeneratorBase_CreateMesh_Statics::NewProp_OutAssetsToSync_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIvyGeneratorBase_CreateMesh_Statics::NewProp_OutAssetsToSync,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIvyGeneratorBase_CreateMesh_Statics::NewProp_ScreenSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AIvyGeneratorBase_CreateMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AIvyGeneratorBase_CreateMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AIvyGeneratorBase, nullptr, "CreateMesh", nullptr, nullptr, Z_Construct_UFunction_AIvyGeneratorBase_CreateMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AIvyGeneratorBase_CreateMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_AIvyGeneratorBase_CreateMesh_Statics::IvyGeneratorBase_eventCreateMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AIvyGeneratorBase_CreateMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_AIvyGeneratorBase_CreateMesh_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AIvyGeneratorBase_CreateMesh_Statics::IvyGeneratorBase_eventCreateMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AIvyGeneratorBase_CreateMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AIvyGeneratorBase_CreateMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AIvyGeneratorBase::execCreateMesh)
{
	P_GET_TARRAY(UPrimitiveComponent*,Z_Param_ComponentsToMerge);
	P_GET_PROPERTY(FStrProperty,Z_Param_InBasePackageName);
	P_GET_TARRAY_REF(UObject*,Z_Param_Out_OutAssetsToSync);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ScreenSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateMesh(Z_Param_ComponentsToMerge,Z_Param_InBasePackageName,Z_Param_Out_OutAssetsToSync,Z_Param_ScreenSize);
	P_NATIVE_END;
}
// End Class AIvyGeneratorBase Function CreateMesh

// Begin Class AIvyGeneratorBase Function IvyAddInstanceMesh
struct IvyGeneratorBase_eventIvyAddInstanceMesh_Parms
{
	int32 index;
	FTransform Transform;
};
static FName NAME_AIvyGeneratorBase_IvyAddInstanceMesh = FName(TEXT("IvyAddInstanceMesh"));
void AIvyGeneratorBase::IvyAddInstanceMesh(int32 index, FTransform Transform)
{
	IvyGeneratorBase_eventIvyAddInstanceMesh_Parms Parms;
	Parms.index=index;
	Parms.Transform=Transform;
	ProcessEvent(FindFunctionChecked(NAME_AIvyGeneratorBase_IvyAddInstanceMesh),&Parms);
}
struct Z_Construct_UFunction_AIvyGeneratorBase_IvyAddInstanceMesh_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Public/IvyGeneratorBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AIvyGeneratorBase_IvyAddInstanceMesh_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IvyGeneratorBase_eventIvyAddInstanceMesh_Parms, index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AIvyGeneratorBase_IvyAddInstanceMesh_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IvyGeneratorBase_eventIvyAddInstanceMesh_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AIvyGeneratorBase_IvyAddInstanceMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIvyGeneratorBase_IvyAddInstanceMesh_Statics::NewProp_index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIvyGeneratorBase_IvyAddInstanceMesh_Statics::NewProp_Transform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AIvyGeneratorBase_IvyAddInstanceMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AIvyGeneratorBase_IvyAddInstanceMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AIvyGeneratorBase, nullptr, "IvyAddInstanceMesh", nullptr, nullptr, Z_Construct_UFunction_AIvyGeneratorBase_IvyAddInstanceMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AIvyGeneratorBase_IvyAddInstanceMesh_Statics::PropPointers), sizeof(IvyGeneratorBase_eventIvyAddInstanceMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08820800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AIvyGeneratorBase_IvyAddInstanceMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_AIvyGeneratorBase_IvyAddInstanceMesh_Statics::Function_MetaDataParams) };
static_assert(sizeof(IvyGeneratorBase_eventIvyAddInstanceMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AIvyGeneratorBase_IvyAddInstanceMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AIvyGeneratorBase_IvyAddInstanceMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AIvyGeneratorBase Function IvyAddInstanceMesh

// Begin Class AIvyGeneratorBase Function IvyDeleteAsset
struct Z_Construct_UFunction_AIvyGeneratorBase_IvyDeleteAsset_Statics
{
	struct IvyGeneratorBase_eventIvyDeleteAsset_Parms
	{
		FString InLog;
		FString InString;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Public/IvyGeneratorBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InLog;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InString;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AIvyGeneratorBase_IvyDeleteAsset_Statics::NewProp_InLog = { "InLog", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IvyGeneratorBase_eventIvyDeleteAsset_Parms, InLog), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AIvyGeneratorBase_IvyDeleteAsset_Statics::NewProp_InString = { "InString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IvyGeneratorBase_eventIvyDeleteAsset_Parms, InString), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AIvyGeneratorBase_IvyDeleteAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIvyGeneratorBase_IvyDeleteAsset_Statics::NewProp_InLog,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIvyGeneratorBase_IvyDeleteAsset_Statics::NewProp_InString,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AIvyGeneratorBase_IvyDeleteAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AIvyGeneratorBase_IvyDeleteAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AIvyGeneratorBase, nullptr, "IvyDeleteAsset", nullptr, nullptr, Z_Construct_UFunction_AIvyGeneratorBase_IvyDeleteAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AIvyGeneratorBase_IvyDeleteAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_AIvyGeneratorBase_IvyDeleteAsset_Statics::IvyGeneratorBase_eventIvyDeleteAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AIvyGeneratorBase_IvyDeleteAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_AIvyGeneratorBase_IvyDeleteAsset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AIvyGeneratorBase_IvyDeleteAsset_Statics::IvyGeneratorBase_eventIvyDeleteAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AIvyGeneratorBase_IvyDeleteAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AIvyGeneratorBase_IvyDeleteAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AIvyGeneratorBase::execIvyDeleteAsset)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InLog);
	P_GET_PROPERTY(FStrProperty,Z_Param_InString);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->IvyDeleteAsset(Z_Param_InLog,Z_Param_InString);
	P_NATIVE_END;
}
// End Class AIvyGeneratorBase Function IvyDeleteAsset

// Begin Class AIvyGeneratorBase Function IvySuccessfulDone
struct Z_Construct_UFunction_AIvyGeneratorBase_IvySuccessfulDone_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Public/IvyGeneratorBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AIvyGeneratorBase_IvySuccessfulDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AIvyGeneratorBase, nullptr, "IvySuccessfulDone", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AIvyGeneratorBase_IvySuccessfulDone_Statics::Function_MetaDataParams), Z_Construct_UFunction_AIvyGeneratorBase_IvySuccessfulDone_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AIvyGeneratorBase_IvySuccessfulDone()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AIvyGeneratorBase_IvySuccessfulDone_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AIvyGeneratorBase::execIvySuccessfulDone)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->IvySuccessfulDone();
	P_NATIVE_END;
}
// End Class AIvyGeneratorBase Function IvySuccessfulDone

// Begin Class AIvyGeneratorBase Function ResetSettings
struct Z_Construct_UFunction_AIvyGeneratorBase_ResetSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "IvyButtons" },
		{ "ModuleRelativePath", "Public/IvyGeneratorBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AIvyGeneratorBase_ResetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AIvyGeneratorBase, nullptr, "ResetSettings", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AIvyGeneratorBase_ResetSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_AIvyGeneratorBase_ResetSettings_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AIvyGeneratorBase_ResetSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AIvyGeneratorBase_ResetSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AIvyGeneratorBase::execResetSettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetSettings();
	P_NATIVE_END;
}
// End Class AIvyGeneratorBase Function ResetSettings

// Begin Class AIvyGeneratorBase Function SetGrowthStateValue
struct Z_Construct_UFunction_AIvyGeneratorBase_SetGrowthStateValue_Statics
{
	struct IvyGeneratorBase_eventSetGrowthStateValue_Parms
	{
		TEnumAsByte<EButtonState> _GrowthState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Public/IvyGeneratorBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp__GrowthState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AIvyGeneratorBase_SetGrowthStateValue_Statics::NewProp__GrowthState = { "_GrowthState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IvyGeneratorBase_eventSetGrowthStateValue_Parms, _GrowthState), Z_Construct_UEnum_CrazyIvy_EButtonState, METADATA_PARAMS(0, nullptr) }; // 224533510
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AIvyGeneratorBase_SetGrowthStateValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIvyGeneratorBase_SetGrowthStateValue_Statics::NewProp__GrowthState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AIvyGeneratorBase_SetGrowthStateValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AIvyGeneratorBase_SetGrowthStateValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AIvyGeneratorBase, nullptr, "SetGrowthStateValue", nullptr, nullptr, Z_Construct_UFunction_AIvyGeneratorBase_SetGrowthStateValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AIvyGeneratorBase_SetGrowthStateValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_AIvyGeneratorBase_SetGrowthStateValue_Statics::IvyGeneratorBase_eventSetGrowthStateValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AIvyGeneratorBase_SetGrowthStateValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_AIvyGeneratorBase_SetGrowthStateValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AIvyGeneratorBase_SetGrowthStateValue_Statics::IvyGeneratorBase_eventSetGrowthStateValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AIvyGeneratorBase_SetGrowthStateValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AIvyGeneratorBase_SetGrowthStateValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AIvyGeneratorBase::execSetGrowthStateValue)
{
	P_GET_PROPERTY(FByteProperty,Z_Param__GrowthState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGrowthStateValue(EButtonState(Z_Param__GrowthState));
	P_NATIVE_END;
}
// End Class AIvyGeneratorBase Function SetGrowthStateValue

// Begin Class AIvyGeneratorBase Function StartGrowth
struct Z_Construct_UFunction_AIvyGeneratorBase_StartGrowth_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UFUNCTION(BlueprintCallable, Category = Properties)\n//\x09void IvySetLodBuildSettings(UStaticMesh* StaticMesh,\n//\x09""const int32 LodIndex,\n//\x09""const FMeshBuildSettings& BuildOptions);\n" },
#endif
		{ "ModuleRelativePath", "Public/IvyGeneratorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UFUNCTION(BlueprintCallable, Category = Properties)\n       void IvySetLodBuildSettings(UStaticMesh* StaticMesh,\n       const int32 LodIndex,\n       const FMeshBuildSettings& BuildOptions);" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AIvyGeneratorBase_StartGrowth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AIvyGeneratorBase, nullptr, "StartGrowth", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AIvyGeneratorBase_StartGrowth_Statics::Function_MetaDataParams), Z_Construct_UFunction_AIvyGeneratorBase_StartGrowth_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AIvyGeneratorBase_StartGrowth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AIvyGeneratorBase_StartGrowth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AIvyGeneratorBase::execStartGrowth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartGrowth();
	P_NATIVE_END;
}
// End Class AIvyGeneratorBase Function StartGrowth

// Begin Class AIvyGeneratorBase Function StopGrowth
struct Z_Construct_UFunction_AIvyGeneratorBase_StopGrowth_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Public/IvyGeneratorBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AIvyGeneratorBase_StopGrowth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AIvyGeneratorBase, nullptr, "StopGrowth", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AIvyGeneratorBase_StopGrowth_Statics::Function_MetaDataParams), Z_Construct_UFunction_AIvyGeneratorBase_StopGrowth_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AIvyGeneratorBase_StopGrowth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AIvyGeneratorBase_StopGrowth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AIvyGeneratorBase::execStopGrowth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopGrowth();
	P_NATIVE_END;
}
// End Class AIvyGeneratorBase Function StopGrowth

// Begin Class AIvyGeneratorBase
void AIvyGeneratorBase::StaticRegisterNativesAIvyGeneratorBase()
{
	UClass* Class = AIvyGeneratorBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Birth", &AIvyGeneratorBase::execBirth },
		{ "ClearAll", &AIvyGeneratorBase::execClearAll },
		{ "ComputeRandomLeafMaterialIndex", &AIvyGeneratorBase::execComputeRandomLeafMaterialIndex },
		{ "CreateMesh", &AIvyGeneratorBase::execCreateMesh },
		{ "IvyDeleteAsset", &AIvyGeneratorBase::execIvyDeleteAsset },
		{ "IvySuccessfulDone", &AIvyGeneratorBase::execIvySuccessfulDone },
		{ "ResetSettings", &AIvyGeneratorBase::execResetSettings },
		{ "SetGrowthStateValue", &AIvyGeneratorBase::execSetGrowthStateValue },
		{ "StartGrowth", &AIvyGeneratorBase::execStartGrowth },
		{ "StopGrowth", &AIvyGeneratorBase::execStopGrowth },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AIvyGeneratorBase);
UClass* Z_Construct_UClass_AIvyGeneratorBase_NoRegister()
{
	return AIvyGeneratorBase::StaticClass();
}
struct Z_Construct_UClass_AIvyGeneratorBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "IvyProperties IvySettings IvySettings|Birth IvySettings|Grow IvySettings|Misc IvyLeafSpecies" },
		{ "HideCategories", "ZDefault" },
		{ "IncludePath", "IvyGeneratorBase.h" },
		{ "ModuleRelativePath", "Public/IvyGeneratorBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestinationMesh_MetaData[] = {
		{ "Category", "IvyProperties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**Select the mesh that the ivy will grow on.*/" },
#endif
		{ "ModuleRelativePath", "Public/IvyGeneratorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Select the mesh that the ivy will grow on." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalPoints_MetaData[] = {
		{ "Category", "IvyProperties" },
		{ "ModuleRelativePath", "Public/IvyGeneratorBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IvyBranchMesh_MetaData[] = {
		{ "Category", "IvyProperties" },
		{ "ModuleRelativePath", "Public/IvyGeneratorBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanClearGeneratedMeshes_MetaData[] = {
		{ "Category", "ZDefault" },
		{ "EditCondition", "bSeperateBranchesLeavesMesh" },
		{ "ModuleRelativePath", "Public/IvyGeneratorBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanCopyGeneratedMeshes_MetaData[] = {
		{ "Category", "ZDefault" },
		{ "EditCondition", "bSeperateBranchesLeavesMesh" },
		{ "ModuleRelativePath", "Public/IvyGeneratorBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IvySize_MetaData[] = {
		{ "Category", "IvySettings|Grow" },
		{ "ClampMax", "10" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Influences the growth behavior by tuning the ivy step size. Ivy will cover a larger area..[1..10].  */" },
#endif
		{ "ModuleRelativePath", "Public/IvyGeneratorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Influences the growth behavior by tuning the ivy step size. Ivy will cover a larger area..[1..10]." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryWeight_MetaData[] = {
		{ "Category", "IvySettings|Grow" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A larger value means ivy has more of a tendency to grow towards the sky [0..1] */" },
#endif
		{ "ModuleRelativePath", "Public/IvyGeneratorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A larger value means ivy has more of a tendency to grow towards the sky [0..1]" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomWeight_MetaData[] = {
		{ "Category", "IvySettings|Grow" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** How much random weight influence to add to growth vector [0..1] */" },
#endif
		{ "ModuleRelativePath", "Public/IvyGeneratorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How much random weight influence to add to growth vector [0..1]" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GravityWeight_MetaData[] = {
		{ "Category", "IvySettings|Grow" },
		{ "ClampMax", "2" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A bigger value means a higher tendency to grow towards the ground.[0..2] */" },
#endif
		{ "ModuleRelativePath", "Public/IvyGeneratorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A bigger value means a higher tendency to grow towards the ground.[0..2]" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdhesionWeight_MetaData[] = {
		{ "Category", "IvySettings|Grow" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A bigger value means strong adhesion to the mesh surface. [0..1] */" },
#endif
		{ "ModuleRelativePath", "Public/IvyGeneratorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A bigger value means strong adhesion to the mesh surface. [0..1]" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BranchingProbability_MetaData[] = {
		{ "Category", "IvySettings|Grow" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The probability of producing a new ivy branch. A larger value means any branch can split into new branches earlier. [0..1].*/" },
#endif
		{ "ModuleRelativePath", "Public/IvyGeneratorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The probability of producing a new ivy branch. A larger value means any branch can split into new branches earlier. [0..1]." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxFloatLength_MetaData[] = {
		{ "Category", "IvySettings|Grow" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**Maximum length of a free-floating ivy branch segment.\n\x09""A bigger value means the branch will float away form the surface longer and may grow towards the sky with low gravity.[0..1]*/" },
#endif
		{ "ModuleRelativePath", "Public/IvyGeneratorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum length of a free-floating ivy branch segment.\n       A bigger value means the branch will float away form the surface longer and may grow towards the sky with low gravity.[0..1]" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAdhesionDistance_MetaData[] = {
		{ "Category", "IvySettings|Grow" },
		{ "ClampMax", "4" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maximum distance of adhesion for the destination mesh. \n\x09""A bigger value means the adhesion is less accurate. [0..4]*/" },
#endif
		{ "ModuleRelativePath", "Public/IvyGeneratorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum distance of adhesion for the destination mesh.\n      A bigger value means the adhesion is less accurate. [0..4]" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IvyBranchSize_MetaData[] = {
		{ "Category", "IvySettings|Birth" },
		{ "ClampMax", "0.5" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Scale branch diameter [0..0.5]*/" },
#endif
		{ "ModuleRelativePath", "Public/IvyGeneratorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Scale branch diameter [0..0.5]" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IvyLeafSize_MetaData[] = {
		{ "Category", "IvySettings|Birth" },
		{ "ClampMax", "2" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**Scale multiplier to all leaf sizes [0..2]*/" },
#endif
		{ "ModuleRelativePath", "Public/IvyGeneratorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Scale multiplier to all leaf sizes [0..2]" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeafDensity_MetaData[] = {
		{ "Category", "IvySettings|Birth" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**Increase or decrease the probability of how many ivy leaves are generated [0..1] */" },
#endif
		{ "ModuleRelativePath", "Public/IvyGeneratorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Increase or decrease the probability of how many ivy leaves are generated [0..1]" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrowthSpeed_MetaData[] = {
		{ "Category", "IvyProperties" },
		{ "ClampMax", "3" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**How fast the Ivy preview grows. [1..3]*/" },
#endif
		{ "ModuleRelativePath", "Public/IvyGeneratorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How fast the Ivy preview grows. [1..3]" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MAX_NUMBER_MetaData[] = {
		{ "Category", "IvySettings|Misc" },
		{ "ClampMax", "10000" },
		{ "ClampMin", "100" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**Maximum Number of ivy points [100..10000]*/" },
#endif
		{ "ModuleRelativePath", "Public/IvyGeneratorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum Number of ivy points [100..10000]" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DensityMultiplier_MetaData[] = {
		{ "Category", "IvySettings|Misc" },
		{ "ClampMax", "10" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**Multiplies the overall density of leaves [1..10]*/" },
#endif
		{ "ModuleRelativePath", "Public/IvyGeneratorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Multiplies the overall density of leaves [1..10]" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeafOffset_MetaData[] = {
		{ "Category", "IvySettings|Misc" },
		{ "ClampMax", "5" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Creates an offset between branch and leaves. Higher numbers create a more bushy looking ivy plant but can leave larger gaps between branches and leaves.\n\x09""At 0, the leaves are attached directly to the branches. [0..5] */" },
#endif
		{ "ModuleRelativePath", "Public/IvyGeneratorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates an offset between branch and leaves. Higher numbers create a more bushy looking ivy plant but can leave larger gaps between branches and leaves.\n      At 0, the leaves are attached directly to the branches. [0..5]" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeafMaterials_MetaData[] = {
		{ "Category", "ZDefault" },
		{ "ModuleRelativePath", "Public/IvyGeneratorBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IvyLeafMeshes_MetaData[] = {
		{ "Category", "ZDefault" },
		{ "ModuleRelativePath", "Public/IvyGeneratorBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BranchPrimitiveComps_MetaData[] = {
		{ "Category", "ZDefault" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/IvyGeneratorBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Roots_MetaData[] = {
		{ "Category", "ZDefault" },
		{ "ModuleRelativePath", "Public/IvyGeneratorBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfPoints_MetaData[] = {
		{ "Category", "ZDefault" },
		{ "ModuleRelativePath", "Public/IvyGeneratorBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrowthVal_MetaData[] = {
		{ "Category", "ZDefault" },
		{ "ModuleRelativePath", "Public/IvyGeneratorBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrowthNode_MetaData[] = {
		{ "Category", "ZDefault" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/IvyGeneratorBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrowthBranch_MetaData[] = {
		{ "Category", "ZDefault" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/IvyGeneratorBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshEditorSubsystemObject_MetaData[] = {
		{ "Category", "ZDefault" },
		{ "ModuleRelativePath", "Public/IvyGeneratorBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DestinationMesh;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TotalPoints;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IvyBranchMesh;
	static void NewProp_bCanClearGeneratedMeshes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanClearGeneratedMeshes;
	static void NewProp_bCanCopyGeneratedMeshes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanCopyGeneratedMeshes;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_IvySize;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_PrimaryWeight;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_RandomWeight;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_GravityWeight;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_AdhesionWeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BranchingProbability;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MaxFloatLength;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MaxAdhesionDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_IvyBranchSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_IvyLeafSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LeafDensity;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GrowthSpeed;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MAX_NUMBER;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DensityMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LeafOffset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeafMaterials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LeafMaterials;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IvyLeafMeshes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_IvyLeafMeshes;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BranchPrimitiveComps_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BranchPrimitiveComps;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Roots_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Roots;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NumberOfPoints;
	static void NewProp_GrowthVal_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_GrowthVal;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GrowthNode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GrowthBranch;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshEditorSubsystemObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AIvyGeneratorBase_Birth, "Birth" }, // 2685998758
		{ &Z_Construct_UFunction_AIvyGeneratorBase_ClearAll, "ClearAll" }, // 903684328
		{ &Z_Construct_UFunction_AIvyGeneratorBase_ComputeRandomLeafMaterialIndex, "ComputeRandomLeafMaterialIndex" }, // 3226983687
		{ &Z_Construct_UFunction_AIvyGeneratorBase_CreateMesh, "CreateMesh" }, // 1423045768
		{ &Z_Construct_UFunction_AIvyGeneratorBase_IvyAddInstanceMesh, "IvyAddInstanceMesh" }, // 1418541823
		{ &Z_Construct_UFunction_AIvyGeneratorBase_IvyDeleteAsset, "IvyDeleteAsset" }, // 1618693849
		{ &Z_Construct_UFunction_AIvyGeneratorBase_IvySuccessfulDone, "IvySuccessfulDone" }, // 3842428053
		{ &Z_Construct_UFunction_AIvyGeneratorBase_ResetSettings, "ResetSettings" }, // 2966915643
		{ &Z_Construct_UFunction_AIvyGeneratorBase_SetGrowthStateValue, "SetGrowthStateValue" }, // 440511974
		{ &Z_Construct_UFunction_AIvyGeneratorBase_StartGrowth, "StartGrowth" }, // 2138360165
		{ &Z_Construct_UFunction_AIvyGeneratorBase_StopGrowth, "StopGrowth" }, // 1560548671
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIvyGeneratorBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIvyGeneratorBase_Statics::NewProp_DestinationMesh = { "DestinationMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIvyGeneratorBase, DestinationMesh), Z_Construct_UClass_AStaticMeshActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestinationMesh_MetaData), NewProp_DestinationMesh_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AIvyGeneratorBase_Statics::NewProp_TotalPoints = { "TotalPoints", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIvyGeneratorBase, TotalPoints), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalPoints_MetaData), NewProp_TotalPoints_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIvyGeneratorBase_Statics::NewProp_IvyBranchMesh = { "IvyBranchMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIvyGeneratorBase, IvyBranchMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IvyBranchMesh_MetaData), NewProp_IvyBranchMesh_MetaData) };
void Z_Construct_UClass_AIvyGeneratorBase_Statics::NewProp_bCanClearGeneratedMeshes_SetBit(void* Obj)
{
	((AIvyGeneratorBase*)Obj)->bCanClearGeneratedMeshes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AIvyGeneratorBase_Statics::NewProp_bCanClearGeneratedMeshes = { "bCanClearGeneratedMeshes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AIvyGeneratorBase), &Z_Construct_UClass_AIvyGeneratorBase_Statics::NewProp_bCanClearGeneratedMeshes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanClearGeneratedMeshes_MetaData), NewProp_bCanClearGeneratedMeshes_MetaData) };
void Z_Construct_UClass_AIvyGeneratorBase_Statics::NewProp_bCanCopyGeneratedMeshes_SetBit(void* Obj)
{
	((AIvyGeneratorBase*)Obj)->bCanCopyGeneratedMeshes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AIvyGeneratorBase_Statics::NewProp_bCanCopyGeneratedMeshes = { "bCanCopyGeneratedMeshes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AIvyGeneratorBase), &Z_Construct_UClass_AIvyGeneratorBase_Statics::NewProp_bCanCopyGeneratedMeshes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanCopyGeneratedMeshes_MetaData), NewProp_bCanCopyGeneratedMeshes_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AIvyGeneratorBase_Statics::NewProp_IvySize = { "IvySize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIvyGeneratorBase, IvySize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IvySize_MetaData), NewProp_IvySize_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_AIvyGeneratorBase_Statics::NewProp_PrimaryWeight = { "PrimaryWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIvyGeneratorBase, PrimaryWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimaryWeight_MetaData), NewProp_PrimaryWeight_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_AIvyGeneratorBase_Statics::NewProp_RandomWeight = { "RandomWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIvyGeneratorBase, RandomWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomWeight_MetaData), NewProp_RandomWeight_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_AIvyGeneratorBase_Statics::NewProp_GravityWeight = { "GravityWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIvyGeneratorBase, GravityWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GravityWeight_MetaData), NewProp_GravityWeight_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_AIvyGeneratorBase_Statics::NewProp_AdhesionWeight = { "AdhesionWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIvyGeneratorBase, AdhesionWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdhesionWeight_MetaData), NewProp_AdhesionWeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AIvyGeneratorBase_Statics::NewProp_BranchingProbability = { "BranchingProbability", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIvyGeneratorBase, BranchingProbability), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BranchingProbability_MetaData), NewProp_BranchingProbability_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_AIvyGeneratorBase_Statics::NewProp_MaxFloatLength = { "MaxFloatLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIvyGeneratorBase, MaxFloatLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxFloatLength_MetaData), NewProp_MaxFloatLength_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_AIvyGeneratorBase_Statics::NewProp_MaxAdhesionDistance = { "MaxAdhesionDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIvyGeneratorBase, MaxAdhesionDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAdhesionDistance_MetaData), NewProp_MaxAdhesionDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AIvyGeneratorBase_Statics::NewProp_IvyBranchSize = { "IvyBranchSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIvyGeneratorBase, IvyBranchSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IvyBranchSize_MetaData), NewProp_IvyBranchSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AIvyGeneratorBase_Statics::NewProp_IvyLeafSize = { "IvyLeafSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIvyGeneratorBase, IvyLeafSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IvyLeafSize_MetaData), NewProp_IvyLeafSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AIvyGeneratorBase_Statics::NewProp_LeafDensity = { "LeafDensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIvyGeneratorBase, LeafDensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeafDensity_MetaData), NewProp_LeafDensity_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AIvyGeneratorBase_Statics::NewProp_GrowthSpeed = { "GrowthSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIvyGeneratorBase, GrowthSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrowthSpeed_MetaData), NewProp_GrowthSpeed_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AIvyGeneratorBase_Statics::NewProp_MAX_NUMBER = { "MAX_NUMBER", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIvyGeneratorBase, MAX_NUMBER), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MAX_NUMBER_MetaData), NewProp_MAX_NUMBER_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AIvyGeneratorBase_Statics::NewProp_DensityMultiplier = { "DensityMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIvyGeneratorBase, DensityMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DensityMultiplier_MetaData), NewProp_DensityMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AIvyGeneratorBase_Statics::NewProp_LeafOffset = { "LeafOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIvyGeneratorBase, LeafOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeafOffset_MetaData), NewProp_LeafOffset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIvyGeneratorBase_Statics::NewProp_LeafMaterials_Inner = { "LeafMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AIvyGeneratorBase_Statics::NewProp_LeafMaterials = { "LeafMaterials", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIvyGeneratorBase, LeafMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeafMaterials_MetaData), NewProp_LeafMaterials_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIvyGeneratorBase_Statics::NewProp_IvyLeafMeshes_Inner = { "IvyLeafMeshes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AIvyGeneratorBase_Statics::NewProp_IvyLeafMeshes = { "IvyLeafMeshes", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIvyGeneratorBase, IvyLeafMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IvyLeafMeshes_MetaData), NewProp_IvyLeafMeshes_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIvyGeneratorBase_Statics::NewProp_BranchPrimitiveComps_Inner = { "BranchPrimitiveComps", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AIvyGeneratorBase_Statics::NewProp_BranchPrimitiveComps = { "BranchPrimitiveComps", nullptr, (EPropertyFlags)0x001000800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIvyGeneratorBase, BranchPrimitiveComps), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BranchPrimitiveComps_MetaData), NewProp_BranchPrimitiveComps_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIvyGeneratorBase_Statics::NewProp_Roots_Inner = { "Roots", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UIvyRoot_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AIvyGeneratorBase_Statics::NewProp_Roots = { "Roots", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIvyGeneratorBase, Roots), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Roots_MetaData), NewProp_Roots_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AIvyGeneratorBase_Statics::NewProp_NumberOfPoints_Inner = { "NumberOfPoints", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AIvyGeneratorBase_Statics::NewProp_NumberOfPoints = { "NumberOfPoints", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIvyGeneratorBase, NumberOfPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberOfPoints_MetaData), NewProp_NumberOfPoints_MetaData) };
void Z_Construct_UClass_AIvyGeneratorBase_Statics::NewProp_GrowthVal_SetBit(void* Obj)
{
	((AIvyGeneratorBase*)Obj)->GrowthVal = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AIvyGeneratorBase_Statics::NewProp_GrowthVal = { "GrowthVal", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AIvyGeneratorBase), &Z_Construct_UClass_AIvyGeneratorBase_Statics::NewProp_GrowthVal_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrowthVal_MetaData), NewProp_GrowthVal_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIvyGeneratorBase_Statics::NewProp_GrowthNode = { "GrowthNode", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIvyGeneratorBase, GrowthNode), Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrowthNode_MetaData), NewProp_GrowthNode_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIvyGeneratorBase_Statics::NewProp_GrowthBranch = { "GrowthBranch", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIvyGeneratorBase, GrowthBranch), Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrowthBranch_MetaData), NewProp_GrowthBranch_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIvyGeneratorBase_Statics::NewProp_StaticMeshEditorSubsystemObject = { "StaticMeshEditorSubsystemObject", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIvyGeneratorBase, StaticMeshEditorSubsystemObject), Z_Construct_UClass_UStaticMeshEditorSubsystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshEditorSubsystemObject_MetaData), NewProp_StaticMeshEditorSubsystemObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AIvyGeneratorBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIvyGeneratorBase_Statics::NewProp_DestinationMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIvyGeneratorBase_Statics::NewProp_TotalPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIvyGeneratorBase_Statics::NewProp_IvyBranchMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIvyGeneratorBase_Statics::NewProp_bCanClearGeneratedMeshes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIvyGeneratorBase_Statics::NewProp_bCanCopyGeneratedMeshes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIvyGeneratorBase_Statics::NewProp_IvySize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIvyGeneratorBase_Statics::NewProp_PrimaryWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIvyGeneratorBase_Statics::NewProp_RandomWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIvyGeneratorBase_Statics::NewProp_GravityWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIvyGeneratorBase_Statics::NewProp_AdhesionWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIvyGeneratorBase_Statics::NewProp_BranchingProbability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIvyGeneratorBase_Statics::NewProp_MaxFloatLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIvyGeneratorBase_Statics::NewProp_MaxAdhesionDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIvyGeneratorBase_Statics::NewProp_IvyBranchSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIvyGeneratorBase_Statics::NewProp_IvyLeafSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIvyGeneratorBase_Statics::NewProp_LeafDensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIvyGeneratorBase_Statics::NewProp_GrowthSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIvyGeneratorBase_Statics::NewProp_MAX_NUMBER,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIvyGeneratorBase_Statics::NewProp_DensityMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIvyGeneratorBase_Statics::NewProp_LeafOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIvyGeneratorBase_Statics::NewProp_LeafMaterials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIvyGeneratorBase_Statics::NewProp_LeafMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIvyGeneratorBase_Statics::NewProp_IvyLeafMeshes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIvyGeneratorBase_Statics::NewProp_IvyLeafMeshes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIvyGeneratorBase_Statics::NewProp_BranchPrimitiveComps_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIvyGeneratorBase_Statics::NewProp_BranchPrimitiveComps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIvyGeneratorBase_Statics::NewProp_Roots_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIvyGeneratorBase_Statics::NewProp_Roots,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIvyGeneratorBase_Statics::NewProp_NumberOfPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIvyGeneratorBase_Statics::NewProp_NumberOfPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIvyGeneratorBase_Statics::NewProp_GrowthVal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIvyGeneratorBase_Statics::NewProp_GrowthNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIvyGeneratorBase_Statics::NewProp_GrowthBranch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIvyGeneratorBase_Statics::NewProp_StaticMeshEditorSubsystemObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIvyGeneratorBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AIvyGeneratorBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_CrazyIvy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIvyGeneratorBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AIvyGeneratorBase_Statics::ClassParams = {
	&AIvyGeneratorBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AIvyGeneratorBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AIvyGeneratorBase_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIvyGeneratorBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AIvyGeneratorBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AIvyGeneratorBase()
{
	if (!Z_Registration_Info_UClass_AIvyGeneratorBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AIvyGeneratorBase.OuterSingleton, Z_Construct_UClass_AIvyGeneratorBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AIvyGeneratorBase.OuterSingleton;
}
template<> CRAZYIVY_API UClass* StaticClass<AIvyGeneratorBase>()
{
	return AIvyGeneratorBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AIvyGeneratorBase);
AIvyGeneratorBase::~AIvyGeneratorBase() {}
// End Class AIvyGeneratorBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Data_Graduation_Program_2024_Graduation_2024_Plugins_CrazyIvy_Source_CrazyIvy_Public_IvyGeneratorBase_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EButtonState_StaticEnum, TEXT("EButtonState"), &Z_Registration_Info_UEnum_EButtonState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 224533510U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIvyNode, UIvyNode::StaticClass, TEXT("UIvyNode"), &Z_Registration_Info_UClass_UIvyNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIvyNode), 1524103431U) },
		{ Z_Construct_UClass_UIvyRoot, UIvyRoot::StaticClass, TEXT("UIvyRoot"), &Z_Registration_Info_UClass_UIvyRoot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIvyRoot), 3264202790U) },
		{ Z_Construct_UClass_AIvyGeneratorBase, AIvyGeneratorBase::StaticClass, TEXT("AIvyGeneratorBase"), &Z_Registration_Info_UClass_AIvyGeneratorBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AIvyGeneratorBase), 106041557U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Data_Graduation_Program_2024_Graduation_2024_Plugins_CrazyIvy_Source_CrazyIvy_Public_IvyGeneratorBase_h_3768868886(TEXT("/Script/CrazyIvy"),
	Z_CompiledInDeferFile_FID_UE_Data_Graduation_Program_2024_Graduation_2024_Plugins_CrazyIvy_Source_CrazyIvy_Public_IvyGeneratorBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Data_Graduation_Program_2024_Graduation_2024_Plugins_CrazyIvy_Source_CrazyIvy_Public_IvyGeneratorBase_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UE_Data_Graduation_Program_2024_Graduation_2024_Plugins_CrazyIvy_Source_CrazyIvy_Public_IvyGeneratorBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Data_Graduation_Program_2024_Graduation_2024_Plugins_CrazyIvy_Source_CrazyIvy_Public_IvyGeneratorBase_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
