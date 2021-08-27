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

// BlueprintGeneratedClass IsNotFollowing_DK.IsNotFollowing_DK_C
// 0x0061 (0x00F1 - 0x0090)
class UIsNotFollowing_DK_C : public UBTDecorator_BlueprintBase
{
public:
	unsigned char                                      UnknownData00[0x61];                                      // 0x0090(0x0061) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IsNotFollowing_DK.IsNotFollowing_DK_C");
		return ptr;
	}


	void ReceiveConditionCheck(class AActor** OwnerActor);
	void ExecuteUbergraph_IsNotFollowing_DK(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
