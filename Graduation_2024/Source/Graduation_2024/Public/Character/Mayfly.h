// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"

#include "Mayfly.generated.h"


UENUM(BlueprintType)
enum class EMayflyType :uint8
{
	eaddHPMAX,
	eaddEnergyMAX
};


UCLASS()
class GRADUATION_2024_API AMayfly : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMayfly();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float deltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = "Mayfly Type")
	EMayflyType mayflytype;

	UPROPERTY()
	class APlayerCharacter* playerCharacter;

#pragma region path tracing
	UPROPERTY() 
	TArray<FVector> playerPath; 

	UPROPERTY() 
	int32 pathIndex; 

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Path Recording") 
	float pathRecordInterval; 

	UPROPERTY() 
	float pathRecordTimer;
#pragma endregion path tracing

#pragma region Movement settings 
	UPROPERTY()
	bool isFollowing;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement", meta = (AllowPrivateAccess = "true"))
	float speed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Movement", meta = (AllowPrivateAccess = "true"))
	float desiredHeight; 

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Movement")
	FVector followOffset; // 跟随偏移量
#pragma endregion Movement settings

#pragma region Distance settings 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Distance", meta = (AllowPrivateAccess = "true"))
	float followDistance; 
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Distance", meta = (AllowPrivateAccess = "true"))
	float reengageDistance;

	//设置误差范围
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Distance", meta = (AllowPrivateAccess = "true"))
	float acceptableRadius;

#pragma endregion Distance settings

#pragma region Target settings
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Target")
	FVector targetLocationMember;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Target")
	bool isMovingToTarget;
#pragma endregion Target settings

	void RecordPlayerPath(float deltaTime); 
	void FollowRecordedPath(float deltaTime); 
	void MaintainHeight(); 
	bool IsWithinFollowDistance() const; 
	bool IsBeyondReengageDistance() const; 
	FVector GetTargetLocationWithOffset(const FVector& targetLocation) const; 
	float CalculateSpeedBasedOnDistance(float distance) const;
	void SetTargetLocation(const FVector& newTargetLocation);
	void MoveToTargetLocation(float deltaTime);
};
