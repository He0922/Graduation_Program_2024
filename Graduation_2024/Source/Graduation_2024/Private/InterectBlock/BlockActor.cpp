#include "InterectBlock/BlockActor.h"

#include "Character/Player/PlayerCharacter.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h"
#include "GameFramework/Actor.h"
#include "InterectBlock/BlockActorManager.h"

#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h" 
DEFINE_LOG_CATEGORY_STATIC(BlockActorLog, All, All);
ABlockActor::ABlockActor()
{
    PrimaryActorTick.bCanEverTick = false;

    // ��ʼ����̬�������
    BlockMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BlockMesh"));
    RootComponent = BlockMesh;

    // ������ײ���
    InteractionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("InteractionBox"));
    InteractionBox->SetupAttachment(RootComponent);
    InteractionBox->SetCollisionProfileName(TEXT("Trigger"));

    bIsPlayerInRange = false;

    InitPosition = InitPosition + GetActorLocation();
}


// Called when the game starts or when spawned
void ABlockActor::BeginPlay()
{
    Super::BeginPlay();

    InteractionBox->OnComponentBeginOverlap.AddDynamic(this, &ABlockActor::OnOverlapBegin);
    InteractionBox->OnComponentEndOverlap.AddDynamic(this, &ABlockActor::OnOverlapEnd);

    SetHighlight(false);
}

//��ʼ���ڵ�,���ʣ��Լ����������
void ABlockActor::InitBlock(UMaterialInstance* DefualtBlockMaterial, UMaterialInstance* ActiveBlockMaterial, ABlockActorManager* blockactorManager)
{
    myBlockActorManager = blockactorManager;
    defualtBlockMaterial = DefualtBlockMaterial;
    activeBlockMaterial = ActiveBlockMaterial;

    SetNowState();
}

void ABlockActor::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

//���õ�ǰ�����ԣ� �����ı���ʡ�����
void ABlockActor::SetNowState()
{
    UStaticMeshComponent* MeshComp = FindComponentByClass<UStaticMeshComponent>();

    if (ISActive)
    {
        MeshComp->SetMaterial(0, activeBlockMaterial);
    }
    else
    {
        MeshComp->SetMaterial(0, defualtBlockMaterial);
    }
}

//�ж�����Ƿ������ײ��Χ
void ABlockActor::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    if (OtherActor && OtherActor->IsA(ACharacter::StaticClass()))
    {
        bIsPlayerInRange = true;
    }
}

//�ж�����Ƿ��뿪��ײ��Χ
void ABlockActor::OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
    if (OtherActor && OtherActor->IsA(ACharacter::StaticClass()))
    {
        bIsPlayerInRange = false;
    }
}

//��ڵ㽻���� ���Ҹ��ڵ�������Ӧ�¼�����
void ABlockActor::InteractionBlock()
{
    ISActive = !ISActive;

    FString temp = ISActive ? "True" : "False";

    UE_LOG(BlockActorLog, Warning, TEXT("Block Active: %s"), *temp);

    //���õ�ǰ״̬�������ýڵ�����࣬��ˢ�½ڵ㣬��������
    SetNowState();
    myBlockActorManager->refreshBlock.Broadcast(this, ISActive);
}

void ABlockActor::SetHighlight(bool bEnable)
{
    if (BlockMesh)
    {
        // ����/�����Զ��������Ⱦ
        BlockMesh->SetRenderCustomDepth(bEnable);

        // ����ģ��ֵ����������ʱ��Ч��
        if (bEnable)
        {
            BlockMesh->SetCustomDepthStencilValue(StencilValue);
        }
    }
}

