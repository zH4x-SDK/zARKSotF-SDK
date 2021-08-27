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

// WidgetBlueprintGeneratedClass ChangeTransponderWeaponFreaquancyEntryUI.ChangeTransponderWeaponFreaquancyEntryUI_C
// 0x0030 (0x03B8 - 0x0388)
class UChangeTransponderWeaponFreaquancyEntryUI_C : public UUI_ChangeTransponderFreqencyEntry
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0388(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ChangeTransponderWeaponFreaquancyEntryUI.ChangeTransponderWeaponFreaquancyEntryUI_C");
		return ptr;
	}


	void ExecuteUbergraph_ChangeTransponderWeaponFreaquancyEntryUI(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
