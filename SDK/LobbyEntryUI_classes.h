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

// WidgetBlueprintGeneratedClass LobbyEntryUI.LobbyEntryUI_C
// 0x00B0 (0x06D0 - 0x0620)
class ULobbyEntryUI_C : public UUI_LobbyEntry
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0620(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LobbyEntryUI.LobbyEntryUI_C");
		return ptr;
	}


	void ExecuteUbergraph_LobbyEntryUI(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
