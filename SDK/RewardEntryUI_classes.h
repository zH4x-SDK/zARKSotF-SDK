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

// WidgetBlueprintGeneratedClass RewardEntryUI.RewardEntryUI_C
// 0x0018 (0x03B0 - 0x0398)
class URewardEntryUI_C : public UUI_RewardEntryButton
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0398(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass RewardEntryUI.RewardEntryUI_C");
		return ptr;
	}


	void ExecuteUbergraph_RewardEntryUI(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
