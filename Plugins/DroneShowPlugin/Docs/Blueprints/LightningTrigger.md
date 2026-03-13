Blueprint: Lightning Trigger (Event Graph)

Inputs: StrikePosition (Vector), StrikeIntensity (Float 0.0-1.0), DMX_Channel (Int), Host (String), Universe (Int)

Flow:
1. Set Niagara Parameter "StrikePosition" on NS_Lightning_System
2. Set Niagara Parameter "Intensity" on NS_Lightning_System
3. Set Niagara Parameter "StrikeSeed" = Random Integer
4. Call Niagara "Activate Burst" (target: NS_Lightning_System)

5. Build DMX Data Array (512 bytes):
   - Initialize array with zeros
   - Set Data[DMX_Channel - 1] = Clamp(Round(StrikeIntensity * 255), 0, 255)

6. Call BlueprintCallable wrapper that calls FArtNetSender::SendArtNetUniverse(Host, 6454, Universe, DataArray)

Safety:
- Check boolean SafetyToggle == true before sending DMX
- Log timestamp and DroneShowDataBridge.FrameStamp
