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

// BlueprintGeneratedClass AttackHarvestComponent_Base.AttackHarvestComponent_Base_C
// 0x0000 (0x0248 - 0x0248)
class UAttackHarvestComponent_Base_C : public UPrimalHarvestingComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AttackHarvestComponent_Base.AttackHarvestComponent_Base_C");
		return ptr;
	}


	void ExecuteUbergraph_AttackHarvestComponent_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
