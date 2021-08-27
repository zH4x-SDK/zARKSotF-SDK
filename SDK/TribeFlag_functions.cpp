
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

// Function TribeFlag.TribeFlag_C.UserConstructionScript
// (Final)

void ATribeFlag_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TribeFlag.TribeFlag_C.UserConstructionScript");

	ATribeFlag_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TribeFlag.TribeFlag_C.ExecuteUbergraph_TribeFlag
// (Final)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATribeFlag_C::ExecuteUbergraph_TribeFlag(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TribeFlag.TribeFlag_C.ExecuteUbergraph_TribeFlag");

	ATribeFlag_C_ExecuteUbergraph_TribeFlag_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
