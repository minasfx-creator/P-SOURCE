#include "DroneMovementProcessor.h"
#include "MassEntitySubsystem.h"
#include "MassCommonFragments.h"
#include "DroneShowDataBridge.h"

UDroneMovementProcessor::UDroneMovementProcessor()
{
    ExecutionOrder.ExecuteInGroup = UE::Mass::ProcessorGroupNames::Movement;
    bAutoRegisterWithProcessingPhases = true;
}

void UDroneMovementProcessor::ConfigureQueries()
{
    EntityQuery.AddRequirement<FMassTransformFragment>(EMassFragmentAccess::ReadWrite);
    EntityQuery.AddRequirement<FMassVelocityFragment>(EMassFragmentAccess::ReadWrite);
    EntityQuery.AddRequirement<FMassForceFragment>(EMassFragmentAccess::ReadWrite);
    EntityQuery.AddRequirement<FMassMovementParameters>(EMassFragmentAccess::ReadOnly);
    EntityQuery.RegisterWithProcessor(*this);
}

void UDroneMovementProcessor::Execute(UMassEntitySubsystem& EntitySubsystem, FMassExecutionContext& Context)
{
    const float Dt = Context.GetDeltaTimeSeconds();
    EntityQuery.ForEachEntityChunk(EntitySubsystem, Context, [&](FMassExecutionContext& ChunkContext)
    {
        auto Transforms = ChunkContext.GetMutableFragmentView<FMassTransformFragment>();
        auto Velocities = ChunkContext.GetMutableFragmentView<FMassVelocityFragment>();
        auto Forces = ChunkContext.GetMutableFragmentView<FMassForceFragment>();
        auto Params = ChunkContext.GetFragmentView<FMassMovementParameters>();
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
