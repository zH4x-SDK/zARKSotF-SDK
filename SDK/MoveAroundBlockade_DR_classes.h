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

// BlueprintGeneratedClass MoveAroundBlockade_DR.MoveAroundBlockade_DR_C
// 0x00E9 (0x0179 - 0x0090)
class UMoveAroundBlockade_DR_C : public UBTDecorator_BlueprintBase
{
public:
	unsigned char                                      UnknownData00[0xE9];                                      // 0x0090(0x00E9) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MoveAroundBlockade_DR.MoveAroundBlockade_DR_C");
		return ptr;
	}


	void ReceiveExecutionFinish(class AActor** OwnerActor, TEnumAsByte<EBTNodeResult>* NodeResult);
	void ReceiveConditionCheck(class AActor** OwnerActor);
	void ReceiveExecutionStart(class AActor** OwnerActor);
	void ExecuteUbergraph_MoveAroundBlockade_DR(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
