#include "InterectBlock/Runepaper.h"
#include "Components/SphereComponent.h"
#include "Gameframework/ProjectileMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"


// Sets default values
ARunepaper::ARunepaper()
{
	PrimaryActorTick.bCanEverTick = false;

	CollisionComponent = CreateDefaultSubobject<USphereComponent>("CollisionComponent");
	//��ʼ��ײ��İ뾶
	CollisionComponent->InitSphereRadius(5.0f);

	//������ײ����Ϊ��ɨ��
	CollisionComponent->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	//���û�ȡ����ͨ������ײ��ӦΪ�赲
	CollisionComponent->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Block);

	SetRootComponent(CollisionComponent);

	ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>("ProjectileMovementComponent");
	ProjectileMovementComponent->InitialSpeed = 2000.0f;
	ProjectileMovementComponent->ProjectileGravityScale = 0.0f;
}

// Called when the game starts or when spawned
void ARunepaper::BeginPlay()
{
	Super::BeginPlay();
	check(ProjectileMovementComponent);
	check(CollisionComponent);


	ProjectileMovementComponent->Velocity = ShotDirection * ProjectileMovementComponent->InitialSpeed;

	//����owner
	CollisionComponent->IgnoreActorWhenMoving(GetOwner(), true);
	//����ί�У�����Ŀ��
	CollisionComponent->OnComponentHit.AddDynamic(this, &ARunepaper::OnProjectileHit);

	SetLifeSpan(LifeSeconds);
}

void ARunepaper::OnProjectileHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	UE_LOG(LogTemp, Display, TEXT("1"));
}


