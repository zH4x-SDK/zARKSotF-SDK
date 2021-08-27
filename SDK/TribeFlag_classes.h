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

// BlueprintGeneratedClass TribeFlag.TribeFlag_C
// 0x0008 (0x0930 - 0x0928)
class ATribeFlag_C : public APrimalStructureTribeFlag
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0928(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TribeFlag.TribeFlag_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_TribeFlag(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
