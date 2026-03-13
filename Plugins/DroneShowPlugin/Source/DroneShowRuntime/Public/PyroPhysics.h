#pragma once
#include "CoreMinimal.h"
#include "PyroPhysics.generated.h"

UCLASS()
class UPyroPhysics : public UObject
{
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintPure, Category="Pyro")
    static FVector ComputePyroAccel(const FVector& Velocity, float Mass, float Area, float Cd, float Rho, const FVector& Wind, const FVector& Gravity);
};
