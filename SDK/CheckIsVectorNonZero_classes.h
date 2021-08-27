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

// BlueprintGeneratedClass CheckIsVectorNonZero.CheckIsVectorNonZero_C
// 0x0045 (0x00BD - 0x0078)
class UCheckIsVectorNonZero_C : public UBTTask_BlueprintBase
{
public:
	unsigned char                                      UnknownData00[0x45];                                      // 0x0078(0x0045) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CheckIsVectorNonZero.CheckIsVectorNonZero_C");
		return ptr;
	}


	void ReceiveExecute(class AActor** OwnerActor);
	void ExecuteUbergraph_CheckIsVectorNonZero(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
