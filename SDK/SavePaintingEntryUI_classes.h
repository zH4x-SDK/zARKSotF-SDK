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

// WidgetBlueprintGeneratedClass SavePaintingEntryUI.SavePaintingEntryUI_C
// 0x0038 (0x03F0 - 0x03B8)
class USavePaintingEntryUI_C : public UUI_SavePainting
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x03B8(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SavePaintingEntryUI.SavePaintingEntryUI_C");
		return ptr;
	}


	void ExecuteUbergraph_SavePaintingEntryUI(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
