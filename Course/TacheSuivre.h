// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "EnnemiIntelligence.h"
#include "EnnemiPersonnage.h"
#include "BehaviorTree/Blackboard/BlackboardKeyAllTypes.h"
#include "TacheSuivre.generated.h"

/**
 * 
 */
UCLASS()
class COURSE_API UTacheSuivre : public UBTTaskNode
{
	GENERATED_BODY()
	
	EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory);

};