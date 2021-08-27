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

// BlueprintGeneratedClass Attacking_dR.Attacking_DR_C
// 0x0051 (0x00E1 - 0x0090)
class UAttacking_DR_C : public UBTDecorator_BlueprintBase
{
public:
	unsigned char                                      UnknownData00[0x51];                                      // 0x0090(0x0051) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Attacking_dR.Attacking_DR_C");
		return ptr;
	}


	void ReceiveExecutionStart(class AActor** OwnerActor);
	void ReceiveExecutionFinish(class AActor** OwnerActor, TEnumAsByte<EBTNodeResult>* NodeResult);
	void ReceiveConditionCheck(class AActor** OwnerActor);
	void ExecuteUbergraph_Attacking_DR(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
