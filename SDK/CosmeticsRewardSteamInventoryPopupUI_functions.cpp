
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

// Function CosmeticsRewardSteamInventoryPopupUI.CosmeticsRewardSteamInventoryPopupUI_C.Get_Icon_Brush_1
// (RequiredAPI, BlueprintAuthorityOnly)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UCosmeticsRewardSteamInventoryPopupUI_C::Get_Icon_Brush_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function CosmeticsRewardSteamInventoryPopupUI.CosmeticsRewardSteamInventoryPopupUI_C.Get_Icon_Brush_1");

	UCosmeticsRewardSteamInventoryPopupUI_C_Get_Icon_Brush_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CosmeticsRewardSteamInventoryPopupUI.CosmeticsRewardSteamInventoryPopupUI_C.ExecuteUbergraph_CosmeticsRewardSteamInventoryPopupUI
// (Final)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UCosmeticsRewardSteamInventoryPopupUI_C::ExecuteUbergraph_CosmeticsRewardSteamInventoryPopupUI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CosmeticsRewardSteamInventoryPopupUI.CosmeticsRewardSteamInventoryPopupUI_C.ExecuteUbergraph_CosmeticsRewardSteamInventoryPopupUI");

	UCosmeticsRewardSteamInventoryPopupUI_C_ExecuteUbergraph_CosmeticsRewardSteamInventoryPopupUI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
