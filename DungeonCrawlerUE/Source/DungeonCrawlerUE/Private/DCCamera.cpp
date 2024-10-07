// Fill out your copyright notice in the Description page of Project Settings.


#include "DCCamera.h"
#include "Kismet/GameplayStatics.h"

// Sets default values for this component's properties
UDCCamera::UDCCamera()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UDCCamera::BeginPlay()
{
	Super::BeginPlay();
	
	SetCharacterToFollow();
	// ...
	
}

void UDCCamera::SetCharacterToFollow()
{
	TArray<AActor*> actors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ADCEntity::StaticClass(), actors);
	for (auto& actor : actors)
	{
    // m_toFollow = actor;
    // break;
	}
}


// Called every frame
void UDCCamera::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
	if (m_toFollow != nullptr)
	{
		FVector pos = m_toFollow->GetActorLocation() - m_offset;
		if ((pos - this->GetOwner()->GetActorLocation()).Length() > 0.1f)
		{
			this->GetOwner()->AddActorWorldOffset((pos - this->GetOwner()->GetActorLocation()).GetSafeNormal() * DeltaTime * m_cameraSpeed);
		}
		else
		{
			this->GetOwner()->SetActorLocation(pos);
		}
	}
}

