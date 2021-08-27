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

// BlueprintGeneratedClass Ceiling_Door_Base_SM.Ceiling_Door_Base_SM_C
// 0x0008 (0x09A0 - 0x0998)
class ACeiling_Door_Base_SM_C : public ADoor_Base_SM_C
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0998(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ceiling_Door_Base_SM.Ceiling_Door_Base_SM_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Ceiling_Door_Base_SM(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
