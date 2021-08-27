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

// WidgetBlueprintGeneratedClass CreditsUI.CreditsUI_C
// 0x00EC (0x0444 - 0x0358)
class UCreditsUI_C : public UPrimalUI
{
public:
	unsigned char                                      UnknownData00[0xEC];                                      // 0x0358(0x00EC) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CreditsUI.CreditsUI_C");
		return ptr;
	}


	void Construct();
	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void CloseButtonEvent();
	void ExecuteUbergraph_CreditsUI(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
