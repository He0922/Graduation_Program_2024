// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/PlayerCharacter.h"
#include "MovementComponent/PlayerCharacterMovementComponent.h"
#include "../DebugHelper.h"
#include "Character/PlayerAttributes.h"
#include "UI/Attributes/PlayerAttributesUW.h"


#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"



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

	// �����Զ����CharacterMovementComponent
	playerCMC = Cast<UPlayerCharacterMovementComponent>(GetCharacterMovement());
	GetCharacterMovement()->RotationRate = FRotator(0.f, 500.f, 0.f);
	GetCharacterMovement()->MaxWalkSpeed = fplayerAttributes.GetPlayerAttributes(EPlayerAttributes::emoveSpeed);
	GetCharacterMovement()->bUseControllerDesiredRotation = true;
	GetCharacterMovement()->bOrientRotationToMovement = false;

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
}


// Called when the game starts or when spawned
void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();

	// EnhancedInput����ת���Լ�MappingContext�İ�
	if (APlayerController* playerController = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem* subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(playerController->GetLocalPlayer()))
		{
			subsystem->AddMappingContext(mainMappingContext, 0);
		}
	}
	InitHUD();
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
		EnhancedInputComponent->BindAction(moveAction, ETriggerEvent::Triggered, this, &APlayerCharacter::Move);
		EnhancedInputComponent->BindAction(jumpAction, ETriggerEvent::Started, this, &ACharacter::Jump);
		EnhancedInputComponent->BindAction(jumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);

		//��ͷ��ת
		EnhancedInputComponent->BindAction(lookAction, ETriggerEvent::Triggered, this, &APlayerCharacter::Look);

		//����
		EnhancedInputComponent->BindAction(ScanAction, ETriggerEvent::Started, this, &APlayerCharacter::StartScan);
		EnhancedInputComponent->BindAction(ScanAction, ETriggerEvent::Completed, this, &APlayerCharacter::EndScan);

		//����
		EnhancedInputComponent->BindAction(objectInteraction, ETriggerEvent::Completed, this, &APlayerCharacter::ObjectInteraction);
	}
}


#pragma region Initialize And Check

#pragma endregion



void APlayerCharacter::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	if (IPlayerInteractionInterface* Interactable = Cast<IPlayerInteractionInterface>(OtherActor)) 
	{ 
		currentInteractable = Interactable; 
		collisionArchiveID = currentInteractable->GetArchiveID();
		switch (collisionArchiveID)
		{
		case EArchiveID::Archive1:
			Debug::Print("Archive 1", 5.f, false);
			break;
		case EArchiveID::Archive2:
			Debug::Print("Archive 2", 5.f, false);
			break;
		}
	}
}


void APlayerCharacter::NotifyActorEndOverlap(AActor* OtherActor)
{
	Super::NotifyActorEndOverlap(OtherActor);

	if (IPlayerInteractionInterface* Interactable = Cast<IPlayerInteractionInterface>(OtherActor))
	{
		if (currentInteractable == Interactable) { currentInteractable = nullptr; }
	}
}
;

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
void APlayerCharacter::Move(const FInputActionValue& Value)
{
	// ��ȡ������뷽��
	const FVector2D movementVector = Value.Get<FVector2D>();

	// ���ڰ˷����ƶ���float
	moveFBDirection = movementVector.X;
	moveLRDirection = movementVector.Y;

	const FRotator rotation = Controller->GetControlRotation();
	const FRotator yawRotation(0, rotation.Yaw, 0);

	const FVector forwardDirection = FRotationMatrix(yawRotation).GetUnitAxis(EAxis::X);
	const FVector rightDirection = FRotationMatrix(yawRotation).GetUnitAxis(EAxis::Y);

	AddMovementInput(forwardDirection, movementVector.X);
	AddMovementInput(rightDirection, movementVector.Y);
}


void APlayerCharacter::Look(const FInputActionValue& Value)
{
	// ��ȡ������뷽��
	const FVector2D lookAxisVector = Value.Get<FVector2D>();

	// ������ת�ӽǽ�ɫʵʱ�ı��泯����float
	lookLRDirection = lookAxisVector.X;

	AddControllerYawInput(lookAxisVector.X);
	AddControllerPitchInput(-lookAxisVector.Y);
}


void APlayerCharacter::ObjectInteraction()
{
	if (currentInteractable) { currentInteractable->InteractArchive(); }
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

#pragma region Property To Skill
//������ԶԼ���Ӱ��
void APlayerCharacter::OnEnergyEmpty()
{
	EndScan();
}
#pragma endregion


#pragma region UI
// ��ʼ��UI
int APlayerCharacter::InitHUD()
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
#pragma endregion


#pragma region SKILL
void APlayerCharacter::StartScan()
{
	playerSkillComponent->StartScan();
	//5000��Ĭ��ֵ�� ��ʱ��Ҫ���õĻ��� ��������ͺ�
	playerSkillComponent->SetScanDistance(5000);
}

void APlayerCharacter::EndScan()
{
	playerSkillComponent->EndScan();
}
#pragma endregion

