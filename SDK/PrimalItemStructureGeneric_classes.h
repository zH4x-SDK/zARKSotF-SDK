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

// BlueprintGeneratedClass PrimalItemStructureGeneric.PrimalItemStructureGeneric_C
// 0x0000 (0x07B0 - 0x07B0)
class UPrimalItemStructureGeneric_C : public UPrimalItemConsumableGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructureGeneric.PrimalItemStructureGeneric_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructureGeneric(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
