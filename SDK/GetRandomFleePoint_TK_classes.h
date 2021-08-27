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

// BlueprintGeneratedClass GetRandomFleePoint_TK.GetRandomFleePoint_TK_C
// 0x00F5 (0x016D - 0x0078)
class UGetRandomFleePoint_TK_C : public UBTTask_BlueprintBase
{
public:
	unsigned char                                      UnknownData00[0xF5];                                      // 0x0078(0x00F5) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GetRandomFleePoint_TK.GetRandomFleePoint_TK_C");
		return ptr;
	}


	void ReceiveExecute(class AActor** OwnerActor);
	void ExecuteUbergraph_GetRandomFleePoint_TK(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
