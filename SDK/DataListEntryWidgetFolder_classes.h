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

// WidgetBlueprintGeneratedClass DataListEntryWidgetFolder.DataListEntryWidgetFolder_C
// 0x0008 (0x02A0 - 0x0298)
class UDataListEntryWidgetFolder_C : public UDataListEntryWidgetPrimalItem_C
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0298(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DataListEntryWidgetFolder.DataListEntryWidgetFolder_C");
		return ptr;
	}


	void ExecuteUbergraph_DataListEntryWidgetFolder(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
