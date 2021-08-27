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

// BlueprintGeneratedClass PrimalItemStructure_StoneFloor.PrimalItemStructure_StoneFloor_C
// 0x0000 (0x07B0 - 0x07B0)
class UPrimalItemStructure_StoneFloor_C : public UPrimalItemStructure_BaseFloor_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_StoneFloor.PrimalItemStructure_StoneFloor_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_StoneFloor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
