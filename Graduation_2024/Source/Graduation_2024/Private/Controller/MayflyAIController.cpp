// Fill out your copyright notice in the Description page of Project Settings.


#include "Controller/MayflyAIController.h"

#include "BehaviorTree/BlackboardComponent.h"
#include "Character/Mayfly.h"
#include "Character/Player/PlayerCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/GameplayStatics.h"


AMayflyAIController::AMayflyAIController()
{
	MayflyBlackboard = CreateDefaultSubobject<UBlackboardComponent>(TEXT("MayflyBlackboard"));
}

void AMayflyAIController::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	if (PlayerCharacter && MayflyBlackboard && Mayfly)
	{
		SetBlackboardKey();
		DistanceDetection();
		ChangeRotation();
		ChangeVelocity();
	}
	else
		TryGetInstance();
}

void AMayflyAIController::BeginPlay()
{
	Super::BeginPlay();
}

void AMayflyAIController::OnPossess(APawn* PossessedPawn)
{
	Super::OnPossess(PossessedPawn);
	TryGetInstance();
	
}

void AMayflyAIController::TryGetInstance()
{
	if (!PlayerCharacter)
	{
		PlayerCharacter = Cast<APlayerCharacter>(UGameplayStatics::GetPlayerPawn(this, 0));
		if (!PlayerCharacter)
			UE_LOG(LogTemp, Error, TEXT("无法获取 PlayerCharacter！"));
	}
	if (!Mayfly)
	{
		Mayfly = Cast<AMayfly>(GetPawn());
		if (!Mayfly)
			UE_LOG(LogTemp, Error, TEXT("无法获取 Mayfly！"));
	}
	if (MayflyBehaviorTree && MayflyBlackboard)
	{
		UseBlackboard(MayflyBlackboardData, MayflyBlackboard);
		RunBehaviorTree(MayflyBehaviorTree);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("行为树或黑板数据未绑定！"));
	}
}



void AMayflyAIController::SetBlackboardKey()
{
	IsNearPlayer = MayflyBlackboard->GetValueAsBool("IsNearToPlayer");
	
	
}

void AMayflyAIController::DistanceDetection()
{

	FVector TargetLocation = PlayerCharacter->MayflyLocation->GetComponentLocation();

	FVector OriginalLocation = Mayfly->GetMesh()->GetComponentLocation();
	
	float Distance = FVector::Dist(TargetLocation, OriginalLocation);
	
	if (Distance >= DistanceBetween)
		MayflyBlackboard->SetValueAsBool("IsNearToPlayer", false);
}

void AMayflyAIController::ChangeRotation()
{
	FRotator PlayerRotation = PlayerCharacter->GetActorRotation();
	FRotator MayflyRotation = Mayfly->GetActorRotation();
	if (PlayerRotation - MayflyRotation != FRotator(0.f, 0.f, 0.f))
		IsTheSameRotation = false;
	if (PlayerRotation - MayflyRotation == FRotator(0.f, 0.f, 0.f))
		IsTheSameRotation = true;
}

void AMayflyAIController::ChangeVelocity()
{
	if (!IsNearPlayer)
	{
		float SpeedOfPlayer = PlayerCharacter->playerMoveSpeed;
		if (SpeedOfPlayer>0.1f)
		{
			float TargetSpeed = SpeedOfPlayer - SpeedGap +350.f;
			Mayfly->GetCharacterMovement()->MaxWalkSpeed = TargetSpeed;
		}
		else 
			Mayfly->GetCharacterMovement()->MaxWalkSpeed = 450.0f;
	}
}


