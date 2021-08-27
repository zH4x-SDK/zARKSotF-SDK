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

// BlueprintGeneratedClass ShooterHudBP.ShooterHudBP_C
// 0x0008 (0x0A40 - 0x0A38)
class AShooterHudBP_C : public AShooterHUD
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0A38(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ShooterHudBP.ShooterHudBP_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ShooterHudBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
