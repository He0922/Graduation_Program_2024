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
    // 创建移动请求
    FAIMoveRequest MoveRequest;
    MoveRequest.SetGoalLocation(TargetLocation);
    MoveRequest.SetAcceptanceRadius(10.f);

    FNavPathSharedPtr NavPth;

    // 发起移动请求
    FPathFollowingRequestResult Result = MoveTo(MoveRequest, &NavPth);
    if (Result.Code == EPathFollowingRequestResult::RequestSuccessful)
    {
        // 绑定移动完成的委托
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
        UE_LOG(LogTemp, Warning, TEXT("AI Move fail！"));
        // 在这里添加移动失败后的逻辑
    }

    // 移除委托
    GetPathFollowingComponent()->OnRequestFinished.RemoveAll(this);
}


