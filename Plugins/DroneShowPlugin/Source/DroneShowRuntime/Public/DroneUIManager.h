#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DroneUIManager.generated.h"

UCLASS()
class UDroneUIManager : public UObject
{
    GENERATED_BODY()
public:
    static UDroneUIManager* Get(UWorld* World);

    UFUNCTION(BlueprintCallable, Category="DroneShow|UI")
    void ShowMainDashboard();

    UFUNCTION(BlueprintCallable, Category="DroneShow|UI")
    void PlayIntroSequence();

    UFUNCTION(BlueprintCallable, Category="DroneShow|Control")
    void EmergencyLandAll();
private:
    TWeakObjectPtr<UUserWidget> MainWidget;
    TWeakObjectPtr<UUserWidget> IntroWidget;
};
