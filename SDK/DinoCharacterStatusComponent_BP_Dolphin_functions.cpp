
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

// Function DinoCharacterStatusComponent_BP_Dolphin.DinoCharacterStatusComponent_BP_Dolphin_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Dolphin
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoCharacterStatusComponent_BP_Dolphin_C::ExecuteUbergraph_DinoCharacterStatusComponent_BP_Dolphin(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacterStatusComponent_BP_Dolphin.DinoCharacterStatusComponent_BP_Dolphin_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Dolphin");

	UDinoCharacterStatusComponent_BP_Dolphin_C_ExecuteUbergraph_DinoCharacterStatusComponent_BP_Dolphin_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
