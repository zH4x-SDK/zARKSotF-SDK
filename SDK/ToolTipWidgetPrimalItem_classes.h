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

// WidgetBlueprintGeneratedClass ToolTipWidgetPrimalItem.ToolTipWidgetPrimalItem_C
// 0x0078 (0x04D8 - 0x0460)
class UToolTipWidgetPrimalItem_C : public UPrimalItemToolTipWidget
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0460(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ToolTipWidgetPrimalItem.ToolTipWidgetPrimalItem_C");
		return ptr;
	}


	void ExecuteUbergraph_ToolTipWidgetPrimalItem(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
