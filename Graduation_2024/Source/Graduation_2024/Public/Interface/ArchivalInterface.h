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
	// �洢��ˢ�����״̬
	virtual void RefreshPlayerStatus() = 0;

	// ��ȡ�洢��ID
	virtual EArchiveID GetArchiveID() = 0;

	// ��ȡ�洢�����վ��λ��
	virtual FVector GetPlayerStandLocation() = 0;

	// ��ȡ�洢��λ��
	virtual FVector GetArchiveLocation() = 0;



};
