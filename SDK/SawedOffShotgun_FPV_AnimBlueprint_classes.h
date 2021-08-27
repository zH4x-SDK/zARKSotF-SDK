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

// AnimBlueprintGeneratedClass SawedOffShotgun_FPV_AnimBlueprint.SawedOffShotgun_FPV_AnimBlueprint_C
// 0x07AF (0x0AEF - 0x0340)
class USawedOffShotgun_FPV_AnimBlueprint_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x7AF];                                     // 0x0340(0x07AF) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass SawedOffShotgun_FPV_AnimBlueprint.SawedOffShotgun_FPV_AnimBlueprint_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_SawedOffShotgun_FPV_AnimBlueprint_AnimGraphNode_TransitionResult_846();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SawedOffShotgun_FPV_AnimBlueprint_AnimGraphNode_TransitionResult_845();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SawedOffShotgun_FPV_AnimBlueprint_AnimGraphNode_TransitionResult_844();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SawedOffShotgun_FPV_AnimBlueprint_AnimGraphNode_TransitionResult_843();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SawedOffShotgun_FPV_AnimBlueprint_AnimGraphNode_BlendListByBool_616();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SawedOffShotgun_FPV_AnimBlueprint_AnimGraphNode_ModifyBone_174();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SawedOffShotgun_FPV_AnimBlueprint_AnimGraphNode_SequencePlayer_1022();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SawedOffShotgun_FPV_AnimBlueprint_AnimGraphNode_BlendListByBool_617();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SawedOffShotgun_FPV_AnimBlueprint_AnimGraphNode_SequencePlayer_1023();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SawedOffShotgun_FPV_AnimBlueprint_AnimGraphNode_BlendListByBool_618();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SawedOffShotgun_FPV_AnimBlueprint_AnimGraphNode_ModifyBone_173();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SawedOffShotgun_FPV_AnimBlueprint_AnimGraphNode_ModifyBone_172();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_SawedOffShotgun_FPV_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
