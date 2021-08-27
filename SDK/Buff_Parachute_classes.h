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

// BlueprintGeneratedClass Buff_Parachute.Buff_Parachute_C
// 0x0018 (0x06D8 - 0x06C0)
class ABuff_Parachute_C : public APrimalBuff
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x06C0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Parachute.Buff_Parachute_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_Parachute(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
