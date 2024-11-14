// Fill out your copyright notice in the Description page of Project Settings.


#include "Controller/PlayerAIController.h"
#include "NavigationSystem.h"
#include "NavigationPath.h"
#include "Navigation/PathFollowingComponent.h"
#include "AI/NavigationSystemBase.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"

#include "Character/PlayerCharacter.h"


#include "Controller/PlayerAIController.h"
#include "NavigationSystem.h"
#include "NavigationPath.h"
#include "Navigation/PathFollowingComponent.h"
#include "AI/NavigationSystemBase.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"

void APlayerAIController::MoveToTargetLocation(FVector TargetLocation)
{
    // �����ƶ�����
    FAIMoveRequest MoveRequest;
    MoveRequest.SetGoalLocation(TargetLocation);
    MoveRequest.SetAcceptanceRadius(10.f);

    FNavPathSharedPtr NavPth;

    // �����ƶ�����
    FPathFollowingRequestResult Result = MoveTo(MoveRequest, &NavPth);
    if (Result.Code == EPathFollowingRequestResult::RequestSuccessful)
    {
        // ���ƶ���ɵ�ί��
        GetPathFollowingComponent()->OnRequestFinished.AddUObject(this, &APlayerAIController::OnMoveCompleted);
    }
}

void APlayerAIController::OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result)
{    
    if (Result.Code == EPathFollowingResult::Success)
    {
        UE_LOG(LogTemp, Warning, TEXT("AI Move To Target Success!"));

       
    }
    else if (Result.Code == EPathFollowingResult::Aborted || Result.Code == EPathFollowingResult::Blocked)
    {
        UE_LOG(LogTemp, Warning, TEXT("AI Move fail��"));
        // ����������ƶ�ʧ�ܺ���߼�
    }

    // �Ƴ�ί��
    GetPathFollowingComponent()->OnRequestFinished.RemoveAll(this);
}


