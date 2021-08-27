
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

// Function ProjGrapHook.ProjGrapHook_C.UserConstructionScript
// ()

void AProjGrapHook_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjGrapHook.ProjGrapHook_C.UserConstructionScript");

	AProjGrapHook_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjGrapHook.ProjGrapHook_C.ExecuteUbergraph_ProjGrapHook
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjGrapHook_C::ExecuteUbergraph_ProjGrapHook(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjGrapHook.ProjGrapHook_C.ExecuteUbergraph_ProjGrapHook");

	AProjGrapHook_C_ExecuteUbergraph_ProjGrapHook_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
