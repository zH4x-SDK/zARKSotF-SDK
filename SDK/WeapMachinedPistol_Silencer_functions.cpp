
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

// Function WeapMachinedPistol_Silencer.WeapMachinedPistol_Silencer_C.UserConstructionScript
// (Final)

void AWeapMachinedPistol_Silencer_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMachinedPistol_Silencer.WeapMachinedPistol_Silencer_C.UserConstructionScript");

	AWeapMachinedPistol_Silencer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapMachinedPistol_Silencer.WeapMachinedPistol_Silencer_C.ExecuteUbergraph_WeapMachinedPistol_Silencer
// (Final)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapMachinedPistol_Silencer_C::ExecuteUbergraph_WeapMachinedPistol_Silencer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMachinedPistol_Silencer.WeapMachinedPistol_Silencer_C.ExecuteUbergraph_WeapMachinedPistol_Silencer");

	AWeapMachinedPistol_Silencer_C_ExecuteUbergraph_WeapMachinedPistol_Silencer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
