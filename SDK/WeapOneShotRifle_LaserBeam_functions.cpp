
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

// Function WeapOneShotRifle_LaserBeam.WeapOneShotRifle_LaserBeam_C.UserConstructionScript
// ()

void AWeapOneShotRifle_LaserBeam_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapOneShotRifle_LaserBeam.WeapOneShotRifle_LaserBeam_C.UserConstructionScript");

	AWeapOneShotRifle_LaserBeam_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapOneShotRifle_LaserBeam.WeapOneShotRifle_LaserBeam_C.ExecuteUbergraph_WeapOneShotRifle_LaserBeam
// (Final)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapOneShotRifle_LaserBeam_C::ExecuteUbergraph_WeapOneShotRifle_LaserBeam(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapOneShotRifle_LaserBeam.WeapOneShotRifle_LaserBeam_C.ExecuteUbergraph_WeapOneShotRifle_LaserBeam");

	AWeapOneShotRifle_LaserBeam_C_ExecuteUbergraph_WeapOneShotRifle_LaserBeam_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
