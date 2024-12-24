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

	//初始化网格生成组件
	InitMeshComs();

	InitBlockActorsOnScene();
}

void ABlockActorManager::InitMeshComs()
{
	UEnum* EnumPtr = FindObject<UEnum>(ANY_PACKAGE, TEXT("EBlockType"), true);
	if (!EnumPtr) return;

	//按照类型来生成对应网格和连线组件
	for (auto block : AblockActorsOnScene)
	{
		//生成SPMC组件
		if (!BI_Line.Contains(block->blockType))
		{
			InitSplineMeshCom(EnumPtr, block->blockType);
		}

		//生成PMC组件
		if (!BI_Triangles.Contains(block->blockType))
		{
			InitProceduralMeshCom(EnumPtr, block->blockType);
		}

	}
}

//生成SplineMesh组件
void ABlockActorManager::InitSplineMeshCom(UEnum* EnumPtr, EBlockType type)
{
	//开个临时数组
	TArray<USplineMeshComponent*> tempTarray;

	//三条线
	for (int i = 0; i < 3; i++)
	{
		FString tempMeshComponentName = EnumPtr->GetNameStringByValue((int8)type) + "SplineMeshComponent" + FString::FromInt(i);

		//设置组件默认值
		USplineMeshComponent* splineMeshComponent = NewObject< USplineMeshComponent>(this, *tempMeshComponentName);
		splineMeshComponent->SetMobility(EComponentMobility::Type::Movable);
		splineMeshComponent->RegisterComponent();
		splineMeshComponent->AttachToComponent(GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform);

		//设置连线属性，网格体， 宽度， 朝前轴
		splineMeshComponent->SetStartScale(FVector2D(SplineWidth, SplineWidth));
		splineMeshComponent->SetEndScale(FVector2D(SplineWidth, SplineWidth));
		splineMeshComponent->SetStaticMesh(nullptr);
		splineMeshComponent->SetForwardAxis(ForwardAxis);

		//this->AddInstanceComponent(splineMeshComponent);

		//设置对应材质
		for (auto blockset : blockSettings)
		{
			if (blockset.blockType == type)
			{
				splineMeshComponent->SetMaterial(0, blockset.LineMaterial);
				break;
			}
		}

		tempTarray.Add(splineMeshComponent);
	}

	//Map中添加组件
	BI_Line.Add(type, tempTarray);
	UE_LOG(LogTemp, Warning, TEXT("Init SplineComponent"));
}

//生成ProceduralMesh组件
void ABlockActorManager::InitProceduralMeshCom(UEnum* EnumPtr, EBlockType type)
{
	FString temp = EnumPtr->GetNameStringByValue((int8)type) + "MeshComponent";

	//设置组件默认值
	UProceduralMeshComponent* ProceduralMesh = NewObject<UProceduralMeshComponent>(this, *temp);
	ProceduralMesh->SetMobility(EComponentMobility::Type::Movable);

	ProceduralMesh->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	//碰撞检测设置
	ProceduralMesh->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
	ProceduralMesh->SetCollisionResponseToChannel(CollisionType, ECollisionResponse::ECR_Overlap);

	//绑定对应碰撞事件
	ProceduralMesh->OnComponentBeginOverlap.AddDynamic(this, &ABlockActorManager::OnTriangleOverlapBegin);
	ProceduralMesh->OnComponentEndOverlap.AddDynamic(this, &ABlockActorManager::OnTriangleOnOverlapEnd);

	ProceduralMesh->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	ProceduralMesh->RegisterComponent();
	this->AddInstanceComponent(ProceduralMesh);

	//设置对应材质
	for (auto blockset : blockSettings)
	{
		if (blockset.blockType == type)
		{
			ProceduralMesh->SetMaterial(0, blockset.TriangleMaterial);
			break;
		}
	}

	//Map中添加组件
	BI_Triangles.Add(type, ProceduralMesh);
}

void ABlockActorManager::InitBlockActorsOnScene()
{
	//初始化节点
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

		//若节点默认为已激活，则添加到激活的列表中
		if (block->ISActive)
		{
			OnAddActiveBlocks(block);
		}
	}
}

//刷新节点， 节点类中调用
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

//在生成前还要清除一遍对应的静态网格实例
void ABlockActorManager::OnAddActiveBlocks(ABlockActor* blockActor)
{
	//已激活节点中进行添加
	AblockActorsOnActive.Add(blockActor);

	//对应Map类型的数量增加
	if (AblockTypeAmount.Contains(blockActor->blockType))
	{
		AblockTypeAmount[blockActor->blockType]++;
	}
	else
	{
		AblockTypeAmount.Add(blockActor->blockType, 1);
	}

	//大于二时，消除线，
	if (AblockTypeAmount[blockActor->blockType] > 2)
	{
		ClearLineByType(blockActor->blockType);
	}

	//生成线或者网格
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

//移除激活的节点
void ABlockActorManager::OnRemoveActiveBlocks(ABlockActor* blockActor)
{
	AblockActorsOnActive.Remove(blockActor);

	//减少数量
	if (AblockTypeAmount.Contains(blockActor->blockType))
	{
		AblockTypeAmount[blockActor->blockType]--;
	}

	//判断当前数量，来清除生成的连线或者三角面片
	if (AblockTypeAmount[blockActor->blockType] < 2)
	{
		ClearLineByType(blockActor->blockType);
	}
	else if (AblockTypeAmount[blockActor->blockType] < 3)
	{
		//在三个激活节点以下时，清除生成的边框以及面片
		ClearLineByType(blockActor->blockType);
		ClearTriangleByType(blockActor->blockType);
	}

	//根据当前数量生成连线或者三角面片
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

//生成连线,利用frame确认是否为边框， 若为边框，则三条线全部生成
void ABlockActorManager::InitLineByBlock(EBlockType type, bool frame)
{
	if (AblockTypeAmount[type] > 3 || AblockTypeAmount[type] < 2)
	{
		return;
	}

	//开个数组塞进去
	TArray<FVector> PointPos;

	for (auto block : AblockActorsOnActive)
	{
		if (type == block->blockType)
		{
			//由于是本地空间，所以需要减去父物体的世界位置
			PointPos.Add(block->GetInitPosition() - GetActorLocation());
			UE_LOG(BlockActorManagerLog, Warning, TEXT("Init Pos %s"), *(block->GetInitPosition() - GetActorLocation()).ToString());
		}
	}

	//对相关节点的序号
	//0,1 1,2 2,0 (%3)
	if (frame)
	{
		for (int i = 0; i < 3; i++)
		{
			UE_LOG(BlockActorManagerLog, Warning, TEXT("Init Line %d"), i);
			int a = i, b = (i + 1) % 3;
			BI_Line[type][i]->SetStaticMesh(staticMesh);
			BI_Line[type][i]->SetStartAndEnd(PointPos[a], PointPos[b] - PointPos[a], PointPos[b], PointPos[b] - PointPos[a]);
			UE_LOG(BlockActorManagerLog, Warning, TEXT("Init Pos A: %s, B: %s"), *(PointPos[a].ToString()), *(PointPos[b].ToString()));
		}
	}
	else
	{
		BI_Line[type][0]->SetStaticMesh(staticMesh);
		BI_Line[type][0]->SetStartAndEnd(PointPos[0], PointPos[1] - PointPos[0], PointPos[1], PointPos[1] - PointPos[0]);

	}
	//最基本的代码
	//BI_Line[type][index]->SetStaticMesh(staticMesh);
	//BI_Line[type][index]->SetStartAndEnd(PointPos[0], PointPos[1] - PointPos[0], PointPos[1], PointPos[1] - PointPos[0]);
}

//根据类型清除连线(仅在触发一条线的情况下使用，默认编号为0
void ABlockActorManager::ClearLineByType(EBlockType type)
{
	for (auto line : BI_Line[type])
	{
		line->SetStaticMesh(nullptr);
	}
}

//生成三角面片
void ABlockActorManager::InitTriangleByBlock(EBlockType type)
{
	if (AblockTypeAmount[type] != 3)
	{
		return;
	}

	TArray<FVector> vertices;
	//在BOA中找对应类型的生成位置
	for (auto block : AblockActorsOnActive)
	{
		if (block->blockType == type)
		{
			vertices.Add(block->GetInitPosition() - GetActorLocation());
		}
	}

	//对应顶点位置，序号， UV，切线，顶点颜色等
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

//根据类型清除三角面片
void ABlockActorManager::ClearTriangleByType(EBlockType type)
{
	BI_Triangles[type]->ClearAllMeshSections();
}

//清除生成的线条以及三角面片
void ABlockActorManager::ClearAllLineAndTriangle()
{
	for (auto lineArray : BI_Line)
	{
		for (auto line : lineArray.Value)
		{
			line->SetStaticMesh(nullptr);
		}
	}

	for (auto triangle : BI_Triangles)
	{
		triangle.Value->ClearAllMeshSections();
	}
}

//重叠开始事件
void ABlockActorManager::OnTriangleOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* c, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (HasOverlap) return; // 避免重复触发

	if (OtherActor && (OtherActor != this) && !HasOverlap)
	{
		// 处理重叠事件
		UE_LOG(LogTemp, Warning, TEXT("Begin Overlap with %s"), *OtherActor->GetName());
		HasOverlap = true; // 标记第一次重叠
	}
}

//重叠结束事件
void ABlockActorManager::OnTriangleOnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex)
{
	if (OtherActor && (OtherActor != this) && HasOverlap)
	{
		// 处理重叠事件
		UE_LOG(LogTemp, Warning, TEXT("End Overlap with %s"), *OtherActor->GetName());
		HasOverlap = false; // 标记第一次结束重叠
	}
}