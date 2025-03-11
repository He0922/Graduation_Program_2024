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

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Variables")
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

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input|Action")
	class UInputAction* climbAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input|Action")
	class UInputAction* MouseLeftButtonAction;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input|Action")
	class UInputAction* MouseRightButtonAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input|Action")
	class UInputAction* MouseWheelUpAction;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input|Action")
	class UInputAction* MouseWheelDownAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input|Action")
	class UInputAction* OpenPackageAction;
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

	void ClimbingActionStarted(const FInputActionValue& Value);

	//控制玩家释放技能
	void OnMouseLeftButtonPressed(const FInputActionValue& Value);
	void OnRightMousePressed(const FInputActionValue& Value);
	void OnRightMouseReleased(const FInputActionValue& Value);

	void OnMouseWheelUp(const FInputActionValue& Value);
	void OnMouseWheelDown(const FInputActionValue& Value);

	void OpenPackage();
#pragma endregion

#pragma region Player InputController
public:
	void StartInput();
	void StopInput();
#pragma endregion





};
