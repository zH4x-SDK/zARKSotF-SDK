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

// BlueprintGeneratedClass PlayerFollowEffect.PlayerFollowEffect_C
// 0x0000 (0x06C0 - 0x06C0)
class APlayerFollowEffect_C : public APlayerLocEffect_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlayerFollowEffect.PlayerFollowEffect_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_PlayerFollowEffect(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
