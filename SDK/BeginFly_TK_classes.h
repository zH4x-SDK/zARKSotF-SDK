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

// BlueprintGeneratedClass BeginFly_TK.BeginFly_TK_C
// 0x0089 (0x0101 - 0x0078)
class UBeginFly_TK_C : public UBTTask_BlueprintBase
{
public:
	unsigned char                                      UnknownData00[0x89];                                      // 0x0078(0x0089) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BeginFly_TK.BeginFly_TK_C");
		return ptr;
	}


	void ReceiveExecute(class AActor** OwnerActor);
	void ExecuteUbergraph_BeginFly_TK(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
