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

// AnimBlueprintGeneratedClass parachute_RIG_AnimBlueprint.parachute_RIG_AnimBlueprint_C
// 0x0288 (0x05C8 - 0x0340)
class Uparachute_RIG_AnimBlueprint_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x288];                                     // 0x0340(0x0288) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass parachute_RIG_AnimBlueprint.parachute_RIG_AnimBlueprint_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_parachute_RIG_AnimBlueprint_AnimGraphNode_TransitionResult_852();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_parachute_RIG_AnimBlueprint_AnimGraphNode_ModifyBone_180();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_parachute_RIG_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
