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

// WidgetBlueprintGeneratedClass ChatBoxLobbyUI.ChatBoxLobbyUI_C
// 0x0008 (0x0460 - 0x0458)
class UChatBoxLobbyUI_C : public UUI_ChatBoxLobby
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0458(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ChatBoxLobbyUI.ChatBoxLobbyUI_C");
		return ptr;
	}


	void ExecuteUbergraph_ChatBoxLobbyUI(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
