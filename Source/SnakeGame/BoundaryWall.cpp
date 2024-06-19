// Fill out your copyright notice in the Description page of Project Settings.


#include "BoundaryWall.h"

ABoundaryWall::ABoundaryWall()
{
	PrimaryActorTick.bCanEverTick = true;

	WallMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WallMesh"));
	RootComponent = WallMesh;
	WallMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	WallMesh->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Block);
}

void ABoundaryWall::BeginPlay()
{
	Super::BeginPlay();
	
}

void ABoundaryWall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

