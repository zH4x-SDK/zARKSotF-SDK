
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

// Function WeapOneShotRifleFlashlight.WeapOneShotRifleFlashlight_C.UserConstructionScript
// ()

void AWeapOneShotRifleFlashlight_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapOneShotRifleFlashlight.WeapOneShotRifleFlashlight_C.UserConstructionScript");

	AWeapOneShotRifleFlashlight_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapOneShotRifleFlashlight.WeapOneShotRifleFlashlight_C.ExecuteUbergraph_WeapOneShotRifleFlashlight
// (Final)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapOneShotRifleFlashlight_C::ExecuteUbergraph_WeapOneShotRifleFlashlight(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapOneShotRifleFlashlight.WeapOneShotRifleFlashlight_C.ExecuteUbergraph_WeapOneShotRifleFlashlight");

	AWeapOneShotRifleFlashlight_C_ExecuteUbergraph_WeapOneShotRifleFlashlight_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif