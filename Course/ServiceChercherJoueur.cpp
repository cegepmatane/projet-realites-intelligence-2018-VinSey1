// Fill out your copyright notice in the Description page of Project Settings.

#include "ServiceChercherJoueur.h"
#include "Engine/World.h"
#include "Engine.h"
#include "GameFramework/PlayerController.h"
#include "BehaviorTree/Blackboard/BlackboardKeyAllTypes.h"
#include "EnnemiIntelligence.h"
#include "EnnemiPersonnage.h"
#include "CourseCharacter.h"

UServiceChercherJoueur::UServiceChercherJoueur()
{
	bCreateNodeInstance = true;
}


void UServiceChercherJoueur::TickNode(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory, float DeltaSeconds)
{
	AEnnemiIntelligence * intelligence = Cast<AEnnemiIntelligence>(OwnerComp.GetAIOwner());

	if (intelligence) {
		ACourseCharacter * ennemi = Cast<ACourseCharacter>(GetWorld()->GetFirstPlayerController()->GetPawn());
		if (ennemi)
		{
			OwnerComp.GetBlackboardComponent()->SetValue<UBlackboardKeyType_Object>(intelligence->ennemiCle, ennemi);
		}
	}
}