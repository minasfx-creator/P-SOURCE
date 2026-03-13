#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Sockets.h"
#include "Networking.h"
#include "MavlinkConnectorComponent.generated.h"

UENUM()
enum class EMavlinkMode : uint8
{
    FallbackUDP,
    MAVSDK
};

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class UMavlinkConnectorComponent : public UActorComponent
{
    GENERATED_BODY()
public:
    UMavlinkConnectorComponent();
    virtual void BeginPlay() override;
    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

    UFUNCTION(BlueprintCallable, Category="MAVLink")
    bool InitUDP(const FString& Host, int32 Port);

    UFUNCTION(BlueprintCallable, Category="MAVLink")
    void SendHeartbeat();

    UFUNCTION(BlueprintCallable, Category="MAVLink")
    void SendPositionSetpoint(int32 Seq, double Lat, double Lon, double Alt);

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="MAVLink")
    EMavlinkMode Mode = EMavlinkMode::FallbackUDP;

private:
    FSocket* UDPSocket;
    TSharedPtr<FInternetAddr> RemoteAddr;
    FThreadSafeBool bRunning;
    FRunnableThread* ReceiverThread;
    void ReceiverLoop();
};
