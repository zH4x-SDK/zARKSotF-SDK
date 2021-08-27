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

// WidgetBlueprintGeneratedClass PaintingsListUI.PaintingsListUI_C
// 0x0068 (0x04F8 - 0x0490)
class UPaintingsListUI_C : public UUI_PaintingsList
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0490(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PaintingsListUI.PaintingsListUI_C");
		return ptr;
	}


	void ExecuteUbergraph_PaintingsListUI(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
