// Fill out your copyright notice in the Description page of Project Settings.


#include "MovementComponent/PlayerCharacterMovementComponent.h"
#include "Character/Player/PlayerCharacter.h"
#include "../DebugHelper.h"

#include "Kismet/KismetSystemLibrary.h"

void UPlayerCharacterMovementComponent::BeginPlay()
{
	Super::BeginPlay();
}

void UPlayerCharacterMovementComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	//Debug::PrintBool("Capsule Trace No Collision: ", ClimbableCapsuleTraceSurfaceTracedResults.IsEmpty(), 0.f,false);
	//Debug::PrintBool("Eye Trace Has Blocking: ", TraceFormEyeHeight(100.f).bBlockingHit, 0.f, false);
}


#pragma region ClimbTrace
TArray<FHitResult> UPlayerCharacterMovementComponent::DoCapsuleTraceMultiByObject(const FVector& Start, const FVector& End, bool bShowDebugShape, bool bDrawpersisteanShape)
{
	// 存储CapsuleTrace返回结果
	TArray<FHitResult> OutCapsuleTraceHitResult;

	EDrawDebugTrace::Type DebugTraceType = EDrawDebugTrace::None;
	if (bShowDebugShape)
	{
		DebugTraceType = EDrawDebugTrace::ForOneFrame;

		if (bDrawpersisteanShape)
		{
			DebugTraceType = EDrawDebugTrace::Persistent;
		}
	}

	UKismetSystemLibrary::CapsuleTraceMultiForObjects(
		this,
		Start,
		End,
		ClimbCapsuleTraceRadius,
		ClibCapsuleTraceHalfHeight,
		CapsuleTraceClimbableSurfaceTraceTypes,
		bCpasuleTraceComplexTracking,
		TArray<AActor*>(),
		DebugTraceType,
		OutCapsuleTraceHitResult,
		true
	);


	return OutCapsuleTraceHitResult;
}


FHitResult UPlayerCharacterMovementComponent::DoLineTraceSingleByObject(const FVector& Start, const FVector& End, bool bShowDebugShape, bool bDrawpersisteanShape)
{
	// 存储LineTrace返回结果
	FHitResult OutLineTraceHit;
	
	EDrawDebugTrace::Type DebugTraceType = EDrawDebugTrace::None;
	if (bShowDebugShape)
	{
		DebugTraceType = EDrawDebugTrace::ForOneFrame;
		
		if (bDrawpersisteanShape)
		{
			DebugTraceType = EDrawDebugTrace::Persistent;
		}
	}

	UKismetSystemLibrary::LineTraceSingleForObjects(
		this,
		Start,
		End,
		LineTraceClibableSurfaceTraceTypes,
		bLineTraceComplexTracking,
		TArray<AActor*>(),
		DebugTraceType,
		OutLineTraceHit,
		false
	);
	

	return OutLineTraceHit;
}
#pragma endregion



#pragma region ClimbCore
void UPlayerCharacterMovementComponent::ToggleClimbing(bool bEnableClimb)
{
	if (bEnableClimb)
	{
		if (CanStartClimbing())
		{
			// Enter the climb state
			Debug::Print("Can Start Climbing", 5.f, false);
		}
		else
		{
			Debug::Print("Can NOT Start Climbing", 5.f, false);
		}
	}
	else
	{
		// stop climbing
	}
}


bool UPlayerCharacterMovementComponent::CanStartClimbing()
{
	if (IsFalling()) return false;
	if (!ClimbableCapsuleTraceSurface()) return false;
	// 若眼部射线没有阻挡撞击，则判断无法攀爬
	if (!TraceFormEyeHeight(100.f).bBlockingHit)return false;

	return true;
}


bool UPlayerCharacterMovementComponent::IsClimbing() const
{
	return MovementMode == MOVE_Custom && CustomMovementMode == ECustomMovementMode::MOVE_Climb;
}


// 追踪可攀爬表面，如果可攀爬返回true
bool UPlayerCharacterMovementComponent::ClimbableCapsuleTraceSurface()
{
	// 获取移动组件的位置并进行位置偏移量设置
	const FVector StartOffset = UpdatedComponent->GetForwardVector() * 30.f;
	// 确定胶囊体起始位置
	const FVector Start = UpdatedComponent->GetComponentLocation() + StartOffset;
	// 确定胶囊体结束位置
	const FVector End = Start + UpdatedComponent->GetForwardVector();

	ClimbableCapsuleTraceSurfaceTracedResults = DoCapsuleTraceMultiByObject(Start, End, true,true);

	// 判断该数组是否为空，为空代表未检测到任何可攀爬表面,需要取反，因为需要判断，如果为空无法攀爬，返回flase
	return !ClimbableCapsuleTraceSurfaceTracedResults.IsEmpty();
}


FHitResult UPlayerCharacterMovementComponent::TraceFormEyeHeight(float TraceDistance, float TraceStartOffset)
{
	const FVector ComponentLocation = UpdatedComponent->GetComponentLocation();
	const FVector EyeHeightOffset = UpdatedComponent->GetUpVector() * (CharacterOwner->BaseEyeHeight + TraceStartOffset);
	const FVector Start = ComponentLocation + EyeHeightOffset;
	const FVector End = Start + UpdatedComponent->GetForwardVector() * TraceDistance;

	return DoLineTraceSingleByObject(Start, End, true,true);
}


#pragma endregion