// Fill out your copyright notice in the Description page of Project Settings.

#include "TacheSuivre.h"
#include "Engine.h"
#include "CourseCharacter.h"

EBTNodeResult::Type UTacheSuivre::ExecuteTask(UBehaviorTreeComponent& proprietaire, uint8* memoireNoeud)
{
	AEnnemiIntelligence * ennemiIntelligence = Cast<AEnnemiIntelligence>(proprietaire.GetAIOwner());
	ACourseCharacter * ennemi = Cast<ACourseCharacter>(proprietaire.GetBlackboardComponent()->GetValue<UBlackboardKeyType_Object>(ennemiIntelligence->ennemiCle));
	if (ennemi)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("MoveToActor"));
		ennemiIntelligence->MoveToActor(ennemi, 50.f, true, true, true, 0, true);
		return EBTNodeResult::Succeeded;
	}
	else
	{
		return EBTNodeResult::Failed;
	}
}