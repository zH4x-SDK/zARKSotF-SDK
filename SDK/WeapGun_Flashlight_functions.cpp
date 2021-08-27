
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

// Function WeapGun_Flashlight.WeapGun_Flashlight_C.UserConstructionScript
// (Final)

void AWeapGun_Flashlight_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapGun_Flashlight.WeapGun_Flashlight_C.UserConstructionScript");

	AWeapGun_Flashlight_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapGun_Flashlight.WeapGun_Flashlight_C.ExecuteUbergraph_WeapGun_Flashlight
// (Final)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapGun_Flashlight_C::ExecuteUbergraph_WeapGun_Flashlight(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapGun_Flashlight.WeapGun_Flashlight_C.ExecuteUbergraph_WeapGun_Flashlight");

	AWeapGun_Flashlight_C_ExecuteUbergraph_WeapGun_Flashlight_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
