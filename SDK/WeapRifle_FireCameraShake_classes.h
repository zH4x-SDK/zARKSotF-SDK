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

// BlueprintGeneratedClass WeapRifle_FireCameraShake.WeapRifle_FireCameraShake_C
// 0x0000 (0x00B0 - 0x00B0)
class UWeapRifle_FireCameraShake_C : public UCameraShake
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapRifle_FireCameraShake.WeapRifle_FireCameraShake_C");
		return ptr;
	}


	void ExecuteUbergraph_WeapRifle_FireCameraShake(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
