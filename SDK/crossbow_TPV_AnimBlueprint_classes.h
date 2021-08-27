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

// AnimBlueprintGeneratedClass crossbow_TPV_AnimBlueprint.crossbow_TPV_AnimBlueprint_C
// 0x01C0 (0x0500 - 0x0340)
class Ucrossbow_TPV_AnimBlueprint_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x1C0];                                     // 0x0340(0x01C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass crossbow_TPV_AnimBlueprint.crossbow_TPV_AnimBlueprint_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_crossbow_TPV_AnimBlueprint_AnimGraphNode_TransitionResult_798();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_crossbow_TPV_AnimBlueprint_AnimGraphNode_TransitionResult_797();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_crossbow_TPV_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
