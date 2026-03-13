#include "SVGParser.h"
#include "Misc/Char.h"

TArray<FVector> FSVGParser::ParsePathD(const FString& PathD, float Z, float Spacing)
{
    TArray<FVector> Out;
    if (PathD.IsEmpty()) return Out;

    FString S = PathD;
    S.ReplaceInline(TEXT(","), TEXT(" "));
    TArray<FString> Tokens;
    int32 Len = S.Len();
    FString Num;
    for (int i = 0; i < Len; ++i)
    {
        TCHAR C = S[i];
        if (FChar::IsAlpha(C))
        {
            Tokens.Add(FString(1, &C));
        }
        else
        {
            if (C == '-' || C == '+' || C == '.' || FChar::IsDigit(C) || C == 'e' || C == 'E')
            {
                Num.AppendChar(C);
            }
            else
            {
                if (!Num.IsEmpty()) { Tokens.Add(Num); Num.Empty(); }
            }
        }
    }
    if (!Num.IsEmpty()) Tokens.Add(Num);

    FVector2D Curr(0,0);
    FVector2D Start(0,0);
    int idx = 0;
    while (idx < Tokens.Num())
    {
        FString T = Tokens[idx++];
        if (T.Equals("M", ESearchCase::IgnoreCase))
        {
            if (idx + 1 < Tokens.Num())
            {
                Curr.X = FCString::Atof(*Tokens[idx++]);
                Curr.Y = FCString::Atof(*Tokens[idx++]);
                Start = Curr;
                Out.Add(FVector(Curr.X, Curr.Y, Z));
            }
        }
        else if (T.Equals("L", ESearchCase::IgnoreCase))
        {
            if (idx + 1 < Tokens.Num())
            {
                FVector2D Next(FCString::Atof(*Tokens[idx++]), FCString::Atof(*Tokens[idx++]));
                float Dist = FVector2D::Distance(Curr, Next);
                int Steps = FMath::Max(1, FMath::CeilToInt(Dist / Spacing));
                for (int s = 1; s <= Steps; ++s)
                {
                    float t = s / (float)Steps;
                    FVector2D P = FMath::Lerp(Curr, Next, t);
                    Out.Add(FVector(P.X, P.Y, Z));
                }
                Curr = Next;
            }
        }
        else if (T.Equals("H", ESearchCase::IgnoreCase))
        {
            if (idx < Tokens.Num())
            {
                float X = FCString::Atof(*Tokens[idx++]);
                FVector2D Next(X, Curr.Y);
                float Dist = FMath::Abs(Next.X - Curr.X);
                int Steps = FMath::Max(1, FMath::CeilToInt(Dist / Spacing));
                for (int s = 1; s <= Steps; ++s)
                {
                    float t = s / (float)Steps;
                    FVector2D P = FMath::Lerp(Curr, Next, t);
                    Out.Add(FVector(P.X, P.Y, Z));
                }
                Curr = Next;
            }
        }
        else if (T.Equals("V", ESearchCase::IgnoreCase))
        {
            if (idx < Tokens.Num())
            {
                float Y = FCString::Atof(*Tokens[idx++]);
                FVector2D Next(Curr.X, Y);
                float Dist = FMath::Abs(Next.Y - Curr.Y);
                int Steps = FMath::Max(1, FMath::CeilToInt(Dist / Spacing));
                for (int s = 1; s <= Steps; ++s)
                {
                    float t = s / (float)Steps;
                    FVector2D P = FMath::Lerp(Curr, Next, t);
                    Out.Add(FVector(P.X, P.Y, Z));
                }
                Curr = Next;
            }
        }
        else if (T.Equals("C", ESearchCase::IgnoreCase))
        {
            if (idx + 5 < Tokens.Num())
            {
                FVector2D P1(FCString::Atof(*Tokens[idx++]), FCString::Atof(*Tokens[idx++]));
                FVector2D P2(FCString::Atof(*Tokens[idx++]), FCString::Atof(*Tokens[idx++]));
                FVector2D P3(FCString::Atof(*Tokens[idx++]), FCString::Atof(*Tokens[idx++]));
                ApproximateCubicBezier(Curr, P1, P2, P3, Spacing, Out);
                Curr = P3;
            }
        }
        else if (T.Equals("Q", ESearchCase::IgnoreCase))
        {
            if (idx + 3 < Tokens.Num())
            {
                FVector2D P1(FCString::Atof(*Tokens[idx++]), FCString::Atof(*Tokens[idx++]));
                FVector2D P2(FCString::Atof(*Tokens[idx++]), FCString::Atof(*Tokens[idx++]));
                ApproximateQuadraticBezier(Curr, P1, P2, Spacing, Out);
                Curr = P2;
            }
        }
        else if (T.Equals("Z", ESearchCase::IgnoreCase))
        {
            float Dist = FVector2D::Distance(Curr, Start);
            int Steps = FMath::Max(1, FMath::CeilToInt(Dist / Spacing));
            for (int s = 1; s <= Steps; ++s)
            {
                float t = s / (float)Steps;
                FVector2D P = FMath::Lerp(Curr, Start, t);
                Out.Add(FVector(P.X, P.Y, Z));
            }
            Curr = Start;
        }
        else
        {
            // skip unknown token
        }
    }

    return Out;
}

void FSVGParser::ApproximateCubicBezier(const FVector2D& P0, const FVector2D& P1, const FVector2D& P2, const FVector2D& P3, float Spacing, TArray<FVector>& Out)
{
    const int Steps = FMath::Max(4, FMath::CeilToInt((FVector2D::Distance(P0,P3)) / Spacing));
    for (int i = 1; i <= Steps; ++i)
    {
        float t = i / (float)Steps;
        float u = 1 - t;
        FVector2D Pt = u*u*u*P0 + 3*u*u*t*P1 + 3*u*t*t*P2 + t*t*t*P3;
        Out.Add(FVector(Pt.X, Pt.Y, 0.0f));
    }
}

void FSVGParser::ApproximateQuadraticBezier(const FVector2D& P0, const FVector2D& P1, const FVector2D& P2, float Spacing, TArray<FVector>& Out)
{
    const int Steps = FMath::Max(4, FMath::CeilToInt((FVector2D::Distance(P0,P2)) / Spacing));
    for (int i = 1; i <= Steps; ++i)
    {
        float t = i / (float)Steps;
        float u = 1 - t;
        FVector2D Pt = u*u*P0 + 2*u*t*P1 + t*t*P2;
        Out.Add(FVector(Pt.X, Pt.Y, 0.0f));
    }
}
