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

// AnimBlueprintGeneratedClass slingshot_TPV_RIG_AnimBlueprint.slingshot_TPV_RIG_AnimBlueprint_C
// 0x0360 (0x06A0 - 0x0340)
class Uslingshot_TPV_RIG_AnimBlueprint_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x360];                                     // 0x0340(0x0360) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass slingshot_TPV_RIG_AnimBlueprint.slingshot_TPV_RIG_AnimBlueprint_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_slingshot_TPV_RIG_AnimBlueprint_AnimGraphNode_TransitionResult_822();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_slingshot_TPV_RIG_AnimBlueprint_AnimGraphNode_TransitionResult_821();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_slingshot_TPV_RIG_AnimBlueprint_AnimGraphNode_TransitionResult_820();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_slingshot_TPV_RIG_AnimBlueprint_AnimGraphNode_TransitionResult_819();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_slingshot_TPV_RIG_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
