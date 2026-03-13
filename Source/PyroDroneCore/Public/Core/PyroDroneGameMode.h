#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MassEntitySubsystem.h"
#include "MassCommonFragments.h"
#include "MassRepresentationFragments.h"
#include "Fragments/PyroDroneFragments.h"
#include "PyroDroneGameMode.generated.h"

UCLASS()
class APyroDroneGameMode : public AGameModeBase {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, Category = "PyroDrone")
    void GenerateDroneShow() {
        UMassEntitySubsystem* MassSubsystem = GetWorld()->GetSubsystem<UMassEntitySubsystem>();
        if (!MassSubsystem) return;

        FMassEntityManager& EM = MassSubsystem->GetMutableEntityManager();
        TArray<const UScriptStruct*> Frags;
        Frags.Add(FTransformFragment::StaticStruct());
        Frags.Add(FMassRepresentationFragment::StaticStruct());
        Frags.Add(FProfessionalShowFragment::StaticStruct());
        Frags.Add(FDMXColorFragment::StaticStruct());

        FMassArchetypeHandle Arch = EM.CreateArchetype(Frags);

        for (int32 i = 0; i < 500; ++i) {
            FMassEntityHandle E = EM.CreateEntity(Arch);
            EM.GetFragmentDataChecked<FProfessionalShowFragment>(E).DroneIndex = i;
        }
    }
};
