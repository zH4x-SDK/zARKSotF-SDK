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

// BlueprintGeneratedClass NotWithinDistance.NotWithinDistance_C
// 0x010D (0x019D - 0x0090)
class UNotWithinDistance_C : public UBTDecorator_BlueprintBase
{
public:
	unsigned char                                      UnknownData00[0x10D];                                     // 0x0090(0x010D) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass NotWithinDistance.NotWithinDistance_C");
		return ptr;
	}


	void ReceiveConditionCheck(class AActor** OwnerActor);
	void ExecuteUbergraph_NotWithinDistance(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
