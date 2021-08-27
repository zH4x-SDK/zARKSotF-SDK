
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

// Function Ceiling_Door_Base_SM.Ceiling_Door_Base_SM_C.UserConstructionScript
// ()

void ACeiling_Door_Base_SM_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ceiling_Door_Base_SM.Ceiling_Door_Base_SM_C.UserConstructionScript");

	ACeiling_Door_Base_SM_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ceiling_Door_Base_SM.Ceiling_Door_Base_SM_C.ExecuteUbergraph_Ceiling_Door_Base_SM
// (Final)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ACeiling_Door_Base_SM_C::ExecuteUbergraph_Ceiling_Door_Base_SM(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ceiling_Door_Base_SM.Ceiling_Door_Base_SM_C.ExecuteUbergraph_Ceiling_Door_Base_SM");

	ACeiling_Door_Base_SM_C_ExecuteUbergraph_Ceiling_Door_Base_SM_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
