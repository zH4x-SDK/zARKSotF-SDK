
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

// Function PrimalItemArmor_PhiomiaSaddle.PrimalItemArmor_PhiomiaSaddle_C.ExecuteUbergraph_PrimalItemArmor_PhiomiaSaddle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_PhiomiaSaddle_C::ExecuteUbergraph_PrimalItemArmor_PhiomiaSaddle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_PhiomiaSaddle.PrimalItemArmor_PhiomiaSaddle_C.ExecuteUbergraph_PrimalItemArmor_PhiomiaSaddle");

	UPrimalItemArmor_PhiomiaSaddle_C_ExecuteUbergraph_PrimalItemArmor_PhiomiaSaddle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
