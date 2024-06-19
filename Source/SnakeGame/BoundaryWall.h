// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BoundaryWall.generated.h"

UCLASS()
class SNAKEGAME_API ABoundaryWall : public AActor
{
	GENERATED_BODY()
	
public:	
	ABoundaryWall();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UStaticMeshComponent* WallMesh;
};
