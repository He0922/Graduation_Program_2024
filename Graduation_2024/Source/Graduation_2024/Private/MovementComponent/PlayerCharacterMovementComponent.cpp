// Fill out your copyright notice in the Description page of Project Settings.


#include "MovementComponent/PlayerCharacterMovementComponent.h"
#include "Character/Player/PlayerCharacter.h"
#include "../DebugHelper.h"

#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/KismetMathLibrary.h"
#include "Components/CapsuleComponent.h"

void UPlayerCharacterMovementComponent::BeginPlay()
{
	Super::BeginPlay();

	Player = Cast<APlayerCharacter>(this->GetOwner());
	OwningPlayerAnimInstance = Player->GetMesh()->GetAnimInstance();

	if (OwningPlayerAnimInstance)
	{
		OwningPlayerAnimInstance->OnMontageEnded.AddDynamic(this, &UPlayerCharacterMovementComponent::OnClimbMontageEnded);
		OwningPlayerAnimInstance->OnMontageBlendingOut.AddDynamic(this, &UPlayerCharacterMovementComponent::OnClimbMontageEnded);
	}
}


#pragma region OverridenFunction
void UPlayerCharacterMovementComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	CanClimbDownLedge();

	//Debug::PrintBool("Capsule Trace No Collision: ", ClimbableCapsuleTraceSurfaceTracedResults.IsEmpty(), 0.f,false);
	//Debug::PrintBool("Eye Trace Has Blocking: ", TraceFormEyeHeight(100.f).bBlockingHit, 0.f, false);
}


void UPlayerCharacterMovementComponent::OnMovementModeChanged(EMovementMode PreviousMovementMode, uint8 PreviousCustomMode)
{
	if (IsClimbing())
	{
		bOrientRotationToMovement = false;
		Player->CustomCapsuleComponent->SetCapsuleHalfHeight(40.f);
	}

	if (PreviousMovementMode == MOVE_Custom && PreviousCustomMode == ECustomMovementMode::MOVE_Climb)
	{
		bOrientRotationToMovement = true;
		Player->CustomCapsuleComponent->SetCapsuleHalfHeight(88.f);

		const FRotator DirtyRotation = UpdatedComponent->GetComponentRotation();
		const FRotator CleanStandRotation = FRotator(0.f, DirtyRotation.Yaw, 0.f);
		UpdatedComponent->SetRelativeRotation(CleanStandRotation);

		StopMovementImmediately();
	}

	Super::OnMovementModeChanged(PreviousMovementMode, PreviousCustomMode);
}


void UPlayerCharacterMovementComponent::PhysCustom(float deltaTime, int32 Iterations)
{
	if (IsClimbing())
	{
		PhysClimb(deltaTime, Iterations);
	}

	Super::PhysCustom(deltaTime, Iterations);
}


float UPlayerCharacterMovementComponent::GetMaxSpeed() const
{
	if (IsClimbing())
	{
		return MaxClimbSpeed;
	}
	else
	{
		return Super::GetMaxSpeed();
	}
}


float UPlayerCharacterMovementComponent::GetMaxAcceleration() const
{
	if (IsClimbing())
	{
		return MaxClimbAcceleration;
	}
	else
	{
		return Super::GetMaxAcceleration();
	}
}


FVector UPlayerCharacterMovementComponent::ConstrainAnimRootMotionVelocity(const FVector& RootMotionVelocity, const FVector& CurrentVelocity) const
{
	const bool bIsPlayingRMMontage =
		IsFalling() && OwningPlayerAnimInstance && OwningPlayerAnimInstance->IsAnyMontagePlaying();

	if (bIsPlayingRMMontage)
	{
		return RootMotionVelocity;
	}
	else
	{
		return Super::ConstrainAnimRootMotionVelocity(RootMotionVelocity, CurrentVelocity);
	}
}
#pragma endregion


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
			StartClimbing();
			PlayClimbMontage(IdleToClimbMontage);
		}
		else if(CanClimbDownLedge())
		{
			Debug::Print("Can Climb Down", 5.f, false);
		}
		else
		{
			Debug::Print("Can NOT Climb Down", 5.f, false);
		}
	}
	else
	{
		// stop climbing
		StopClimbing();
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


bool UPlayerCharacterMovementComponent::CanClimbDownLedge()
{
	if (IsFalling()) return false;
	
	const FVector ComponentLocation = UpdatedComponent->GetComponentLocation();
	const FVector ComponentForward = UpdatedComponent->GetForwardVector();
	const FVector DownVector = -UpdatedComponent->GetUpVector();

	const FVector WalkableSurfaceTracesStart = ComponentLocation + ComponentForward * ClimbDownWalkableSurfaceTraceOffset;
	const FVector WalkableSurfaceTracesEnd = WalkableSurfaceTracesStart + DownVector * 100.f;

	FHitResult WalkableSurfaceHit =  DoLineTraceSingleByObject(WalkableSurfaceTracesStart, WalkableSurfaceTracesEnd, true);

	const FVector LedgeTraceStart = WalkableSurfaceHit.TraceStart + ComponentForward * ClimbDownLedgeTraceOffset;
	const FVector LedgeTraceEnd = LedgeTraceStart + DownVector * 300.f;

	FHitResult LedgeTraceHit = DoLineTraceSingleByObject(LedgeTraceStart, LedgeTraceEnd,true);

	if (WalkableSurfaceHit.bBlockingHit && !LedgeTraceHit.bBlockingHit)
	{
		return true;
	}

	return false;
}


void UPlayerCharacterMovementComponent::StartClimbing()
{
	SetMovementMode(MOVE_Custom, ECustomMovementMode::MOVE_Climb);

}


void UPlayerCharacterMovementComponent::StopClimbing()
{
	SetMovementMode(MOVE_Falling);
}



void UPlayerCharacterMovementComponent::PhysClimb(float deltaTime, int32 Iterations)
{
	if (deltaTime < MIN_TICK_TIME)
	{
		return;
	}

	/*处理所有可攀爬表面信息*/
	ClimbableCapsuleTraceSurface();
	ProcessClimbaleSurfaceInfo();


	/*检查是否停止攀爬*/
	if (CheckShouldStopClimbing() || CheckHasReachedFloor())
	{
		StopClimbing();
	}

	RestorePreAdditiveRootMotionVelocity();

	if (!HasAnimRootMotion() && !CurrentRootMotion.HasOverrideVelocity())
	{
		// 定义最大攀爬速度于加速度
		CalcVelocity(deltaTime, 0.f, true, MaxBreakClimbDeceleration);
	}

	ApplyRootMotionToVelocity(deltaTime);

	FVector OldLocation = UpdatedComponent->GetComponentLocation();
	const FVector Adjusted = Velocity * deltaTime;
	FHitResult Hit(1.f);

	// 处理攀爬的旋转
	SafeMoveUpdatedComponent(Adjusted, GetClimbRotation(deltaTime), true, Hit);

	if (Hit.Time < 1.f)
	{
		//adjust and try again
		HandleImpact(Hit, deltaTime, Adjusted);
		SlideAlongSurface(Adjusted, (1.f - Hit.Time), Hit.Normal, Hit, true);
	}

	if (!HasAnimRootMotion() && !CurrentRootMotion.HasOverrideVelocity())
	{
		Velocity = (UpdatedComponent->GetComponentLocation() - OldLocation) / deltaTime;
	}

	/*捕捉运动到可攀爬的表面*/
	SnapMovementToClimbableSurfaces(deltaTime);

	if (CheckHasReachedLedge())
	{
		StopClimbing();
		PlayClimbMontage(ClimbToTopMontage);
	}

}


void UPlayerCharacterMovementComponent::ProcessClimbaleSurfaceInfo()
{
	CurrentClimbableSurfaceLocation = FVector::ZeroVector;
	CurrentClimbableSurfaceNormal = FVector::ZeroVector;

	if (ClimbableCapsuleTraceSurfaceTracedResults.IsEmpty()) return;

	for (const FHitResult& TraceHitResult : ClimbableCapsuleTraceSurfaceTracedResults)
	{
		CurrentClimbableSurfaceLocation += TraceHitResult.ImpactPoint;
		CurrentClimbableSurfaceNormal += TraceHitResult.ImpactNormal;
	}

	CurrentClimbableSurfaceLocation /= ClimbableCapsuleTraceSurfaceTracedResults.Num();
	CurrentClimbableSurfaceNormal = CurrentClimbableSurfaceNormal.GetSafeNormal();
}


bool UPlayerCharacterMovementComponent::CheckShouldStopClimbing()
{
	if (ClimbableCapsuleTraceSurfaceTracedResults.IsEmpty())return true;

	const float DotResult = FVector::DotProduct(CurrentClimbableSurfaceNormal, FVector::UpVector);
	const float DegreeDiff =FMath::RadiansToDegrees(FMath::Acos(DotResult));

	if (DegreeDiff <= 60.f)
	{
		return true;
	}

	return false;
}


bool UPlayerCharacterMovementComponent::CheckHasReachedFloor()
{
	const FVector DownVector = -UpdatedComponent->GetUpVector();
	const FVector StartOffset = DownVector * 50.f;
	const FVector Start = UpdatedComponent->GetComponentLocation() + StartOffset;
	const FVector End = Start + DownVector;

	TArray<FHitResult> PossibleFloorHits = DoCapsuleTraceMultiByObject(Start, End);

	if (PossibleFloorHits.IsEmpty())return false;

	for (const FHitResult& PossibleFloorHit : PossibleFloorHits)
	{
		const bool bFloorReached = FVector::Parallel(-PossibleFloorHit.ImpactNormal, FVector::UpVector) && GetUnrotatedClimbVelocity().Z < -10.f;

		if (bFloorReached)
		{
			return true;
		}
	}

	return false;
}


FQuat UPlayerCharacterMovementComponent::GetClimbRotation(float DeltaTime)
{
	const FQuat CurrentQuat = UpdatedComponent->GetComponentQuat();

	if (HasAnimRootMotion() || CurrentRootMotion.HasOverrideVelocity())
	{
		return CurrentQuat;
	}

	const FQuat TargetQuat = FRotationMatrix::MakeFromX(-CurrentClimbableSurfaceNormal).ToQuat();

	return FMath::QInterpTo(CurrentQuat, TargetQuat, DeltaTime, 5.f);
}


void UPlayerCharacterMovementComponent::SnapMovementToClimbableSurfaces(float DeltaTime)
{
	const FVector ComponentForward = UpdatedComponent->GetForwardVector();
	const FVector ComponentLocation = UpdatedComponent->GetComponentLocation();

	
	const FVector ProjectedCharacterToSurface =
		(CurrentClimbableSurfaceLocation - ComponentLocation).ProjectOnTo(ComponentForward);

	const FVector SnapVector = -CurrentClimbableSurfaceNormal * ProjectedCharacterToSurface.Length();

	UpdatedComponent->MoveComponent(
		SnapVector * DeltaTime * MaxClimbSpeed,
		UpdatedComponent->GetComponentQuat(),
		true
	);
}


bool UPlayerCharacterMovementComponent::CheckHasReachedLedge()
{
	FHitResult LedgetHitResult = TraceFormEyeHeight(100.f, 50.f);

	if (!LedgetHitResult.bBlockingHit)
	{
		const FVector WalkableSurfaceTraceStart = LedgetHitResult.TraceEnd;

		const FVector DownVector = -UpdatedComponent->GetUpVector();
		const FVector WalkableSurfaceTraceEnd = WalkableSurfaceTraceStart + DownVector * 100.f;

		FHitResult WalkableSurfaceHitResult = DoLineTraceSingleByObject(WalkableSurfaceTraceStart, WalkableSurfaceTraceEnd);

		if (WalkableSurfaceHitResult.bBlockingHit && GetUnrotatedClimbVelocity().Z > 10.f)
		{
			return true;
		}
	}
	return false;
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

	ClimbableCapsuleTraceSurfaceTracedResults = DoCapsuleTraceMultiByObject(Start, End);

	// 判断该数组是否为空，为空代表未检测到任何可攀爬表面,需要取反，因为需要判断，如果为空无法攀爬，返回flase
	return !ClimbableCapsuleTraceSurfaceTracedResults.IsEmpty();
}


FHitResult UPlayerCharacterMovementComponent::TraceFormEyeHeight(float TraceDistance, float TraceStartOffset)
{
	const FVector ComponentLocation = UpdatedComponent->GetComponentLocation();
	const FVector EyeHeightOffset = UpdatedComponent->GetUpVector() * (CharacterOwner->BaseEyeHeight + TraceStartOffset);
	const FVector Start = ComponentLocation + EyeHeightOffset;
	const FVector End = Start + UpdatedComponent->GetForwardVector() * TraceDistance;

	return DoLineTraceSingleByObject(Start, End);
}


void UPlayerCharacterMovementComponent::PlayClimbMontage(UAnimMontage* MontageToPlay)
{
	if (!MontageToPlay) return;
	if (!OwningPlayerAnimInstance)return;
	if (OwningPlayerAnimInstance->IsAnyMontagePlaying())return;

	OwningPlayerAnimInstance->Montage_Play(MontageToPlay);
}


void UPlayerCharacterMovementComponent::OnClimbMontageEnded(UAnimMontage* Montage, bool bInterrupted)
{
	if (Montage == IdleToClimbMontage)
	{
		StartClimbing();
	}
	else
	{
		SetMovementMode(MOVE_Walking);
	}
}


FVector UPlayerCharacterMovementComponent::GetUnrotatedClimbVelocity() const
{
	return UKismetMathLibrary::Quat_UnrotateVector(UpdatedComponent->GetComponentQuat(), Velocity);
}

#pragma endregion