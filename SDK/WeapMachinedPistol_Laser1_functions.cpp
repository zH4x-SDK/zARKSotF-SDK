
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

// Function WeapMachinedPistol_Laser1.WeapMachinedPistol_Laser1_C.UserConstructionScript
// (Final)

void AWeapMachinedPistol_Laser1_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMachinedPistol_Laser1.WeapMachinedPistol_Laser1_C.UserConstructionScript");

	AWeapMachinedPistol_Laser1_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapMachinedPistol_Laser1.WeapMachinedPistol_Laser1_C.ExecuteUbergraph_WeapMachinedPistol_Laser1
// (Final)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapMachinedPistol_Laser1_C::ExecuteUbergraph_WeapMachinedPistol_Laser1(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMachinedPistol_Laser1.WeapMachinedPistol_Laser1_C.ExecuteUbergraph_WeapMachinedPistol_Laser1");

	AWeapMachinedPistol_Laser1_C_ExecuteUbergraph_WeapMachinedPistol_Laser1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
