
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

// Function GorillaThrowRockState.GorillaThrowRockState_C.ExecuteUbergraph_GorillaThrowRockState
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UGorillaThrowRockState_C::ExecuteUbergraph_GorillaThrowRockState(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GorillaThrowRockState.GorillaThrowRockState_C.ExecuteUbergraph_GorillaThrowRockState");

	UGorillaThrowRockState_C_ExecuteUbergraph_GorillaThrowRockState_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
