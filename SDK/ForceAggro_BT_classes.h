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

// BlueprintGeneratedClass ForceAggro_BT.ForceAggro_BT_C
// 0x0011 (0x00A1 - 0x0090)
class UForceAggro_BT_C : public UBTDecorator_BlueprintBase
{
public:
	unsigned char                                      UnknownData00[0x11];                                      // 0x0090(0x0011) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ForceAggro_BT.ForceAggro_BT_C");
		return ptr;
	}


	void ReceiveConditionCheck(class AActor** OwnerActor);
	void ExecuteUbergraph_ForceAggro_BT(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
