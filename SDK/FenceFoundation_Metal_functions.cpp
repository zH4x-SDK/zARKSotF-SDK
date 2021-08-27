
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

// Function FenceFoundation_Metal.FenceFoundation_Metal_C.UserConstructionScript
// (Final)

void AFenceFoundation_Metal_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function FenceFoundation_Metal.FenceFoundation_Metal_C.UserConstructionScript");

	AFenceFoundation_Metal_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FenceFoundation_Metal.FenceFoundation_Metal_C.ExecuteUbergraph_FenceFoundation_Metal
// (Final)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AFenceFoundation_Metal_C::ExecuteUbergraph_FenceFoundation_Metal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FenceFoundation_Metal.FenceFoundation_Metal_C.ExecuteUbergraph_FenceFoundation_Metal");

	AFenceFoundation_Metal_C_ExecuteUbergraph_FenceFoundation_Metal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
