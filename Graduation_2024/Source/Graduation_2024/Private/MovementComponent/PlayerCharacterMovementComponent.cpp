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

	CapsuleTraceClimbableSurface();
	TraceFormEyeHeight(100.f, 0.f);
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



bool UPlayerCharacterMovementComponent::CapsuleTraceClimbableSurface()
{


	// 获取移动组件的位置并进行位置偏移量设置
	const FVector StartOffset = UpdatedComponent->GetForwardVector() * 30.f;
	// 确定胶囊体起始位置
	const FVector Start = UpdatedComponent->GetComponentLocation() + StartOffset;
	// 确定胶囊体结束位置
	const FVector End = Start + UpdatedComponent->GetForwardVector();

	CapsuleTraceClimbableSurfaceTracedResults = DoCapsuleTraceMultiByObject(Start, End, true);

	// 判断该数组是否为空，为空代表未检测到任何可攀爬表面
	return CapsuleTraceClimbableSurfaceTracedResults.IsEmpty();
}


FHitResult UPlayerCharacterMovementComponent::TraceFormEyeHeight(float TraceDistance, float TraceStartOffset)
{
	const FVector ComponentLocation = UpdatedComponent->GetComponentLocation();
	const FVector EyeHeightOffset = UpdatedComponent->GetUpVector() * (CharacterOwner->BaseEyeHeight + TraceStartOffset);
	const FVector Start = ComponentLocation + EyeHeightOffset;
	const FVector End = Start + UpdatedComponent->GetForwardVector() * TraceDistance;

	return DoLineTraceSingleByObject(Start, End, true);
}
#pragma endregion