
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

// Function RewardsListUI.RewardsListUI_C.ExecuteUbergraph_RewardsListUI
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void URewardsListUI_C::ExecuteUbergraph_RewardsListUI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardsListUI.RewardsListUI_C.ExecuteUbergraph_RewardsListUI");

	URewardsListUI_C_ExecuteUbergraph_RewardsListUI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
