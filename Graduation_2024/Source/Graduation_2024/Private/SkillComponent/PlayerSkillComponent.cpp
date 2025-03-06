#include "SkillComponent/PlayerSkillComponent.h"
#include "../DebugHelper.h"
#include "TimerManager.h"
#include "Character/Player/PlayerCharacter.h"
#include "InterectBlock/BlockActor.h"
#include "InterectBlock/Runepaper.h"
#include "NiagaraFunctionLibrary.h"
#include "NiagaraComponent.h"


DEFINE_LOG_CATEGORY_STATIC(PlayerSkillComponentLog, All, All);
UPlayerSkillComponent::UPlayerSkillComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UPlayerSkillComponent::BeginPlay()
{
	Super::BeginPlay();	

	//�õ������
	playerCharacter = Cast<APlayerCharacter>(GetOwner());
}

void UPlayerSkillComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

#pragma region Cold Time
//���ö�Ӧ���ܵ���ȴ��ʱ��
void UPlayerSkillComponent::SetColdTimerHandle(ESkillType skillType)
{
	switch (skillType)
	{
		case ESkillType::Scan:
			InScanColdState();
			GetWorld()->GetTimerManager().SetTimer(ScanColdTimeTh, this,  &UPlayerSkillComponent::OutScanColdState, 1.0f, false, ScanColdTime);
			break;
		case ESkillType::Other:
			break;
		default:
			break;
	}
}

#pragma endregion


//��������
#pragma region CostEnergy
//�Ƿ�Ϊ�����۳�
void UPlayerSkillComponent::StartEnergyCost(bool IFTh = false)
{
	if (!IFTh)
	{
		EnergyCost();
	}
	else
	{
		GetWorld()->GetTimerManager().SetTimer(ScanEnergyCostTh, this, &UPlayerSkillComponent::EnergyCost, ScanECFrequency, true, 0.0f);
	}
}
//�����۳��С���
void UPlayerSkillComponent::EnergyCost()
{
	UE_LOG(PlayerSkillComponentLog, Display, TEXT("Hello"));
	playerCharacter->SetEnergy(-nowEnergyCostAmount);

	//���������ٵ�0�� �򴥷�������е�OnEnergyEmpty
	if (playerCharacter->GetEnergy() <= 0)
	{
		EndScan();
	}
}
//���������۳�
void UPlayerSkillComponent::EndEnergyCost()
{
	GetWorld()->GetTimerManager().ClearTimer(ScanEnergyCostTh);
}
#pragma endregion

#pragma region Scan
float UPlayerSkillComponent::GetPlayerNowEnergy()
{
	return playerCharacter->GetEnergy();
}

//��ʼɨ��
void UPlayerSkillComponent::StartScan()
{
	if (IFScanIsInCold)
	{
		return;
	}

	UE_LOG(PlayerSkillComponentLog, Display, TEXT("StartScan"));

	//���õ�ǰ�����۳�ֵ
	nowEnergyCostAmount = ScanEnergyCost;

	StartEnergyCost(true);
}

//����ɨ��
void UPlayerSkillComponent::EndScan()
{
	if (IFScanIsInCold)
	{
		return;
	}

	UE_LOG(PlayerSkillComponentLog, Display, TEXT("EndScan"));

	EndEnergyCost();
	//������ȴʱ��
	SetColdTimerHandle(ESkillType::Scan);
}

//����ɨ�����
void UPlayerSkillComponent::SetScanDistance(float newDistance = 5000)
{
	ScanDistance = newDistance;
}

//�ж��Ƿ�����ȴ��
void UPlayerSkillComponent::InScanColdState()
{
	IFScanIsInCold = true;
}

//�뿪��ȴ״̬
void UPlayerSkillComponent::OutScanColdState()
{
	IFScanIsInCold = false;
	GetWorld()->GetTimerManager().ClearTimer(ScanColdTimeTh);
}
#pragma endregion

//����һ����Χ�����ڼ���ڲ��Ŀɽ����ڵ�
#pragma region Interect Block
void UPlayerSkillComponent::CheckBlock()
{
	UE_LOG(LogTemp, Warning, TEXT("Interct"));

	FVector CharacterLocation = GetOwner()->GetActorLocation();

	// ����������ײ��
	FCollisionShape CollisionShape = FCollisionShape::MakeSphere(CheckRadius);

	// ������ײ��飬���ط�Χ�ڵ���������
	TArray<FHitResult> HitResults;
	FCollisionQueryParams CollisionParams;
	CollisionParams.AddIgnoredActor(GetOwner()); // ��������

	bool bHit = GetWorld()->SweepMultiByChannel(HitResults, CharacterLocation, CharacterLocation, FQuat::Identity, ECC_Visibility, CollisionShape, CollisionParams);

	TMap<float, ABlockActor*> blocks;

	if (bHit)
	{
		// �����ҵ�����������
		for (const FHitResult& Hit : HitResults)
		{
			AActor* HitActor = Hit.GetActor();
			if (IsActorInView(HitActor))
			{
				// �������Ŀ��������һ����Ϊ `Interact` �ķ���
				ABlockActor* Interactable = Cast<ABlockActor>(HitActor);
				if (Interactable)
				{
					float length = FVector::Distance(Interactable->GetActorLocation(), GetOwner()->GetActorLocation());
					blocks.Add(length, Interactable);
					//StartInterBlock(Interactable);
					//break;
				}
			}
		}
	}

	if (blocks.IsEmpty())
	{
		return;
	}
	else
	{
		// ��ʼ����С����������Ʒ��ָ��
		float MinDistance = TNumericLimits<float>::Max();  // ����Ϊ���ֵ
		ABlockActor* ClosestBlock = nullptr;

		// �������е�Ԫ��
		for (const TPair<float, ABlockActor*>& Elem : blocks)
		{
			float Distance = Elem.Key;  // ����� Key ���Ǿ���
			ABlockActor* BlockActor = Elem.Value; // ��Ʒ��Ӧ�� ABlockActor*

			// �����ǰ�ľ����С��������С����������Ʒ
			if (Distance < MinDistance)
			{
				MinDistance = Distance;
				ClosestBlock = BlockActor;
			}
		}

		StartInterBlock(ClosestBlock);
	}

	// ��ѡ���ڵ���ʱ���ӻ����η�Χ
	DrawDebugSphere(GetWorld(), CharacterLocation, CheckRadius, 12, FColor::Green, false, 2.0f);
}

//����Ƿ�����Ұ��Χ��
bool UPlayerSkillComponent::IsActorInView(AActor* Actor)
{
	if (!Actor) return false;

	// ��ȡ��ҿ���������Ұ��Ϣ
	APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();
	if (!PlayerController) return false;

	FVector PlayerLocation = playerCharacter->GetActorLocation();
	FVector PlayerForwardVector = playerCharacter->GetActorForwardVector();

	FVector ActorLocation = Actor->GetActorLocation();
	FVector ToActor = ActorLocation - PlayerLocation;

	// �������ǰ���ķ��������巽��֮��ļн�
	float DotProduct = FVector::DotProduct(PlayerForwardVector, ToActor.GetSafeNormal());

	// �ӽ���ֵ������45��Ϊ 0.7071�ĵ��ֵ��
	const float ViewAngleThreshold = FMath::Cos(FMath::DegreesToRadians(CheckViewAngle));  // ��Ұ45��

	return DotProduct > ViewAngleThreshold; // ������������ֵ������������Ұ��Χ��
}

void UPlayerSkillComponent::StartInterBlock(AActor* actor)
{
	UE_LOG(LogTemp, Warning, TEXT("Has InterctBlock"));

	InterBlock = actor;

	//����ҳ���������
	playerCharacter->FaceActor(actor);
	playerCharacter->ChangeInShoulderView();
	playerCharacter->StopInput();

	//���ɷ�ֽ
	GetWorld()->GetTimerManager().SetTimer(InterDelayTimer, this, &UPlayerSkillComponent::FireRunePaper, InterDelayTime, false, InterDelayTime);

	//��������һ����ʱ����ʵ��״̬��ת��
	GetWorld()->GetTimerManager().SetTimer(InterBackDelayTimer, this, &UPlayerSkillComponent::StopInterBlock, InterBackDelayTime, false, InterBackDelayTime);
}

void UPlayerSkillComponent::StopInterBlock()
{
	UE_LOG(LogTemp, Warning, TEXT("StopInterBlock"));

	playerCharacter->ChangeOutShoulderView();

	GetWorld()->GetTimerManager().SetTimer(ControlDelayTimer, this, &UPlayerSkillComponent::GetBackControl, 1.0f, false, 1.0f);
}

void UPlayerSkillComponent::GetBackControl()
{
	playerCharacter->StartInput();
}

void UPlayerSkillComponent::FireRunePaper()
{
	UE_LOG(LogTemp, Warning, TEXT("FireRunePaper"));

	if (Bullet == NULL)
		return;

	//�����ֽ���ɵ�λ��
	FVector InitPos = playerCharacter->GetMesh()->GetSocketLocation(SocketLocationName);
	// �������ҵ�Ŀ������ķ���
	FVector dir = InitPos - InterBlock->GetActorLocation();
	FRotator DirectionToTarget = (-dir.GetSafeNormal()).Rotation();
	GetWorld()->SpawnActor<ARunepaper>(Bullet, InitPos, DirectionToTarget);

	if (RunepaperFire != NULL)
	{
		UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), RunepaperFire, InitPos, DirectionToTarget);
	}
}

// ��������ȴ
void UPlayerSkillComponent::ResetShockwaveCooldown()
{
	bIsShockwaveOnCooldown = false;
	UE_LOG(PlayerSkillComponentLog, Warning, TEXT("Shockwave cooldown ended!"));
}

void UPlayerSkillComponent::PerformConeShockwave()
{
	if (!playerCharacter)
	{
		UE_LOG(PlayerSkillComponentLog, Warning, TEXT("Player Character not found")); //��������Ƿ����
		return;
	}

	if(bIsShockwaveOnCooldown)
	{
		UE_LOG(PlayerSkillComponentLog, Warning, TEXT("Shockwave is on cooldown!"));
		return;
	}

	bIsShockwaveOnCooldown = true;
	GetWorld()->GetTimerManager().SetTimer(ShockwaveCooldownTimerHandle, this, &UPlayerSkillComponent::ResetShockwaveCooldown, ShockwaveCooldownTime, false);

	FVector ShockwaveOrigin = playerCharacter->GetActorLocation();
	FVector ForwardVector = playerCharacter->GetActorForwardVector();

	float ConeAngle = 45.0f; //Բ׶���
	float MaxDistance = 500.0f; //������
	float ShockwaveStrength = 10000.0f; // �������С
	int NumRays = 30; //����׶�μ�����������
	float ShockwaveDamage = 30.0f; // ��ɵ��˺�(��ʱ��һ�� ��һ������Ҫ)
	
	TArray<AActor*> HitActors; //�洢��⵽������

	//׶�����߼��
	for (int i = 0; i < NumRays; ++i)
	{
		float Angle = FMath::RandRange(-ConeAngle, ConeAngle); //��������Ƕ�
		FRotator RotOffset(0.0f, Angle, 0.0f); //��ת�Ƕ�
		FVector RayDirection = RotOffset.RotateVector(ForwardVector); //��ת����
		FVector EndLocation = ShockwaveOrigin + (RayDirection * MaxDistance); //�յ�
		
		FHitResult HitResult;
		FCollisionQueryParams Params;
		Params.AddIgnoredActor(playerCharacter);

		bool bHit = GetWorld()->LineTraceSingleByChannel(HitResult, ShockwaveOrigin, EndLocation, ECC_Visibility, Params); //��鷶Χ���Ƿ������Ʒ
		if (bHit && HitResult.GetActor())
		{
			AActor* HitActor = HitResult.GetActor();
			if (HitActor -> ActorHasTag("Destructible") || HitActor -> ActorHasTag("Enemy"))
			{
				HitActors.AddUnique(HitActor);
			}
		}

		DrawDebugLine(GetWorld(), ShockwaveOrigin, EndLocation, FColor::Red, false, 0.5f, 0, 1.0f);
	}

	for(AActor* TargetActor : HitActors)
	{
		UPrimitiveComponent* TargetComponent = TargetActor->FindComponentByClass<UPrimitiveComponent>();
		if (!TargetComponent) continue;

		FVector DirectionToTarget = (TargetActor->GetActorLocation() - ShockwaveOrigin).GetSafeNormal();

		//�����ڴ���'Destructible'������ʩ�ӳ����
		if (TargetActor->ActorHasTag("Destructible") && TargetComponent->IsSimulatingPhysics())
		{
			TargetComponent->AddImpulse(DirectionToTarget * ShockwaveStrength);
		}

		//����Ч��Ӱ�죨�Է���һ,Ԥ����
		if (TargetActor -> ActorHasTag("Enemy"))
		{
			//�˺�û��

			if (TargetComponent->IsSimulatingPhysics())
			{
				TargetComponent->AddImpulse(DirectionToTarget * ShockwaveOrigin * 0.5f);
			}
		}
	}

	DrawDebugCone(GetWorld(), ShockwaveOrigin, ForwardVector, MaxDistance, FMath::DegreesToRadians(ConeAngle), FMath::DegreesToRadians(ConeAngle), 12, FColor::Blue, false, 1.0f);

}
#pragma endregion