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

// BlueprintGeneratedClass BeginLand_TK.BeginLand_TK_C
// 0x0075 (0x00ED - 0x0078)
class UBeginLand_TK_C : public UBTTask_BlueprintBase
{
public:
	unsigned char                                      UnknownData00[0x75];                                      // 0x0078(0x0075) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BeginLand_TK.BeginLand_TK_C");
		return ptr;
	}


	void ReceiveExecute(class AActor** OwnerActor);
	void ExecuteUbergraph_BeginLand_TK(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
