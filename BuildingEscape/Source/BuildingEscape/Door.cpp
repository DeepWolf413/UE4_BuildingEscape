// Fill out your copyright notice in the Description page of Project Settings.

#include "Door.h"
#include "Runtime/CoreUObject/Public/UObject/UObjectGlobals.h"


// Sets default values
ADoor::ADoor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	// Setup
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	DoorInstance = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Door"));
	DoorInstance->SetupAttachment(RootComponent);

	// Default values
	OpenDegrees = FRotator(0, 90, 0);
}

// Called when the game starts or when spawned
void ADoor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADoor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADoor::Open()
{
	if (DoorInstance != nullptr)
	{
		USceneComponent* Door = Cast<USceneComponent>(DoorInstance);
		Door->SetRelativeRotation(OpenDegrees);
	}
}

void ADoor::Close()
{
	if (DoorInstance != nullptr)
	{
		USceneComponent* Door = Cast<USceneComponent>(DoorInstance);
		Door->SetRelativeRotation(DefaultRotation);
	}
}