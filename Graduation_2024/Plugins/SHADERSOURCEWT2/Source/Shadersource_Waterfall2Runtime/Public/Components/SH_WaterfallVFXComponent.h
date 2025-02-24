// Copyright 2021-2024 SHADERSOURCE.io / Pending Studios, All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "NiagaraComponent.h"
#include "Components/ISH_WaterfallFxComponent.h"
#include "SH_WaterfallVFXComponent.generated.h"

USTRUCT(BlueprintType)
struct FSH_VfxPointData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Waterfall")
		FVector Position = {};
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Waterfall")
		FVector ForwardDirection = {};
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Waterfall")
		FVector UpDirection = {};
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Waterfall")
		FVector RightDirection = {};

	FSH_VfxPointData() {}
	FSH_VfxPointData(FVector _Position, FVector _ForwardDirection = FVector::ZeroVector, FVector _UpDirection = FVector::ZeroVector, FVector _RightDirection = FVector::ZeroVector)
	{
		Position = _Position;
		ForwardDirection = _ForwardDirection;
		UpDirection = _UpDirection;
		RightDirection = _RightDirection;
	}
};

/* A custom Niagara component that stores the path and point indexes of the parent waterfall. */
UCLASS(ClassGroup = (SHADERSOURCE), Blueprintable, meta = (BlueprintSpawnableComponent, DisplayName = "SH Waterfall VFX Component"))
class SHADERSOURCE_WATERFALL2RUNTIME_API USH_WaterfallVFXComponent : public UNiagaraComponent, public ISH_WaterfallFxComponent
{
	GENERATED_BODY()
	
public:

	USH_WaterfallVFXComponent();

	UFUNCTION(BlueprintPure, Category = "Waterfall")
		int32 GetPathIndex() { return PathIndex; }
	UFUNCTION(BlueprintPure, Category = "Waterfall")
		int32 GetPointIndex() { return PointIndex; }
	UFUNCTION(BlueprintCallable, Category = "Waterfall")
	void SetVFXBounds();

	/*Points that will be passed to "SpawnPositions" variable in UpdateParticleSystemParams()
	Note: These points are expected to be in World Space. They will be converted to local when set.*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Waterfall")
		TArray<FSH_VfxPointData> PointData = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Waterfall")
		FBox VFXBoundsBox;

	virtual TArray<FVector> GetPositions();
	virtual TArray<FVector> GetForwardDirections();
	virtual TArray<FVector> GetUpDirections();
	virtual TArray<FVector> GetRightDirections();

	virtual TArray<FVector> RotateToActor(TArray<FVector> Input);

	UFUNCTION(CallInEditor, BlueprintCallable, Category = "Waterfall")
		virtual void UpdateComponentParams() override;
#if WITH_EDITOR
	UFUNCTION(CallInEditor, Category = "Waterfall")
		virtual void DrawPoints();
#endif

protected:
	//~ Begin UObject Interface.

	//~ End UObject Interface
};
