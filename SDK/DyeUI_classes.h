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

// WidgetBlueprintGeneratedClass DyeUI.DyeUI_C
// 0x00B0 (0x0620 - 0x0570)
class UDyeUI_C : public UUI_DyeItem
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0570(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DyeUI.DyeUI_C");
		return ptr;
	}


	void ExecuteUbergraph_DyeUI(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
