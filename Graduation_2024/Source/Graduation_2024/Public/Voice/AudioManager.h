#pragma once

#include "CoreMinimal.h"
#include "Sound/SoundBase.h"
#include "Components/AudioComponent.h"
#include "Engine/DataTable.h"
#include "AudioManager.generated.h"

UENUM(BlueprintType)
enum class EAudioCategory : uint8
{
    BGM,
    SFX,
    Ambient,
    Voice
};

USTRUCT(BlueprintType)
struct FAudioConfig : public FTableRowBase
{
    GENERATED_BODY()

    // 音效唯一标识
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Audio")
    FName SoundID;

    // 音效分类
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Audio")
    EAudioCategory Category = EAudioCategory::SFX;

    // 音效资源引用
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Audio")
    TSoftObjectPtr<USoundBase> SoundAsset;

    // 是否循环
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Audio")
    bool bLooping = false;

    // 默认音量
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Audio", meta = (ClampMin = "0.0", ClampMax = "1.0"))
    float DefaultVolume = 1.0f;

    // 空间化衰减设置
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Audio")
    TSoftObjectPtr<USoundAttenuation> AttenuationSettings;
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSoundEvent, FName, SoundID);
DECLARE_DYNAMIC_DELEGATE_OneParam(FAudioFinishedDelegate, FName, SoundID);

UCLASS()
class GRADUATION_2024_API UAudioManager : public UObject
{
	GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, Category = "AudioManager")
    static UAudioManager* GetInstance();

    UFUNCTION(BlueprintCallable, Category = "AudioManager")
    void Initialize(UDataTable* InAudioDataTable);

    UFUNCTION(BlueprintCallable, Category = "AudioManager", meta = (WorldContext = "WorldContextObject"))
    UAudioComponent* PlaySound(
        UObject* WorldContextObject,
        FName SoundID,
        AActor* AttachActor = nullptr,
        FVector Location = FVector::ZeroVector,
        float FadeInTime = 0.0f,
        float Delay = 0.0f // 仅保留延迟参数
    );

    UFUNCTION(BlueprintCallable, Category = "AudioManager")
    void StopSound(FName SoundID);

    UFUNCTION(BlueprintCallable, Category = "AudioManager")
    void SetCategoryVolume(EAudioCategory Category, float NewVolume);

    UPROPERTY(BlueprintAssignable, Category = "AudioManager")
    FOnSoundEvent OnSoundStarted;

    UPROPERTY(BlueprintAssignable, Category = "AudioManager")
    FOnSoundEvent OnSoundFinished;

private:
    UPROPERTY()
    UDataTable* AudioDataTable;

    UPROPERTY()
    TMap<UAudioComponent*, FName> ActiveComponentsMap;

    TMap<EAudioCategory, float> CategoryVolumes;

    const FAudioConfig* GetAudioConfig(FName SoundID) const;

    UFUNCTION()
    void HandleAudioFinished();

    USoundBase* ProcessLoopingSound(USoundBase* OriginalSound, bool bShouldLoop);

#pragma region SingleFunction
public:
    void PlayScanStartSound(AActor* actor);
    void PlayScaningSound(AActor* actor);
    void PlayScanEndSound(AActor* actor);

    void PlayInitLineSound(AActor* actor);
    void PlayClearLineSound(AActor* actor);

    void PlayInitMeshSound(AActor* actor);
    void PlayClearMeshSound(AActor* actor);

    void PlayRaftSound(AActor* actor);
    void StopRaftSound(AActor* actor);
#pragma endregion
};