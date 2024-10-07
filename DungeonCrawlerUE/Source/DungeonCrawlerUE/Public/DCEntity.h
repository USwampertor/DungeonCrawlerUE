// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "DCEntity.generated.h"

UCLASS()
class DUNGEONCRAWLERUE_API ADCEntity : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ADCEntity();

	ADCEntity(const FObjectInitializer& ObjectInitializer)
		: Super(ObjectInitializer)
	{
		m_maxHealth = 100;
		m_health = m_maxHealth;
	}

	UPROPERTY(EditAnywhere)
	int32 m_entityID;

	UPROPERTY(EditAnywhere)
	int32 m_entitylevel;


	UPROPERTY(EditAnywhere)
	float m_health;

	UPROPERTY(EditAnywhere)
	float m_maxHealth;

	float GetHealth() const { return m_health; }

	float GetMaxHealth() const { return m_maxHealth; }


	void Hurt(float Damage, bool bPoison) 
	{
		if (Damage < 0)
		{
			Damage = 0;
		}
		m_health = FMath::Clamp<float>(m_health - Damage, 0, m_maxHealth);
	}
	void Heal(float Amount) {}
	void CurePoison() {}
	void Respawn() {}

	bool GetIsPoisoned() const { return false; }
	bool GetIsDead() const { return false; }

#if UE_BUILD_TEST
	void Debug_SetHealth(float InHealth) { m_health = InHealth; }
	void Debug_SetMaxHealth(float InMaxHealth) { m_maxHealth = InMaxHealth; }
#endif

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
