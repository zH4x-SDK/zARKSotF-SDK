
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

// Function PinEntryUI.PinEntryUI_C.ExecuteUbergraph_PinEntryUI
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPinEntryUI_C::ExecuteUbergraph_PinEntryUI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PinEntryUI.PinEntryUI_C.ExecuteUbergraph_PinEntryUI");

	UPinEntryUI_C_ExecuteUbergraph_PinEntryUI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
