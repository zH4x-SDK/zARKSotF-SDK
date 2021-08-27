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

// BlueprintGeneratedClass IsBaby_BT.IsBaby_BT_C
// 0x0029 (0x00B9 - 0x0090)
class UIsBaby_BT_C : public UBTDecorator_BlueprintBase
{
public:
	unsigned char                                      UnknownData00[0x29];                                      // 0x0090(0x0029) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IsBaby_BT.IsBaby_BT_C");
		return ptr;
	}


	void ReceiveConditionCheck(class AActor** OwnerActor);
	void ExecuteUbergraph_IsBaby_BT(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
