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

// BlueprintGeneratedClass WeapPike.WeapPike_C
// 0x0000 (0x0B50 - 0x0B50)
class AWeapPike_C : public AShooterWeapon_Melee
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapPike.WeapPike_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapPike(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
