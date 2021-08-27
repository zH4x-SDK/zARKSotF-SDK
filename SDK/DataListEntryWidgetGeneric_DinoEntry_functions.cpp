
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

// Function DataListEntryWidgetGeneric_DinoEntry.DataListEntryWidgetGeneric_DinoEntry_C.ExecuteUbergraph_DataListEntryWidgetGeneric_DinoEntry
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDataListEntryWidgetGeneric_DinoEntry_C::ExecuteUbergraph_DataListEntryWidgetGeneric_DinoEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataListEntryWidgetGeneric_DinoEntry.DataListEntryWidgetGeneric_DinoEntry_C.ExecuteUbergraph_DataListEntryWidgetGeneric_DinoEntry");

	UDataListEntryWidgetGeneric_DinoEntry_C_ExecuteUbergraph_DataListEntryWidgetGeneric_DinoEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
