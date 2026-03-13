
#pragma once
#include "CoreMinimal.h"
#include "MassProcessor.h"
#include "MassEntityQuery.h"
#include "MassExecutionContext.h"
#include "MassEntitySubsystem.h"
#include "Fragments.h"
UCLASS()
UCLASS()

{
    GENERATED_BODY()
public:
    UDroneMovementProcessor();
    // ConfigureQueries removed (UMassProcessor::ConfigureQueries is final in UE5.7)
    virtual void Execute(FMassEntityManager& EntityManager, FMassExecutionContext& Context) override;
private:
    FMassEntityQuery EntityQuery;
};

 #include "DroneMovementProcessor.generated.h"
