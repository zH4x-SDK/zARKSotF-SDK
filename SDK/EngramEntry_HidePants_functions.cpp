
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

// Function EngramEntry_HidePants.EngramEntry_HidePants_C.ExecuteUbergraph_EngramEntry_HidePants
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_HidePants_C::ExecuteUbergraph_EngramEntry_HidePants(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_HidePants.EngramEntry_HidePants_C.ExecuteUbergraph_EngramEntry_HidePants");

	UEngramEntry_HidePants_C_ExecuteUbergraph_EngramEntry_HidePants_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
