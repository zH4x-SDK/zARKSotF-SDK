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

// BlueprintGeneratedClass PrimalItem_WeaponShotgun.PrimalItem_WeaponShotgun_C
// 0x0000 (0x07B0 - 0x07B0)
class UPrimalItem_WeaponShotgun_C : public UPrimalItemWeaponGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_WeaponShotgun.PrimalItem_WeaponShotgun_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItem_WeaponShotgun(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
