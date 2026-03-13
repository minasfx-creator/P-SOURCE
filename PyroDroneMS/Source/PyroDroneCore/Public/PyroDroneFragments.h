#pragma once
#include "MassEntityTypes.h"
#include "PyroDroneFragments.generated.h"

USTRUCT()
struct FShowStateFragment : public FMassFragment {
    GENERATED_BODY()
    FVector TargetLocation = FVector::ZeroVector;
    FLinearColor LEDColor = FLinearColor::White;
    float Intensity = 1.0f;
    uint32 bIsPyroArmed : 1;
    uint32 bIsLaserActive : 1;
};

USTRUCT()
struct FBallisticsDataFragment : public FMassFragment {
    GENERATED_BODY()
    FVector Velocity = FVector::ZeroVector;
    float DragCoeff = 0.7f; // C_D Realista
    float Mass = 1.2f;
};
