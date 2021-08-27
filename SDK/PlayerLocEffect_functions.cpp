
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

// Function PlayerLocEffect.PlayerLocEffect_C.UserConstructionScript
// ()

void APlayerLocEffect_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerLocEffect.PlayerLocEffect_C.UserConstructionScript");

	APlayerLocEffect_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerLocEffect.PlayerLocEffect_C.ExecuteUbergraph_PlayerLocEffect
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APlayerLocEffect_C::ExecuteUbergraph_PlayerLocEffect(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerLocEffect.PlayerLocEffect_C.ExecuteUbergraph_PlayerLocEffect");

	APlayerLocEffect_C_ExecuteUbergraph_PlayerLocEffect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif