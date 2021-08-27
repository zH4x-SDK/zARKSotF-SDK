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

// BlueprintGeneratedClass PrimalItemStructure_PowerCableIntersection.PrimalItemStructure_PowerCableIntersection_C
// 0x0000 (0x07B0 - 0x07B0)
class UPrimalItemStructure_PowerCableIntersection_C : public UPrimalItemStructure_BaseStonePipe_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_PowerCableIntersection.PrimalItemStructure_PowerCableIntersection_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_PowerCableIntersection(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
