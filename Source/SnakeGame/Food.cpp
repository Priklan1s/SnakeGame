// Fill out your copyright notice in the Description page of Project Settings.


#include "Food.h"
#include "SnakeBase.h"

AFood::AFood()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AFood::BeginPlay()
{
	Super::BeginPlay();
	
}

void AFood::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AFood::Interact(AActor* Interactor, bool bIsHead)
{
	if (bIsHead)
	{
		auto Snake = Cast<ASnakeBase>(Interactor);
		if (IsValid(Snake))
		{
			Snake->AddSnakeElement();
			Destroy();
		}
	}
}

