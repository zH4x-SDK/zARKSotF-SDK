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

// BlueprintGeneratedClass StandingTorch.StandingTorch_C
// 0x0010 (0x0BA0 - 0x0B90)
class AStandingTorch_C : public ABaseFuelBurner_C
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0B90(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StandingTorch.StandingTorch_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_StandingTorch(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
