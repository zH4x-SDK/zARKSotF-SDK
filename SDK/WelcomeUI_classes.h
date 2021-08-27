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

// WidgetBlueprintGeneratedClass WelcomeUI.WelcomeUI_C
// 0x0020 (0x0378 - 0x0358)
class UWelcomeUI_C : public UPrimalUI
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0358(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WelcomeUI.WelcomeUI_C");
		return ptr;
	}


	void ExecuteUbergraph_WelcomeUI(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
