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

// BlueprintGeneratedClass PrimalItemConsumable_BloodPack.PrimalItemConsumable_BloodPack_C
// 0x0000 (0x07B0 - 0x07B0)
class UPrimalItemConsumable_BloodPack_C : public UPrimalItemConsumableEatable_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_BloodPack.PrimalItemConsumable_BloodPack_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_BloodPack(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
