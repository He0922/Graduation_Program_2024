#include "InterectBlock/BlockActorManager.h"
#include "Kismet/KismetMathLibrary.h"
#include "ProceduralMeshComponent.h"

DEFINE_LOG_CATEGORY_STATIC(BlockActorManagerLog, All, All);
ABlockActorManager::ABlockActorManager()
{
	PrimaryActorTick.bCanEverTick = false;
}

void ABlockActorManager::BeginPlay()
{
	Super::BeginPlay();

	refreshBlock.AddUObject(this, &ABlockActorManager::RefreshActiveBlocks);

	//��ʼ�������������
	InitMeshComs();

	InitBlockActorsOnScene();
}

void ABlockActorManager::InitMeshComs()
{
	UEnum* EnumPtr = FindObject<UEnum>(ANY_PACKAGE, TEXT("EBlockType"), true);
	if (!EnumPtr) return;

	for (auto block : AblockActorsOnScene)
	{
		//����SPMC���
		if (!BI_Line.Contains(block->blockType))
		{
			InitSplineMeshCom(EnumPtr, block->blockType);
		}

		//����PMC���
		if (!BI_Triangles.Contains(block->blockType))
		{
			InitProceduralMeshCom(EnumPtr, block->blockType);
		}

	}
}

void ABlockActorManager::InitSplineMeshCom(UEnum* EnumPtr, EBlockType type)
{
	FString tempMeshComponentName = EnumPtr->GetNameStringByValue((int8)type) + "SplineMeshComponent";

	USplineMeshComponent* splineMeshComponent = NewObject< USplineMeshComponent>(this, *tempMeshComponentName);
	splineMeshComponent->SetMobility(EComponentMobility::Type::Movable);
	splineMeshComponent->RegisterComponent();
	splineMeshComponent->AttachToComponent(GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform);

	splineMeshComponent->SetStartScale(FVector2D(SplineWidth, SplineWidth));
	splineMeshComponent->SetEndScale(FVector2D(SplineWidth, SplineWidth));
	splineMeshComponent->SetStaticMesh(nullptr);
	splineMeshComponent->SetForwardAxis(ForwardAxis);

	//this->AddInstanceComponent(splineMeshComponent);

	//���ö�Ӧ����
	for (auto blockset : blockSettings)
	{
		if (blockset.blockType == type)
		{
			splineMeshComponent->SetMaterial(0, blockset.LineMaterial);
			break;
		}
	}

	BI_Line.Add(type, splineMeshComponent);
}

void ABlockActorManager::InitProceduralMeshCom(UEnum* EnumPtr, EBlockType type)
{
	FString temp = EnumPtr->GetNameStringByValue((int8)type) + "MeshComponent";

	UProceduralMeshComponent* ProceduralMesh = NewObject<UProceduralMeshComponent>(this, *temp);

	ProceduralMesh->SetMobility(EComponentMobility::Type::Movable);

	ProceduralMesh->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	//��ײ�������
	ProceduralMesh->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
	ProceduralMesh->SetCollisionResponseToChannel(CollisionType, ECollisionResponse::ECR_Overlap);

	ProceduralMesh->OnComponentBeginOverlap.AddDynamic(this, &ABlockActorManager::OnTriangleOverlapBegin);
	ProceduralMesh->OnComponentEndOverlap.AddDynamic(this, &ABlockActorManager::OnTriangleOnOverlapEnd);

	ProceduralMesh->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	ProceduralMesh->RegisterComponent();
	this->AddInstanceComponent(ProceduralMesh);

	//���ö�Ӧ����
	for (auto blockset : blockSettings)
	{
		if (blockset.blockType == type)
		{
			ProceduralMesh->SetMaterial(0, blockset.TriangleMaterial);
			break;
		}
	}

	BI_Triangles.Add(type, ProceduralMesh);
}

void ABlockActorManager::InitBlockActorsOnScene()
{
	//��ʼ���ڵ�
	for (auto block : AblockActorsOnScene)
	{
		for (int i = 0; i < blockSettings.Num(); i++)
		{
			if (block->blockType == blockSettings[i].blockType)
			{
				block->InitBlock(blockSettings[i].defualtBlockMaterial, blockSettings[i].activeBlockMaterial, this);
				break;
			}
		}

		if (block->ISActive)
		{
			OnAddActiveBlocks(block);
		}
	}
}


void ABlockActorManager::RefreshActiveBlocks(ABlockActor* blockActor, bool IsActive)
{
	if (!blockActor)
		return;

	if (IsActive)
	{
		OnAddActiveBlocks(blockActor);
	}
	else
	{
		OnRemoveActiveBlocks(blockActor);
	}
}

//������ǰ��Ҫ���һ���Ӧ�ľ�̬����ʵ��
void ABlockActorManager::OnAddActiveBlocks(ABlockActor* blockActor)
{
	AblockActorsOnActive.Add(blockActor);

	if (AblockTypeAmount.Contains(blockActor->blockType))
	{
		AblockTypeAmount[blockActor->blockType]++;
	}
	else
	{
		AblockTypeAmount.Add(blockActor->blockType, 1);
	}

	//���ڶ�ʱ��������
	if (AblockTypeAmount[blockActor->blockType] > 2)
	{
		ClearLineByType(blockActor->blockType);
	}

	for (auto type : AblockTypeAmount)
	{
		if (type.Value == 2)
		{
			InitLineByBlock(type.Key);
		}
		else if (type.Value == 3)
		{
			InitTriangleByBlock(type.Key);
		}
	}
}

void ABlockActorManager::OnRemoveActiveBlocks(ABlockActor* blockActor)
{
	AblockActorsOnActive.Remove(blockActor);

	if (AblockTypeAmount.Contains(blockActor->blockType))
	{
		AblockTypeAmount[blockActor->blockType]--;
	}

	if (AblockTypeAmount[blockActor->blockType] < 2)
	{
		ClearLineByType(blockActor->blockType);
	}
	else if (AblockTypeAmount[blockActor->blockType] < 3)
	{
		ClearTriangleByType(blockActor->blockType);
	}

	for (auto type : AblockTypeAmount)
	{
		if (type.Value == 2)
		{
			InitLineByBlock(type.Key);
		}
		else if (type.Value == 3)
		{
			InitTriangleByBlock(type.Key);
		}
	}
}

void ABlockActorManager::InitLineByBlock(EBlockType type)
{
	if (AblockTypeAmount[type] != 2)
	{
		return;
	}

	//������������ȥ
	TArray<FVector> PointPos;

	for (auto block : AblockActorsOnActive)
	{
		if (type == block->blockType)
		{
			PointPos.Add(block->GetInitPosition() - GetActorLocation());
		}
	}

	BI_Line[type]->SetStaticMesh(staticMesh);
	BI_Line[type]->SetStartAndEnd(PointPos[0], PointPos[1] - PointPos[0], PointPos[1], PointPos[1] - PointPos[0]);
}

void ABlockActorManager::ClearLineByType(EBlockType type)
{
	BI_Line[type]->SetStaticMesh(nullptr);
}

void ABlockActorManager::InitTriangleByBlock(EBlockType type)
{
	if (AblockTypeAmount[type] != 3)
	{
		return;
	}

	TArray<FVector> vertices;
	//��BOA���Ҷ�Ӧ���͵�����λ��
	for (auto block : AblockActorsOnActive)
	{
		if (block->blockType == type)
		{
			vertices.Add(block->GetInitPosition() - GetActorLocation());
		}
	}

	TArray<int32> triangles;
	triangles.Add(0);
	triangles.Add(1);
	triangles.Add(2);

	TArray<FVector> normals;
	normals.Add(FVector(0, 0, 1));
	normals.Add(FVector(0, 0, 1));
	normals.Add(FVector(0, 0, 1));

	TArray<FProcMeshTangent> tangents;
	TArray<FVector2D> uvs;
	TArray<FLinearColor> vertexColors;

	BI_Triangles[type]->CreateMeshSection_LinearColor(0, vertices, triangles, normals, uvs, vertexColors, tangents, true);
}

void ABlockActorManager::ClearTriangleByType(EBlockType type)
{
	BI_Triangles[type]->ClearAllMeshSections();
}

//������ɵ������Լ�������Ƭ
void ABlockActorManager::ClearAllLineAndTriangle()
{
	for (auto line : BI_Line)
	{
		line.Value->SetStaticMesh(nullptr);
	}

	for (auto triangle : BI_Triangles)
	{
		triangle.Value->ClearAllMeshSections();
	}
}

void ABlockActorManager::OnTriangleOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* c, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (HasOverlap) return; // �����ظ�����

	if (OtherActor && (OtherActor != this) && !HasOverlap)
	{
		// �����ص��¼�
		UE_LOG(LogTemp, Warning, TEXT("Begin Overlap with %s"), *OtherActor->GetName());
		HasOverlap = true; // ��ǵ�һ���ص�
	}
}

void ABlockActorManager::OnTriangleOnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex)
{
	if (OtherActor && (OtherActor != this) && HasOverlap)
	{
		// �����ص��¼�
		UE_LOG(LogTemp, Warning, TEXT("End Overlap with %s"), *OtherActor->GetName());
		HasOverlap = false; // ��ǵ�һ�ν����ص�
	}
}