
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

// Function WeapPistol_FireCameraShake.WeapPistol_FireCameraShake_C.ExecuteUbergraph_WeapPistol_FireCameraShake
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UWeapPistol_FireCameraShake_C::ExecuteUbergraph_WeapPistol_FireCameraShake(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapPistol_FireCameraShake.WeapPistol_FireCameraShake_C.ExecuteUbergraph_WeapPistol_FireCameraShake");

	UWeapPistol_FireCameraShake_C_ExecuteUbergraph_WeapPistol_FireCameraShake_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
