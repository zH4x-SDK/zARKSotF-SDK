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

// BlueprintGeneratedClass WeapOneShotRifleScoped.WeapOneShotRifleScoped_C
// 0x0010 (0x0BD8 - 0x0BC8)
class AWeapOneShotRifleScoped_C : public AWeapOneShotRifle_C
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0BC8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapOneShotRifleScoped.WeapOneShotRifleScoped_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapOneShotRifleScoped(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
