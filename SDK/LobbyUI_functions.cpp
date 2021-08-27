
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

// Function LobbyUI.LobbyUI_C.BndEvt__OptionsButton_K2Node_ComponentBoundEvent_116_OnButtonClickedEvent__DelegateSignature
// ()

void ULobbyUI_C::BndEvt__OptionsButton_K2Node_ComponentBoundEvent_116_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyUI.LobbyUI_C.BndEvt__OptionsButton_K2Node_ComponentBoundEvent_116_OnButtonClickedEvent__DelegateSignature");

	ULobbyUI_C_BndEvt__OptionsButton_K2Node_ComponentBoundEvent_116_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyUI.LobbyUI_C.ExecuteUbergraph_LobbyUI
// (Final, BlueprintAuthorityOnly)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ULobbyUI_C::ExecuteUbergraph_LobbyUI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyUI.LobbyUI_C.ExecuteUbergraph_LobbyUI");

	ULobbyUI_C_ExecuteUbergraph_LobbyUI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
