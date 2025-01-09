// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graduation_2024/Public/InterectBlock/Runepaper.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRunepaper() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
GRADUATION_2024_API UClass* Z_Construct_UClass_ARunepaper();
GRADUATION_2024_API UClass* Z_Construct_UClass_ARunepaper_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_Graduation_2024();
// End Cross Module References

// Begin Class ARunepaper Function OnProjectileHit
struct Z_Construct_UFunction_ARunepaper_OnProjectileHit_Statics
{
	struct Runepaper_eventOnProjectileHit_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InterectBlock/Runepaper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARunepaper_OnProjectileHit_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Runepaper_eventOnProjectileHit_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARunepaper_OnProjectileHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Runepaper_eventOnProjectileHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARunepaper_OnProjectileHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Runepaper_eventOnProjectileHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ARunepaper_OnProjectileHit_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Runepaper_eventOnProjectileHit_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ARunepaper_OnProjectileHit_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((Runepaper_eventOnProjectileHit_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARunepaper_OnProjectileHit_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Runepaper_eventOnProjectileHit_Parms), &Z_Construct_UFunction_ARunepaper_OnProjectileHit_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARunepaper_OnProjectileHit_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Runepaper_eventOnProjectileHit_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARunepaper_OnProjectileHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARunepaper_OnProjectileHit_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARunepaper_OnProjectileHit_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARunepaper_OnProjectileHit_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARunepaper_OnProjectileHit_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARunepaper_OnProjectileHit_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARunepaper_OnProjectileHit_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARunepaper_OnProjectileHit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARunepaper_OnProjectileHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARunepaper, nullptr, "OnProjectileHit", nullptr, nullptr, Z_Construct_UFunction_ARunepaper_OnProjectileHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARunepaper_OnProjectileHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARunepaper_OnProjectileHit_Statics::Runepaper_eventOnProjectileHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARunepaper_OnProjectileHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARunepaper_OnProjectileHit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ARunepaper_OnProjectileHit_Statics::Runepaper_eventOnProjectileHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARunepaper_OnProjectileHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARunepaper_OnProjectileHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARunepaper::execOnProjectileHit)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnProjectileHit(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class ARunepaper Function OnProjectileHit

// Begin Class ARunepaper
void ARunepaper::StaticRegisterNativesARunepaper()
{
	UClass* Class = ARunepaper::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnProjectileHit", &ARunepaper::execOnProjectileHit },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARunepaper);
UClass* Z_Construct_UClass_ARunepaper_NoRegister()
{
	return ARunepaper::StaticClass();
}
struct Z_Construct_UClass_ARunepaper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "InterectBlock/Runepaper.h" },
		{ "ModuleRelativePath", "Public/InterectBlock/Runepaper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RunePaperMesh_MetaData[] = {
		{ "Category", "Runepaper" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InterectBlock/Runepaper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionComponent_MetaData[] = {
		{ "Category", "Runepaper" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InterectBlock/Runepaper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RunepaperVFX_MetaData[] = {
		{ "Category", "Effects" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InterectBlock/Runepaper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileMovementComponent_MetaData[] = {
		{ "Category", "Runepaper" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InterectBlock/Runepaper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LifeSeconds_MetaData[] = {
		{ "Category", "Runepaper" },
		{ "ModuleRelativePath", "Public/InterectBlock/Runepaper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShotDirection_MetaData[] = {
		{ "Category", "Runepaper" },
		{ "ModuleRelativePath", "Public/InterectBlock/Runepaper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletTrail_MetaData[] = {
		{ "Category", "Effects" },
		{ "ModuleRelativePath", "Public/InterectBlock/Runepaper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RunepaperHit_MetaData[] = {
		{ "Category", "Effects" },
		{ "ModuleRelativePath", "Public/InterectBlock/Runepaper.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RunePaperMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RunepaperVFX;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileMovementComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LifeSeconds;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ShotDirection;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BulletTrail;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RunepaperHit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ARunepaper_OnProjectileHit, "OnProjectileHit" }, // 1669365258
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARunepaper>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARunepaper_Statics::NewProp_RunePaperMesh = { "RunePaperMesh", nullptr, (EPropertyFlags)0x00400000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARunepaper, RunePaperMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RunePaperMesh_MetaData), NewProp_RunePaperMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARunepaper_Statics::NewProp_CollisionComponent = { "CollisionComponent", nullptr, (EPropertyFlags)0x00400000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARunepaper, CollisionComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionComponent_MetaData), NewProp_CollisionComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARunepaper_Statics::NewProp_RunepaperVFX = { "RunepaperVFX", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARunepaper, RunepaperVFX), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RunepaperVFX_MetaData), NewProp_RunepaperVFX_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARunepaper_Statics::NewProp_ProjectileMovementComponent = { "ProjectileMovementComponent", nullptr, (EPropertyFlags)0x00400000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARunepaper, ProjectileMovementComponent), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileMovementComponent_MetaData), NewProp_ProjectileMovementComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARunepaper_Statics::NewProp_LifeSeconds = { "LifeSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARunepaper, LifeSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LifeSeconds_MetaData), NewProp_LifeSeconds_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARunepaper_Statics::NewProp_ShotDirection = { "ShotDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARunepaper, ShotDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShotDirection_MetaData), NewProp_ShotDirection_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARunepaper_Statics::NewProp_BulletTrail = { "BulletTrail", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARunepaper, BulletTrail), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletTrail_MetaData), NewProp_BulletTrail_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARunepaper_Statics::NewProp_RunepaperHit = { "RunepaperHit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARunepaper, RunepaperHit), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RunepaperHit_MetaData), NewProp_RunepaperHit_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARunepaper_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARunepaper_Statics::NewProp_RunePaperMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARunepaper_Statics::NewProp_CollisionComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARunepaper_Statics::NewProp_RunepaperVFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARunepaper_Statics::NewProp_ProjectileMovementComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARunepaper_Statics::NewProp_LifeSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARunepaper_Statics::NewProp_ShotDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARunepaper_Statics::NewProp_BulletTrail,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARunepaper_Statics::NewProp_RunepaperHit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARunepaper_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ARunepaper_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Graduation_2024,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARunepaper_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARunepaper_Statics::ClassParams = {
	&ARunepaper::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ARunepaper_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ARunepaper_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARunepaper_Statics::Class_MetaDataParams), Z_Construct_UClass_ARunepaper_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARunepaper()
{
	if (!Z_Registration_Info_UClass_ARunepaper.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARunepaper.OuterSingleton, Z_Construct_UClass_ARunepaper_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARunepaper.OuterSingleton;
}
template<> GRADUATION_2024_API UClass* StaticClass<ARunepaper>()
{
	return ARunepaper::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARunepaper);
ARunepaper::~ARunepaper() {}
// End Class ARunepaper

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEDocument_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_InterectBlock_Runepaper_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARunepaper, ARunepaper::StaticClass, TEXT("ARunepaper"), &Z_Registration_Info_UClass_ARunepaper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARunepaper), 2280510698U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEDocument_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_InterectBlock_Runepaper_h_890877121(TEXT("/Script/Graduation_2024"),
	Z_CompiledInDeferFile_FID_UEDocument_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_InterectBlock_Runepaper_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEDocument_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_InterectBlock_Runepaper_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
