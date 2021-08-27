
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

// Function EngramEntry_WoodRamp.EngramEntry_WoodRamp_C.ExecuteUbergraph_EngramEntry_WoodRamp
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_WoodRamp_C::ExecuteUbergraph_EngramEntry_WoodRamp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_WoodRamp.EngramEntry_WoodRamp_C.ExecuteUbergraph_EngramEntry_WoodRamp");

	UEngramEntry_WoodRamp_C_ExecuteUbergraph_EngramEntry_WoodRamp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
