
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

// Function WindowWall_Stone.WindowWall_Stone_C.UserConstructionScript
// (Final)

void AWindowWall_Stone_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WindowWall_Stone.WindowWall_Stone_C.UserConstructionScript");

	AWindowWall_Stone_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WindowWall_Stone.WindowWall_Stone_C.ExecuteUbergraph_WindowWall_Stone
// (Final)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWindowWall_Stone_C::ExecuteUbergraph_WindowWall_Stone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WindowWall_Stone.WindowWall_Stone_C.ExecuteUbergraph_WindowWall_Stone");

	AWindowWall_Stone_C_ExecuteUbergraph_WindowWall_Stone_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
