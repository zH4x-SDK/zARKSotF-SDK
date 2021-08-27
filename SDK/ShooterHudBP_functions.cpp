
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

// Function ShooterHudBP.ShooterHudBP_C.UserConstructionScript
// ()

void AShooterHudBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterHudBP.ShooterHudBP_C.UserConstructionScript");

	AShooterHudBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterHudBP.ShooterHudBP_C.ExecuteUbergraph_ShooterHudBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AShooterHudBP_C::ExecuteUbergraph_ShooterHudBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterHudBP.ShooterHudBP_C.ExecuteUbergraph_ShooterHudBP");

	AShooterHudBP_C_ExecuteUbergraph_ShooterHudBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
