// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/Blackboard/BlackboardKeyAllTypes.h"
#include "EnnemiPersonnage.h"
#include "EnnemiIntelligence.generated.h"

/**
 * 
 */
UCLASS()
class COURSE_API AEnnemiIntelligence : public AAIController
{
	GENERATED_BODY()
	
private:
	UPROPERTY(transient)
	class UBlackboardComponent * tableauNoir;

	UPROPERTY(transient)
	class UBehaviorTreeComponent * comportement;

public:
	AEnnemiIntelligence();
	void Possess(APawn * pion) override;
	uint8 ennemiCle;

};