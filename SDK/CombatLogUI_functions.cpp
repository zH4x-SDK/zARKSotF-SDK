
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

// Function CombatLogUI.CombatLogUI_C.ExecuteUbergraph_CombatLogUI
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UCombatLogUI_C::ExecuteUbergraph_CombatLogUI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CombatLogUI.CombatLogUI_C.ExecuteUbergraph_CombatLogUI");

	UCombatLogUI_C_ExecuteUbergraph_CombatLogUI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
