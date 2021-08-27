
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

// Function TribeManagerUI.TribeManagerUI_C.ExecuteUbergraph_TribeManagerUI
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTribeManagerUI_C::ExecuteUbergraph_TribeManagerUI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TribeManagerUI.TribeManagerUI_C.ExecuteUbergraph_TribeManagerUI");

	UTribeManagerUI_C_ExecuteUbergraph_TribeManagerUI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
