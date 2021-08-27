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

// BlueprintGeneratedClass PrimalItemArmor_MetalShirt.PrimalItemArmor_MetalShirt_C
// 0x0000 (0x07B0 - 0x07B0)
class UPrimalItemArmor_MetalShirt_C : public UPrimalItemArmor_BaseShirt_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_MetalShirt.PrimalItemArmor_MetalShirt_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemArmor_MetalShirt(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
