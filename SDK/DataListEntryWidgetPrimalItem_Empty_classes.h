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

// WidgetBlueprintGeneratedClass DataListEntryWidgetPrimalItem_Empty.DataListEntryWidgetPrimalItem_Empty_C
// 0x0008 (0x0298 - 0x0290)
class UDataListEntryWidgetPrimalItem_Empty_C : public UDataListEntryWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0290(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DataListEntryWidgetPrimalItem_Empty.DataListEntryWidgetPrimalItem_Empty_C");
		return ptr;
	}


	void ExecuteUbergraph_DataListEntryWidgetPrimalItem_Empty(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
