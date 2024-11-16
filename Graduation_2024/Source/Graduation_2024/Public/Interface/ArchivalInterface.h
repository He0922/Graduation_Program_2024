// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Archival/ArchiveID.h"
#include "ArchivalInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UArchivalInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class GRADUATION_2024_API IArchivalInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	// 存储点刷新玩家状态
	virtual void RefreshPlayerStatus() = 0;

	// 获取存储点ID
	virtual EArchiveID GetArchiveID() = 0;

	// 获取存储点玩家站定位置
	virtual FVector GetPlayerStandLocation() = 0;

	// 获取存储点位置
	virtual FVector GetArchiveLocation() = 0;



};
