
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

// Function SurvivorProfileUI.SurvivorProfileUI_C.ExecuteUbergraph_SurvivorProfileUI
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void USurvivorProfileUI_C::ExecuteUbergraph_SurvivorProfileUI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SurvivorProfileUI.SurvivorProfileUI_C.ExecuteUbergraph_SurvivorProfileUI");

	USurvivorProfileUI_C_ExecuteUbergraph_SurvivorProfileUI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
