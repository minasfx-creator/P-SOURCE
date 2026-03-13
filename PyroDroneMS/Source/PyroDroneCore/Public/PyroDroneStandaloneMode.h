#pragma once
#include "GameFramework/GameModeBase.h"
#include "PyroDroneStandaloneMode.generated.h"

UCLASS()
class APyroDroneStandaloneMode : public AGameModeBase {
    GENERATED_BODY()
public:
    virtual void StartPlay() override {
        Super::StartPlay();
        if (GEngine) {
            GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Cyan, TEXT("PyroDrone Master Studio: Made by professionals - Like You!"));
        }
    }
};
