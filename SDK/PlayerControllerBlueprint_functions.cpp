
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

// Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.UserConstructionScript
// ()

void APlayerControllerBlueprint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.UserConstructionScript");

	APlayerControllerBlueprint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.ExecuteUbergraph_PlayerControllerBlueprint
// (Final)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APlayerControllerBlueprint_C::ExecuteUbergraph_PlayerControllerBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.ExecuteUbergraph_PlayerControllerBlueprint");

	APlayerControllerBlueprint_C_ExecuteUbergraph_PlayerControllerBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
