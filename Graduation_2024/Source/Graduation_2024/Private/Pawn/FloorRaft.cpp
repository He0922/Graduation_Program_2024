// Fill out your copyright notice in the Description page of Project Settings.


#include "Pawn/FloorRaft.h"
#include "Character/Player/PlayerCharacter.h"
#include "Components/BoxComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/SphereComponent.h"
#include "Kismet/KismetMathLibrary.h"

#include "../DebugHelper.h"
#include "MovementComponent/CustomFloatingPawnMovement.h"

// Sets default values
AFloorRaft::AFloorRaft(const FObjectInitializer& ObjectInitializer)
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//P x, R y, Y z
	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;
	bUseControllerRotationYaw = false;

	PawnMovementComponent = CreateDefaultSubobject<UCustomFloatingPawnMovement>(TEXT("Floating Pawn Movement"));


	floorRafteMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Archive Mesh"));
	RootComponent = floorRafteMesh;

	floorRaftCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("FloorRaft Collision"));
	floorRaftCollision->SetupAttachment(RootComponent);

	PlayerStandLocation = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FloorRaft Player Stand Location"));
	PlayerStandLocation->SetupAttachment(RootComponent);

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
	
	FloorRaftMove(DeltaTime);
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

#pragma region Movement
void AFloorRaft::FloorRaftMove(float deltaTime)
{
	if (PawnMovementComponent->Velocity.Size() < 200.0f)
	{
		return;
	}

	// 获取相机的前向向量
	FVector CameraForward = camera->GetForwardVector();

	// 计算目标旋转
	TargetRotation = CameraForward.Rotation();

	// 缓慢过渡船的旋转
	RotateTowardsCamera(deltaTime);


	MoveForward(deltaTime);
}

// 缓慢过渡船的旋转，使船头朝向相机的方向
void AFloorRaft::RotateTowardsCamera(float DeltaTime)
{
	// 获取当前的船的旋转角度
	FRotator CurrentRotation = GetActorRotation();

	CurrentRotation.Pitch = 0;
	// 平滑过渡旋转
	FRotator NewRotation = FMath::RInterpTo(CurrentRotation, TargetRotation, DeltaTime, RotationSpeed);

	// 设置船的新旋转角度
	SetActorRotation(NewRotation);
}

void AFloorRaft::MoveForward(float deltaTime)
{
	FVector tempVec = GetActorForwardVector();
	tempVec.Z = -sinkForce;

	// 控制船的前后移动
	FVector ForwardMovement = tempVec * MovementSpeed * deltaTime;
	//AddActorWorldOffset(ForwardMovement, true);
	PawnMovementComponent->AddRadialForce(ForwardMovement, 0.2f, MovementSpeed, ERadialImpulseFalloff::RIF_Linear);
}


float AFloorRaft::GetFloorRaftSpeed()
{
	FloorRaftSpeed = PawnMovementComponent->Velocity.Size();
	return FloorRaftSpeed;
}
#pragma endregion


#pragma region PlayerStatusInterface

#pragma endregion




