#pragma once
#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "PlayerAttributes.generated.h"


UENUM(BlueprintType)
enum class EPlayerAttributes :uint8
{
	ehealthMax UMETA(DispalyName = "Health_Max"),
	eenergyMax UMETA(DisplayName = "Energy_Max"),
	ehealth UMETA(DisplayName = "Health"),
	eenergy UMETA(DisplayName = "Energy"),
	edamage UMETA(DisplayName = "Damage"),
	emoveSpeed UMETA(DisplayName = "MoveSpeed")
};


USTRUCT(BlueprintType)
struct FPlayerAttributes
{
	GENERATED_BODY()

	// 通过键对值的方式创建Map，后续通过这个Map来获取与设置人物属性
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes")
	TMap<EPlayerAttributes, float> Mapattributes;

	FPlayerAttributes()
	{
		Mapattributes.Add(EPlayerAttributes::ehealthMax, 100.f);
		Mapattributes.Add(EPlayerAttributes::eenergyMax, 50.f);
		Mapattributes.Add(EPlayerAttributes::ehealth, 100.f);
		Mapattributes.Add(EPlayerAttributes::eenergy, 50.f);
		Mapattributes.Add(EPlayerAttributes::edamage, 10.f);
		Mapattributes.Add(EPlayerAttributes::emoveSpeed, 150.f);
	}

	float GetPlayerAttributes(EPlayerAttributes Attribute) const
	{
		const float* Value = Mapattributes.Find(Attribute);
		
		if (Value) { return *Value; }

		return -1;
	}

	void SetPlayerAttributes(EPlayerAttributes Attribute, float Value) { Mapattributes.Add(Attribute, Value); }
};