
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

// Function RewardGroupUI.RewardGroupUI_C.Construct
// ()

void URewardGroupUI_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardGroupUI.RewardGroupUI_C.Construct");

	URewardGroupUI_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RewardGroupUI.RewardGroupUI_C.OnChangeVistibility
// ()

void URewardGroupUI_C::OnChangeVistibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardGroupUI.RewardGroupUI_C.OnChangeVistibility");

	URewardGroupUI_C_OnChangeVistibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RewardGroupUI.RewardGroupUI_C.ExecuteUbergraph_RewardGroupUI
// (Final, RequiredAPI, BlueprintCosmetic)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void URewardGroupUI_C::ExecuteUbergraph_RewardGroupUI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardGroupUI.RewardGroupUI_C.ExecuteUbergraph_RewardGroupUI");

	URewardGroupUI_C_ExecuteUbergraph_RewardGroupUI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
