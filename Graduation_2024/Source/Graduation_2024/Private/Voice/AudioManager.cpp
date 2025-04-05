#include "Voice/AudioManager.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundAttenuation.h"
#include "Sound/SoundWave.h"

#pragma region Basic Function
UAudioManager* UAudioManager::GetInstance()
{
    static UAudioManager* Instance = NewObject<UAudioManager>();
    Instance->AddToRoot();
    return Instance;
}

void UAudioManager::Initialize(UDataTable* InAudioDataTable)
{
    AudioDataTable = InAudioDataTable;
    CategoryVolumes.Add(EAudioCategory::BGM, 1.0f);
    CategoryVolumes.Add(EAudioCategory::SFX, 1.0f);
    CategoryVolumes.Add(EAudioCategory::Ambient, 1.0f);
    CategoryVolumes.Add(EAudioCategory::Voice, 1.0f);
}

const FAudioConfig* UAudioManager::GetAudioConfig(FName SoundID) const
{
    if (!AudioDataTable) return nullptr;

    static const FString ContextString(TEXT("AudioManager Context"));
    return AudioDataTable->FindRow<FAudioConfig>(SoundID, ContextString);
}

USoundBase* UAudioManager::ProcessLoopingSound(USoundBase* OriginalSound, bool bShouldLoop)
{
    if (!bShouldLoop) return OriginalSound;

    if (USoundWave* SoundWave = Cast<USoundWave>(OriginalSound))
    {
        USoundWave* NewSoundWave = DuplicateObject<USoundWave>(SoundWave, GetTransientPackage());
        NewSoundWave->bLooping = true;
        return NewSoundWave;
    }
    return OriginalSound;
}

UAudioComponent* UAudioManager::PlaySound(
    UObject* WorldContextObject,
    FName SoundID,
    AActor* AttachActor,
    FVector Location,
    float FadeInTime,
    float Delay) // 移除回调参数
{
    if (Delay > 0.0f)
    {
        // 简化延迟逻辑（移回调处理）
        FTimerDelegate TimerDel;
        FTimerHandle TimerHandle;

        UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull);

        TimerDel.BindLambda([=, this]()
            {
                PlaySound(
                    WorldContextObject,
                    SoundID,
                    AttachActor,
                    Location,
                    FadeInTime,
                    0.0f // 清除延迟标记
                );
            });

        World->GetTimerManager().SetTimer(TimerHandle, TimerDel, Delay, false);
        return nullptr;
    }


    if (!WorldContextObject) return nullptr;

    const FAudioConfig* Config = GetAudioConfig(SoundID);
    if (!Config || Config->SoundAsset.IsNull())
    {
        UE_LOG(LogTemp, Error, TEXT("SoundID %s not found!"), *SoundID.ToString());
        return nullptr;
    }

    UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull);
    if (!World) return nullptr;

    USoundBase* OriginalSound = Config->SoundAsset.LoadSynchronous();
    if (!OriginalSound)
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to load sound: %s"), *SoundID.ToString());
        return nullptr;
    }

    USoundBase* ProcessedSound = ProcessLoopingSound(OriginalSound, Config->bLooping);

    UAudioComponent* AudioComponent = NewObject<UAudioComponent>(AttachActor ? AttachActor : World->GetWorldSettings());
    AudioComponent->SetSound(ProcessedSound);
    AudioComponent->bAutoDestroy = false;
    AudioComponent->bAllowSpatialization = (Config->Category != EAudioCategory::BGM);
    AudioComponent->AttenuationSettings = Config->AttenuationSettings.Get();

    const float VolumeMultiplier = Config->DefaultVolume * CategoryVolumes[Config->Category];
    AudioComponent->SetVolumeMultiplier(VolumeMultiplier);

    if (AttachActor && AttachActor->GetRootComponent())
    {
        AudioComponent->AttachToComponent(
            AttachActor->GetRootComponent(),
            FAttachmentTransformRules::SnapToTargetNotIncludingScale
        );
    }
    else
    {
        AudioComponent->SetWorldLocation(Location);
    }

    AudioComponent->RegisterComponent();
    AudioComponent->OnAudioFinished.AddDynamic(this, &UAudioManager::HandleAudioFinished);
    ActiveComponentsMap.Add(AudioComponent, SoundID);

    if (FadeInTime > 0.0f)
    {
        AudioComponent->FadeIn(FadeInTime, VolumeMultiplier);
    }
    else
    {
        AudioComponent->Play();
    }

    OnSoundStarted.Broadcast(SoundID);

    return AudioComponent;
}

void UAudioManager::HandleAudioFinished()
{
    // 简化完成处理（移回调执行）
    TArray<UAudioComponent*> CompletedComponents;

    for (auto& Pair : ActiveComponentsMap)
    {
        UAudioComponent* Comp = Pair.Key;
        if (IsValid(Comp) && !Comp->IsPlaying())
        {
            CompletedComponents.Add(Comp);
        }
    }

    for (UAudioComponent* Comp : CompletedComponents)
    {
        const FName SoundID = ActiveComponentsMap[Comp];
        OnSoundFinished.Broadcast(SoundID);
        ActiveComponentsMap.Remove(Comp);
        Comp->DestroyComponent();
    }
}

void UAudioManager::StopSound(FName SoundID)
{
    TArray<UAudioComponent*> ComponentsToRemove;

    for (auto& Pair : ActiveComponentsMap)
    {
        if (Pair.Value == SoundID)
        {
            ComponentsToRemove.Add(Pair.Key);
        }
    }

    for (UAudioComponent* Component : ComponentsToRemove)
    {
        Component->Stop();
        ActiveComponentsMap.Remove(Component);
        Component->DestroyComponent();
    }
}

void UAudioManager::SetCategoryVolume(EAudioCategory Category, float NewVolume)
{
    const float ClampedVolume = FMath::Clamp(NewVolume, 0.0f, 1.0f);
    CategoryVolumes.Add(Category, ClampedVolume);

    for (auto& Pair : ActiveComponentsMap)
    {
        if (const FAudioConfig* Config = GetAudioConfig(Pair.Value))
        {
            if (Config->Category == Category)
            {
                Pair.Key->SetVolumeMultiplier(Config->DefaultVolume * ClampedVolume);
            }
        }
    }
}
#pragma endregion

#pragma region SingleFunction
void UAudioManager::PlayScanStartSound(AActor* actor)
{
    PlaySound(actor->GetWorld(), "Scan", actor, FVector::Zero(), 0.0f, 0.0f);
}

void UAudioManager::PlayScaningSound(AActor* actor)
{
}

void UAudioManager::PlayScanEndSound(AActor* actor)
{
}
void UAudioManager::PlayInitLineSound(AActor* actor)
{
}
void UAudioManager::PlayClearLineSound(AActor* actor)
{
}
void UAudioManager::PlayInitMeshSound(AActor* actor)
{
}
void UAudioManager::PlayClearMeshSound(AActor* actor)
{
}
void UAudioManager::PlayRaftSound(AActor* actor)
{
    PlaySound(actor->GetWorld(), "Raft", actor, FVector::Zero(), 0.0f, 0.0f);
}
void UAudioManager::StopRaftSound(AActor* actor)
{
    StopSound("Raft");
}
#pragma endregion