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

// AnimBlueprintGeneratedClass RifleFemaleAnimBlueprint.RifleFemaleAnimBlueprint_C
// 0x0000 (0x2838 - 0x2838)
class URifleFemaleAnimBlueprint_C : public UTPV_Female_NoWeapon_AnimBlueprint_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass RifleFemaleAnimBlueprint.RifleFemaleAnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_RifleFemaleAnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
