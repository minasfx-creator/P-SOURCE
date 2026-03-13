#include "MavlinkConnectorComponent.h"
#include "SocketSubsystem.h"
#include "HAL/RunnableThread.h"
#include "Misc/ScopeLock.h"

UMavlinkConnectorComponent::UMavlinkConnectorComponent()
{
    PrimaryComponentTick.bCanEverTick = false;
    UDPSocket = nullptr;
    ReceiverThread = nullptr;
    bRunning = false;
}

void UMavlinkConnectorComponent::BeginPlay()
{
    Super::BeginPlay();
}

void UMavlinkConnectorComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    bRunning = false;
    if (ReceiverThread) { ReceiverThread->Kill(true); ReceiverThread = nullptr; }
    if (UDPSocket) { UDPSocket->Close(); ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->DestroySocket(UDPSocket); UDPSocket = nullptr; }
    Super::EndPlay(EndPlayReason);
}

bool UMavlinkConnectorComponent::InitUDP(const FString& Host, int32 Port)
{
    ISocketSubsystem* SocketSubsystem = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM);
    if (!SocketSubsystem) return false;
    bool bIsValid = false;
    RemoteAddr = SocketSubsystem->CreateInternetAddr();
    RemoteAddr->SetIp(*Host, bIsValid);
    RemoteAddr->SetPort(Port);
    if (!bIsValid) return false;

    UDPSocket = SocketSubsystem->CreateSocket(NAME_DGram, TEXT("MavlinkSocket"), true);
    if (!UDPSocket) return false;

    UDPSocket->SetReuseAddr(true);
    UDPSocket->SetNonBlocking(true);

    bRunning = true;
    return true;
}

void UMavlinkConnectorComponent::SendHeartbeat()
{
    if (Mode == EMavlinkMode::MAVSDK)
    {
        return;
    }

    if (!UDPSocket || !RemoteAddr.IsValid()) return;
    FString Msg = TEXT("HEARTBEAT");
    FTCHARToUTF8 Converter(*Msg);
    int32 BytesSent = 0;
    UDPSocket->SendTo((uint8*)Converter.Get(), Converter.Length(), BytesSent, *RemoteAddr);
}

void UMavlinkConnectorComponent::SendPositionSetpoint(int32 Seq, double Lat, double Lon, double Alt)
{
    if (Mode == EMavlinkMode::MAVSDK)
    {
        return;
    }

    if (!UDPSocket || !RemoteAddr.IsValid()) return;
    FString Msg = FString::Printf(TEXT("POS,%d,%.8f,%.8f,%.3f"), Seq, Lat, Lon, Alt);
    FTCHARToUTF8 Converter(*Msg);
    int32 BytesSent = 0;
    UDPSocket->SendTo((uint8*)Converter.Get(), Converter.Length(), BytesSent, *RemoteAddr);
}
