#include "SkillComponent/PlayerSkillComponent.h"

DEFINE_LOG_CATEGORY_STATIC(PlayerSkillComponentLog, All, All);
UPlayerSkillComponent::UPlayerSkillComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}


void UPlayerSkillComponent::BeginPlay()
{
	Super::BeginPlay();	
}


void UPlayerSkillComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

void UPlayerSkillComponent::StartScan()
{
	UE_LOG(PlayerSkillComponentLog, Display, TEXT("StartScan"));
}

void UPlayerSkillComponent::EndScan()
{
	UE_LOG(PlayerSkillComponentLog, Display, TEXT("EndScan"));
}

