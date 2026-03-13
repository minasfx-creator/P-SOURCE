#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "MovieSceneDroneSection.generated.h"

USTRUCT()
struct FDroneCue
{
    GENERATED_BODY()
    UPROPERTY(EditAnywhere) int32 AgentId;
    UPROPERTY(EditAnywhere) float Time;
    UPROPERTY(EditAnywhere) FVector Position;
    UPROPERTY(EditAnywhere) FRotator Rotation;
    UPROPERTY(EditAnywhere) float Intensity;
};

UCLASS()
class UMovieSceneDroneSection : public UMovieSceneSection
{
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Category="Drone")
    TArray<FDroneCue> Cues;
};
