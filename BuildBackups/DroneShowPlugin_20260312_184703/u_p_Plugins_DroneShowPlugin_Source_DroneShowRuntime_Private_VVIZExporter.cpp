#include "VVIZExporter.h"
#include "Serialization/JsonWriter.h"
#include "Serialization/JsonSerializer.h"

bool FVVIZExporter::ConvertUnrealToVVIZDelta(const FVector& Delta, float& OutDx, float& OutDy, float& OutDz)
{
    OutDx = Delta.X;
    OutDy = Delta.Z;
    OutDz = Delta.Y;
    return true;
}

bool FVVIZExporter::ExportVVIZ(const FString& FilePath, const TArray<FAgentPerformance>& Performances, int32 SampleRate)
{
    FString OutString;
    TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutString);
    Writer->WriteObjectStart();
    Writer->WriteValue("defaultPositionRate", SampleRate);
    Writer->WriteArrayStart("performances");
    for (const auto& P : Performances)
    {
        Writer->WriteObjectStart();
        Writer->WriteValue("agentId", P.AgentId);
        Writer->WriteArrayStart("samples");
        for (const auto& S : P.Samples)
        {
            float dx, dy, dz;
            FVVIZExporter::ConvertUnrealToVVIZDelta(FVector(S.dx, S.dy, S.dz), dx, dy, dz);
            Writer->WriteObjectStart();
            Writer->WriteValue("dx", dx);
            Writer->WriteValue("dy", dy);
            Writer->WriteValue("dz", dz);
            Writer->WriteValue("dh", S.dh);
            Writer->WriteObjectEnd();
        }
        Writer->WriteArrayEnd();
        Writer->WriteObjectEnd();
    }
    Writer->WriteArrayEnd();
    Writer->WriteObjectEnd();
    Writer->Close();
    return FFileHelper::SaveStringToFile(OutString, *FilePath);
}
