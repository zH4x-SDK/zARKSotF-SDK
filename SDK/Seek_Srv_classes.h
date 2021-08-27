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

// BlueprintGeneratedClass Seek_Srv.Seek_Srv_C
// 0x0011 (0x0091 - 0x0080)
class USeek_Srv_C : public UBTService_BlueprintBase
{
public:
	unsigned char                                      UnknownData00[0x11];                                      // 0x0080(0x0011) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Seek_Srv.Seek_Srv_C");
		return ptr;
	}


	void ReceiveActivation(class AActor** OwnerActor);
	void ExecuteUbergraph_Seek_Srv(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
