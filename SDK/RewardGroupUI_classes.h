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

// WidgetBlueprintGeneratedClass RewardGroupUI.RewardGroupUI_C
// 0x0022 (0x03D2 - 0x03B0)
class URewardGroupUI_C : public UUI_RewardGroup
{
public:
	unsigned char                                      UnknownData00[0x22];                                      // 0x03B0(0x0022) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass RewardGroupUI.RewardGroupUI_C");
		return ptr;
	}


	void Construct();
	void OnChangeVistibility();
	void ExecuteUbergraph_RewardGroupUI(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
