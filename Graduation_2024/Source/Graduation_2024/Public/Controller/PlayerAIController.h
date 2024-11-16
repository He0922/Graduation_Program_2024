// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "PlayerAIController.generated.h"

/**
 * 
 */
UCLASS()
class GRADUATION_2024_API APlayerAIController : public AAIController
{
	GENERATED_BODY()
	
public:
	FDelegateHandle MoveCompletedDelegateHandle;

	void MoveToTargetLocation(FVector TargetLocation);

	void OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result);

	class APlayerCharacter* playerCharacter;
};
