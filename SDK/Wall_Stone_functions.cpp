
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

// Function Wall_Stone.Wall_Stone_C.UserConstructionScript
// (Final)

void AWall_Stone_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Wall_Stone.Wall_Stone_C.UserConstructionScript");

	AWall_Stone_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Wall_Stone.Wall_Stone_C.ExecuteUbergraph_Wall_Stone
// (Final)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWall_Stone_C::ExecuteUbergraph_Wall_Stone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Wall_Stone.Wall_Stone_C.ExecuteUbergraph_Wall_Stone");

	AWall_Stone_C_ExecuteUbergraph_Wall_Stone_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
