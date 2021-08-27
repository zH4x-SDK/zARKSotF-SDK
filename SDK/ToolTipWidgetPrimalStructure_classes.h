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

// WidgetBlueprintGeneratedClass ToolTipWidgetPrimalStructure.ToolTipWidgetPrimalStructure_C
// 0x0048 (0x02C8 - 0x0280)
class UToolTipWidgetPrimalStructure_C : public UPrimalStructureToolTipWidget
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0280(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ToolTipWidgetPrimalStructure.ToolTipWidgetPrimalStructure_C");
		return ptr;
	}


	void ExecuteUbergraph_ToolTipWidgetPrimalStructure(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
