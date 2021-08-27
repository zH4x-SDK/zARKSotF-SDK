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

// BlueprintGeneratedClass DinoAttackStateMinions.DinoAttackStateMinions_C
// 0x0000 (0x00D8 - 0x00D8)
class UDinoAttackStateMinions_C : public UPrimalAIStateDinoSpiderMinions
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackStateMinions.DinoAttackStateMinions_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoAttackStateMinions(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
