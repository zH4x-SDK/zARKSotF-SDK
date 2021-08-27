
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

// Function Metal_Ramp_Placement_Emitter.Metal_Ramp_Placement_Emitter_C.UserConstructionScript
// ()

void AMetal_Ramp_Placement_Emitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Metal_Ramp_Placement_Emitter.Metal_Ramp_Placement_Emitter_C.UserConstructionScript");

	AMetal_Ramp_Placement_Emitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Metal_Ramp_Placement_Emitter.Metal_Ramp_Placement_Emitter_C.ExecuteUbergraph_Metal_Ramp_Placement_Emitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMetal_Ramp_Placement_Emitter_C::ExecuteUbergraph_Metal_Ramp_Placement_Emitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Metal_Ramp_Placement_Emitter.Metal_Ramp_Placement_Emitter_C.ExecuteUbergraph_Metal_Ramp_Placement_Emitter");

	AMetal_Ramp_Placement_Emitter_C_ExecuteUbergraph_Metal_Ramp_Placement_Emitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif