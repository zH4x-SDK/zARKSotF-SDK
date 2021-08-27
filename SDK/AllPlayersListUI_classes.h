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

// WidgetBlueprintGeneratedClass AllPlayersListUI.AllPlayersListUI_C
// 0x0048 (0x0450 - 0x0408)
class UAllPlayersListUI_C : public UUI_AllPlayersList
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0408(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AllPlayersListUI.AllPlayersListUI_C");
		return ptr;
	}


	void ExecuteUbergraph_AllPlayersListUI(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
