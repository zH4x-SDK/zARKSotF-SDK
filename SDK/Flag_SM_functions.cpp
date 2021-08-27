
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

// Function Flag_SM.Flag_SM_C.UserConstructionScript
// ()

void AFlag_SM_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Flag_SM.Flag_SM_C.UserConstructionScript");

	AFlag_SM_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Flag_SM.Flag_SM_C.ExecuteUbergraph_Flag_SM
// (Final)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AFlag_SM_C::ExecuteUbergraph_Flag_SM(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Flag_SM.Flag_SM_C.ExecuteUbergraph_Flag_SM");

	AFlag_SM_C_ExecuteUbergraph_Flag_SM_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
