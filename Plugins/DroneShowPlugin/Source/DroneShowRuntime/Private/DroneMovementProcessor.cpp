#include "DroneMovementProcessor.h"
#include "MassEntitySubsystem.h"
#include "MassCommonFragments.h"
#include "DroneShowDataBridge.h"

UDroneMovementProcessor::UDroneMovementProcessor()
{
    ExecutionOrder.ExecuteInGroup = TEXT("Movement");
    bAutoRegisterWithProcessingPhases = true;
}

// ConfigureQueries removed for UE5.7

void UDroneMovementProcessor::Execute(FMassEntityManager& EntityManager, FMassExecutionContext& Context)
{
    const float Dt = Context.GetDeltaTimeSeconds();
    EntityQuery.ForEachEntityChunk(EntityManager, Context, [&](FMassExecutionContext& ChunkContext)
    {
        auto Transforms = ChunkContext.GetMutableFragmentView<FMassTransformFragment>();
        auto Velocities = ChunkContext.GetMutableFragmentView<FDroneMassVelocityFragment>();
        auto Forces = ChunkContext.GetMutableFragmentView<FDroneMassForceFragment>();
        auto Params = ChunkContext.GetFragmentView<FDroneMassMovementParameters>();
        const int32 Num = ChunkContext.GetNumEntities();
        TArray<FTransform> ChunkTransforms; ChunkTransforms.Reserve(Num);

        for (int32 i = 0; i < Num; ++i)
        {
            FVector Acc = Forces[i].Force;
            FVector NewVel = Velocities[i].Velocity + Acc * Dt;
            float MaxSpeed = (Params.IsValidIndex(i) ? Params[i].MaxSpeed : 1000.0f);
            if (NewVel.Size() > MaxSpeed) NewVel = NewVel.GetSafeNormal() * MaxSpeed;
            Velocities[i].Velocity = NewVel;
            Transforms[i].Transform.AddToTranslation(NewVel * Dt);
            ChunkTransforms.Add(Transforms[i].Transform);
        }

 






       if (ChunkTransforms.Num())
        {
            if (UWorld* W = ChunkContext.GetWorld())
            {
                if (UDroneShowDataBridge* Bridge = UDroneShowDataBridge::Get(W))
                {
                    Bridge->SetTransforms(ChunkTransforms);
 






               }
            }
        }
    });
}




