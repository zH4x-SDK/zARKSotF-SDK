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

// BlueprintGeneratedClass PrimalItemConsumableGeneric.PrimalItemConsumableGeneric_C
// 0x0000 (0x07B0 - 0x07B0)
class UPrimalItemConsumableGeneric_C : public UPrimalItem_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumableGeneric.PrimalItemConsumableGeneric_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumableGeneric(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
