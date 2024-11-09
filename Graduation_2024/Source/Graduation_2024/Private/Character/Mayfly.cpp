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

	pathRecordInterval = 0.5f; // 设置记录间隔时间（秒）
	pathRecordTimer = 0.0f; 
	pathIndex = 0; 

	followDistance = 50.0f; // 跟随停止的距离 
	reengageDistance = 100.0f; // 重新跟随的距离 
	acceptableRadius = 10.0f; // 设置可接受的误差范围，避免震荡

	followOffset = FVector(100.0f, 0.0f, 0.0f); // 设置跟随偏移量

	targetLocationMember = FVector::ZeroVector; 
	isMovingToTarget = false;

	mayflytype = EMayflyType::eaddHPMAX;

	playerCharacter = nullptr;

	

}


// Called when the game starts or when spawned
void AMayfly::BeginPlay()
{
	Super::BeginPlay();

	// 在BeginPlay中通过类获取playerCharacter 
	TArray<AActor*> FoundActors; 
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), APlayerCharacter::StaticClass(), FoundActors);  // 这里可以减少开销，用GetActorOfClass直接指定转换对象不用全局搜索
	if (FoundActors.Num() > 0) 
	{ 
		playerCharacter = Cast<APlayerCharacter>(FoundActors[0]); 
	} 

	if (playerCharacter)
	{ 
		RecordPlayerPath(0.0f); // 初始化路径记录 
		Debug::Print(FString::Printf(TEXT("playerCharacter initialized: %s"), 
			*playerCharacter->GetName()), 0, true, FColor::Green, 0);
	} 
	else 
	{ 
		Debug::Print(TEXT("Failed to initialize playerCharacter"), 0, true, FColor::Red, 0);
	}

	auto MovementComponent = GetCharacterMovement(); // auto后续需要换成指定的变量类型，并且对象可以写在.h文件中后续调用直接用变量就行不用每次都声明
	if (MovementComponent)
	{
		if (!MovementComponent->IsActive()) 
		{
			MovementComponent->Activate(true); 
			// 确保移动组件被激活 
			Debug::Print(TEXT("CharacterMovementComponent has been activated"), 0, true, FColor::Green, 0); 
		} 
		// 强制设置移动模式为 Walking 
		MovementComponent->SetMovementMode(EMovementMode::MOVE_Walking);
		Debug::Print(TEXT("Movement mode set to Walking"), 0, true, FColor::Green, 0);
	} 
	else 
	{ 
		Debug::Print(TEXT("CharacterMovementComponent is not valid"), 0, true, FColor::Red, 0); 
	}
}


// Called every frameS
void AMayfly::Tick(float deltaTime)
{
	Super::Tick(deltaTime);

	if (!playerCharacter)
	{
		Debug::Print(TEXT("playerCharacter is null in Tick"), 0, true, FColor::Red, 0); 
		// 在每个Tick中尝试重新获取playerCharacter 
		TArray<AActor*> FoundActors; 
		UGameplayStatics::GetAllActorsOfClass(GetWorld(), APlayerCharacter::StaticClass(), FoundActors); 
		if (FoundActors.Num() > 0) 
		{ 
			playerCharacter = Cast<APlayerCharacter>(FoundActors[0]); 
			if (playerCharacter)
			{ 
				Debug::Print(FString::Printf(TEXT("Reinitialized playerCharacter: %s"), *playerCharacter->GetName()), 0, true, FColor::Green, 0); 
			}
		} 
		return; 
	} 
	Debug::Print(FString::Printf(TEXT("Tick called - isFollowing: %s, isMovingToTarget: %s"), 
		isFollowing ? TEXT("true") : TEXT("false"), 
		isMovingToTarget ? TEXT("true") : TEXT("false")), 0, true, FColor::Green, 0);

	auto MovementComponent = GetCharacterMovement(); 
	Debug::Print(FString::Printf(TEXT("Movement Component - Velocity: %s, Acceleration: %s, Location: %s, MaxWalkSpeed: %f, MovementMode: %d"), 
		*MovementComponent->Velocity.ToString(), 
		*MovementComponent->GetCurrentAcceleration().ToString(), 
		*GetActorLocation().ToString(), 
		MovementComponent->MaxWalkSpeed, 
		(int32)MovementComponent->MovementMode), 0, true, FColor::Cyan, 0);

	if (isFollowing) 
	{ 
		// 记录玩家角色的路径 
		RecordPlayerPath(deltaTime); 
		// 跟随记录的路径 
		FollowRecordedPath(deltaTime); 
	}
	else if (isMovingToTarget)
	{
		MoveToTargetLocation(deltaTime);
	}
	else if (IsBeyondReengageDistance()) 
	{ 
		// 如果距离再次增加，则重新开始跟随 
		isFollowing = true; 
		Debug::Print(TEXT("Reengaging follow"), 0, true, FColor::Yellow, 0);
	}
	
	//维持高度
	MaintainHeight();

}


// Called to bind functionality to input
void AMayfly::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}


void AMayfly::RecordPlayerPath(float deltaTime)
{
	if (playerCharacter)
	{
		pathRecordTimer += deltaTime;
		if (pathRecordTimer >= pathRecordInterval)
		{
			playerPath.Add(playerCharacter->GetActorLocation());
			pathRecordTimer = 0.0f;
			Debug::Print(FString::Printf(TEXT("Recorded player path at location: %s"), *playerCharacter->GetActorLocation().ToString()), 0, true, FColor::Black, 0);
		}
	}
	else 
	{
		Debug::Print(TEXT("playerCharacter is null in RecordPlayerPath"), 0, true, FColor::Red, 0);
	}
}


void AMayfly::FollowRecordedPath(float deltaTime)
{
	if (playerPath.Num() > 0)
	{
		FVector calculatedTargetLocation = GetTargetLocationWithOffset(playerPath[pathIndex]);
		FVector direction = playerCharacter->GetActorLocation() - GetActorLocation();
		float distance = FVector::Dist(GetActorLocation(), calculatedTargetLocation);

		Debug::Print(FString::Printf(TEXT("Following path to target: %s, current distance: %f"), 
			*calculatedTargetLocation.ToString(), distance), 0, true, FColor::Blue, 0);

		if (distance < acceptableRadius) // 接近目标点后更新索引 
		{
			pathIndex = (pathIndex + 1) % playerPath.Num();
			Debug::Print(TEXT("Reached path point, updating pathIndex"), 0, true, FColor::Orange, 0);
		}
		else
		{
			Debug::Print(FString::Printf(TEXT("Current Speed: %f, Direction: %s"), speed, *direction.ToString()), 0, true, FColor::Green, 0);

			AddMovementInput(direction,1.0f,true); 

			

			Debug::Print(FString::Printf(TEXT("Moving towards target with speed: %f"), speed), 0, true, FColor::Green, 0);
			
			// 如果接近PlayerCharacter，则停止跟随 
			if (distance < followDistance) 
			{ 
				isFollowing = false; 
				GetCharacterMovement()->StopMovementImmediately();
				Debug::Print(TEXT("Reached playerCharacter, stopping follow"), 0, true, FColor::Yellow, 0);
			}
		}
	}
	else
	{
		Debug::Print(TEXT("No recorded player path"), 0, true, FColor::Red, 0);
	}
}


void AMayfly::MaintainHeight() 
{ 
	FVector currentLocation = GetActorLocation(); 
	currentLocation.Z = desiredHeight; 
	SetActorLocation(currentLocation); 
}


bool AMayfly::IsWithinFollowDistance() const 
{
	if (playerCharacter)
	{ 
		float distance = FVector::Dist(GetActorLocation(), playerCharacter->GetActorLocation()); 
		return distance < followDistance;
	}
	return false;
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


FVector AMayfly::GetTargetLocationWithOffset(const FVector& targetLocation) const
{
	// 计算与玩家角色位置的偏移量 
	FVector offsetDirection = GetActorRightVector() * followOffset.X;
	return targetLocation + offsetDirection;
}


float AMayfly::CalculateSpeedBasedOnDistance(float distance) const 
{ 
	// 计算速度，使速度随着距离的减小而减小 
	if (distance <= acceptableRadius) 
	{ 
		return 0.0f; // 当距离非常小时，速度为0 
	} 
	else 
	{ 
		// 使用插值函数，使速度与距离成比例变化 
		return FMath::Clamp((distance - acceptableRadius) / (followDistance - acceptableRadius), 0.0f, 1.0f) * speed; 
	} 
}


void AMayfly::SetTargetLocation(const FVector& newTargetLocation)
{
	targetLocationMember = newTargetLocation;
	isMovingToTarget = true;
	isFollowing = false; // 停止跟随PlayerCharacter
}


void AMayfly::MoveToTargetLocation(float deltaTime)
{
	FVector direction = targetLocationMember - GetActorLocation(); 
	direction.Z = 0; // 忽略高度差异 
	float distance = direction.Size(); 

	Debug::Print(FString::Printf(TEXT("Moving to target location: %s, current distance: %f"), 
		*targetLocationMember.ToString(), distance), 0, true, FColor::Cyan, 0);

	if (distance < acceptableRadius) // 接近目标点后停止 
	{ 
		isMovingToTarget = false; // 到达目标点后停止移动 
		Debug::Print(TEXT("Reached target location, stopping"), 0, true, FColor::Magenta, 0);
		GetCharacterMovement()->StopMovementImmediately();
	} 
	else 
	{ 
		direction.Normalize(); 
		AddMovementInput(direction, speed * deltaTime);
		Debug::Print(FString::Printf(TEXT("Moving towards target with speed: %f"), speed), 0, true, FColor::Green, 0);
	} 
}