
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

// Function GateFrame_Stone.GateFrame_Stone_C.UserConstructionScript
// (Final)

void AGateFrame_Stone_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GateFrame_Stone.GateFrame_Stone_C.UserConstructionScript");

	AGateFrame_Stone_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GateFrame_Stone.GateFrame_Stone_C.ExecuteUbergraph_GateFrame_Stone
// (Final)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AGateFrame_Stone_C::ExecuteUbergraph_GateFrame_Stone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GateFrame_Stone.GateFrame_Stone_C.ExecuteUbergraph_GateFrame_Stone");

	AGateFrame_Stone_C_ExecuteUbergraph_GateFrame_Stone_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
