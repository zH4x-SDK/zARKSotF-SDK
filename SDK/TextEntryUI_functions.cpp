
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

// Function TextEntryUI.TextEntryUI_C.ExecuteUbergraph_TextEntryUI
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTextEntryUI_C::ExecuteUbergraph_TextEntryUI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TextEntryUI.TextEntryUI_C.ExecuteUbergraph_TextEntryUI");

	UTextEntryUI_C_ExecuteUbergraph_TextEntryUI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
