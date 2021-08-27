
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

// Function Ladder_Metal.Ladder_Metal_C.UserConstructionScript
// ()

void ALadder_Metal_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ladder_Metal.Ladder_Metal_C.UserConstructionScript");

	ALadder_Metal_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ladder_Metal.Ladder_Metal_C.ExecuteUbergraph_Ladder_Metal
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ALadder_Metal_C::ExecuteUbergraph_Ladder_Metal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ladder_Metal.Ladder_Metal_C.ExecuteUbergraph_Ladder_Metal");

	ALadder_Metal_C_ExecuteUbergraph_Ladder_Metal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
