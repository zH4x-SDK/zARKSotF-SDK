
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

// Function Ceiling_Stone.Ceiling_Stone_C.UserConstructionScript
// (Final)

void ACeiling_Stone_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ceiling_Stone.Ceiling_Stone_C.UserConstructionScript");

	ACeiling_Stone_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ceiling_Stone.Ceiling_Stone_C.ExecuteUbergraph_Ceiling_Stone
// (Final)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ACeiling_Stone_C::ExecuteUbergraph_Ceiling_Stone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ceiling_Stone.Ceiling_Stone_C.ExecuteUbergraph_Ceiling_Stone");

	ACeiling_Stone_C_ExecuteUbergraph_Ceiling_Stone_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
