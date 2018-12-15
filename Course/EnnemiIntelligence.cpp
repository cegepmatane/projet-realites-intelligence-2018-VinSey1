// Fill out your copyright notice in the Description page of Project Settings.

#include "EnnemiIntelligence.h"

AEnnemiIntelligence::AEnnemiIntelligence()
{
	this->tableauNoir = CreateDefaultSubobject<UBlackboardComponent>(TEXT("Tableau noir"));
	this->comportement = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("Comportement"));
}

void AEnnemiIntelligence::Possess(APawn * pion)
{
	Super::Possess(pion);
	AEnnemiPersonnage * ennemi = Cast<AEnnemiPersonnage>(pion);
	if (ennemi) {
		this->tableauNoir->InitializeBlackboard(*ennemi->comportement->BlackboardAsset);
		FName nomCible(TEXT("cible"));
		this->ennemiCle = this->tableauNoir->GetKeyID(nomCible);
		comportement->StartTree(*ennemi->comportement);

	}
}