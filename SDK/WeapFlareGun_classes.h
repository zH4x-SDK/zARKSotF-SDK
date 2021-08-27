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

// BlueprintGeneratedClass WeapFlareGun.WeapFlareGun_C
// 0x0000 (0x0BA0 - 0x0BA0)
class AWeapFlareGun_C : public AShooterWeapon_Projectile
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapFlareGun.WeapFlareGun_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapFlareGun(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
