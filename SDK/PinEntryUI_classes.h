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

// WidgetBlueprintGeneratedClass PinEntryUI.PinEntryUI_C
// 0x0090 (0x0458 - 0x03C8)
class UPinEntryUI_C : public UUI_PinEntry
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x03C8(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PinEntryUI.PinEntryUI_C");
		return ptr;
	}


	void ExecuteUbergraph_PinEntryUI(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
