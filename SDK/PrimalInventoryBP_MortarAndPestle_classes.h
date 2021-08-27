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

// BlueprintGeneratedClass PrimalInventoryBP_MortarAndPestle.PrimalInventoryBP_MortarAndPestle_C
// 0x0000 (0x0460 - 0x0460)
class UPrimalInventoryBP_MortarAndPestle_C : public UPrimalInventoryComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalInventoryBP_MortarAndPestle.PrimalInventoryBP_MortarAndPestle_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalInventoryBP_MortarAndPestle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
