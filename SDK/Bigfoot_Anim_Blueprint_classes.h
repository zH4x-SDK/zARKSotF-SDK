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

// AnimBlueprintGeneratedClass Bigfoot_Anim_Blueprint.Bigfoot_Anim_Blueprint_C
// 0x0000 (0x17B8 - 0x17B8)
class UBigfoot_Anim_Blueprint_C : public UDinoBlueprintBase_MovementBlendSpace_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Bigfoot_Anim_Blueprint.Bigfoot_Anim_Blueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_Bigfoot_Anim_Blueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
