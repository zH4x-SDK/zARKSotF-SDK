
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

// Function RockImpactBreakEmitter.RockImpactBreakEmitter_C.UserConstructionScript
// ()

void ARockImpactBreakEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function RockImpactBreakEmitter.RockImpactBreakEmitter_C.UserConstructionScript");

	ARockImpactBreakEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockImpactBreakEmitter.RockImpactBreakEmitter_C.ExecuteUbergraph_RockImpactBreakEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ARockImpactBreakEmitter_C::ExecuteUbergraph_RockImpactBreakEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RockImpactBreakEmitter.RockImpactBreakEmitter_C.ExecuteUbergraph_RockImpactBreakEmitter");

	ARockImpactBreakEmitter_C_ExecuteUbergraph_RockImpactBreakEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
