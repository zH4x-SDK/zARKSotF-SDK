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

// WidgetBlueprintGeneratedClass AfterActionReportsListUI.AfterActionReportsListUI_C
// 0x0040 (0x03E8 - 0x03A8)
class UAfterActionReportsListUI_C : public UUI_AfterActionReportsList
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x03A8(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AfterActionReportsListUI.AfterActionReportsListUI_C");
		return ptr;
	}


	void ExecuteUbergraph_AfterActionReportsListUI(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
