// Fill out your copyright notice in the Description page of Project Settings.


#include "DCEntity.h"

// Sets default values
ADCEntity::ADCEntity()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADCEntity::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADCEntity::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ADCEntity::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

