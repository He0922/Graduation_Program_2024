// Fill out your copyright notice in the Description page of Project Settings.


#include "GameModeBase/CustomGameModeBase.h"
#include "Controller/CustomPlayerController.h"
#include "Character/Player/PlayerCharacter.h"
#include "Voice/AudioManager.h"
#include "Kismet/GameplayStatics.h"


ACustomGameModeBase::ACustomGameModeBase()
{
   
}

void ACustomGameModeBase::StartPlay()
{
    Super::StartPlay();

    // 获取音频管理器实例
    UAudioManager* AudioManager = UAudioManager::GetInstance();

    // 加载数据表资产（路径需与项目中的实际路径一致）
    UDataTable* AudioDataTable = LoadObject<UDataTable>(
        nullptr,
        TEXT("/Game/Voice/AudioData/AudioConfig.AudioConfig") // 示例路径
    );

    // 初始化音频系统
    if (AudioDataTable)
    {
        AudioManager->Initialize(AudioDataTable);
        UE_LOG(LogTemp, Warning, TEXT("Audio Manager Initialized!"));
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("Failed to load audio data table!"));
    }
}
