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

// BlueprintGeneratedClass PlayerCameraBlueprint.PlayerCameraBlueprint_C
// 0x0000 (0x1E28 - 0x1E28)
class APlayerCameraBlueprint_C : public AShooterPlayerCameraManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlayerCameraBlueprint.PlayerCameraBlueprint_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_PlayerCameraBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
