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

// BlueprintGeneratedClass AttackTargetMove_DR.AttackTargetMove_DR_C
// 0x002B (0x00BB - 0x0090)
class UAttackTargetMove_DR_C : public UBTDecorator_BlueprintBase
{
public:
	unsigned char                                      UnknownData00[0x2B];                                      // 0x0090(0x002B) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AttackTargetMove_DR.AttackTargetMove_DR_C");
		return ptr;
	}


	void ReceiveConditionCheck(class AActor** OwnerActor);
	void ExecuteUbergraph_AttackTargetMove_DR(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
