#pragma once
#include "CoreMinimal.h"
#include "MassProcessor.h"
#include "MassExecutionContext.h"
#include "MassCommonFragments.h"
#include "Fragments/PyroDroneFragments.h"
#include "PyroDroneProcessor.generated.h"
UCLASS() class PYRODRONECORE_API UPyroDroneProcessor : public UMassProcessor {
    GENERATED_BODY()
public:
    UPyroDroneProcessor() { bAutoRegisterWithProcessingPhases = true; ExecutionFlags = (int32)EMassProcessingPhase::PrePhysics; }
protected:
    FMassEntityQuery EntityQuery;
    virtual void ConfigureQueries(const TSharedRef<FMassEntityManager>& EntityManager) override {
        EntityQuery.AddRequirement<FTransformFragment>(EMassFragmentAccess::ReadWrite);
        EntityQuery.AddRequirement<FProfessionalShowFragment>(EMassFragmentAccess::ReadOnly);
        EntityQuery.AddRequirement<FDMXColorFragment>(EMassFragmentAccess::ReadWrite);
        EntityQuery.RegisterWithProcessor(*this);
    }
    virtual void Execute(FMassEntityManager& EntityManager, FMassExecutionContext& Context) override {
        const float T = GetWorld()->GetTimeSeconds();
        EntityQuery.ForEachEntityChunk(Context, [this, T](FMassExecutionContext& ChunkContext) {
            auto Transforms = ChunkContext.GetMutableFragmentView<FTransformFragment>();
            auto Colors = ChunkContext.GetMutableFragmentView<FDMXColorFragment>();
            auto ShowData = ChunkContext.GetFragmentView<FProfessionalShowFragment>();
            for (int32 i = 0; i < ChunkContext.GetNumEntities(); ++i) {
                const int32 Idx = ShowData[i].DroneIndex;
                FVector TargetPos;
                if (((int)(T / 10) % 2) == 0) {
                    float Ang = (Idx * (360.0f / 500.0f)) + (T * 0.5f);
                    TargetPos = FVector(FMath::Cos(FMath::DegreesToRadians(Ang)) * 1200.f, FMath::Sin(FMath::DegreesToRadians(Ang)) * 1200.f, 1500.f);
                } else {
                    float SideIdx = (Idx % 166) / 166.0f;
                    int32 Side = Idx / 166;
                    FVector V1(0, 1500, 1800), V2(-1300, -750, 1800), V3(1300, -750, 1800);
                    if(Side == 0) TargetPos = FMath::Lerp(V1, V2, SideIdx);
                    else if(Side == 1) TargetPos = FMath::Lerp(V2, V3, SideIdx);
                    else TargetPos = FMath::Lerp(V3, V1, SideIdx);
                }
                FVector CurrentPos = Transforms[i].GetTransform().GetLocation();
                Transforms[i].GetMutableTransform().SetLocation(FMath::VInterpTo(CurrentPos, TargetPos, GetWorld()->GetDeltaSeconds(), 2.0f));
                Colors[i].CurrentColor = (((int)(T/10)%2)==0) ? FLinearColor::Blue : FLinearColor::Red;
            }
        });
    }
};
