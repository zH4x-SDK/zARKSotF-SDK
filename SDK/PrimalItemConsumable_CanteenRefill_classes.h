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

// BlueprintGeneratedClass PrimalItemConsumable_CanteenRefill.PrimalItemConsumable_CanteenRefill_C
// 0x0000 (0x07B0 - 0x07B0)
class UPrimalItemConsumable_CanteenRefill_C : public UPrimalItemConsumable_CanteenCraftable_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_CanteenRefill.PrimalItemConsumable_CanteenRefill_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_CanteenRefill(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
