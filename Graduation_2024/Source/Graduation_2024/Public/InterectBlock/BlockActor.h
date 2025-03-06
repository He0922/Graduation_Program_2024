#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BlockActor.generated.h"

UENUM(BlueprintType)  // ��������ͼ�пɼ�
enum class EBlockType : uint8
{
	Red UMETA(DisplayName = "Red"),
	Blue UMETA(DisplayName = "Blue"),
	Yellow UMETA(DisplayName = "Yellow"),
	Green UMETA(DisplayName = "Green")
};

class ABlockActorManager;

UCLASS()
class GRADUATION_2024_API ABlockActor : public AActor
{
	GENERATED_BODY()
	
public:
    // Sets default values for this actor's properties
    ABlockActor();

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

public:
    //Ĭ��ֵ����
    //����
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BlockType")
    EBlockType blockType = EBlockType::Red;

    //Ĭ���Ƿ�Ϊ����ڵ�
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BlockType")
    bool ISActive = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "StencilIndex")
    int32 StencilValue = 0;

    //�ڵ��ʼ�����ɽڵ���������
    void InitBlock(UMaterialInstance* DefualtBlockMaterial, UMaterialInstance* ActiveBlockMaterial, ABlockActorManager* myBlockactorManager);

    // ����Ƿ����˽�����
    void InteractionBlock();

    //������Ƭ���������ɵ�λ�ã� ��������Ϊԭ��ƫ��
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "InitPosition")
    FVector InitPosition;

    //�õ�����ռ��µ�����λ��
    FVector GetInitPosition() const { return InitPosition + GetActorLocation(); }

    void SetHighlight(bool bEnable);

protected:
    // Called every frame
    virtual void Tick(float DeltaTime) override;

    UPROPERTY(VisibleAnywhere)
    UStaticMeshComponent* BlockMesh;

    // ���ڻ�������ײ���
    UPROPERTY(VisibleAnywhere)
    class UBoxComponent* InteractionBox;

    //���õ�ǰ״̬���
    void SetNowState();

protected:
    // �¼���Ӧ��ҽ��뷶Χ����֪����û���ã�������
    UFUNCTION()
    void OnOverlapBegin(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

    UFUNCTION()
    void OnOverlapEnd(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

private:
    // ����Ƿ��ڷ�Χ��
    bool bIsPlayerInRange;

    //����������Լ�����
    ABlockActorManager* myBlockActorManager;
    UMaterialInstance* defualtBlockMaterial;
    UMaterialInstance* activeBlockMaterial;

};
