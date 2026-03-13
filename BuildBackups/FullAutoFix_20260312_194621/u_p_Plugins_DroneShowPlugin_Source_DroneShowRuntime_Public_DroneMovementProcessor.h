#pragma once
#include "MassProcessor.h"
#include "Fragments.h"
#include "DroneMovementProcessor.generated.h"

UCLASS()
class UDroneMovementProcessor : public UMassProcessor
{
    GENERATED_BODY()
public:
    UDroneMovementProcessor();
    virtual void ConfigureQueries() override;
    virtual void Execute(UMassEntitySubsystem& EntitySubsystem, FMassExecutionContext& Context) override;
private:
    FMassEntityQuery EntityQuery;
};
