// Fill out your copyright notice in the Description page of Project Settings.


#include "DailyLifeController.h"
#include <GTA6/DailyLifeCharacter/Character/DailyLifeMasterAI.h>

ADailyLifeController::ADailyLifeController()
{
    //Initialize BehaviorTreeComponent, BlackboardComponent and the corresponding key

    BehaviorComp = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("BehaviorComp"));
    BlackboardComp = CreateDefaultSubobject<UBlackboardComponent>(TEXT("BlackboardComp"));
    LocationToGoKey = "LocationToGo";
}

//void ADailyLifeController::OnPossess(APawn* InPawn)
//{
//    Super::Possess(InPawn);
//
//    ADailyLifeMasterAI* AIChar = Cast<ADailyLifeMasterAI>(InPawn);
//
//    if (AIChar)
//    {
//        //If the blackboard is valid initialize the blackboard for the corresponding behavior tree
//        if (AIChar->BehaviorTree->BlackboardAsset)
//        {
//            BlackboardComp->InitializeBlackboard(*(AIChar->BehaviorTree->BlackboardAsset));
//        }
//
//        //Start the behavior tree which corresponds to the specific character
//        BehaviorComp->StartTree(*AIChar->BehaviorTree);
//    }
//}

