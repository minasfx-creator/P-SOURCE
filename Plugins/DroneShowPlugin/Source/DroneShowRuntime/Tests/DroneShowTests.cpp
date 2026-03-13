#include "Misc/AutomationTest.h"
#include "Fragments.h"

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FFragmentsReadWriteTest, "DroneShow.Fragments.ReadWrite", EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)
bool FFragmentsReadWriteTest::RunTest(const FString& Parameters)
{
    FMassTransformFragment T;
    T.Transform = FTransform(FVector(100,200,300));
    TestEqual(TEXT("Transform X"), T.Transform.GetLocation().X, 100.0f);
    return true;
}


