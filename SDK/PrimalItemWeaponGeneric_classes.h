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

// BlueprintGeneratedClass PrimalItemWeaponGeneric.PrimalItemWeaponGeneric_C
// 0x0000 (0x07B0 - 0x07B0)
class UPrimalItemWeaponGeneric_C : public UPrimalItem_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemWeaponGeneric.PrimalItemWeaponGeneric_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemWeaponGeneric(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
