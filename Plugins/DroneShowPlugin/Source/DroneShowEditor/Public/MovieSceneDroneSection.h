
#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
USTRUCT()
USTRUCT()

    GENERATED_BODY()
    UPROPERTY(EditAnywhere) int32 AgentId;
    UPROPERTY(EditAnywhere) float Time;
    UPROPERTY(EditAnywhere) FVector Position;
    UPROPERTY(EditAnywhere) FRotator Rotation;
    UPROPERTY(EditAnywhere) float Intensity;
};

UCLASS()
UCLASS()

{
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Category="Drone")
    TArray<FDroneCue> Cues;
};

 #include "MovieSceneDroneSection.generated.h"
