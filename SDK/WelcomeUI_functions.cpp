
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

// Function WelcomeUI.WelcomeUI_C.ExecuteUbergraph_WelcomeUI
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UWelcomeUI_C::ExecuteUbergraph_WelcomeUI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WelcomeUI.WelcomeUI_C.ExecuteUbergraph_WelcomeUI");

	UWelcomeUI_C_ExecuteUbergraph_WelcomeUI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
