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

// BlueprintGeneratedClass PrimalInventoryBP_CookingPot.PrimalInventoryBP_CookingPot_C
// 0x0000 (0x0460 - 0x0460)
class UPrimalInventoryBP_CookingPot_C : public UPrimalInventoryBP_BaseFuelBurning_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalInventoryBP_CookingPot.PrimalInventoryBP_CookingPot_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalInventoryBP_CookingPot(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
