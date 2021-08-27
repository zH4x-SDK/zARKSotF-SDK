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

// WidgetBlueprintGeneratedClass SteamInventoryPopupUI.SteamInventoryPopupUI_C
// 0x0020 (0x0408 - 0x03E8)
class USteamInventoryPopupUI_C : public UUI_SteamInventoryStatusPopup
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x03E8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SteamInventoryPopupUI.SteamInventoryPopupUI_C");
		return ptr;
	}


	void ExecuteUbergraph_SteamInventoryPopupUI(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
