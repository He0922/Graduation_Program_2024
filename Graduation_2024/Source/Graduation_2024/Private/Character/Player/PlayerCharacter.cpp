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
#include "Components/CapsuleComponent.h"
#include "Components/BoxComponent.h"



// Sets default values
// �̳��Զ���Ľ�ɫ�ƶ����
APlayerCharacter::APlayerCharacter(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer.SetDefaultSubobjectClass<UPlayerCharacterMovementComponent>(ACharacter::CharacterMovementComponentName))
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;
	bUseControllerRotationYaw = false;

	CustomCapsuleComponent = GetCapsuleComponent();

	// �����Զ����CharacterMovementComponent
	playerCMC = Cast<UPlayerCharacterMovementComponent>(GetCharacterMovement());
	GetCharacterMovement()->RotationRate = FRotator(0.f, 500.f, 0.f);
	GetCharacterMovement()->MaxWalkSpeed = fplayerAttributes.GetPlayerAttributes(EPlayerAttributes::emoveSpeed);
	GetCharacterMovement()->bUseControllerDesiredRotation = true;
	GetCharacterMovement()->bOrientRotationToMovement = true;

	// ����SpringArm
	cameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	cameraBoom->SetupAttachment(RootComponent);
	cameraBoom->TargetArmLength = 500.f;
	cameraBoom->bUsePawnControlRotation = true;

	// ����Camera
	camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	camera->SetupAttachment(cameraBoom, USpringArmComponent::SocketName);
	camera->bUsePawnControlRotation = false;


	//������Ҽ������
	playerSkillComponent = CreateDefaultSubobject<UPlayerSkillComponent>(TEXT("SkillComponent"));

	// ���� Timeline ���
	CameraTransitionTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("CameraTransitionTimeline"));

	// ��ʼ�����״̬
	eplayerStatus = ECustomPlayerStatus::eidle;
}


// Called when the game starts or when spawned
void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();

	// EnhancedInput����ת���Լ�MappingContext�İ�
	CustomPlayerController = Cast<ACustomPlayerController>(Controller);
	if (CustomPlayerController)
	{
		if (UEnhancedInputLocalPlayerSubsystem* subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(CustomPlayerController->GetLocalPlayer()))
		{
			subsystem->AddMappingContext(mainMappingContext, 0);
		}
	}

	//��ʼ��ʱ���᷽��(���ڵ����˳�תΪԽ���ӽ�
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

	// ������밴����
	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent))
	{
		// �ƶ�
		//EnhancedInputComponent->BindAction(moveAction, ETriggerEvent::Triggered, this, &APlayerCharacter::Move);
		//EnhancedInputComponent->BindAction(jumpAction, ETriggerEvent::Started, this, &ACharacter::Jump);
		//EnhancedInputComponent->BindAction(jumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);

		//��ͷ��ת
		//EnhancedInputComponent->BindAction(lookAction, ETriggerEvent::Triggered, this, &APlayerCharacter::Look);

		//����
		//EnhancedInputComponent->BindAction(ScanAction, ETriggerEvent::Started, this, &APlayerCharacter::StartScan);
		//EnhancedInputComponent->BindAction(ScanAction, ETriggerEvent::Completed, this, &APlayerCharacter::EndScan);
		//EnhancedInputComponent->BindAction(IterctBlock, ETriggerEvent::Started, this, &APlayerCharacter::InterctBlock);

		//����
		//EnhancedInputComponent->BindAction(objectInteraction, ETriggerEvent::Completed, this, &APlayerCharacter::ObjectInteraction);

	}
}

#pragma region Player Status 
void APlayerCharacter::UpdatePlayerStatus(ECustomPlayerStatus newPlayerStatus)
{
	eplayerStatus = newPlayerStatus;
}


ECustomPlayerStatus APlayerCharacter::GetPlayerStatus()
{
	return eplayerStatus;
}

#pragma endregion


void APlayerCharacter::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	CollisionActor = OtherActor;

	// �����ײ���Ƿ��Ǵ洢��(���д洢��ӿڷ���ʵ�ּ��)
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


// �������Խӿڵķ���ʵ��ͨ��PlaterAttributes.h�ļ��ж�������ݽṹ����ȡ�����ö�Ӧ����
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
//	// ��ȡ������뷽��
//	const FVector2D movementVector = Value.Get<FVector2D>();
//
//	// ���ڰ˷����ƶ���float
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
//	// ��ȡ������뷽��
//	const FVector2D lookAxisVector = Value.Get<FVector2D>();
//
//	// ������ת�ӽǽ�ɫʵʱ�ı��泯����float
//	lookLRDirection = lookAxisVector.X;
//
//	AddControllerYawInput(lookAxisVector.X);
//	AddControllerPitchInput(-lookAxisVector.Y);
//}


void APlayerCharacter::ObjectInteraction()
{ 
	if (archivalInteractable)
	{ 
		// ˢ�����״̬
		archivalInteractable->RefreshPlayerStatus();
		// ��ȡ�洢��ID
		collisionArchiveID = archivalInteractable->GetArchiveID();
		// ��ȡ�洢��λ��
		archivalLocation = archivalInteractable->GetPlayerStandLocation();
		// ��鲢����洢��ID
		if (!unlockedArchivalPointsIDArray.Contains(collisionArchiveID)) { unlockedArchivalPointsIDArray.Add(collisionArchiveID); }
		// ��鲢����洢��λ��
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
			SetRaftCollider(false);
		}
		else 
		{
			UpdatePlayerStatus(ECustomPlayerStatus::erowing);
			CustomPlayerController->ChangeObject(floorRaftObject);
			AttachToActor(floorRaftObject, FAttachmentTransformRules::SnapToTargetIncludingScale);
			SetRaftCollider(true);
		}
		
	}
}



void APlayerCharacter::FaceActor(AActor* TargetActor)
{
	if (!TargetActor) return;

	// ����Ŀ��λ�������λ�õķ���
	FVector DirectionToFace = TargetActor->GetActorLocation() - GetActorLocation();
	DirectionToFace.Z = 0;  // ��ֻ֤��ƽ������ת������Ҫ��ֱ��ת��

	// ����Ŀ����ת
	//FRotator TargetRotation = FRotator(0.0f, DirectionToFace.Rotation().Yaw, 0.0f);
	FRotator TargetRotation = DirectionToFace.Rotation();

	// ��ת��ҵ�Ŀ������ķ���
	SetActorRotation(TargetRotation);
}
#pragma endregion 


#pragma region Debug Print
// ��ӡ������Ա���
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

		// ��ӡ������̨
		//UE_LOG(LogTemp, Log, TEXT("Attribute: %s, Value: %f"), *AttributeName, Value);

		// ��ӡ����Ļ
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Green, FString::Printf(TEXT("Attribute: %s, Value: %f"), *AttributeName, Value));
		}
	}

}
#pragma endregion


#pragma region UI
// ��ʼ��UI
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
//������ã� ��������
void APlayerCharacter::StartInput()
{
	if (CustomPlayerController) 
	{
		CustomPlayerController->StartInput(); 
		cameraBoom->bUsePawnControlRotation = true;
	}
}

void APlayerCharacter::StopInput()
{
	if (CustomPlayerController) 
	{ 
		CustomPlayerController->StopInput(); 
		cameraBoom->bUsePawnControlRotation = false;
	}
}


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

#pragma region Raft Simulation
void APlayerCharacter::SetRaftCollider(bool IfUse)
{
	if (IfUse)
	{
		UE_LOG(LogTemp, Warning, TEXT("Raft"));

		CustomRaftComponent = NewObject<UBoxComponent>(this);
		CustomRaftComponent->SetMobility(EComponentMobility::Type::Movable);
		CustomRaftComponent->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);

		// ���� BoxComponent �Ĵ�С (���� 100x100x100 ��λ)
		CustomRaftComponent->SetBoxExtent(FVector(400.0f, 80.0f, 40.0f));
		// ������ײԤ��Ϊ "WorldDynamic"
		CustomRaftComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);  // ������ײ
		CustomRaftComponent->SetCollisionObjectType(ECollisionChannel::ECC_WorldDynamic);

		// ������ײ��Ӧ��ֻ�� PhysicsBody Ϊ "�赲"������Ϊ "����"
		//CustomRaftComponent->SetCollisionResponseToChannel(ECollisionChannel::ECC_OverlapAll_Deprecated, ECollisionResponse::ECR_Ignore);
		CustomRaftComponent->SetCollisionResponseToChannel(ECollisionChannel::ECC_PhysicsBody, ECollisionResponse::ECR_Block);
		CustomRaftComponent->SetCollisionResponseToChannel(ECollisionChannel::ECC_Visibility, ECollisionResponse::ECR_Ignore);
		CustomRaftComponent->SetCollisionResponseToChannel(ECollisionChannel::ECC_Camera, ECollisionResponse::ECR_Ignore);
		CustomRaftComponent->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Ignore);

		CustomRaftComponent->RegisterComponent();  // ע�������ʹ������Ϸ����Ч
		this->AddInstanceComponent(CustomRaftComponent);
	}
	else if(CustomRaftComponent)
	{
		CustomRaftComponent->DestroyComponent();
	}
}
#pragma endregion

#pragma region Archival
void APlayerCharacter::TeleportTo(EArchiveID ArchivalID)
{
}

#pragma endregion

#pragma region Shoulder View
void APlayerCharacter::ChangeInShoulderView()
{
	if (CameraTransitionTimeline)
	{
		UE_LOG(LogTemp, Warning, TEXT("has CameraTransitionTimeline"));
		CameraTransitionTimeline->PlayFromStart();  // ��ʼ����ʱ����
	}

	//cameraBoom->bUsePawnControlRotation = false;
}

void APlayerCharacter::ChangeOutShoulderView()
{
	if (CameraTransitionTimeline)
	{
		UE_LOG(LogTemp, Warning, TEXT("has CameraTransitionTimeline"));
		CameraTransitionTimeline->ReverseFromEnd();  // ��ʼ����ʱ����
	}

	//cameraBoom->bUsePawnControlRotation = true;
}

void APlayerCharacter::OnTimelineUpdate(float Value)
{
	UE_LOG(LogTemp, Warning, TEXT("%f"), Value);
	// ����ʱ�����߲�ֵ���� ���λ��
	camera->SetRelativeLocation(FMath::Lerp(DefualtCameraPos, TargetCameraPos, Value));
}

void APlayerCharacter::OnTimelineFinished()
{
	UE_LOG(LogTemp, Warning, TEXT("%f"), cameraBoom->TargetArmLength);
	// ����ʱ��ȷ�� SpringArm ���ȱ�������ֵ
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