// Fill out your copyright notice in the Description page of Project Settings.

#include "ServiceChercherJoueur.h"
#include "Engine/World.h"
#include "Engine.h"
#include "GameFramework/PlayerController.h"
#include "BehaviorTree/Blackboard/BlackboardKeyAllTypes.h"
#include "EnnemiIntelligence.h"
#include "EnnemiPersonnage.h"

UServiceChercherJoueur::UServiceChercherJoueur()
{
	bCreateNodeInstance = true;
}


void UServiceChercherJoueur::TickNode(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory, float DeltaSeconds)
{
	AEnnemiIntelligence * intelligence = Cast<AEnnemiIntelligence>(OwnerComp.GetAIOwner());

	if (intelligence) {
		for (TActorIterator<AActor> iterateurActeur(GetWorld()); iterateurActeur; ++iterateurActeur)
		{
			AActor * acteur = *iterateurActeur;
			AEnnemiPersonnage * ennemi = Cast<AEnnemiPersonnage>(acteur);

			if (ennemi)
			{
				GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Green, "Ennemi a son intelligence");
				OwnerComp.GetBlackboardComponent()->SetValue<UBlackboardKeyType_Object>(intelligence->ennemiCle, ennemi);
			}
		}
	}
}
