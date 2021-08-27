
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

// Function FenceFoundation_Wood_SM.FenceFoundation_Wood_SM_C.UserConstructionScript
// (Final)

void AFenceFoundation_Wood_SM_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function FenceFoundation_Wood_SM.FenceFoundation_Wood_SM_C.UserConstructionScript");

	AFenceFoundation_Wood_SM_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FenceFoundation_Wood_SM.FenceFoundation_Wood_SM_C.ExecuteUbergraph_FenceFoundation_Wood_SM
// (Final)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AFenceFoundation_Wood_SM_C::ExecuteUbergraph_FenceFoundation_Wood_SM(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FenceFoundation_Wood_SM.FenceFoundation_Wood_SM_C.ExecuteUbergraph_FenceFoundation_Wood_SM");

	AFenceFoundation_Wood_SM_C_ExecuteUbergraph_FenceFoundation_Wood_SM_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
