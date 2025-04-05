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

    // ��ȡ��Ƶ������ʵ��
    UAudioManager* AudioManager = UAudioManager::GetInstance();

    // �������ݱ��ʲ���·��������Ŀ�е�ʵ��·��һ�£�
    UDataTable* AudioDataTable = LoadObject<UDataTable>(
        nullptr,
        TEXT("/Game/Voice/AudioData/AudioConfig.AudioConfig") // ʾ��·��
    );

    // ��ʼ����Ƶϵͳ
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
