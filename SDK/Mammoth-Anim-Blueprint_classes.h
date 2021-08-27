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

// AnimBlueprintGeneratedClass Mammoth-Anim-Blueprint.Mammoth-Anim-Blueprint_C
// 0x0000 (0x15F4 - 0x15F4)
class UMammoth_Anim_Blueprint_C : public UDinoBlueprintBase_RootBoneName_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Mammoth-Anim-Blueprint.Mammoth-Anim-Blueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_Mammoth_Anim_Blueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
