#include "PyroPhysics.h"

FVector UPyroPhysics::ComputePyroAccel(const FVector& Velocity, float Mass, float Area, float Cd, float Rho, const FVector& Wind, const FVector& Gravity)
{
    if (Mass <= 0.0f) Mass = 0.001f;
    FVector RelVel = Velocity - Wind;
    FVector vHat = RelVel.IsNearlyZero() ? FVector::ZeroVector : RelVel.GetSafeNormal();
    float v2 = RelVel.SizeSquared();
    FVector Drag = FVector::ZeroVector;
    if (!vHat.IsNearlyZero())
    {
        Drag = -0.5f * Rho * Area * Cd * v2 * vHat / Mass;
    }
    return Drag + Gravity;
}
