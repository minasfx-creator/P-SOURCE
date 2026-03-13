#include "GDTFParser.h"

bool FGDTFParser::ParseGDTF(const FString& FilePath, FGDTFFixture& OutFixture)
{
    FXmlFile Xml(FilePath);
    if (!Xml.IsValid()) return false;
    FXmlNode* Root = Xml.GetRootNode();
    if (!Root) return false;

    TArray<FXmlNode*> Nodes = Root->GetChildrenNodes();
    for (FXmlNode* Node : Nodes)
    {
        if (Node->GetTag() == "Manufacturer") OutFixture.Manufacturer = Node->GetContent();
        if (Node->GetTag() == "Model") OutFixture.Model = Node->GetContent();
    }

    FXmlNode* ChannelPool = Root->FindChildNode("ChannelPool");
    if (ChannelPool)
    {
        for (FXmlNode* ChannelNode : ChannelPool->GetChildrenNodes())
        {
            if (ChannelNode->GetTag() == "Channel")
            {
                FGDTFChannel C;
                C.Name = ChannelNode->GetAttribute("Name");
                C.Function = ChannelNode->GetAttribute("Function");
                C.ChannelIndex = FCString::Atoi(*ChannelNode->GetAttribute("Index"));
                OutFixture.Channels.Add(C);
            }
        }
    }

    return true;
}
