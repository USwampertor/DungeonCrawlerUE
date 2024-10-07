// Fill out your copyright notice in the Description page of Project Settings.


#include "DCController.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "GameFramework/Character.h"

// Called to bind functionality to input
void ADCController::SetupInputComponent()
{
	Super::SetupInputComponent();
}

void ADCController::BeginPlay()
{
  if (ADCController* PC = Cast<ADCController>(GetOwner()))
  {
    if (UEnhancedInputLocalPlayerSubsystem* Subsystem = 
      ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PC->GetLocalPlayer()))
    {
      // Add the Input Mapping Context
      Subsystem->AddMappingContext(m_mappingContext, 1);
    }
  }

  // Bind the input action
  if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(InputComponent))
  {
    EnhancedInputComponent->BindAction(m_moveAction, 
                                       ETriggerEvent::Triggered, 
                                       this, 
                                       &ADCController::Move);
  }
}

void ADCController::Move(const FInputActionValue& value)
{

}

void ADCController::Look(const FInputActionValue& value)
{

}