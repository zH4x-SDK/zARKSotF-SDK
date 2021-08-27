
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

// Function Gate_Stone.Gate_Stone_C.UserConstructionScript
// (Final)

void AGate_Stone_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gate_Stone.Gate_Stone_C.UserConstructionScript");

	AGate_Stone_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gate_Stone.Gate_Stone_C.ExecuteUbergraph_Gate_Stone
// (Final)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AGate_Stone_C::ExecuteUbergraph_Gate_Stone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gate_Stone.Gate_Stone_C.ExecuteUbergraph_Gate_Stone");

	AGate_Stone_C_ExecuteUbergraph_Gate_Stone_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
