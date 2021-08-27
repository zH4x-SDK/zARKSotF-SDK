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

// AnimBlueprintGeneratedClass BowTPVAnimBP.BowTPVAnimBP_C
// 0x0228 (0x0568 - 0x0340)
class UBowTPVAnimBP_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x228];                                     // 0x0340(0x0228) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BowTPVAnimBP.BowTPVAnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_BowTPVAnimBP_AnimGraphNode_TransitionResult_794();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BowTPVAnimBP_AnimGraphNode_TransitionResult_793();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BowTPVAnimBP_AnimGraphNode_TransitionResult_792();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BowTPVAnimBP_AnimGraphNode_TransitionResult_791();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_BowTPVAnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
