// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Door.generated.h"

UCLASS()
class BUILDINGESCAPE_API ADoor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADoor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	const FRotator DefaultRotation = FRotator(0, 0, 0);

	// The open degrees of the door
	UPROPERTY(EditAnywhere, Category = "General")
		FRotator OpenDegrees;

	// The door
	UPROPERTY(EditDefaultsOnly, Category = "Mesh")
		class UStaticMeshComponent* DoorInstance;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "General")
		void Open();

	UFUNCTION(BlueprintCallable, Category = "General")
		void Close();

	// Whether the door is locked or not
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "General")
		bool IsLocked;
};
