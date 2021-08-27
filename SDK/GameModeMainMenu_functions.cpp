
#include "../SDK.h"

// Name: ARKSotF, Version: 178.8.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function GameModeMainMenu.GameModeMainMenu_C.UserConstructionScript
// ()

void AGameModeMainMenu_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameModeMainMenu.GameModeMainMenu_C.UserConstructionScript");

	AGameModeMainMenu_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameModeMainMenu.GameModeMainMenu_C.ExecuteUbergraph_GameModeMainMenu
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AGameModeMainMenu_C::ExecuteUbergraph_GameModeMainMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameModeMainMenu.GameModeMainMenu_C.ExecuteUbergraph_GameModeMainMenu");

	AGameModeMainMenu_C_ExecuteUbergraph_GameModeMainMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
