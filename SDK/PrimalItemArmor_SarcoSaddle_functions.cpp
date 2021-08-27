
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

// Function PrimalItemArmor_SarcoSaddle.PrimalItemArmor_SarcoSaddle_C.ExecuteUbergraph_PrimalItemArmor_SarcoSaddle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_SarcoSaddle_C::ExecuteUbergraph_PrimalItemArmor_SarcoSaddle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_SarcoSaddle.PrimalItemArmor_SarcoSaddle_C.ExecuteUbergraph_PrimalItemArmor_SarcoSaddle");

	UPrimalItemArmor_SarcoSaddle_C_ExecuteUbergraph_PrimalItemArmor_SarcoSaddle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
