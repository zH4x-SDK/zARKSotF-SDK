
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

// Function Buff_Base_DamageStew.Buff_Base_DamageStew_C.UserConstructionScript
// (Final)

void ABuff_Base_DamageStew_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Base_DamageStew.Buff_Base_DamageStew_C.UserConstructionScript");

	ABuff_Base_DamageStew_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Base_DamageStew.Buff_Base_DamageStew_C.ExecuteUbergraph_Buff_Base_DamageStew
// (Final)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Base_DamageStew_C::ExecuteUbergraph_Buff_Base_DamageStew(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Base_DamageStew.Buff_Base_DamageStew_C.ExecuteUbergraph_Buff_Base_DamageStew");

	ABuff_Base_DamageStew_C_ExecuteUbergraph_Buff_Base_DamageStew_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
