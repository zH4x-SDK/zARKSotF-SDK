
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

// Function FPVMeleeCameraShake.FPVMeleeCameraShake_C.ExecuteUbergraph_FPVMeleeCameraShake
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UFPVMeleeCameraShake_C::ExecuteUbergraph_FPVMeleeCameraShake(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FPVMeleeCameraShake.FPVMeleeCameraShake_C.ExecuteUbergraph_FPVMeleeCameraShake");

	UFPVMeleeCameraShake_C_ExecuteUbergraph_FPVMeleeCameraShake_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
