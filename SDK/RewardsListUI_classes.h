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

// WidgetBlueprintGeneratedClass RewardsListUI.RewardsListUI_C
// 0x0028 (0x03C8 - 0x03A0)
class URewardsListUI_C : public UUI_ListRewards
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x03A0(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass RewardsListUI.RewardsListUI_C");
		return ptr;
	}


	void ExecuteUbergraph_RewardsListUI(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
