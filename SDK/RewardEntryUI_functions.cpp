
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

// Function RewardEntryUI.RewardEntryUI_C.ExecuteUbergraph_RewardEntryUI
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void URewardEntryUI_C::ExecuteUbergraph_RewardEntryUI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardEntryUI.RewardEntryUI_C.ExecuteUbergraph_RewardEntryUI");

	URewardEntryUI_C_ExecuteUbergraph_RewardEntryUI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
