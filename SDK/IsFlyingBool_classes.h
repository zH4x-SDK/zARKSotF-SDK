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

// BlueprintGeneratedClass IsFlyingBool.IsFlyingBool_C
// 0x0029 (0x00B9 - 0x0090)
class UIsFlyingBool_C : public UBTDecorator_BlueprintBase
{
public:
	unsigned char                                      UnknownData00[0x29];                                      // 0x0090(0x0029) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IsFlyingBool.IsFlyingBool_C");
		return ptr;
	}


	void ReceiveConditionCheck(class AActor** OwnerActor);
	void ExecuteUbergraph_IsFlyingBool(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
