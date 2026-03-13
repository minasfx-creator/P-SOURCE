#pragma once
#include "CoreMinimal.h"
#include "MassEntityTypes.h"
#include "DMXFragments.generated.h"

USTRUCT()
struct FDMXLightFragment : public FMassFragment
{
    GENERATED_BODY()
    UPROPERTY() uint32 FixtureID;
    UPROPERTY() uint16 ChannelStart;
    UPROPERTY() FLinearColor CurrentColor;
    UPROPERTY() float Intensity;
};
