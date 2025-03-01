// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "PlayerCharacterMovementComponent.generated.h"



UENUM(BlueprintType)
namespace ECustomMovementMode
{
	enum Type
	{
		MOVE_Climb UMETA(DisplayName = "Climb Mode")
	};
}


/**
 * 
 */
UCLASS()
class GRADUATION_2024_API UPlayerCharacterMovementComponent : public UCharacterMovementComponent
{
	GENERATED_BODY()


protected:
	virtual void BeginPlay() override;


#pragma region OverridenFunction
protected:
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	virtual void OnMovementModeChanged(EMovementMode PreviousMovementMode, uint8 PreviousCustomMode) override;

	virtual void PhysCustom(float deltaTime, int32 Iterations) override;

	virtual float GetMaxSpeed() const override;

	virtual float GetMaxAcceleration() const override;
#pragma endregion



public:
	class APlayerCharacter* Player;


#pragma region ClimbTrace
public:
	// 用于多个碰撞检测结果
	TArray<FHitResult>DoCapsuleTraceMultiByObject(const FVector& Start, const FVector& End, bool bShowDebugShape = false, bool bDrawpersisteanShape = false);

	// 是否开启复杂追踪
	bool bCpasuleTraceComplexTracking = false;


	// 用于检测单个碰撞结果
	FHitResult DoLineTraceSingleByObject(const FVector& Strat, const FVector& End, bool bShowDebugShape = false, bool bDrawpersisteanShape = false);

	// 是否开启复杂追踪
	bool bLineTraceComplexTracking = false;
#pragma endregion


#pragma region ClimbCore
public:
	bool ClimbableCapsuleTraceSurface();

	FHitResult TraceFormEyeHeight(float TraceDistance, float TraceStartOffset = 0.f);

	bool CanStartClimbing();

	void StartClimbing();

	void StopClimbing();

	void PhysClimb(float deltaTime, int32 Iterations);

	void ProcessClimbaleSurfaceInfo();

	bool CheckShouldStopClimbing();

	FQuat GetClimbRotation(float DeltaTime);

	void SnapMovementToClimbableSurfaces(float DeltaTime);

	void PlayClimbMontage(UAnimMontage* MontageToPlay);

	UFUNCTION()
	void OnClimbMontageEnded(UAnimMontage* Montage, bool bInterrupted);
#pragma endregion


#pragma region ClimbCoreVariable
	// 胶囊体追踪检测结果
	TArray<FHitResult> ClimbableCapsuleTraceSurfaceTracedResults;

	FVector CurrentClimbableSurfaceLocation;

	FVector CurrentClimbableSurfaceNormal;

	UPROPERTY()
	class UAnimInstance* OwningPlayerAnimInstance;
#pragma endregion


#pragma region ClimbBPVariables
public:
	// 存储胶囊体检测到可攀爬表面类型
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character Movement: Climbing")
	TArray<TEnumAsByte<EObjectTypeQuery>> CapsuleTraceClimbableSurfaceTraceTypes;

	// 存储射线检测到可攀爬变面类型
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character Movement: Climbing")
	TArray<TEnumAsByte<EObjectTypeQuery>> LineTraceClibableSurfaceTraceTypes;

	// 胶囊体半径
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Character Movement: Climbing")
	float ClimbCapsuleTraceRadius = 50.f;

	// 胶囊体半高
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Character Movement: Climbing")
	float ClibCapsuleTraceHalfHeight = 72.f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Character Movement: Climbing")
	float MaxBreakClimbDeceleration = 400.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character Movement: Climbing")
	float MaxClimbSpeed = 100.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character Movement: Climbing")
	float MaxClimbAcceleration = 300.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character Movement: Climbing|Montage")
	class UAnimMontage* IdleToClimbMontage;
#pragma endregion

public:
	void ToggleClimbing(bool bEnableClimb);
	bool IsClimbing() const;

	FORCEINLINE FVector GetClimbableSurfaceNormal() const { return CurrentClimbableSurfaceNormal; }
};
