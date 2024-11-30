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
	// ���ڶ����ײ�����
	TArray<FHitResult>DoCapsuleTraceMultiByObject(const FVector& Start, const FVector& End, bool bShowDebugShape = false, bool bDrawpersisteanShape = false);

	// �Ƿ�������׷��
	bool bCpasuleTraceComplexTracking = false;


	// ���ڼ�ⵥ����ײ���
	FHitResult DoLineTraceSingleByObject(const FVector& Strat, const FVector& End, bool bShowDebugShape = false, bool bDrawpersisteanShape = false);

	// �Ƿ�������׷��
	bool bLineTraceComplexTracking = false;
#pragma endregion


#pragma region ClimbCore
public:
	bool CapsuleTraceClimbableSurface();

	FHitResult TraceFormEyeHeight(float TraceDistance, float TraceStartOffset);

	bool IsClimbing() const;
#pragma endregion


#pragma region ClimbCoreVariable
	// ������׷�ټ����
	TArray<FHitResult> CapsuleTraceClimbableSurfaceTracedResults;
#pragma endregion


#pragma region ClimbBPVariables
public:
	// �洢�������⵽��������������
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character Movement: Climbing")
	TArray<TEnumAsByte<EObjectTypeQuery>> CapsuleTraceClimbableSurfaceTraceTypes;

	// �洢���߼�⵽��������������
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character Movement: Climbing")
	TArray<TEnumAsByte<EObjectTypeQuery>> LineTraceClibableSurfaceTraceTypes;

	// ������뾶
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Character Movement: Climbing")
	float ClimbCapsuleTraceRadius = 50.f;

	// ��������
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Character Movement: Climbing")
	float ClibCapsuleTraceHalfHeight = 72.f;
#pragma endregion

public:

};
