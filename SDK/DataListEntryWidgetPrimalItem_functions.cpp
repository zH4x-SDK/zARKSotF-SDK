
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

// Function DataListEntryWidgetPrimalItem.DataListEntryWidgetPrimalItem_C.ExecuteUbergraph_DataListEntryWidgetPrimalItem
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDataListEntryWidgetPrimalItem_C::ExecuteUbergraph_DataListEntryWidgetPrimalItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataListEntryWidgetPrimalItem.DataListEntryWidgetPrimalItem_C.ExecuteUbergraph_DataListEntryWidgetPrimalItem");

	UDataListEntryWidgetPrimalItem_C_ExecuteUbergraph_DataListEntryWidgetPrimalItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
