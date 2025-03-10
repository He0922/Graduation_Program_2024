// Fill out your copyright notice in the Description page of Project Settings.


#include "Controller/CustomPlayerController.h"
#include "Character/Player/PlayerCharacter.h"
#include "Pawn/FloorRaft.h"
#include "Pawn/MyPawn.h"
#include "../DebugHelper.h"
#include "MovementComponent/PlayerCharacterMovementComponent.h"

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

	CurrentControllerPawn = GetPawn();
	
	Player = Cast<APlayerCharacter>(GetPawn());

	if (Player != NULL)
	{
		playerSkillComponent = Player->playerSkillComponent;
	}
}

void ACustomPlayerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	PlayerStatus = Player->GetPlayerStatus();


	Debug::Print("Current Control: " + CurrentControllerPawn->GetName(), 0.f, false, FColor::Green);
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
		EnhancedInputComponent->BindAction(objectInteraction, ETriggerEvent::Completed, this, &ACustomPlayerController::ObjectInteraction);

		//技能
		EnhancedInputComponent->BindAction(ScanAction, ETriggerEvent::Started, this, &ACustomPlayerController::StartScan);
		EnhancedInputComponent->BindAction(ScanAction, ETriggerEvent::Completed, this, &ACustomPlayerController::EndScan);
		EnhancedInputComponent->BindAction(IterctBlock, ETriggerEvent::Started, this, &ACustomPlayerController::InterctBlock);

		EnhancedInputComponent->BindAction(climbAction, ETriggerEvent::Started, this, &ACustomPlayerController::ClimbingActionStarted);


		Debug::Print("Cast Success EnhancedInputComponent", 5.f, false);
	}
}


#pragma region Player Action Function
void ACustomPlayerController::Move(const FInputActionValue& InputValue)
{
	if (!Player->playerCMC) return;

	if (Player->playerCMC->IsClimbing())
	{
		HandleClimbMovementInput(InputValue);
	}
	else
	{
		HandleGroundMovementInput(InputValue);
	}

	
}


void ACustomPlayerController::HandleGroundMovementInput(const FInputActionValue& InputValue)
{
	// 获取玩家输入方向
	const FVector2D movementVector = InputValue.Get<FVector2D>();

	// 用于八方向移动的float
	//moveFBDirection = movementVector.X;
	//moveLRDirection = movementVector.Y;

	const FRotator rotation = GetControlRotation();
	const FRotator yawRotation(0, rotation.Yaw, 0);

	const FVector forwardDirection = FRotationMatrix(yawRotation).GetUnitAxis(EAxis::X);
	const FVector rightDirection = FRotationMatrix(yawRotation).GetUnitAxis(EAxis::Y);

	/*if (CurrentControllerPawn)
	{
		CurrentControllerPawn->AddMovementInput(forwardDirection, movementVector.X);
		if (PlayerStatus != ECustomPlayerStatus::erowing)
		{
			CurrentControllerPawn->AddMovementInput(rightDirection, movementVector.Y);
		}

	}*/

	if (CurrentControllerPawn)
	{
		if (PlayerStatus != ECustomPlayerStatus::erowing)
		{
			CurrentControllerPawn->AddMovementInput(forwardDirection, movementVector.X);
			CurrentControllerPawn->AddMovementInput(rightDirection, movementVector.Y);
		}
		else
		{
			//船要跟着相机转，把那个移动的挪到船的组件上去了~~
			//然后放在这感觉能少次判断？
			if (AFloorRaft* floorRaft = Cast<AFloorRaft>(CurrentControllerPawn))
			{
				FVector tempVec = floorRaft->GetBoatForward();
				tempVec.Z = 0;

				CurrentControllerPawn->AddMovementInput(tempVec, movementVector.X);
			}
		}
	}
}


void ACustomPlayerController::HandleClimbMovementInput(const FInputActionValue& InputValue)
{
	// 获取玩家输入方向
	const FVector2D movementVector = InputValue.Get<FVector2D>();

	const FVector ForwardDirection = FVector::CrossProduct(
		-Player->playerCMC->GetClimbableSurfaceNormal(),
		Player->GetActorRightVector()
	);

	const FVector RightDirection = FVector::CrossProduct(
		-Player->playerCMC->GetClimbableSurfaceNormal(),
		-Player->GetActorUpVector()
	);

	if (PlayerStatus != ECustomPlayerStatus::erowing)
	{
		CurrentControllerPawn->AddMovementInput(ForwardDirection, movementVector.X);
		CurrentControllerPawn->AddMovementInput(RightDirection, movementVector.Y);
	}
}


void ACustomPlayerController::Jump()
{
	if (CurrentControllerPawn)
	{
		if (APlayerCharacter* PlayerCharacter = Cast<APlayerCharacter>(CurrentControllerPawn))
		{
			PlayerCharacter->Jump();
		}
	}
}


void ACustomPlayerController::JumpStop()
{
	if (CurrentControllerPawn)
	{
		if (APlayerCharacter* PlayerCharacter = Cast<APlayerCharacter>(CurrentControllerPawn))
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

	if (CurrentControllerPawn)
	{
		CurrentControllerPawn->AddControllerYawInput(lookAxisVector.X);
		CurrentControllerPawn->AddControllerPitchInput(-lookAxisVector.Y);
	}
	
}

void ACustomPlayerController::ObjectInteraction()
{
	Player->ObjectInteraction(CurrentControllerPawn);
}


void ACustomPlayerController::ChangeObject(APawn* PawnObject)
{
	if (PawnObject)
	{
		CurrentControllerPawn = PawnObject;
		Possess(CurrentControllerPawn);
	}
}


void ACustomPlayerController::ClimbingActionStarted(const FInputActionValue& Value)
{
	if (!Player->playerCMC) return;
	

	if (!Player->playerCMC->IsClimbing())
	{
		Player->playerCMC->ToggleClimbing(true);
	}
	else
	{
		Player->playerCMC->ToggleClimbing(false);
	}
	
}


void ACustomPlayerController::StartInput()
{
	EnableInput(this);
}


void ACustomPlayerController::StopInput()
{
	// 禁用玩家输入
	DisableInput(this);
}


void ACustomPlayerController::StartScan()
{
	Player->MontageToPlay(Player->ScanToMontage);

	playerSkillComponent->StartScan();
	//5000是默认值， 到时候要设置的话， 传到这里就好
	playerSkillComponent->SetScanDistance(5000);


}


void ACustomPlayerController::EndScan()
{
	playerSkillComponent->EndScan();
}


void ACustomPlayerController::InterctBlock()
{
	playerSkillComponent->CheckBlock();
}
#pragma endregion


