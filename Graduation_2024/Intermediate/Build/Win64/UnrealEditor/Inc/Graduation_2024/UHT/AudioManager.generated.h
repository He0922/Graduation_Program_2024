// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Voice/AudioManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAudioComponent;
class UAudioManager;
class UDataTable;
class UObject;
enum class EAudioCategory : uint8;
#ifdef GRADUATION_2024_AudioManager_generated_h
#error "AudioManager.generated.h already included, missing '#pragma once' in AudioManager.h"
#endif
#define GRADUATION_2024_AudioManager_generated_h

#define FID_Programes_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_Voice_AudioManager_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAudioConfig_Statics; \
	GRADUATION_2024_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> GRADUATION_2024_API UScriptStruct* StaticStruct<struct FAudioConfig>();

#define FID_Programes_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_Voice_AudioManager_h_48_DELEGATE \
GRADUATION_2024_API void FOnSoundEvent_DelegateWrapper(const FMulticastScriptDelegate& OnSoundEvent, FName SoundID);


#define FID_Programes_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_Voice_AudioManager_h_49_DELEGATE \
GRADUATION_2024_API void FAudioFinishedDelegate_DelegateWrapper(const FScriptDelegate& AudioFinishedDelegate, FName SoundID);


#define FID_Programes_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_Voice_AudioManager_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleAudioFinished); \
	DECLARE_FUNCTION(execSetCategoryVolume); \
	DECLARE_FUNCTION(execStopSound); \
	DECLARE_FUNCTION(execPlaySound); \
	DECLARE_FUNCTION(execInitialize); \
	DECLARE_FUNCTION(execGetInstance);


#define FID_Programes_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_Voice_AudioManager_h_54_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioManager(); \
	friend struct Z_Construct_UClass_UAudioManager_Statics; \
public: \
	DECLARE_CLASS(UAudioManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Graduation_2024"), NO_API) \
	DECLARE_SERIALIZER(UAudioManager)


#define FID_Programes_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_Voice_AudioManager_h_54_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAudioManager(UAudioManager&&); \
	UAudioManager(const UAudioManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioManager) \
	NO_API virtual ~UAudioManager();


#define FID_Programes_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_Voice_AudioManager_h_51_PROLOG
#define FID_Programes_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_Voice_AudioManager_h_54_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Programes_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_Voice_AudioManager_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Programes_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_Voice_AudioManager_h_54_INCLASS_NO_PURE_DECLS \
	FID_Programes_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_Voice_AudioManager_h_54_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRADUATION_2024_API UClass* StaticClass<class UAudioManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Programes_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_Voice_AudioManager_h


#define FOREACH_ENUM_EAUDIOCATEGORY(op) \
	op(EAudioCategory::BGM) \
	op(EAudioCategory::SFX) \
	op(EAudioCategory::Ambient) \
	op(EAudioCategory::Voice) 

enum class EAudioCategory : uint8;
template<> struct TIsUEnumClass<EAudioCategory> { enum { Value = true }; };
template<> GRADUATION_2024_API UEnum* StaticEnum<EAudioCategory>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
