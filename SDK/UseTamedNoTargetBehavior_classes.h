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

// BlueprintGeneratedClass UseTamedNoTargetBehavior.UseTamedNoTargetBehavior_C
// 0x002C (0x00BC - 0x0090)
class UUseTamedNoTargetBehavior_C : public UBTDecorator_BlueprintBase
{
public:
	unsigned char                                      UnknownData00[0x2C];                                      // 0x0090(0x002C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass UseTamedNoTargetBehavior.UseTamedNoTargetBehavior_C");
		return ptr;
	}


	void ReceiveConditionCheck(class AActor** OwnerActor);
	void ExecuteUbergraph_UseTamedNoTargetBehavior(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
