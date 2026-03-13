#include "FireOneExporter.h"

bool FFireOneExporter::ExportFireOneCSV(const FString& FilePath, TArray<FPyroEvent> Events)
{
    Events.Sort([](const FPyroEvent& A, const FPyroEvent& B){ return A.FireTime < B.FireTime; });
    TArray<FString> Lines;
    Lines.Add("RowID,LaunchTime(ms),Delay,EventID,Module,Cue");
    for (int32 i = 0; i < Events.Num(); ++i)
    {
        const FPyroEvent& E = Events[i];
        Lines.Add(FString::Printf(TEXT("%d,%d,0,%d,%d,%d"), i + 1, E.FireTime, E.EventID, E.Module, E.Pin));
    }
    return FFileHelper::SaveStringArrayToFile(Lines, *FilePath);
}
