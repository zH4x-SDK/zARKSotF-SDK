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

// BlueprintGeneratedClass PrimalItemResource_Gunpowder.PrimalItemResource_Gunpowder_C
// 0x0000 (0x07B0 - 0x07B0)
class UPrimalItemResource_Gunpowder_C : public UPrimalItemResource_Craftable_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemResource_Gunpowder.PrimalItemResource_Gunpowder_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemResource_Gunpowder(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
