
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

// Function DataListEntryWidgetGeneric_AutomaticRefresh.DataListEntryWidgetGeneric_AutomaticRefresh_C.ExecuteUbergraph_DataListEntryWidgetGeneric_AutomaticRefresh
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDataListEntryWidgetGeneric_AutomaticRefresh_C::ExecuteUbergraph_DataListEntryWidgetGeneric_AutomaticRefresh(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataListEntryWidgetGeneric_AutomaticRefresh.DataListEntryWidgetGeneric_AutomaticRefresh_C.ExecuteUbergraph_DataListEntryWidgetGeneric_AutomaticRefresh");

	UDataListEntryWidgetGeneric_AutomaticRefresh_C_ExecuteUbergraph_DataListEntryWidgetGeneric_AutomaticRefresh_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
