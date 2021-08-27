
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

// Function GenericButtonEntryWidget.GenericButtonEntryWidget_C.ExecuteUbergraph_GenericButtonEntryWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UGenericButtonEntryWidget_C::ExecuteUbergraph_GenericButtonEntryWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericButtonEntryWidget.GenericButtonEntryWidget_C.ExecuteUbergraph_GenericButtonEntryWidget");

	UGenericButtonEntryWidget_C_ExecuteUbergraph_GenericButtonEntryWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
