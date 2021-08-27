
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

// Function WeapMachinedShotgun_Laser.WeapMachinedShotgun_Laser_C.UserConstructionScript
// (Final)

void AWeapMachinedShotgun_Laser_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMachinedShotgun_Laser.WeapMachinedShotgun_Laser_C.UserConstructionScript");

	AWeapMachinedShotgun_Laser_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapMachinedShotgun_Laser.WeapMachinedShotgun_Laser_C.ExecuteUbergraph_WeapMachinedShotgun_Laser
// (Final)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapMachinedShotgun_Laser_C::ExecuteUbergraph_WeapMachinedShotgun_Laser(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMachinedShotgun_Laser.WeapMachinedShotgun_Laser_C.ExecuteUbergraph_WeapMachinedShotgun_Laser");

	AWeapMachinedShotgun_Laser_C_ExecuteUbergraph_WeapMachinedShotgun_Laser_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
