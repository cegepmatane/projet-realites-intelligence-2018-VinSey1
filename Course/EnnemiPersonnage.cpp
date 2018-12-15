// Fill out your copyright notice in the Description page of Project Settings.

#include "EnnemiPersonnage.h"


// Sets default values
AEnnemiPersonnage::AEnnemiPersonnage()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEnnemiPersonnage::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnnemiPersonnage::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AEnnemiPersonnage::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

