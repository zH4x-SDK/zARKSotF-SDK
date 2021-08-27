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

// BlueprintGeneratedClass WeapTorch.WeapTorch_C
// 0x0028 (0x0B78 - 0x0B50)
class AWeapTorch_C : public AShooterWeapon_Melee
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0B50(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapTorch.WeapTorch_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapTorch(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
