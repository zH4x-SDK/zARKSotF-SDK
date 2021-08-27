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

// WidgetBlueprintGeneratedClass InventoryMenu.InventoryMenu_C
// 0x03E0 (0x1368 - 0x0F88)
class UInventoryMenu_C : public UUI_Inventory
{
public:
	unsigned char                                      UnknownData00[0x3E0];                                     // 0x0F88(0x03E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass InventoryMenu.InventoryMenu_C");
		return ptr;
	}


	void ExecuteUbergraph_InventoryMenu(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
