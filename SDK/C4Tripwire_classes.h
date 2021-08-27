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

// BlueprintGeneratedClass C4Tripwire.C4Tripwire_C
// 0x0008 (0x0A30 - 0x0A28)
class AC4Tripwire_C : public APrimalStructureTripwire
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0A28(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass C4Tripwire.C4Tripwire_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_C4Tripwire(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
