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
	// �洢CapsuleTrace���ؽ��
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
	// �洢LineTrace���ؽ��
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


	// ��ȡ�ƶ������λ�ò�����λ��ƫ��������
	const FVector StartOffset = UpdatedComponent->GetForwardVector() * 30.f;
	// ȷ����������ʼλ��
	const FVector Start = UpdatedComponent->GetComponentLocation() + StartOffset;
	// ȷ�����������λ��
	const FVector End = Start + UpdatedComponent->GetForwardVector();

	CapsuleTraceClimbableSurfaceTracedResults = DoCapsuleTraceMultiByObject(Start, End, true);

	// �жϸ������Ƿ�Ϊ�գ�Ϊ�մ���δ��⵽�κο���������
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