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

// WidgetBlueprintGeneratedClass CombatLogUI.CombatLogUI_C
// 0x0000 (0x03F0 - 0x03F0)
class UCombatLogUI_C : public UUI_CombatLogBox
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CombatLogUI.CombatLogUI_C");
		return ptr;
	}


	void ExecuteUbergraph_CombatLogUI(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
