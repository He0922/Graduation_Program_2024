// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/Mayfly.h"
#include "Character/PlayerCharacter.h"
#include "../DebugHelper.h"
#include "Kismet/GameplayStatics.h"
#include "MovementComponent/MayflyMovementComponent.h"


// Sets default values
AMayfly::AMayfly()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	isFollowing = true;

	GetCharacterMovement()->MaxWalkSpeed = speed = 204.f;

	desiredHeight = 200.0f; // 设置所需的高度 

	followDistance = 50.0f; // 跟随停止的距离 
	reengageDistance = 100.0f; // 重新跟随的距离 

	mayflytype = EMayflyType::eaddHPMAX;

	playerCharacter = nullptr;

	isMovingToTarget = false;

}


// Called when the game starts or when spawned
void AMayfly::BeginPlay()
{
	Super::BeginPlay();

	// 在BeginPlay中通过类获取playerCharacter 
	TArray<AActor*> FoundActors; 
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), APlayerCharacter::StaticClass(), FoundActors); 
	if (FoundActors.Num() > 0) 
	{ 
		playerCharacter = Cast<APlayerCharacter>(FoundActors[0]); 
	} 

	//判断是否获取playerCharacter
	if (playerCharacter)
	{ 
		Debug::Print(FString::Printf(TEXT("playerCharacter initialized: %s"), 
			*playerCharacter->GetName()), 0, true, FColor::Green, 0);
	} 
	else 
	{ 
		Debug::Print(TEXT("Failed to initialize playerCharacter"), 0, true, FColor::Red, 0);
	}
}


// Called every frameS
void AMayfly::Tick(float deltaTime)
{
	Super::Tick(deltaTime);

	//判断playerCharacter是否失效
	if (!playerCharacter)
	{
		Debug::Print(TEXT("playerCharacter is null in Tick"), 0, true, FColor::Red, 0); 
		return; 
	} 

	if (isFollowing) 
	{ 
		//跟随玩家
		FollowPlayer(); 
	}
	else if (isMovingToTarget) 
	{ //切换跟随和前往目标点
		MoveToTarget(deltaTime); 
	}
	else if (IsBeyondReengageDistance()) //判断是否超出距离
	{ 
		// 如果距离再次增加，则重新开始跟随 
		isFollowing = true; 
		Debug::Print(TEXT("Reengaging follow"), 0, true, FColor::Yellow, 0);
	}
	
	//维持高度
	MaintainHeight();

}


void AMayfly::FollowPlayer()
{
	//计算方向
	FVector direction = (playerCharacter->GetActorLocation() - GetActorLocation()).GetSafeNormal();
	//计算距离
	float distance = FVector::Dist(GetActorLocation(), playerCharacter->GetActorLocation()); 

	FVector AvoidanceDirection; 
	if (DetectObstacleInSector(AvoidanceDirection)) 
	{
		direction += AvoidanceDirection * 200.0f; // 调整方向以避开障碍物 
	}

	if (distance > followDistance) 
	{ 
		AddMovementInput(direction, 1.0f, true); 
		Debug::Print(FString::Printf(TEXT("Following player - Direction: %s, Speed: %f"), 
			*direction.ToString(), speed), 0, true, FColor::Green, 0); 
	}
	else 
	{ 
		isFollowing = false; 
		AddMovementInput(FVector::ZeroVector, 0, false);
		Debug::Print(TEXT("Reached follow distance, stopping follow"), 0, true, FColor::Yellow, 0); 
	}
}


void AMayfly::MaintainHeight() 
{ 
	FVector currentLocation = GetActorLocation(); 
	currentLocation.Z = desiredHeight; 
	SetActorLocation(currentLocation); 
}


bool AMayfly::IsBeyondReengageDistance() const
{
	if (playerCharacter)
	{
		float distance = FVector::Dist(GetActorLocation(), playerCharacter->GetActorLocation());
		return distance > reengageDistance;
	}
	return false;
}


bool AMayfly::DetectObstacleInSector(FVector& OutAvoidanceDirection) 
{
	FVector Start = GetActorLocation(); 
	FVector Forward = GetActorForwardVector(); 
	float detectionRadius = 200.0f; // 检测半径 
	float sectorAngle = 120.0f; // 扇形角度 

	FHitResult hitResult; 
	FCollisionQueryParams collisionParams; 
	collisionParams.AddIgnoredActor(this); 
	for (float angle = -sectorAngle / 2.0f; angle <= sectorAngle / 2.0f; angle += 10.0f) // 每10度检测一次 
	{ 
		FVector Direction = Forward.RotateAngleAxis(angle, FVector::UpVector); 
		FVector End = Start + (Direction * detectionRadius); 

		if (GetWorld()->LineTraceSingleByChannel(hitResult, Start, End, ECC_Visibility, collisionParams)) 
		{ 
			FVector hitNormal = hitResult.ImpactNormal; 
			OutAvoidanceDirection = FVector::CrossProduct(hitNormal, FVector::UpVector).GetSafeNormal(); return true; 
		} 
	} 
	return false; 
}


void AMayfly::MoveToTarget(float deltaTime) 
{
	FVector direction = (targetLocation - GetActorLocation()).GetSafeNormal(); 
	float distance = FVector::Dist(GetActorLocation(), targetLocation);
	float acceptableRadius = 50.0f;

	if (distance > acceptableRadius) // 设置一个合理的误差范围 
	{ 
		AddMovementInput(direction, 1.0f, true); 
		Debug::Print(FString::Printf(TEXT("Moving to target - Direction: %s, Speed: %f"), 
			*direction.ToString(), speed), 0, true, FColor::Blue, 0); 
	} 
	else 
	{ 
		isMovingToTarget = false; 
		AddMovementInput(FVector::ZeroVector, 0, false); 
		Debug::Print(TEXT("Reached target location, stopping"), 0, true, FColor::Magenta, 0); 
	} 
}




