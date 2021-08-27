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

// WidgetBlueprintGeneratedClass SurvivorProfileUI.SurvivorProfileUI_C
// 0x0058 (0x03F0 - 0x0398)
class USurvivorProfileUI_C : public UUI_SurvivorProfile
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0398(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SurvivorProfileUI.SurvivorProfileUI_C");
		return ptr;
	}


	void ExecuteUbergraph_SurvivorProfileUI(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
