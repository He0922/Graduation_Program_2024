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
	// ���۲�����û���赲ײ�������ж��޷�����
	if (!TraceFormEyeHeight(100.f).bBlockingHit)return false;

	return true;
}


bool UPlayerCharacterMovementComponent::IsClimbing() const
{
	return MovementMode == MOVE_Custom && CustomMovementMode == ECustomMovementMode::MOVE_Climb;
}


// ׷�ٿ��������棬�������������true
bool UPlayerCharacterMovementComponent::ClimbableCapsuleTraceSurface()
{
	// ��ȡ�ƶ������λ�ò�����λ��ƫ��������
	const FVector StartOffset = UpdatedComponent->GetForwardVector() * 30.f;
	// ȷ����������ʼλ��
	const FVector Start = UpdatedComponent->GetComponentLocation() + StartOffset;
	// ȷ�����������λ��
	const FVector End = Start + UpdatedComponent->GetForwardVector();

	ClimbableCapsuleTraceSurfaceTracedResults = DoCapsuleTraceMultiByObject(Start, End, true,true);

	// �жϸ������Ƿ�Ϊ�գ�Ϊ�մ���δ��⵽�κο���������,��Ҫȡ������Ϊ��Ҫ�жϣ����Ϊ���޷�����������flase
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