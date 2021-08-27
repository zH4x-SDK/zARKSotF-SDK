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

// AnimBlueprintGeneratedClass poisonTrap_FPV_RIG_AnimBlueprint.poisonTrap_FPV_RIG_AnimBlueprint_C
// 0x0000 (0x1214 - 0x1214)
class UpoisonTrap_FPV_RIG_AnimBlueprint_C : public UFPVWeaponAnimBP_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass poisonTrap_FPV_RIG_AnimBlueprint.poisonTrap_FPV_RIG_AnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_poisonTrap_FPV_RIG_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
