
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

// Function EngramEntry_StoneCeiling.EngramEntry_StoneCeiling_C.ExecuteUbergraph_EngramEntry_StoneCeiling
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_StoneCeiling_C::ExecuteUbergraph_EngramEntry_StoneCeiling(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_StoneCeiling.EngramEntry_StoneCeiling_C.ExecuteUbergraph_EngramEntry_StoneCeiling");

	UEngramEntry_StoneCeiling_C_ExecuteUbergraph_EngramEntry_StoneCeiling_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
