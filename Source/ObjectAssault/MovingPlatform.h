// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovingPlatform.generated.h"

UCLASS()
class OBJECTASSAULT_API AMovingPlatform : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMovingPlatform();
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	void MovePlatform(float DeltaTime);
	void RotatePlatform(float DeltaTime);
	bool ShouldPlatformReturn();
	float GetDistanceMoved();
	FVector StartLocation;

	UPROPERTY(EditAnywhere, Category= "Moving Platform")
	FVector PlatformVelocity = FVector(100,0,0);

	UPROPERTY(EditAnywhere, Category = "Moving Platform")
	float MoveDistance = 100;

};
