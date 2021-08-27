
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

// Function MapMarkersEntryUI.MapMarkersEntryUI_C.ExecuteUbergraph_MapMarkersEntryUI
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UMapMarkersEntryUI_C::ExecuteUbergraph_MapMarkersEntryUI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapMarkersEntryUI.MapMarkersEntryUI_C.ExecuteUbergraph_MapMarkersEntryUI");

	UMapMarkersEntryUI_C_ExecuteUbergraph_MapMarkersEntryUI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
