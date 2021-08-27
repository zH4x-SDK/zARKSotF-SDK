
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

// Function ShooterHudBP_MainMenu.ShooterHudBP_MainMenu_C.UserConstructionScript
// ()

void AShooterHudBP_MainMenu_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterHudBP_MainMenu.ShooterHudBP_MainMenu_C.UserConstructionScript");

	AShooterHudBP_MainMenu_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterHudBP_MainMenu.ShooterHudBP_MainMenu_C.ExecuteUbergraph_ShooterHudBP_MainMenu
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AShooterHudBP_MainMenu_C::ExecuteUbergraph_ShooterHudBP_MainMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterHudBP_MainMenu.ShooterHudBP_MainMenu_C.ExecuteUbergraph_ShooterHudBP_MainMenu");

	AShooterHudBP_MainMenu_C_ExecuteUbergraph_ShooterHudBP_MainMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
