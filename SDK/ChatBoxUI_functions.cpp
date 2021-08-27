
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

// Function ChatBoxUI.ChatBoxUI_C.ExecuteUbergraph_ChatBoxUI
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UChatBoxUI_C::ExecuteUbergraph_ChatBoxUI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatBoxUI.ChatBoxUI_C.ExecuteUbergraph_ChatBoxUI");

	UChatBoxUI_C_ExecuteUbergraph_ChatBoxUI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
