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

// BlueprintGeneratedClass PrimalItemResourceGeneric.PrimalItemResourceGeneric_C
// 0x0000 (0x07B0 - 0x07B0)
class UPrimalItemResourceGeneric_C : public UPrimalItem_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemResourceGeneric.PrimalItemResourceGeneric_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemResourceGeneric(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
