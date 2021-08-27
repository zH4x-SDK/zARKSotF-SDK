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

// BlueprintGeneratedClass DinoAttackStateSpiderWeb.DinoAttackStateSpiderWeb_C
// 0x0000 (0x0080 - 0x0080)
class UDinoAttackStateSpiderWeb_C : public UPrimalAIStateDinoSpiderRangedWebState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackStateSpiderWeb.DinoAttackStateSpiderWeb_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoAttackStateSpiderWeb(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
