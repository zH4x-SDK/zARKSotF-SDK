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

// AnimBlueprintGeneratedClass Rex_Anim_BP.Rex_Anim_BP_C
// 0x0000 (0x132E - 0x132E)
class URex_Anim_BP_C : public UDinoBlueprintBase_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Rex_Anim_BP.Rex_Anim_BP_C");
		return ptr;
	}


	void ExecuteUbergraph_Rex_Anim_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
