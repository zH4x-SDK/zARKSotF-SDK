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

// WidgetBlueprintGeneratedClass TextEntryUI.TextEntryUI_C
// 0x0048 (0x0438 - 0x03F0)
class UTextEntryUI_C : public UUI_TextEntry
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x03F0(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TextEntryUI.TextEntryUI_C");
		return ptr;
	}


	void ExecuteUbergraph_TextEntryUI(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
