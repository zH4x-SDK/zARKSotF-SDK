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

// WidgetBlueprintGeneratedClass PlayerHUDStatusBarsWidget.PlayerHUDStatusBarsWidget_C
// 0x0050 (0x0350 - 0x0300)
class UPlayerHUDStatusBarsWidget_C : public UHUDStatusBarsWidget
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0300(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PlayerHUDStatusBarsWidget.PlayerHUDStatusBarsWidget_C");
		return ptr;
	}


	void ExecuteUbergraph_PlayerHUDStatusBarsWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
