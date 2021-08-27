
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

// Function TutorialUI.TutorialUI_C.ExecuteUbergraph_TutorialUI
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTutorialUI_C::ExecuteUbergraph_TutorialUI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TutorialUI.TutorialUI_C.ExecuteUbergraph_TutorialUI");

	UTutorialUI_C_ExecuteUbergraph_TutorialUI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
