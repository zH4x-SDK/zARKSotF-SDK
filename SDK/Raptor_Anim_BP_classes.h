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

// AnimBlueprintGeneratedClass Raptor_Anim_BP.Raptor_Anim_BP_C
// 0x0000 (0x132E - 0x132E)
class URaptor_Anim_BP_C : public UDinoBlueprintBase_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Raptor_Anim_BP.Raptor_Anim_BP_C");
		return ptr;
	}


	void ExecuteUbergraph_Raptor_Anim_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
