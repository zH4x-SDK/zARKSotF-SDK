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

// WidgetBlueprintGeneratedClass CosmeticsRewardSteamInventoryPopupUI.CosmeticsRewardSteamInventoryPopupUI_C
// 0x0028 (0x03B8 - 0x0390)
class UCosmeticsRewardSteamInventoryPopupUI_C : public UUI_CosmeticsRewardSteamInventoryStatusPopup
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0390(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CosmeticsRewardSteamInventoryPopupUI.CosmeticsRewardSteamInventoryPopupUI_C");
		return ptr;
	}


	struct FSlateBrush Get_Icon_Brush_1();
	void ExecuteUbergraph_CosmeticsRewardSteamInventoryPopupUI(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
