
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

// Function DinoAttackStateFlyerGrab.DinoAttackStateFlyerGrab_C.ExecuteUbergraph_DinoAttackStateFlyerGrab
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackStateFlyerGrab_C::ExecuteUbergraph_DinoAttackStateFlyerGrab(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateFlyerGrab.DinoAttackStateFlyerGrab_C.ExecuteUbergraph_DinoAttackStateFlyerGrab");

	UDinoAttackStateFlyerGrab_C_ExecuteUbergraph_DinoAttackStateFlyerGrab_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
