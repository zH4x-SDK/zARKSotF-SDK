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

// BlueprintGeneratedClass PrimalItemConsumable_WaterJarCraftable.PrimalItemConsumable_WaterJarCraftable_C
// 0x0000 (0x07B0 - 0x07B0)
class UPrimalItemConsumable_WaterJarCraftable_C : public UPrimalItemConsumableEatable_WaterContainer_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_WaterJarCraftable.PrimalItemConsumable_WaterJarCraftable_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_WaterJarCraftable(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
