
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

// Function HudOverlayUI.HudOverlayUI_C.ExecuteUbergraph_HudOverlayUI
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UHudOverlayUI_C::ExecuteUbergraph_HudOverlayUI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HudOverlayUI.HudOverlayUI_C.ExecuteUbergraph_HudOverlayUI");

	UHudOverlayUI_C_ExecuteUbergraph_HudOverlayUI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
