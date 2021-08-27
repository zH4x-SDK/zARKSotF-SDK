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

// BlueprintGeneratedClass DinoAttackStateRangedWide.DinoAttackStateRangedWide_C
// 0x0000 (0x0088 - 0x0088)
class UDinoAttackStateRangedWide_C : public UPrimalAIStateDinoRangedState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackStateRangedWide.DinoAttackStateRangedWide_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoAttackStateRangedWide(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
