
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

// Function FenceFoundation_Stone.FenceFoundation_Stone_C.UserConstructionScript
// (Final)

void AFenceFoundation_Stone_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function FenceFoundation_Stone.FenceFoundation_Stone_C.UserConstructionScript");

	AFenceFoundation_Stone_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FenceFoundation_Stone.FenceFoundation_Stone_C.ExecuteUbergraph_FenceFoundation_Stone
// (Final)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AFenceFoundation_Stone_C::ExecuteUbergraph_FenceFoundation_Stone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FenceFoundation_Stone.FenceFoundation_Stone_C.ExecuteUbergraph_FenceFoundation_Stone");

	AFenceFoundation_Stone_C_ExecuteUbergraph_FenceFoundation_Stone_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
