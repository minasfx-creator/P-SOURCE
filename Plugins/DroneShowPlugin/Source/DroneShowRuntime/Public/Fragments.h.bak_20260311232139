#pragma once
#include "MassEntityTypes.h"
#include "Fragments.generated.h"

USTRUCT()
struct FMassTransformFragment : public FMassFragment { GENERATED_BODY() UPROPERTY() FTransform Transform; };

USTRUCT()
struct FMassVelocityFragment : public FMassFragment { GENERATED_BODY() UPROPERTY() FVector Velocity; };

USTRUCT()
struct FMassForceFragment : public FMassFragment { GENERATED_BODY() UPROPERTY() FVector Force; };

USTRUCT()
struct FMassAgentRadiusFragment : public FMassFragment { GENERATED_BODY() UPROPERTY() float Radius; };

USTRUCT()
struct FMassMovementParameters : public FMassFragment { GENERATED_BODY() UPROPERTY() float MaxSpeed; UPROPERTY() float MaxAccel; };
