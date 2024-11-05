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
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = "Mayfly Type")
	EMayflyType mayflytype;

	UPROPERTY()
	class APlayerCharacter* playerCharacter;


#pragma region Follow Player Value
public:
	FVector mayflyVector;

	FVector playerVector;

#pragma endregion


#pragma region Follow Player 
public:
	void Move2Player(FVector selfLocation, FVector TargetLocation);

#pragma endregion
};
