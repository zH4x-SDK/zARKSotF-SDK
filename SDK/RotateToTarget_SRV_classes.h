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

// BlueprintGeneratedClass RotateToTarget_SRV.RotateToTarget_SRV_C
// 0x0045 (0x00C5 - 0x0080)
class URotateToTarget_SRV_C : public UBTService_BlueprintBase
{
public:
	unsigned char                                      UnknownData00[0x45];                                      // 0x0080(0x0045) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass RotateToTarget_SRV.RotateToTarget_SRV_C");
		return ptr;
	}


	void ReceiveActivation(class AActor** OwnerActor);
	void ReceiveDeactivation(class AActor** OwnerActor);
	void ExecuteUbergraph_RotateToTarget_SRV(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
