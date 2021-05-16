// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "GTA6/DailyLifeCharacter/Controller/DailyLifeController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BTTask_SetTargetLocation.generated.h"

/**
 * 
 */
UCLASS()
class GTA6_API UBTTask_SetTargetLocation : public UBTTaskNode
{
	GENERATED_BODY()

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
};
