
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

// Function EngramEntry_PowerCableStraight.EngramEntry_PowerCableStraight_C.ExecuteUbergraph_EngramEntry_PowerCableStraight
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_PowerCableStraight_C::ExecuteUbergraph_EngramEntry_PowerCableStraight(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_PowerCableStraight.EngramEntry_PowerCableStraight_C.ExecuteUbergraph_EngramEntry_PowerCableStraight");

	UEngramEntry_PowerCableStraight_C_ExecuteUbergraph_EngramEntry_PowerCableStraight_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
