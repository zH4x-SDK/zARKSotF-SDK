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

// BlueprintGeneratedClass AllowWandering.AllowWandering_C
// 0x002E (0x00A6 - 0x0078)
class UAllowWandering_C : public UBTTask_BlueprintBase
{
public:
	unsigned char                                      UnknownData00[0x2E];                                      // 0x0078(0x002E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AllowWandering.AllowWandering_C");
		return ptr;
	}


	void ReceiveExecute(class AActor** OwnerActor);
	void ExecuteUbergraph_AllowWandering(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
