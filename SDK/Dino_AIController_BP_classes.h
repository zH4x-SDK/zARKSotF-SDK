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

// BlueprintGeneratedClass Dino_AIController_BP.Dino_AIController_BP_C
// 0x0069 (0x0871 - 0x0808)
class ADino_AIController_BP_C : public APrimalDinoAIController
{
public:
	unsigned char                                      UnknownData00[0x69];                                      // 0x0808(0x0069) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Dino_AIController_BP.Dino_AIController_BP_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Dino_AIController_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
