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

// BlueprintGeneratedClass PrimalItemStructure_ThatchFloor.PrimalItemStructure_ThatchFloor_C
// 0x0000 (0x07B0 - 0x07B0)
class UPrimalItemStructure_ThatchFloor_C : public UPrimalItemStructure_BaseFloor_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_ThatchFloor.PrimalItemStructure_ThatchFloor_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_ThatchFloor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
