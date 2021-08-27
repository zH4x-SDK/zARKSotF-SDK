
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

// Function DyeUI.DyeUI_C.ExecuteUbergraph_DyeUI
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDyeUI_C::ExecuteUbergraph_DyeUI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DyeUI.DyeUI_C.ExecuteUbergraph_DyeUI");

	UDyeUI_C_ExecuteUbergraph_DyeUI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
