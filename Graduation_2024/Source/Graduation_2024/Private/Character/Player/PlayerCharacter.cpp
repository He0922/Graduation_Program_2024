// Fill out your copyright notice in the Description page of Project Settings.


// Actor .h
#include "Character/Player/PlayerCharacter.h"
#include "Pawn/FloorRaft.h"

#include "../DebugHelper.h"
#include "Character/Player/PlayerAttributes.h"
#include "UI/Attributes/PlayerAttributesUW.h"
#include "Archival/Archival.h"
#include "Controller/PlayerAIController.h"
#include "Controller/CustomPlayerController.h"


// Component .h
#include "MovementComponent/PlayerCharacterMovementComponent.h"

// Unreal .h 
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"



// Sets default values
// 继承自定义的角色移动组件
APlayerCharacter::APlayerCharacter(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer.SetDefaultSubobjectClass<UPlayerCharacterMovementComponent>(ACharacter::CharacterMovementComponentName))
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;
	bUseControllerRotationYaw = false;

	// 创建自定义的CharacterMovementComponent
	playerCMC = Cast<UPlayerCharacterMovementComponent>(GetCharacterMovement());
	GetCharacterMovement()->RotationRate = FRotator(0.f, 500.f, 0.f);
	GetCharacterMovement()->MaxWalkSpeed = fplayerAttributes.GetPlayerAttributes(EPlayerAttributes::emoveSpeed);
	GetCharacterMovement()->bUseControllerDesiredRotation = true;
	GetCharacterMovement()->bOrientRotationToMovement = false;

	// 创建SpringArm
	cameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	cameraBoom->SetupAttachment(RootComponent);
	cameraBoom->TargetArmLength = 500.f;
	cameraBoom->bUsePawnControlRotation = true;

	// 创建Camera
	camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	camera->SetupAttachment(cameraBoom, USpringArmComponent::SocketName);
	camera->bUsePawnControlRotation = false;


	//创建玩家技能组件
	playerSkillComponent = CreateDefaultSubobject<UPlayerSkillComponent>(TEXT("SkillComponent"));

	// 创建 Timeline 组件
	CameraTransitionTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("CameraTransitionTimeline"));

	// 初始化玩家状态
	eplayerStatus = ECustomPlayerStatus::eidle;
}


// Called when the game starts or when spawned
void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();

	// EnhancedInput类型转换以及MappingContext的绑定
	CustomPlayerController = Cast<ACustomPlayerController>(Controller);
	if (CustomPlayerController)
	{
		if (UEnhancedInputLocalPlayerSubsystem* subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(CustomPlayerController->GetLocalPlayer()))
		{
			subsystem->AddMappingContext(mainMappingContext, 0);
		}
	}

	//初始化时间轴方法(关于第三人称转为越肩视角
	InitTimeLineCurveFunc();

	InitArttributesUW();

}


// Called every frame
void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	PrintAttributes(fplayerAttributes.Mapattributes);
	
}


// Called to bind functionality to input
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// 玩家输入按键绑定
	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent))
	{
		// 移动
		//EnhancedInputComponent->BindAction(moveAction, ETriggerEvent::Triggered, this, &APlayerCharacter::Move);
		//EnhancedInputComponent->BindAction(jumpAction, ETriggerEvent::Started, this, &ACharacter::Jump);
		//EnhancedInputComponent->BindAction(jumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);

		//镜头旋转
		//EnhancedInputComponent->BindAction(lookAction, ETriggerEvent::Triggered, this, &APlayerCharacter::Look);

		//技能
		EnhancedInputComponent->BindAction(ScanAction, ETriggerEvent::Started, this, &APlayerCharacter::StartScan);
		EnhancedInputComponent->BindAction(ScanAction, ETriggerEvent::Completed, this, &APlayerCharacter::EndScan);
		EnhancedInputComponent->BindAction(IterctBlock, ETriggerEvent::Started, this, &APlayerCharacter::InterctBlock);

		//交互
		//EnhancedInputComponent->BindAction(objectInteraction, ETriggerEvent::Completed, this, &APlayerCharacter::ObjectInteraction);
	}
}

#pragma region Player Status 
void APlayerCharacter::UpdatePlayerStatus(ECustomPlayerStatus newPlayerStatus)
{
	eplayerStatus = newPlayerStatus;
}


#pragma endregion


void APlayerCharacter::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	CollisionActor = OtherActor;

	// 检查碰撞体是否是存储点(进行存储点接口方法实现检查)
	if (IArchivalInterface* Interactable = Cast<IArchivalInterface>(OtherActor))
	{ 
		archivalInteractable = Interactable;
		archivalPlayerStandLocation = Interactable->GetPlayerStandLocation();
		collisionArchiveID = archivalInteractable->GetArchiveID();
	}
}


void APlayerCharacter::NotifyActorEndOverlap(AActor* OtherActor)
{
	Super::NotifyActorEndOverlap(OtherActor);

	CollisionActor = nullptr;

	if (IArchivalInterface* Interactable = Cast<IArchivalInterface>(OtherActor))
	{
		if (archivalInteractable == Interactable) { archivalInteractable = nullptr; }
	}
};


// 人物属性接口的方法实现通过PlaterAttributes.h文件中定义的数据结构来获取与设置对应变量
#pragma region Player Attributes Interface
float APlayerCharacter::GetHealth_MAX() const { return fplayerAttributes.GetPlayerAttributes(EPlayerAttributes::ehealthMax);; }
void APlayerCharacter::SetHealth_MAX(float MaxHealth)
{
	fplayerAttributes.SetPlayerAttributes(EPlayerAttributes::ehealthMax, (fplayerAttributes.GetPlayerAttributes(EPlayerAttributes::ehealthMax) + MaxHealth));
	playerHealthMax = fplayerAttributes.GetPlayerAttributes(EPlayerAttributes::ehealthMax);

	Debug::PrintFloat("Player Health Max: ", playerHealthMax, 5.f, false, FColor::Black);
}


float APlayerCharacter::GetEnergy_MAX() const { return fplayerAttributes.GetPlayerAttributes(EPlayerAttributes::eenergyMax); }
void APlayerCharacter::SetEnergy_MAX(float MaxEnergy)
{
	fplayerAttributes.SetPlayerAttributes(EPlayerAttributes::eenergyMax, (fplayerAttributes.GetPlayerAttributes(EPlayerAttributes::eenergyMax) + MaxEnergy));
	playerEnergyMax = fplayerAttributes.GetPlayerAttributes(EPlayerAttributes::eenergyMax);

	Debug::PrintFloat("Player Energy Max: ", playerEnergyMax, 5.f, false, FColor::Red);
}


float APlayerCharacter::GetHealth() const { return fplayerAttributes.GetPlayerAttributes(EPlayerAttributes::ehealth); }
void APlayerCharacter::SetHealth(float AddHP)
{
	fplayerAttributes.SetPlayerAttributes(EPlayerAttributes::ehealth, (fplayerAttributes.GetPlayerAttributes(EPlayerAttributes::ehealth) + AddHP));
	playerHealth = fplayerAttributes.GetPlayerAttributes(EPlayerAttributes::ehealth);
}


float APlayerCharacter::GetEnergy() const { return fplayerAttributes.GetPlayerAttributes(EPlayerAttributes::eenergy); }
void APlayerCharacter::SetEnergy(float AddEnergy)
{
	fplayerAttributes.SetPlayerAttributes(EPlayerAttributes::eenergy, (fplayerAttributes.GetPlayerAttributes(EPlayerAttributes::eenergy) + AddEnergy));
	playerEnergy = fplayerAttributes.GetPlayerAttributes(EPlayerAttributes::eenergy);
}


float APlayerCharacter::GetDamage() const { return fplayerAttributes.GetPlayerAttributes(EPlayerAttributes::edamage); }
void APlayerCharacter::SetDamage(float AddDamage)
{
	fplayerAttributes.SetPlayerAttributes(EPlayerAttributes::edamage, (fplayerAttributes.GetPlayerAttributes(EPlayerAttributes::edamage) + AddDamage));
	playerDamage = fplayerAttributes.GetPlayerAttributes(EPlayerAttributes::edamage);
}


float APlayerCharacter::GetMoveSpeed() const { return fplayerAttributes.GetPlayerAttributes(EPlayerAttributes::emoveSpeed); }
void APlayerCharacter::SetMoveSpeed(float AddMoveSpeed)
{
	fplayerAttributes.SetPlayerAttributes(EPlayerAttributes::emoveSpeed, (fplayerAttributes.GetPlayerAttributes(EPlayerAttributes::emoveSpeed) + AddMoveSpeed));
	playerMoveSpeed = fplayerAttributes.GetPlayerAttributes(EPlayerAttributes::emoveSpeed);
}
#pragma endregion


#pragma region Player Behavior Control Function
//void APlayerCharacter::Move(const FInputActionValue& Value)
//{
//
//	// 获取玩家输入方向
//	const FVector2D movementVector = Value.Get<FVector2D>();
//
//	// 用于八方向移动的float
//	moveFBDirection = movementVector.X;
//	moveLRDirection = movementVector.Y;
//
//	const FRotator rotation = Controller->GetControlRotation();
//	const FRotator yawRotation(0, rotation.Yaw, 0);
//
//	const FVector forwardDirection = FRotationMatrix(yawRotation).GetUnitAxis(EAxis::X);
//	const FVector rightDirection = FRotationMatrix(yawRotation).GetUnitAxis(EAxis::Y);
//
//	AddMovementInput(forwardDirection, movementVector.X);
//	AddMovementInput(rightDirection, movementVector.Y);
//
//}


void APlayerCharacter::MoveToTarget(FVector TargetLocation)
{
	FVector playerLocation = GetActorLocation();
	
	FVector Direction = TargetLocation - playerLocation;
	Direction.Z = 0;

	AddMovementInput(Direction,1.f);
}


//void APlayerCharacter::Look(const FInputActionValue& Value)
//{
//	// 获取玩家输入方向
//	const FVector2D lookAxisVector = Value.Get<FVector2D>();
//
//	// 用于旋转视角角色实时改变面朝方向float
//	lookLRDirection = lookAxisVector.X;
//
//	AddControllerYawInput(lookAxisVector.X);
//	AddControllerPitchInput(-lookAxisVector.Y);
//}


void APlayerCharacter::ObjectInteraction()
{
	if (archivalInteractable)
	{ 
		// 刷新玩家状态
		archivalInteractable->RefreshPlayerStatus();
		// 获取存储点ID
		collisionArchiveID = archivalInteractable->GetArchiveID();
		// 获取存储点位置
		archivalLocation = archivalInteractable->GetPlayerStandLocation();
		// 检查并存入存储点ID
		if (!unlockedArchivalPointsIDArray.Contains(collisionArchiveID)) { unlockedArchivalPointsIDArray.Add(collisionArchiveID); }
		// 检查并存入存储点位置
		if (!unlockedArchivalPointsLocationArray.Contains(archivalLocation)) { unlockedArchivalPointsLocationArray.Add(archivalLocation); }
		
		InitArchivalUW();
		UAIBlueprintHelperLibrary::SimpleMoveToLocation(CustomPlayerController, archivalPlayerStandLocation);
	}

	if (AFloorRaft* floorRaftObject = Cast<AFloorRaft>(CollisionActor))
	{
		if (eplayerStatus == ECustomPlayerStatus::erowing)
		{
			DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
			CustomPlayerController->ChangeObject(this);
			UpdatePlayerStatus(ECustomPlayerStatus::eidle);
		}
		else 
		{
			UpdatePlayerStatus(ECustomPlayerStatus::erowing);
			CustomPlayerController->ChangeObject(floorRaftObject);
			AttachToActor(floorRaftObject, FAttachmentTransformRules::SnapToTargetIncludingScale);
		}
		
	}
}

void APlayerCharacter::ClimbingActionStarted(const FInputActionValue& Value)
{
	if (!playerCMC) return;

}
#pragma endregion 


#pragma region Debug Print
// 打印玩家属性变量
void APlayerCharacter::PrintAttributes(const TMap<EPlayerAttributes, float>& Attributes)
{
	for (const auto& Pair : Attributes)
	{
		EPlayerAttributes Attribute = Pair.Key;
		float Value = Pair.Value;

		FString AttributeName;
		switch (Attribute)
		{
		case EPlayerAttributes::emoveSpeed: AttributeName = TEXT("MoveSpeed"); break;
		case EPlayerAttributes::edamage: AttributeName = TEXT("Damage"); break;
		case EPlayerAttributes::eenergy: AttributeName = TEXT("Energy"); break;
		case EPlayerAttributes::ehealth: AttributeName = TEXT("Health"); break;
		case EPlayerAttributes::eenergyMax: AttributeName = TEXT("Energy_Max"); break;
		case EPlayerAttributes::ehealthMax: AttributeName = TEXT("Health_Max"); break;
		}

		// 打印到控制台
		//UE_LOG(LogTemp, Log, TEXT("Attribute: %s, Value: %f"), *AttributeName, Value);

		// 打印到屏幕
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Green, FString::Printf(TEXT("Attribute: %s, Value: %f"), *AttributeName, Value));
		}
	}

}
#pragma endregion


#pragma region UI
// 初始化UI
int APlayerCharacter::InitArttributesUW()
{
	playerAttributesUW = CreateWidget<UPlayerAttributesUW>(GetWorld(), playerAttributesUWClass);
	if (playerAttributesUW)
	{
		SetHealth_MAX(0.f);
		SetEnergy_MAX(0.f);
		SetHealth(0.f);
		SetEnergy(0.f);
		SetDamage(0.f);
		SetMoveSpeed(0.f);

		playerAttributesUW->AddToViewport();
		return 0;
	}
	return -1;
}


void APlayerCharacter::InitArchivalUW()
{
	archivalUW = CreateWidget<UArchivalUW>(GetWorld(), archivalUWClass);
	if (archivalUW)
	{
		DisablePlayerInput();
		archivalUW->AddToViewport();
	}
}
#pragma endregion


#pragma region Controller
void APlayerCharacter::EnablePlayerInput()
{
	FInputModeGameOnly InputModeGameOnly;
	CustomPlayerController->bShowMouseCursor = false;
	CustomPlayerController->SetInputMode(InputModeGameOnly);
	EnableInput(CustomPlayerController);
}


void APlayerCharacter::DisablePlayerInput()
{
	FInputModeUIOnly InputModeUIOnly;
	CustomPlayerController->bShowMouseCursor = true;
	CustomPlayerController->SetInputMode(InputModeUIOnly);
	DisableInput(CustomPlayerController);
}
#pragma endregion


#pragma region Archival
void APlayerCharacter::TeleportTo(EArchiveID ArchivalID)
{
}

#pragma endregion


#pragma region Property To Skill
//玩家属性对技能影响
void APlayerCharacter::OnEnergyEmpty()
{
	EndScan();
}
#pragma endregion


#pragma region SKILL
void APlayerCharacter::StartScan()
{
	playerSkillComponent->StartScan();
	//5000是默认值， 到时候要设置的话， 传到这里就好
	playerSkillComponent->SetScanDistance(5000);
}

void APlayerCharacter::EndScan()
{
	playerSkillComponent->EndScan();
}

void APlayerCharacter::InterctBlock()
{
	//ChangeInShoulderView();
	ChangeOutShoulderView();
	playerSkillComponent->InterctBlock();
}
#pragma endregion


#pragma region Shoulder View
void APlayerCharacter::ChangeInShoulderView()
{
	if (CameraTransitionTimeline)
	{
		UE_LOG(LogTemp, Warning, TEXT("has CameraTransitionTimeline"));
		CameraTransitionTimeline->PlayFromStart();  // 开始播放时间线
	}

	cameraBoom->bUsePawnControlRotation = false;
}

void APlayerCharacter::ChangeOutShoulderView()
{
	if (CameraTransitionTimeline)
	{
		UE_LOG(LogTemp, Warning, TEXT("has CameraTransitionTimeline"));
		CameraTransitionTimeline->ReverseFromEnd();  // 开始播放时间线
	}
}

void APlayerCharacter::OnTimelineUpdate(float Value)
{
	UE_LOG(LogTemp, Warning, TEXT("%f"), Value);
	// 根据时间曲线插值更新 相机位置
	camera->SetRelativeLocation(FMath::Lerp(DefualtCameraPos, TargetCameraPos, Value));
}

void APlayerCharacter::OnTimelineFinished()
{
	UE_LOG(LogTemp, Warning, TEXT("%f"), cameraBoom->TargetArmLength);
	// 结束时，确保 SpringArm 长度保持最终值
	camera->SetRelativeLocation(TargetCameraPos);
}

void APlayerCharacter::InitTimeLineCurveFunc()
{
	if (CameraCurve)
	{
		DefualtCameraPos = camera->GetRelativeLocation();

		UE_LOG(LogTemp, Warning, TEXT("Succeed"));
		TimelineProgress.BindUFunction(this, FName("OnTimelineUpdate"));
		TimelineFinished.BindUFunction(this, FName("OnTimelineFinished"));

		CameraTransitionTimeline->AddInterpFloat(CameraCurve, TimelineProgress);
		CameraTransitionTimeline->SetTimelineFinishedFunc(TimelineFinished);
	}
}
#pragma endregion