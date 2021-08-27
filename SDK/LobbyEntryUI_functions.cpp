
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

// Function LobbyEntryUI.LobbyEntryUI_C.ExecuteUbergraph_LobbyEntryUI
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ULobbyEntryUI_C::ExecuteUbergraph_LobbyEntryUI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyEntryUI.LobbyEntryUI_C.ExecuteUbergraph_LobbyEntryUI");

	ULobbyEntryUI_C_ExecuteUbergraph_LobbyEntryUI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
