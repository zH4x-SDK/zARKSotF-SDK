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

// WidgetBlueprintGeneratedClass MapMarkersEntryUI.MapMarkersEntryUI_C
// 0x0078 (0x0500 - 0x0488)
class UMapMarkersEntryUI_C : public UUI_MapMarkersEntry
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0488(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MapMarkersEntryUI.MapMarkersEntryUI_C");
		return ptr;
	}


	void ExecuteUbergraph_MapMarkersEntryUI(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
