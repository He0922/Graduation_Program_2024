// Fill out your copyright notice in the Description page of Project Settings.


#include "Controller/CustomPlayerController.h"
#include "Character/Player/PlayerCharacter.h"
#include "Pawn/FloorRaft.h"
#include "Pawn/MyPawn.h"
#include "../DebugHelper.h"


#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "Kismet/GameplayStatics.h"



ACustomPlayerController::ACustomPlayerController()
{
	PrimaryActorTick.bCanEverTick = true;
}


void ACustomPlayerController::BeginPlay()
{
	Super::BeginPlay();

	if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
	{
		Subsystem->AddMappingContext(mainMappingContext, 0);
		Debug::Print("Bind Success", 5.f, false);
	}
	else
	{
		Debug::Print("Bind Fail", 5.f, false);
	}

	ControllerPawn = GetPawn();
	
	Player = Cast<APlayerCharacter>(GetPawn());
}

void ACustomPlayerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}


void ACustomPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(InputComponent))
	{
		if (!EnhancedInputComponent)
		{
			Debug::Print("Cast Fail EnhancedInputComponent", 5.f, false);
			return;
		}
		EnhancedInputComponent->BindAction(moveAction, ETriggerEvent::Triggered, this, &ACustomPlayerController::Move);
		EnhancedInputComponent->BindAction(jumpAction, ETriggerEvent::Started, this, &ACustomPlayerController::Jump);
		EnhancedInputComponent->BindAction(jumpAction, ETriggerEvent::Completed, this, &ACustomPlayerController::JumpStop);
		EnhancedInputComponent->BindAction(lookAction, ETriggerEvent::Triggered, this, &ACustomPlayerController::Look);

		Debug::Print("Cast Success EnhancedInputComponent", 5.f, false);
	}
}


#pragma region Player Action Function
void ACustomPlayerController::Move(const FInputActionValue& InputValue)
{
	Debug::Print(GetPawn()->GetName(), 0.f, false);
	Debug::Print("Move Action", 0.f, false);
	// 获取玩家输入方向
	const FVector2D movementVector = InputValue.Get<FVector2D>();

	// 用于八方向移动的float
	//moveFBDirection = movementVector.X;
	//moveLRDirection = movementVector.Y;

	const FRotator rotation = GetControlRotation();
	const FRotator yawRotation(0, rotation.Yaw, 0);

	const FVector forwardDirection = FRotationMatrix(yawRotation).GetUnitAxis(EAxis::X);
	const FVector rightDirection = FRotationMatrix(yawRotation).GetUnitAxis(EAxis::Y);

	if (ControllerPawn)
	{
		ControllerPawn->AddMovementInput(forwardDirection, movementVector.X);
		ControllerPawn->AddMovementInput(rightDirection, movementVector.Y);
	}
	
}


void ACustomPlayerController::Jump()
{
	if (ControllerPawn)
	{
		if (APlayerCharacter* PlayerCharacter = Cast<APlayerCharacter>(ControllerPawn))
		{
			PlayerCharacter->Jump();
		}
	}
}


void ACustomPlayerController::JumpStop()
{
	if (ControllerPawn)
	{
		if (APlayerCharacter* PlayerCharacter = Cast<APlayerCharacter>(ControllerPawn))
		{
			PlayerCharacter->StopJumping();
		}
	}
}


void ACustomPlayerController::Look(const FInputActionValue& InputValue)
{
	// 获取玩家输入方向
	const FVector2D lookAxisVector = InputValue.Get<FVector2D>();

	// 用于旋转视角角色实时改变面朝方向float
	//lookLRDirection = lookAxisVector.X;

	if (ControllerPawn)
	{
		ControllerPawn->AddControllerYawInput(lookAxisVector.X);
		ControllerPawn->AddControllerPitchInput(-lookAxisVector.Y);
	}
	
}


void ACustomPlayerController::ChangeObject(APawn* PawnObject)
{
	if (PawnObject)
	{
		ControllerPawn = PawnObject;
		Possess(ControllerPawn);
	}
}

#pragma endregion
