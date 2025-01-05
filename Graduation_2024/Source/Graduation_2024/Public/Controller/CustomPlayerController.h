// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "InputMappingContext.h"
#include "InputActionValue.h"


#include "CustomPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class GRADUATION_2024_API ACustomPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	ACustomPlayerController();

	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

protected:
	virtual void SetupInputComponent() override;

#pragma region PawnObejct
public:
	APawn* CurrentControllerPawn;

	class APlayerCharacter* Player;

#pragma endregion


#pragma region Player Action Variable
	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category = "Input|MappingContext")
	class UInputMappingContext* mainMappingContext;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input|Action")
	class UInputAction* moveAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input|Action")
	class UInputAction* lookAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input|Action")
	class UInputAction* jumpAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input|Action")
	class UInputAction* objectInteraction;
#pragma endregion


#pragma region Player Action Function
public:
	void Move(const FInputActionValue& InputValue);

	void Jump();

	void JumpStop();

	void Look(const FInputActionValue& InputValue);

	void ObjectInteraction();

	// 切换玩家控制对象
	void ChangeObject(APawn* PawnObject);
#pragma endregion

#pragma region Player InputController
public:
	void StartInput();
	void StopInput();
#pragma endregion
};
