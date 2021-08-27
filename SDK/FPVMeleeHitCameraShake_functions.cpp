
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

// Function FPVMeleeHitCameraShake.FPVMeleeHitCameraShake_C.ExecuteUbergraph_FPVMeleeHitCameraShake
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UFPVMeleeHitCameraShake_C::ExecuteUbergraph_FPVMeleeHitCameraShake(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FPVMeleeHitCameraShake.FPVMeleeHitCameraShake_C.ExecuteUbergraph_FPVMeleeHitCameraShake");

	UFPVMeleeHitCameraShake_C_ExecuteUbergraph_FPVMeleeHitCameraShake_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
