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

// BlueprintGeneratedClass PrimalItem_WeaponStoneHatchet.PrimalItem_WeaponStoneHatchet_C
// 0x0000 (0x07B0 - 0x07B0)
class UPrimalItem_WeaponStoneHatchet_C : public UPrimalItem_WeaponBaseHatchet_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_WeaponStoneHatchet.PrimalItem_WeaponStoneHatchet_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItem_WeaponStoneHatchet(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
