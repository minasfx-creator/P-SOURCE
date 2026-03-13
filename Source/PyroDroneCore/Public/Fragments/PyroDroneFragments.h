#pragma once
#include "CoreMinimal.h"
#include "MassEntityTypes.h"
#include "PyroDroneFragments.generated.h"
USTRUCT() struct FProfessionalShowFragment : public FMassFragment { GENERATED_BODY() int32 DroneIndex = 0; };
USTRUCT() struct FDMXColorFragment : public FMassFragment { GENERATED_BODY() FLinearColor CurrentColor = FLinearColor::White; };
