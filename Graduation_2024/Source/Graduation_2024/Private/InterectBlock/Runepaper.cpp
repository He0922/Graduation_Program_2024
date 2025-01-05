#include "InterectBlock/Runepaper.h"
#include "Components/SphereComponent.h"
#include "Gameframework/ProjectileMovementComponent.h"

#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"

#include "NiagaraFunctionLibrary.h"
#include "NiagaraComponent.h"

#include "InterectBlock/BlockActor.h"

DEFINE_LOG_CATEGORY_STATIC(RunepaperLog, All, All);
ARunepaper::ARunepaper()
{
	PrimaryActorTick.bCanEverTick = true;

	CollisionComponent = CreateDefaultSubobject<USphereComponent>("CollisionComponent");
	CollisionComponent->InitSphereRadius(50.0f);//��ʼ��ײ��İ뾶
	CollisionComponent->SetSimulatePhysics(true);//����ģ������
	CollisionComponent->SetEnableGravity(false);//��������
	CollisionComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);//������ײ����Ϊɨ��
	CollisionComponent->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Overlap);
	SetRootComponent(CollisionComponent);

	RunePaperMesh = CreateDefaultSubobject<UStaticMeshComponent>("RunePaperMeshComponent");
	//������ײ����Ϊ��ɨ��
	RunePaperMesh->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	//���û�ȡ����ͨ������ײ��ӦΪ�赲
	RunePaperMesh->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Overlap);
	RunePaperMesh->SetupAttachment(CollisionComponent);

	ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>("ProjectileMovementComponent");
	ProjectileMovementComponent->UpdatedComponent = CollisionComponent;
	ProjectileMovementComponent->InitialSpeed = 2000.0f;
	ProjectileMovementComponent->MaxSpeed = 2000.0f;
	ProjectileMovementComponent->ProjectileGravityScale = 0.0f;

	// �����������
	RunepaperVFX = CreateDefaultSubobject<UNiagaraComponent>(TEXT("RunePaperNiagaraComponent"));
	RunepaperVFX->SetupAttachment(RootComponent);  // ������������ӵ������
}

void ARunepaper::BeginPlay()
{
	Super::BeginPlay();
	check(ProjectileMovementComponent);
	check(CollisionComponent);

	//ProjectileMovementComponent->Velocity = ShotDirection * ProjectileMovementComponent->InitialSpeed;
	ProjectileMovementComponent->Activate();	//���Է�����
	ProjectileMovementComponent->Velocity = ShotDirection * ProjectileMovementComponent->InitialSpeed;

	//����owner
	CollisionComponent->IgnoreActorWhenMoving(GetOwner(), true);
	//����ί�У�����Ŀ��
	CollisionComponent->OnComponentBeginOverlap.AddDynamic(this, &ARunepaper::OnProjectileHit);
	//CollisionComponent->OnComponentHit.AddDynamic(this, &ARunepaper::OnProjectileHit);

	SetLifeSpan(LifeSeconds);
}

void ARunepaper::OnProjectileHit(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep,
	const FHitResult& SweepResult)
{
	// �������Ŀ��������һ����Ϊ `Interact` �ķ���
	ABlockActor* Interactable = Cast<ABlockActor>(OtherActor);
	if (!Interactable)
		return;

	UE_LOG(LogTemp, Display, TEXT("InterctBlock"));
	Interactable->InteractionBlock();  // ���ýӿ��еķ���
	Destroy();
}


