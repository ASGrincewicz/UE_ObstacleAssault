// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingPlatform.h"

// Sets default values
AMovingPlatform::AMovingPlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMovingPlatform::BeginPlay()
{
	Super::BeginPlay();

	StartLocation = GetActorLocation();
	
}

// Called every frame
void AMovingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//Move platform forward
		//Get current location
	FVector CurrentLocation = GetActorLocation();
		//Add vector to current location
	CurrentLocation = CurrentLocation + (PlatformVelocity * DeltaTime);
		//Set the location
	SetActorLocation(CurrentLocation);
	//Send platform back if moved too far
		//Check how far platform moved
	DistanceMoved =  FVector::Dist(StartLocation, CurrentLocation);
		//Reverse direction if reached limit

	

}

void AMovingPlatform::MovePlatform()
{
	//For moving the platform.
}


