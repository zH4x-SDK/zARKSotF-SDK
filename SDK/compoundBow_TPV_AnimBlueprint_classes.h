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

// AnimBlueprintGeneratedClass compoundBow_TPV_AnimBlueprint.compoundBow_TPV_AnimBlueprint_C
// 0x0260 (0x05A0 - 0x0340)
class UcompoundBow_TPV_AnimBlueprint_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x260];                                     // 0x0340(0x0260) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass compoundBow_TPV_AnimBlueprint.compoundBow_TPV_AnimBlueprint_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_compoundBow_TPV_AnimBlueprint_AnimGraphNode_TransitionResult_742();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_compoundBow_TPV_AnimBlueprint_AnimGraphNode_TransitionResult_741();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_compoundBow_TPV_AnimBlueprint_AnimGraphNode_TransitionResult_740();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_compoundBow_TPV_AnimBlueprint_AnimGraphNode_TransitionResult_739();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_compoundBow_TPV_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
