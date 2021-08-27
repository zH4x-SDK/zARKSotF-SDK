
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

// Function TransGPSCharge.TransGPSCharge_C.UserConstructionScript
// ()

void ATransGPSCharge_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TransGPSCharge.TransGPSCharge_C.UserConstructionScript");

	ATransGPSCharge_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TransGPSCharge.TransGPSCharge_C.ExecuteUbergraph_TransGPSCharge
// (Final)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATransGPSCharge_C::ExecuteUbergraph_TransGPSCharge(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TransGPSCharge.TransGPSCharge_C.ExecuteUbergraph_TransGPSCharge");

	ATransGPSCharge_C_ExecuteUbergraph_TransGPSCharge_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
