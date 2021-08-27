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

// BlueprintGeneratedClass C4Charge.C4Charge_C
// 0x0008 (0x09D0 - 0x09C8)
class AC4Charge_C : public APrimalStructureExplosive
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x09C8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass C4Charge.C4Charge_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_C4Charge(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
