
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

// Function DinoColorSet_TestColors.DinoColorSet_TestColors_C.ExecuteUbergraph_DinoColorSet_TestColors
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_TestColors_C::ExecuteUbergraph_DinoColorSet_TestColors(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_TestColors.DinoColorSet_TestColors_C.ExecuteUbergraph_DinoColorSet_TestColors");

	UDinoColorSet_TestColors_C_ExecuteUbergraph_DinoColorSet_TestColors_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
