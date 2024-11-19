// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "PlayerCharacterMovementComponent.generated.h"

/**
 * 
 */
UCLASS()
class GRADUATION_2024_API UPlayerCharacterMovementComponent : public UCharacterMovementComponent
{
	GENERATED_BODY()
	
protected:
	virtual void BeginPlay() override;
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;


#pragma region ClimbTrace
public:
	// 用于多个碰撞检测结果
	TArray<FHitResult>DoCapsuleTraceMultiByObject(const FVector& Start, const FVector& End, bool bShowDebugShape = false, bool bDrawpersisteanShape = false);

	// 用于检测单个碰撞结果
	FHitResult DoLineTraceSingleByObject(const FVector& Strat, const FVector& End, bool bShowDebugShape = false, bool bDrawpersisteanShape = false);
};
#pragma endregion