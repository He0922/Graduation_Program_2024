#pragma once
#include "Engine/Engine.h"
#include "UObject/NameTypes.h"
#include "UObject/UnrealType.h"


namespace Debug
{
	static void Print(const FString& Msg,const float Time, const FColor& Color = FColor::MakeRandomColor(), int32 InKey = -1)
	{
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(InKey, Time, Color, Msg);
		}

		UE_LOG(LogTemp, Warning, TEXT("%s"), *Msg);
	}

	static void PrintBool(const FString& Msg, bool bValue, const FColor& Color = FColor::MakeRandomColor(), int32 InKey = -1)
	{
		FString BoolString = bValue ? TEXT("true") : TEXT("false");
		FString FullMsg = Msg + BoolString;

		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(InKey, 0.f, Color, FullMsg);
		}

		UE_LOG(LogTemp, Warning, TEXT("%s"), *FullMsg);
	}

	static void PrintHitResult(const FHitResult& HitResult, const FColor& Color = FColor::MakeRandomColor(), int32 InKey = -1)
	{
		FString HitResultString = FString::Printf(TEXT("HitResult - Actor: %s, Location: %s, Impact Point: %s, Normal: %s"),
			*HitResult.GetActor()->GetName(),
			*HitResult.Location.ToString(),
			*HitResult.ImpactPoint.ToString(),
			*HitResult.ImpactNormal.ToString());

		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(InKey, 0.f, Color, HitResultString);
		}

		UE_LOG(LogTemp, Warning, TEXT("%s"), *HitResultString);
	}
}