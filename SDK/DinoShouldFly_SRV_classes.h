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

// BlueprintGeneratedClass DinoShouldFly_SRV.DinoShouldFly_SRV_C
// 0x005A (0x00DA - 0x0080)
class UDinoShouldFly_SRV_C : public UBTService_BlueprintBase
{
public:
	unsigned char                                      UnknownData00[0x5A];                                      // 0x0080(0x005A) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoShouldFly_SRV.DinoShouldFly_SRV_C");
		return ptr;
	}


	void ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds);
	void ExecuteUbergraph_DinoShouldFly_SRV(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
