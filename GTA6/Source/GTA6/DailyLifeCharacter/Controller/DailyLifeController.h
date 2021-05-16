// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BehaviorTree.h"
#include "DailyLifeController.generated.h"

/**
 * 
 */
UCLASS()
class GTA6_API ADailyLifeController : public AAIController
{
	GENERATED_BODY()

	/*Behavior tree comp ref*/
	UBehaviorTreeComponent* BehaviorComp;

	/*Blackboard comp ref*/
	UBlackboardComponent* BlackboardComp;

    /*Blackboard keys*/
    UPROPERTY(EditDefaultsOnly, Category = "AI")
    FName LocationToGoKey;

    /*I use the AActor class as the Template class so I can use the GetAllActorsOfClass function.
    However, in this collection I'm going to store all the Available ABotTargetPoint instances.*/
    TArray<AActor*> BotTargetPoints;

	/*Posses is executed when the character we want to control is spawned.
   Inside this function, we initialize the blackboard and start the behavior tree*/
	//virtual void OnPossess(APawn* InPawn) override;

public:

    /*----------Constructor----------*/
    ADailyLifeController();

    FORCEINLINE UBlackboardComponent* GetBlackboardComp() const { return BlackboardComp; }

    FORCEINLINE TArray<AActor*> GetAvailableTargetPoints() { return BotTargetPoints; }
};
