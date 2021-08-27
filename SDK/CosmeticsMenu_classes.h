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

// WidgetBlueprintGeneratedClass CosmeticsMenu.CosmeticsMenu_C
// 0x0061 (0x05A1 - 0x0540)
class UCosmeticsMenu_C : public UUI_Cosmetics
{
public:
	unsigned char                                      UnknownData00[0x61];                                      // 0x0540(0x0061) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CosmeticsMenu.CosmeticsMenu_C");
		return ptr;
	}


	void ExecuteUbergraph_CosmeticsMenu(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
