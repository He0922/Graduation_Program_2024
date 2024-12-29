#include "InterectBlock/BlockActorManager.h"

#include "Kismet/KismetMathLibrary.h"
#include "ProceduralMeshComponent.h"

#include "NiagaraFunctionLibrary.h"
#include "NiagaraComponent.h"

DEFINE_LOG_CATEGORY_STATIC(BlockActorManagerLog, All, All);
ABlockActorManager::ABlockActorManager()
{
	PrimaryActorTick.bCanEverTick = false;

	rootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RootComponent"));
	SetRootComponent(rootComponent);

	// �����������
	InterBlockVFX = CreateDefaultSubobject<UNiagaraComponent>(TEXT("RunePaperNiagaraComponent"));
	InterBlockVFX->SetupAttachment(RootComponent);  // ������������ӵ������
}

void ABlockActorManager::BeginPlay()
{
	Super::BeginPlay();

	refreshBlock.AddUObject(this, &ABlockActorManager::RefreshActiveBlocks);

	//��ʼ�������������
	InitMeshComs();
	UE_LOG(BlockActorManagerLog, Warning, TEXT("Actor Pos %s"), *(GetActorLocation().ToString()));

	InitBlockActorsOnScene();
}

#pragma region Init

void ABlockActorManager::InitMeshComs()
{
	UEnum* EnumPtr = FindObject<UEnum>(ANY_PACKAGE, TEXT("EBlockType"), true);
	if (!EnumPtr) return;

	//�������������ɶ�Ӧ������������
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

//����SplineMesh���
void ABlockActorManager::InitSplineMeshCom(UEnum* EnumPtr, EBlockType type)
{
	//������ʱ����
	FSpline tempSpline;

	//������
	for (int i = 0; i < 3; i++)
	{
		FString tempMeshComponentName = EnumPtr->GetNameStringByValue((int8)type) + "SplineMeshComponent" + FString::FromInt(i);

		//�������Ĭ��ֵ
		USplineMeshComponent* splineMeshComponent = NewObject< USplineMeshComponent>(this, *tempMeshComponentName);
		splineMeshComponent->SetMobility(EComponentMobility::Type::Movable);
		splineMeshComponent->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
		splineMeshComponent->RegisterComponent();

		//�����������ԣ������壬 ��ȣ� ��ǰ��
		splineMeshComponent->SetStartScale(FVector2D(SplineWidth, SplineWidth));
		splineMeshComponent->SetEndScale(FVector2D(SplineWidth, SplineWidth));
		splineMeshComponent->SetStaticMesh(nullptr);
		splineMeshComponent->SetForwardAxis(ForwardAxis);
		this->AddInstanceComponent(splineMeshComponent);

		//���ö�Ӧ����
		for (auto blockset : blockSettings)
		{
			if (blockset.blockType == type)
			{
				UE_LOG(LogTemp, Warning, TEXT("Material"));
				splineMeshComponent->SetMaterial(0, blockset.LineMaterial);
				break;
			}
		}

		tempSpline.splines.Add(splineMeshComponent);
	}

	//Map��������
	BI_Line.Add(type, tempSpline);
}

//����ProceduralMesh���
void ABlockActorManager::InitProceduralMeshCom(UEnum* EnumPtr, EBlockType type)
{
	FString temp = EnumPtr->GetNameStringByValue((int8)type) + "MeshComponent";

	//�������Ĭ��ֵ
	UProceduralMeshComponent* ProceduralMesh = NewObject<UProceduralMeshComponent>(this, *temp);
	ProceduralMesh->SetMobility(EComponentMobility::Type::Movable);

	ProceduralMesh->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	//��ײ�������
	ProceduralMesh->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
	ProceduralMesh->SetCollisionResponseToChannel(CollisionType, ECollisionResponse::ECR_Overlap);

	//�󶨶�Ӧ��ײ�¼�
	ProceduralMesh->OnComponentBeginOverlap.AddDynamic(this, &ABlockActorManager::OnTriangleOverlapBegin);
	ProceduralMesh->OnComponentEndOverlap.AddDynamic(this, &ABlockActorManager::OnTriangleOnOverlapEnd);

	ProceduralMesh->SetupAttachment(RootComponent);
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

	//Map��������
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

		//���ڵ�Ĭ��Ϊ�Ѽ������ӵ�������б���
		if (block->ISActive)
		{
			OnAddActiveBlocks(block);
		}
	}
}

#pragma endregion

#pragma region Active Block
//ˢ�½ڵ㣬 �ڵ����е���
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
	//�Ѽ���ڵ��н������
	AblockActorsOnActive.Add(blockActor);

	//��ӦMap���͵���������
	if (AblockTypeAmount.Contains(blockActor->blockType))
	{
		AblockTypeAmount[blockActor->blockType]++;
	}
	else
	{
		AblockTypeAmount.Add(blockActor->blockType, 1);
	}

	//���ڶ�ʱ�������ߣ�
	if (AblockTypeAmount[blockActor->blockType] > 2)
	{
		ClearSingleLineByType(blockActor->blockType);
	}

	//�����߻�������
	for (auto type : AblockTypeAmount)
	{
		if (type.Value == 2)
		{
			InitLineByBlock(type.Key, false);
		}
		else if (type.Value == 3)
		{
			InitLineByBlock(type.Key, true);
			InitTriangleByBlock(type.Key);
		}
	}
}

//�Ƴ�����Ľڵ�
void ABlockActorManager::OnRemoveActiveBlocks(ABlockActor* blockActor)
{
	AblockActorsOnActive.Remove(blockActor);

	//��������
	if (AblockTypeAmount.Contains(blockActor->blockType))
	{
		AblockTypeAmount[blockActor->blockType]--;
	}

	//�жϵ�ǰ��������������ɵ����߻���������Ƭ
	if (AblockTypeAmount[blockActor->blockType] < 2)
	{
		ClearSingleLineByType(blockActor->blockType);
	}
	else if (AblockTypeAmount[blockActor->blockType] < 3)
	{
		//����������ڵ�����ʱ��������ɵı߿��Լ���Ƭ
		ClearAllLineByType(blockActor->blockType);
		ClearTriangleByType(blockActor->blockType);
	}

	//���ݵ�ǰ�����������߻���������Ƭ
	for (auto type : AblockTypeAmount)
	{
		if (type.Value == 2)
		{
			InitLineByBlock(type.Key, false);
		}
		else if (type.Value == 3)
		{
			InitTriangleByBlock(type.Key);
		}
	}
}
#pragma endregion

#pragma region Edge
//��������,����frameȷ���Ƿ�Ϊ�߿� ��Ϊ�߿���������ȫ������
void ABlockActorManager::InitLineByBlock(EBlockType type, bool frame)
{
	if (AblockTypeAmount[type] > 3 || AblockTypeAmount[type] < 2)
	{
		return;
	}

	//������������ȥ
	TArray<FVector> PointPos;
	FVector myActorPos = GetActorLocation();

	for (auto block : AblockActorsOnActive)
	{
		if (type == block->blockType)
		{
			//�����Ǳ��ؿռ䣬������Ҫ��ȥ�����������λ��
			PointPos.Add(block->GetInitPosition() - myActorPos);
			UE_LOG(BlockActorManagerLog, Warning, TEXT("Init Pos %s, Actor Pos %s"), *(block->GetInitPosition().ToString()), *(GetActorLocation().ToString()));
		}
	}

	//����ؽڵ�����
	//0,1 1,2 2,0 (%3)
	if (frame)
	{
		for (int i = 0; i < 3; i++)
		{
			int a = i, b = (i + 1) % 3;
			BI_Line[type].splines[i]->SetStaticMesh(staticMesh);
			BI_Line[type].splines[i]->SetStartAndEnd(PointPos[a], PointPos[b] - PointPos[a], PointPos[b], PointPos[b] - PointPos[a]);
		}
	}
	else
	{
		BI_Line[type].splines[0]->SetStaticMesh(staticMesh);
		BI_Line[type].splines[0]->SetStartAndEnd(PointPos[0], PointPos[1] - PointPos[0], PointPos[1], PointPos[1] - PointPos[0]);
		UE_LOG(BlockActorManagerLog, Warning, TEXT("Init Pos 0: %s, 1: %s"), *(PointPos[0].ToString()), *(PointPos[1].ToString()));

		//����������Ч(������λ��)
		BI_Line[type].blockPoss = PointPos;
		PlayVFX(EdgeConnect, type);
	}
}

//���������������(���ڴ���һ���ߵ������ʹ�ã�Ĭ�ϱ��Ϊ0
void ABlockActorManager::ClearSingleLineByType(EBlockType type)
{
	BI_Line[type].splines[0]->SetStaticMesh(nullptr);
	PlayVFX(EdgeDisconnection, type);
}

void ABlockActorManager::ClearAllLineByType(EBlockType type)
{
	for (auto line : BI_Line[type].splines)
	{
		line->SetStaticMesh(nullptr);
	}
}
#pragma endregion

#pragma region Triangle

//����������Ƭ
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

	//��Ӧ����λ�ã���ţ� UV�����ߣ�������ɫ��
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

//�����������������Ƭ
void ABlockActorManager::ClearTriangleByType(EBlockType type)
{
	BI_Triangles[type]->ClearAllMeshSections();
}

//������ɵ������Լ�������Ƭ
void ABlockActorManager::ClearAllLineAndTriangle()
{
	for (auto lineArray : BI_Line)
	{
		for (auto line : lineArray.Value.splines)
		{
			line->SetStaticMesh(nullptr);
		}
	}

	for (auto triangle : BI_Triangles)
	{
		triangle.Value->ClearAllMeshSections();
	}
}
#pragma endregion

#pragma region VFX

void ABlockActorManager::PlayVFX(UNiagaraSystem* niagara, EBlockType type)
{
	if (!niagara)
		return;

	float distance = FVector::Distance(BI_Line[type].blockPoss[0] , BI_Line[type].blockPoss[1]) / 100.0f;//��100ת����ʽ
	FVector Initposition = (BI_Line[type].blockPoss[0] + BI_Line[type].blockPoss[1]) / 2 + GetActorLocation();


	InterBlockVFX->SetAsset(niagara);
	InterBlockVFX->SetVariableFloat(lengthParamter, distance);
	InterBlockVFX->SetWorldLocation(Initposition);
	if (IfEdgeRotate)
	{
		FVector Direction = BI_Line[type].blockPoss[0] - Initposition;
		FRotator TargetRotation = Direction.Rotation();
		// ��ȡĿ��λ�ú͵�ǰ�����λ��
		FVector CurrentLocation = InterBlockVFX->GetComponentLocation();

		// ����Ŀ���뵱ǰ����֮��ķ�������
		FVector DirectionToTarget = BI_Line[type].blockPoss[0] - CurrentLocation;

		// ����������ת��Ϊ��ת��ʹ�� Z ��ָ��Ŀ��
		FRotator NewRotation = DirectionToTarget.Rotation();

		// ����ת����Ϊʹ X ��ָ��Ŀ��
		// �����ϣ�� X ��ָ��Ŀ�꣬������ Z �ᣬ�����ͨ���޸� Yaw �� Pitch ��ʵ��
		FRotator AdjustedRotation = FRotator(NewRotation.Pitch, NewRotation.Yaw, 0.0f);  // ���� Yaw �� Pitch ����ת

		// ��תʱ������ X �ᳯ��Ŀ��
		// Ϊ��ȷ�� X ��ָ��Ŀ�꣬���ǽ������ʹ�ã�
		// ��Ŀ��ķ�������ת��Ϊ�µ���ת����ʹ X ��ָ��Ŀ�ꡣ
		FVector RightVector = InterBlockVFX->GetRightVector();  // ��ȡ�����X�ᣨ��������

		// ʹ����������������ȷ����ת
		FVector AdjustedDirection = DirectionToTarget.GetSafeNormal();
		FQuat QuatRotation = FQuat::FindBetweenVectors(RightVector, AdjustedDirection);
		InterBlockVFX->SetWorldRotation(QuatRotation.Rotator());
		UE_LOG(BlockActorManagerLog, Warning, TEXT("%s"), *QuatRotation.Rotator().ToString());

	}
	else
	{
		InterBlockVFX->SetWorldRotation(EdgeRotate);
		UE_LOG(BlockActorManagerLog, Warning, TEXT("%s"), *EdgeRotate.ToString());
	}
	InterBlockVFX->ActivateSystem();
}
#pragma endregion

#pragma region Overlap

//�ص���ʼ�¼�
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

//�ص������¼�
void ABlockActorManager::OnTriangleOnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex)
{
	if (OtherActor && (OtherActor != this) && HasOverlap)
	{
		// �����ص��¼�
		UE_LOG(LogTemp, Warning, TEXT("End Overlap with %s"), *OtherActor->GetName());
		HasOverlap = false; // ��ǵ�һ�ν����ص�
	}
}
#pragma endregion
