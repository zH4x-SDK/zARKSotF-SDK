#pragma once

// Name: ARKSotF, Version: 178.8.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ServerChatMessage.ServerChatMessage_C
// 0x0000 (0x03B0 - 0x03B0)
class UServerChatMessage_C : public UUI_ServerBroadcastMessage
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ServerChatMessage.ServerChatMessage_C");
		return ptr;
	}


	void ExecuteUbergraph_ServerChatMessage(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
