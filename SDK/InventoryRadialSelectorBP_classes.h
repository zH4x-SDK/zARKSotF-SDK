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

// BlueprintGeneratedClass InventoryRadialSelectorBP.InventoryRadialSelectorBP_C
// 0x0000 (0x00A8 - 0x00A8)
class UInventoryRadialSelectorBP_C : public URadialSelectorHUD_Inventory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass InventoryRadialSelectorBP.InventoryRadialSelectorBP_C");
		return ptr;
	}


	void ExecuteUbergraph_InventoryRadialSelectorBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
