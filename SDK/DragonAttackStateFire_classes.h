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

// BlueprintGeneratedClass DragonAttackStateFire.DragonAttackStateFire_C
// 0x0000 (0x0078 - 0x0078)
class UDragonAttackStateFire_C : public UPrimalAIStateDinoMeleeState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DragonAttackStateFire.DragonAttackStateFire_C");
		return ptr;
	}


	void ExecuteUbergraph_DragonAttackStateFire(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
