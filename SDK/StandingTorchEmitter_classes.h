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

// BlueprintGeneratedClass StandingTorchEmitter.StandingTorchEmitter_C
// 0x0000 (0x04D0 - 0x04D0)
class AStandingTorchEmitter_C : public ACampFireEmitter_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StandingTorchEmitter.StandingTorchEmitter_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_StandingTorchEmitter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
