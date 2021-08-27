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

// BlueprintGeneratedClass AttackSetRunning.AttackSetRunning_C
// 0x0029 (0x00A1 - 0x0078)
class UAttackSetRunning_C : public UBTTask_BlueprintBase
{
public:
	unsigned char                                      UnknownData00[0x29];                                      // 0x0078(0x0029) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AttackSetRunning.AttackSetRunning_C");
		return ptr;
	}


	void ReceiveExecute(class AActor** OwnerActor);
	void ExecuteUbergraph_AttackSetRunning(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
