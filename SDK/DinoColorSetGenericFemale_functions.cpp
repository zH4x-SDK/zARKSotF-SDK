
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

// Function DinoColorSetGenericFemale.DinoColorSetGenericFemale_C.ExecuteUbergraph_DinoColorSetGenericFemale
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSetGenericFemale_C::ExecuteUbergraph_DinoColorSetGenericFemale(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSetGenericFemale.DinoColorSetGenericFemale_C.ExecuteUbergraph_DinoColorSetGenericFemale");

	UDinoColorSetGenericFemale_C_ExecuteUbergraph_DinoColorSetGenericFemale_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
