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

// BlueprintGeneratedClass IsFlying_DK.IsFlying_DK_C
// 0x0061 (0x00F1 - 0x0090)
class UIsFlying_DK_C : public UBTDecorator_BlueprintBase
{
public:
	unsigned char                                      UnknownData00[0x61];                                      // 0x0090(0x0061) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IsFlying_DK.IsFlying_DK_C");
		return ptr;
	}


	void ReceiveConditionCheck(class AActor** OwnerActor);
	void ReceiveExecutionStart(class AActor** OwnerActor);
	void ReceiveExecutionFinish(class AActor** OwnerActor, TEnumAsByte<EBTNodeResult>* NodeResult);
	void ExecuteUbergraph_IsFlying_DK(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
