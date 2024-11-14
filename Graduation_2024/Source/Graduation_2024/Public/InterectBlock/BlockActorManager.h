#pragma once

#include "CoreMinimal.h"
#include "InterectBlock/BlockActor.h"
#include "GameFramework/Actor.h"

#include "Components/SplineComponent.h"
#include "Components/SplineMeshComponent.h"
#include "ProceduralMeshComponent.h"

#include "BlockActorManager.generated.h"

USTRUCT(BlueprintType)
struct FBlockSettings
{
	GENERATED_USTRUCT_BODY()

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
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "blockSettings")
	TArray <FBlockSettings> blockSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BlockActors")
	TArray<ABlockActor*> AblockActorsOnScene;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SplineForwardAxis")
	TEnumAsByte<ESplineMeshAxis::Type> ForwardAxis = ESplineMeshAxis::Z;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "StaticMesh")
	UStaticMesh* staticMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SplineWidth", meta = (ClampMin = "0.0", ClampMax = "1.0"))
	float SplineWidth = 0.5f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CollisionType")
	TEnumAsByte <ECollisionChannel> CollisionType;

public:
	FRefrashBlock refreshBlock;

	void ClearAllLineAndTriangle();

private:
	TArray<ABlockActor*> AblockActorsOnActive;
	TMap<EBlockType, int> AblockTypeAmount;

	//�洢���ɵ��ߺ�������
	TMap<EBlockType, USplineMeshComponent*> BI_Line;
	TMap<EBlockType, UProceduralMeshComponent*> BI_Triangles;

	//�ڵ����
private:
	void InitMeshComs();
	void InitSplineMeshCom(UEnum* EnumPtr, EBlockType type);
	void InitProceduralMeshCom(UEnum* EnumPtr, EBlockType type);
	void InitBlockActorsOnScene();

	void RefreshActiveBlocks(ABlockActor* blockActor, bool IsActive);

	void OnAddActiveBlocks(ABlockActor* blockActor);
	void OnRemoveActiveBlocks(ABlockActor* blockActor);

	void InitLineByBlock(EBlockType type);
	void InitTriangleByBlock(EBlockType type);

	void ClearLineByType(EBlockType type);
	void ClearTriangleByType(EBlockType type);

	//��ײ��أ���ֹ�ظ�����
private:
	bool HasOverlap = false;

	//������Ƭ�ص��¼�
	UFUNCTION()
	void OnTriangleOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
		UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep,
		const FHitResult& SweepResult);

	UFUNCTION()
	void OnTriangleOnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
		UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex);

};
