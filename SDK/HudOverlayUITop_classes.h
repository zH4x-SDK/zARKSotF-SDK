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

// WidgetBlueprintGeneratedClass HudOverlayUITop.HudOverlayUITop_C
// 0x0008 (0x0380 - 0x0378)
class UHudOverlayUITop_C : public UUI_HudOverlay
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0378(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HudOverlayUITop.HudOverlayUITop_C");
		return ptr;
	}


	void ExecuteUbergraph_HudOverlayUITop(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
