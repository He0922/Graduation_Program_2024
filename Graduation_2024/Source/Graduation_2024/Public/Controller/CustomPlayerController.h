// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "InputMappingContext.h"
#include "InputActionValue.h"


#include "Character/Player/CustomPlayerStatus.h"


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

	ECustomPlayerStatus PlayerStatus;

	class UPlayerSkillComponent* playerSkillComponent;
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

	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = "Input|Action")
	class UInputAction* ScanAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input|Action")
	class UInputAction* IterctBlock;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input|Action")
	class UInputAction* climbAction;
#pragma endregion


#pragma region Player Action Function
public:
	void Move(const FInputActionValue& InputValue);

	void HandleGroundMovementInput(const FInputActionValue& InputValue);

	void HandleClimbMovementInput(const FInputActionValue& InputValue);

	void Jump();

	void JumpStop();

	void Look(const FInputActionValue& InputValue);

	void ObjectInteraction();

	// 切换玩家控制对象
	void ChangeObject(APawn* PawnObject);

	//实现玩家技能接口的定义
	void StartScan();
	void EndScan();

	void InterctBlock();

	void ClimbingActionStarted(const FInputActionValue& Value);
#pragma endregion

#pragma region Player InputController
public:
	void StartInput();
	void StopInput();
#pragma endregion
};
