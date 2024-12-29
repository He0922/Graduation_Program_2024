#pragma once

#include "CoreMinimal.h"
#include "InterectBlock/BlockActor.h"
#include "GameFramework/Actor.h"

#include "Components/SplineComponent.h"
#include "Components/SplineMeshComponent.h"
#include "ProceduralMeshComponent.h"

#include "BlockActorManager.generated.h"

class UNiagaraSystem;
class UNiagaraComponent;
//节点参数设置的结构体
USTRUCT(BlueprintType)
struct FBlockSettings
{
	GENERATED_USTRUCT_BODY()

	//节点类型对应的材质， 默认材质， 激活材质， 连线材质， 网格材质
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "blockSettings")
	EBlockType blockType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "blockSettings")
	UMaterialInstance* defualtBlockMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "blockSettings")
	UMaterialInstance* activeBlockMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "blockSettings")
	UMaterialInstance* LineMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "blockSettings")
	UMaterialInstance* TriangleMaterial;
};

USTRUCT(BlueprintType)
struct FSpline
{
	GENERATED_USTRUCT_BODY()

	TArray<USplineMeshComponent*> splines;
	TArray<FVector> blockPoss;
};

DECLARE_TS_MULTICAST_DELEGATE_TwoParams(FRefrashBlock, ABlockActor*, bool);
UCLASS()
class GRADUATION_2024_API ABlockActorManager : public AActor
{
	GENERATED_BODY()
	
public:
	ABlockActorManager();

protected:
	virtual void BeginPlay() override;

protected:
	//手动添加节点参数
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "blockSettings")
	TArray <FBlockSettings> blockSettings;

	//手动添加场景中的节点
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BlockActors")
	TArray<ABlockActor*> AblockActorsOnScene;

	//连线网格体的向前轴
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SplineForwardAxis")
	TEnumAsByte<ESplineMeshAxis::Type> ForwardAxis = ESplineMeshAxis::Z;

	//节点连线的网格体
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "StaticMesh")
	UStaticMesh* staticMesh;

	//连线宽度
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SplineWidth", meta = (ClampMin = "0.0", ClampMax = "1.0"))
	float SplineWidth = 0.5f;

	//指定可碰撞的类型
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CollisionType")
	TEnumAsByte <ECollisionChannel> CollisionType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Effects", meta = (ClampMin = "0", ClampMax = "1"))
	float edgeLengthAdjust = 1.0f;

	//两个特效系统线断开，线连接
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Effects")
	FName lengthParamter = "EdgeLength1";
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Effects")
	UNiagaraSystem* EdgeConnect;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Effects")
	UNiagaraSystem* EdgeDisconnection;


public:
	FRefrashBlock refreshBlock;

	void ClearAllLineAndTriangle();

private:
	UPROPERTY(VisibleAnywhere, Category = "Effects")
	UNiagaraComponent* InterBlockVFX;

private:
	//用于存储已经激活的节点，以及对应类型个数
	TArray<ABlockActor*> AblockActorsOnActive;
	TMap<EBlockType, int> AblockTypeAmount;

	//存储生成的线和三角面
	TMap<EBlockType, FSpline> BI_Line;
	TMap<EBlockType, UProceduralMeshComponent*> BI_Triangles;

	//节点操作
private:
	//初始化节点，以及节点管理
	void InitMeshComs();
	void InitSplineMeshCom(UEnum* EnumPtr, EBlockType type);
	void InitProceduralMeshCom(UEnum* EnumPtr, EBlockType type);
	void InitBlockActorsOnScene();

	//刷新活动的节点
	void RefreshActiveBlocks(ABlockActor* blockActor, bool IsActive);

	//添加以及移除活动的节点
	void OnAddActiveBlocks(ABlockActor* blockActor);
	void OnRemoveActiveBlocks(ABlockActor* blockActor);

	//生成连线，以及网格
	void InitLineByBlock(EBlockType type, bool frame);
	void InitTriangleByBlock(EBlockType type);

	//清除对应连线以及网格
	void ClearSingleLineByType(EBlockType type);
	void ClearAllLineByType(EBlockType type);
	void ClearTriangleByType(EBlockType type);

	//根据类型生成当前的特效
	void PlayVFX(UNiagaraSystem* niagara, EBlockType type);

//碰撞相关，防止重复触发
private:
	bool HasOverlap = false;

	UStaticMeshComponent* rootComponent;

	//三角面片重叠事件
	UFUNCTION()
	void OnTriangleOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
		UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep,
		const FHitResult& SweepResult);

	UFUNCTION()
	void OnTriangleOnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
		UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex);

};
