
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

// Function DataListEntryWidgetFolder.DataListEntryWidgetFolder_C.ExecuteUbergraph_DataListEntryWidgetFolder
// (Final)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDataListEntryWidgetFolder_C::ExecuteUbergraph_DataListEntryWidgetFolder(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataListEntryWidgetFolder.DataListEntryWidgetFolder_C.ExecuteUbergraph_DataListEntryWidgetFolder");

	UDataListEntryWidgetFolder_C_ExecuteUbergraph_DataListEntryWidgetFolder_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
