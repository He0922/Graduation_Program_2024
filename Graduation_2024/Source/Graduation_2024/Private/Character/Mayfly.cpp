// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/Mayfly.h"
#include "Character/PlayerCharacter.h"
#include "../DebugHelper.h"

#include "Kismet/GameplayStatics.h"


// Sets default values
AMayfly::AMayfly()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMayfly::BeginPlay()
{
	Super::BeginPlay();

	playerCharacter = Cast<APlayerCharacter>(UGameplayStatics::GetActorOfClass(GetWorld(), APlayerCharacter::StaticClass()));
	
}

// Called every frame
void AMayfly::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	// 每帧获取蜉蝣自己的位置
	mayflyVector = GetActorLocation();
	playerVector = playerCharacter->GetActorLocation();

	float Distance = (mayflyVector - playerVector).Length();
	Debug::PrintFloat("Mayfly2Player Distance: ", Distance, 0.f, false, FColor::Red);

	if (Distance > 200.f) { Move2Player(mayflyVector, playerVector); }
	

}

// Called to bind functionality to input
void AMayfly::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}


#pragma region Follow Player 
void AMayfly::Move2Player(FVector selfLocation, FVector TargetLocation)
{


}

#pragma endregion