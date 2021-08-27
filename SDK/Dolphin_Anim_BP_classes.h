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

// AnimBlueprintGeneratedClass Dolphin_Anim_BP.Dolphin_Anim_BP_C
// 0x0000 (0x0E9C - 0x0E9C)
class UDolphin_Anim_BP_C : public UDinoBlueprintBase_RootTransform_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Dolphin_Anim_BP.Dolphin_Anim_BP_C");
		return ptr;
	}


	void ExecuteUbergraph_Dolphin_Anim_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
