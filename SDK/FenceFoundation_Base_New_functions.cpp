
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

// Function FenceFoundation_Base_New.FenceFoundation_Base_New_C.UserConstructionScript
// (Final)

void AFenceFoundation_Base_New_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function FenceFoundation_Base_New.FenceFoundation_Base_New_C.UserConstructionScript");

	AFenceFoundation_Base_New_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FenceFoundation_Base_New.FenceFoundation_Base_New_C.ExecuteUbergraph_FenceFoundation_Base_New
// (Final)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AFenceFoundation_Base_New_C::ExecuteUbergraph_FenceFoundation_Base_New(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FenceFoundation_Base_New.FenceFoundation_Base_New_C.ExecuteUbergraph_FenceFoundation_Base_New");

	AFenceFoundation_Base_New_C_ExecuteUbergraph_FenceFoundation_Base_New_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
