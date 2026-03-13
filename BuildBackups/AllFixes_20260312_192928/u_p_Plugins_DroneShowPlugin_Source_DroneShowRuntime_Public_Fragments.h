#pragma once
#include "MassEntityTypes.h"
#include "Fragments.generated.h"

USTRUCT()
struct FMassTransformFragment : public FMassFragment { GENERATED_BODY() UPROPERTY() FTransform Transform; };

USTRUCT()
struct FDroneMassVelocityFragment : public FMassFragment { GENERATED_BODY() UPROPERTY() FVector Velocity; };

USTRUCT()
struct FDroneMassForceFragment : public FMassFragment { GENERATED_BODY() UPROPERTY() FVector Force; };

USTRUCT()
struct FMassAgentRadiusFragment : public FMassFragment { GENERATED_BODY() UPROPERTY() float Radius; };

USTRUCT()
struct FDroneMassMovementParameters : public FMassFragment { GENERATED_BODY() UPROPERTY() float MaxSpeed; UPROPERTY() float MaxAccel; };



