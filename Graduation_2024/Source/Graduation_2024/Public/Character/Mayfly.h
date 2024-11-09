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

	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = "Mayfly Type")
	EMayflyType mayflytype;

	UPROPERTY()
	class APlayerCharacter* playerCharacter;

#pragma region Movement settings 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement", meta = (AllowPrivateAccess = "true"))
	float speed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Distance", meta = (AllowPrivateAccess = "true"))
	float followDistance;
#pragma endregion Movement settings



	void FollowPlayer();


#pragma region unused
	/*
#pragma region State settings
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "State")
	bool isMovingToTarget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement") 
	FVector targetLocation;
#pragma endregion State settings
#pragma region Distance settings 
	
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Distance", meta = (AllowPrivateAccess = "true"))
	float reengageDistance;

#pragma endregion Distance settings

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Movement", meta = (AllowPrivateAccess = "true"))
	float desiredHeight; 

	UPROPERTY()
	bool isFollowing;

	void MaintainHeight(); 
	bool IsBeyondReengageDistance() const; 
	bool DetectObstacleInSector(FVector& OutAvoidanceDirection);
	void MoveToTarget(float deltaTime);
	*/
#pragma endregion unused
};
