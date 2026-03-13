#pragma once
#include "Widgets/SCompoundWidget.h"
#include "Widgets/Input/SEditableTextBox.h"
#include "Widgets/Input/SButton.h"

// Documentação: Interface de Controle de Baixa Latência
class SPyroDroneCommandCenter : public SCompoundWidget {
public:
    SLATE_BEGIN_ARGS(SPyroDroneCommandCenter) {}
    SLATE_END_ARGS()

    void Construct(const FArguments& InArgs) {
        ChildSlot
        [
            SNew(SVerticalBox)
            + SVerticalBox::Slot().AutoHeight().Padding(20.0f)
            [
                SNew(STextBlock)
                .Text(FText::FromString("PyroDrone Master Studio - Ultra Edition"))
            ]
            + SVerticalBox::Slot().AutoHeight().Padding(20.0f)
            [
                SNew(SButton)
                .Text(FText::FromString("GERAR SHOW VIA IA (Made by professionals - Like You!)"))
            ]
        ];
    }
};
