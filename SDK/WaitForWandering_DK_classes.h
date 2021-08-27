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

// BlueprintGeneratedClass WaitForWandering_DK.WaitForWandering_DK_C
// 0x002A (0x00BA - 0x0090)
class UWaitForWandering_DK_C : public UBTDecorator_BlueprintBase
{
public:
	unsigned char                                      UnknownData00[0x2A];                                      // 0x0090(0x002A) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WaitForWandering_DK.WaitForWandering_DK_C");
		return ptr;
	}


	void ReceiveConditionCheck(class AActor** OwnerActor);
	void ExecuteUbergraph_WaitForWandering_DK(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
