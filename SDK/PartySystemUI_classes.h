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

// WidgetBlueprintGeneratedClass PartySystemUI.PartySystemUI_C
// 0x0070 (0x0508 - 0x0498)
class UPartySystemUI_C : public UUI_PartySystem
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0498(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PartySystemUI.PartySystemUI_C");
		return ptr;
	}


	void ExecuteUbergraph_PartySystemUI(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
