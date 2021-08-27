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

// BlueprintGeneratedClass Buff_NoBuild.Buff_NoBuild_C
// 0x0008 (0x06C8 - 0x06C0)
class ABuff_NoBuild_C : public APrimalBuff
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x06C0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_NoBuild.Buff_NoBuild_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_NoBuild(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
