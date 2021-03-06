// Social Cube Media 2020

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PhysicsEngine/PhysicsHandleComponent.h"
#include "Grabber.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MONEYHEIST_API UGrabber : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UGrabber();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	FVector GetPlayerReach();

	FVector GetPlayerViewPointLocation();

	void SetupInputComponent();

	void FindPhysicsHandle();

	void Grab();

	void Release();

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	// return the first Actor within reach with physics body
	FHitResult GetFirstPhysicsBodyInReach();

private:
	float Reach = 100.0f;
	bool IsHit = false;

	UPhysicsHandleComponent* PhysicsHandle = nullptr;
	UInputComponent* InputComponent = nullptr;

	FRotator PlayerViewPointRotation;
	FVector PlayerViewPointLocation;
};
