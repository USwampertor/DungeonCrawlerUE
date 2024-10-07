// Fill out your copyright notice in the Description page of Project Settings.

#include "Misc/AutomationTest.h"
#include "Tests/AutomationEditorCommon.h"

#include "DCCharacter.h"



IMPLEMENT_SIMPLE_AUTOMATION_TEST(FDCCharacterTest, "Example.DCCharacter", EAutomationTestFlags::EditorContext | EAutomationTestFlags::ProductFilter)

bool FDCCharacterTest::RunTest(const FString& Parameters)
{
	UWorld* World = FAutomationEditorCommonUtils::CreateNewMap();

	{
		ADCCharacter* Hero = World->SpawnActor<ADCCharacter>();
		if (Hero->GetHealth() != Hero->GetMaxHealth())
		{
			AddError(TEXT("Newly-spawned heroes must start at max health"));
		}
		Hero->Destroy();
	}

	{
		ADCCharacter* Hero = World->SpawnActor<ADCCharacter>();
		const float Health = 100;
		Hero->m_maxHealth = Health;
		Hero->m_health = Health;
		const float Damage = 10;
		Hero->Hurt(Damage, false);
		if (Hero->GetHealth() != Health - Damage)
		{
			AddError(TEXT("Hurt not subtracting health"));
		}
		Hero->Destroy();
	}

	// ...

	return true;
}
// 
// DCCharacterTest::DCCharacterTest()
// {
// }
// 
// DCCharacterTest::~DCCharacterTest()
// {
// }
