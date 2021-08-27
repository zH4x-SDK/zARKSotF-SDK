
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

// Function PlayerFollowEffect.PlayerFollowEffect_C.UserConstructionScript
// ()

void APlayerFollowEffect_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerFollowEffect.PlayerFollowEffect_C.UserConstructionScript");

	APlayerFollowEffect_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerFollowEffect.PlayerFollowEffect_C.ExecuteUbergraph_PlayerFollowEffect
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APlayerFollowEffect_C::ExecuteUbergraph_PlayerFollowEffect(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerFollowEffect.PlayerFollowEffect_C.ExecuteUbergraph_PlayerFollowEffect");

	APlayerFollowEffect_C_ExecuteUbergraph_PlayerFollowEffect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
