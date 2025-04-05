// Fill out your copyright notice in the Description page of Project Settings.


#include "Pawn/FloorRaft.h"
#include "Character/Player/PlayerCharacter.h"
#include "Components/BoxComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/SphereComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Components/TimelineComponent.h"

#include "Voice/AudioManager.h"
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

	// 创建 Timeline 组件
	TimelineComponent = CreateDefaultSubobject<UTimelineComponent>(TEXT("TimelineComponent"));

}

// Called when the game starts or when spawned
void AFloorRaft::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("InitRaftTimeLine"));

	OnTimelineUpdate.BindUFunction(this, FName("OnCurveUpdate"));
	// 添加曲线到时间轴
	TimelineComponent->AddInterpFloat(FloatCurve, OnTimelineUpdate);
}

// Called every frame
void AFloorRaft::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	FloorRaftMove(DeltaTime);

	if (IfAddRowForce)
	{
		MoveForward(DeltaTime);
	}
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
	if (PawnMovementComponent->Velocity.Size() < RotateMinSpeed)
	{
		return;
	}

	FVector CameraForward = camera->GetForwardVector();
	TargetRotation = CameraForward.Rotation();

	RotateTowardsCamera(deltaTime);
}

// 缓慢过渡船的旋转，使船头朝向相机的方向
void AFloorRaft::RotateTowardsCamera(float DeltaTime)
{
	FRotator CurrentRotation = GetActorRotation();

	TargetRotation.Pitch = CurrentRotation.Pitch;
	TargetRotation.Roll = CurrentRotation.Roll;
	RotationSpeed *= FMath::Min(1, PawnMovementComponent->Velocity.Size() / RotateMinSpeed);
	FRotator NewRotation = FMath::RInterpTo(CurrentRotation, TargetRotation, DeltaTime, RotationSpeed);

	SetActorRotation(NewRotation);
}

void AFloorRaft::OnCurveUpdate(float Value)
{
	RowAnimeState = Value;
	UE_LOG(LogTemp, Warning, TEXT("RowState"));
}

void AFloorRaft::MoveForward(float deltaTime)
{
	FVector tempVec = GetActorForwardVector();
	tempVec.Z = -sinkForce;

	// 控制船的前后移动
	FVector ForwardMovement = tempVec * MovementSpeed * deltaTime;
	AddMovementInput(ForwardMovement, MovementSpeed);
}

float AFloorRaft::GetFloorRaftSpeed()
{
	//FloorRaftSpeed = PawnMovementComponent->Velocity.Size();
	FloorRaftSpeed = RowAnimeState;
	return FloorRaftSpeed;
}

void AFloorRaft::StartRow()
{
	if (IfHasStartRow)
		return;

	CurrentTime = TimelineComponent->GetPlaybackPosition();
	TimelineComponent->SetPlaybackPosition(CurrentTime, false);
	TimelineComponent->Play();

	UAudioManager::GetInstance()->PlayRaftSound(this);

	IfHasStartRow = true;
}
void AFloorRaft::StopRow()
{
	if (!IfHasStartRow)
		return;

	UAudioManager::GetInstance()->StopRaftSound(this);

	CurrentTime = TimelineComponent->GetPlaybackPosition();
	TimelineComponent->SetPlaybackPosition(CurrentTime, false);
	TimelineComponent->Reverse();

	IfHasStartRow = false;
}
#pragma endregion


#pragma region PlayerStatusInterface

#pragma endregion




