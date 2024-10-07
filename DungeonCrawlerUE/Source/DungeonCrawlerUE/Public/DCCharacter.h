// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DCEntity.h"
#include "DCCharacter.generated.h"

/**
 * 
 */
UCLASS()
class DUNGEONCRAWLERUE_API ADCCharacter : public ADCEntity
{
	GENERATED_BODY()
	
public:

	ADCCharacter(const FObjectInitializer& ObjectInitializer)
		: Super(ObjectInitializer)
	{
		m_maxHealth = 100;
		m_health = m_maxHealth;
	}

#if UE_BUILD_TEST
	void Debug_SetHealth(float InHealth) { m_health = InHealth; }
	void Debug_SetMaxHealth(float InMaxHealth) { m_maxHealth = InMaxHealth; }
#endif

};
