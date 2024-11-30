// Fill out your copyright notice in the Description page of Project Settings.


#include "Pawn/FloorRaft.h"
#include "Character/Player/PlayerCharacter.h"
#include "Components/BoxComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"

#include "../DebugHelper.h"
#include "MovementComponent/CustomFloatingPawnMovement.h"

// Sets default values
AFloorRaft::AFloorRaft(const FObjectInitializer& ObjectInitializer)
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;
	bUseControllerRotationYaw = false;

	PawnMovementComponent = CreateDefaultSubobject<UCustomFloatingPawnMovement>(TEXT("Floating Pawn Movement"));

	floorRaftCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("FloorRaft Collision"));
	RootComponent = floorRaftCollision;

	floorRafteMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Archive Mesh"));
	floorRafteMesh->SetupAttachment(RootComponent);


	// 创建SpringArm
	cameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	cameraBoom->SetupAttachment(RootComponent);
	cameraBoom->TargetArmLength = 500.f;
	cameraBoom->bUsePawnControlRotation = true;

	// 创建Camera
	camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	camera->SetupAttachment(cameraBoom, USpringArmComponent::SocketName);
	camera->bUsePawnControlRotation = false;
}

// Called when the game starts or when spawned
void AFloorRaft::BeginPlay()
{
	Super::BeginPlay();
	
	
}

// Called every frame
void AFloorRaft::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AFloorRaft::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AFloorRaft::NotifyActorBeginOverlap(AActor* OtherActor)
{
}

void AFloorRaft::NotifyActorEndOverlap(AActor* OtherActor)
{
}



#pragma region PlayerStatusInterface

#pragma endregion




