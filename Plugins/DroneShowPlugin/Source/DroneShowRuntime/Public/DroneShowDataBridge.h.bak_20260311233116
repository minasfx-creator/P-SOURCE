#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DroneShowDataBridge.generated.h"

UCLASS(BlueprintType, Blueprintable)
class UDroneShowDataBridge : public UObject
{
    GENERATED_BODY()
public:
    static UDroneShowDataBridge* Get(UWorld* World);

    UPROPERTY(BlueprintReadWrite, Category="DroneShow|Bridge")
    TArray<FVector> Positions;

    UPROPERTY(BlueprintReadWrite, Category="DroneShow|Bridge")
    TArray<FVector> RotationsEuler;

    UPROPERTY(BlueprintReadWrite, Category="DroneShow|Bridge")
    TArray<float> Intensities;

    UPROPERTY(BlueprintReadWrite, Category="DroneShow|Bridge")
    int32 FrameStamp = 0;

    UFUNCTION(BlueprintCallable, Category="DroneShow|Bridge")
    void SetTransforms(const TArray<FTransform>& Transforms);

    UFUNCTION(BlueprintCallable, Category="DroneShow|Bridge")
    void Clear();

private:
    static UDroneShowDataBridge* CreateSingleton(UWorld* World);
    static TWeakObjectPtr<UDroneShowDataBridge> SingletonInstance;
};
