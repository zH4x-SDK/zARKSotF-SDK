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

// WidgetBlueprintGeneratedClass LobbyUI.LobbyUI_C
// 0x00B0 (0x0758 - 0x06A8)
class ULobbyUI_C : public UUI_Lobby
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x06A8(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LobbyUI.LobbyUI_C");
		return ptr;
	}


	void BndEvt__OptionsButton_K2Node_ComponentBoundEvent_116_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_LobbyUI(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
