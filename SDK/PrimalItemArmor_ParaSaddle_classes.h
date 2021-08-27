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

// BlueprintGeneratedClass PrimalItemArmor_ParaSaddle.PrimalItemArmor_ParaSaddle_C
// 0x0000 (0x07B0 - 0x07B0)
class UPrimalItemArmor_ParaSaddle_C : public UPrimalItemArmor_SaddleGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_ParaSaddle.PrimalItemArmor_ParaSaddle_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemArmor_ParaSaddle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
