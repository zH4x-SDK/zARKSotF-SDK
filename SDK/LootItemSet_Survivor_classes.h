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

// BlueprintGeneratedClass LootItemSet_Survivor.LootItemSet_Survivor_C
// 0x0000 (0x0068 - 0x0068)
class ULootItemSet_Survivor_C : public UPrimalSupplyCrateItemSet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LootItemSet_Survivor.LootItemSet_Survivor_C");
		return ptr;
	}


	void ExecuteUbergraph_LootItemSet_Survivor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
