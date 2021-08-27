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

// BlueprintGeneratedClass PlayerControllerBlueprint.PlayerControllerBlueprint_C
// 0x0008 (0x0DB0 - 0x0DA8)
class APlayerControllerBlueprint_C : public AShooterPlayerController
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0DA8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlayerControllerBlueprint.PlayerControllerBlueprint_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_PlayerControllerBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
