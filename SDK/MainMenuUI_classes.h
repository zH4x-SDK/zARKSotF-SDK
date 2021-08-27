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

// WidgetBlueprintGeneratedClass MainMenuUI.MainMenuUI_C
// 0x00E0 (0x06F0 - 0x0610)
class UMainMenuUI_C : public UUI_MainMenu
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0610(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MainMenuUI.MainMenuUI_C");
		return ptr;
	}


	void BndEvt__SurvivorLeagueButton_K2Node_ComponentBoundEvent_139_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__CreditsButton_K2Node_ComponentBoundEvent_125_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__MusicButton_K2Node_ComponentBoundEvent_134_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_MainMenuUI(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
