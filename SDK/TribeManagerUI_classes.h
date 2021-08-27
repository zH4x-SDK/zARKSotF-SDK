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

// WidgetBlueprintGeneratedClass TribeManagerUI.TribeManagerUI_C
// 0x00C8 (0x0680 - 0x05B8)
class UTribeManagerUI_C : public UUI_TribeManager
{
public:
	unsigned char                                      UnknownData00[0xC8];                                      // 0x05B8(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TribeManagerUI.TribeManagerUI_C");
		return ptr;
	}


	void ExecuteUbergraph_TribeManagerUI(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
