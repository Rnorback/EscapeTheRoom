// Copyright Rob Norback 2016

#pragma once

#include "Components/ActorComponent.h"
#include "OpenDoor.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BUILDINGESCAPE_API UOpenDoor : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UOpenDoor();

	// Called when the game starts
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction ) override;
    
    // Opens the door in the scene
    void OpenDoor();
    
    // Closes the door in the scene
    void CloseDoor();

private:
    UPROPERTY(VisibleAnywhere)
    float OpenAngle = 90.0f;
    
    UPROPERTY(EditAnywhere)
    ATriggerVolume* PressurePlate;
    
    UPROPERTY(EditAnywhere)
    AActor* ActorThatOpens; // Remember pawn inherits from actor
};
