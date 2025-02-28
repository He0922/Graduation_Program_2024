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
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;


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

#pragma endregion


#pragma region ClimbCoreVariable
	// 胶囊体追踪检测结果
	TArray<FHitResult> ClimbableCapsuleTraceSurfaceTracedResults;

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
#pragma endregion

public:
	void ToggleClimbing(bool bEnableClimb);
	bool IsClimbing() const;

};
