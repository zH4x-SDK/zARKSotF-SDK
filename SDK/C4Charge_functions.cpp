
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

// Function C4Charge.C4Charge_C.UserConstructionScript
// ()

void AC4Charge_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function C4Charge.C4Charge_C.UserConstructionScript");

	AC4Charge_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function C4Charge.C4Charge_C.ExecuteUbergraph_C4Charge
// (Final)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AC4Charge_C::ExecuteUbergraph_C4Charge(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function C4Charge.C4Charge_C.ExecuteUbergraph_C4Charge");

	AC4Charge_C_ExecuteUbergraph_C4Charge_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
