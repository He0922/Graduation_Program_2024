// Fill out your copyright notice in the Description page of Project Settings.


#include "Controller/MayflyAIController.h"

#include "BehaviorTree/BlackboardComponent.h"
#include "Character/Mayfly.h"
#include "Character/Player/PlayerCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/GameplayStatics.h"


AMayflyAIController::AMayflyAIController()
{
	mayflyBlackboard = CreateDefaultSubobject<UBlackboardComponent>(TEXT("MayflyBlackboard"));
}

void AMayflyAIController::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	if (playerCharacter && mayflyBlackboard && mayfly)
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
	if (!playerCharacter)
	{
		playerCharacter = Cast<APlayerCharacter>(UGameplayStatics::GetPlayerPawn(this, 0));
		if (!playerCharacter)
			UE_LOG(LogTemp, Error, TEXT("无法获取 PlayerCharacter！"));
	}
	if (!mayfly)
	{
		mayfly = Cast<AMayfly>(GetPawn());
		if (!mayfly)
			UE_LOG(LogTemp, Error, TEXT("无法获取 Mayfly！"));
	}
	if (iayflyBehaviorTree && mayflyBlackboard)
	{
		UseBlackboard(mayflyBlackboardData, mayflyBlackboard);
		RunBehaviorTree(iayflyBehaviorTree);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("行为树或黑板数据未绑定！"));
	}
}



void AMayflyAIController::SetBlackboardKey()
{
	isNearPlayer = mayflyBlackboard->GetValueAsBool("IsNearToPlayer");
	
	
}

void AMayflyAIController::DistanceDetection()
{

	FVector TargetLocation = playerCharacter->MayflyLocation->GetComponentLocation();

	FVector OriginalLocation = mayfly->GetMesh()->GetComponentLocation();
	
	float Distance = FVector::Dist(TargetLocation, OriginalLocation);
	
	if (Distance >= distanceBetween)
		mayflyBlackboard->SetValueAsBool("IsNearToPlayer", false);
}

void AMayflyAIController::ChangeRotation()
{
	FRotator PlayerRotation = playerCharacter->GetActorRotation();
	FRotator MayflyRotation = mayfly->GetActorRotation();
	if (PlayerRotation - MayflyRotation != FRotator(0.f, 0.f, 0.f))
		isTheSameRotation = false;
	if (PlayerRotation - MayflyRotation == FRotator(0.f, 0.f, 0.f))
		isTheSameRotation = true;
}

void AMayflyAIController::ChangeVelocity()
{
	if (!isNearPlayer)
	{
		float SpeedOfPlayer = playerCharacter->playerMoveSpeed;
		if (SpeedOfPlayer>0.1f)
		{
			float TargetSpeed = SpeedOfPlayer - speedGap +350.f;
			mayfly->GetCharacterMovement()->MaxWalkSpeed = TargetSpeed;
		}
		else 
			mayfly->GetCharacterMovement()->MaxWalkSpeed = 450.0f;
	}
}


