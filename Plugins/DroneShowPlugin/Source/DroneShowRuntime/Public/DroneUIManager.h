
#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/UserWidget.h"
UCLASS()
UCLASS()

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

 #include "DroneUIManager.generated.h"
