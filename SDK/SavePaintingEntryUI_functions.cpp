
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

// Function SavePaintingEntryUI.SavePaintingEntryUI_C.ExecuteUbergraph_SavePaintingEntryUI
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void USavePaintingEntryUI_C::ExecuteUbergraph_SavePaintingEntryUI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SavePaintingEntryUI.SavePaintingEntryUI_C.ExecuteUbergraph_SavePaintingEntryUI");

	USavePaintingEntryUI_C_ExecuteUbergraph_SavePaintingEntryUI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
