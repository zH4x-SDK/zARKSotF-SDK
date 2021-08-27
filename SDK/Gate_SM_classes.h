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

// BlueprintGeneratedClass Gate_SM.Gate_SM_C
// 0x0010 (0x09A8 - 0x0998)
class AGate_SM_C : public ADoor_Base_SM_C
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0998(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Gate_SM.Gate_SM_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Gate_SM(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
