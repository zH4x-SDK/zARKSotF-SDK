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

// BlueprintGeneratedClass GameModeMainMenu.GameModeMainMenu_C
// 0x0008 (0x0518 - 0x0510)
class AGameModeMainMenu_C : public AShooterGame_Menu
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0510(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GameModeMainMenu.GameModeMainMenu_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_GameModeMainMenu(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
