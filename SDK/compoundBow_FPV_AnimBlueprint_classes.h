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

// AnimBlueprintGeneratedClass compoundBow_FPV_AnimBlueprint.compoundBow_FPV_AnimBlueprint_C
// 0x0000 (0x09E9 - 0x09E9)
class UcompoundBow_FPV_AnimBlueprint_C : public UFPVBowWeaponAnimBP_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass compoundBow_FPV_AnimBlueprint.compoundBow_FPV_AnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_compoundBow_FPV_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
