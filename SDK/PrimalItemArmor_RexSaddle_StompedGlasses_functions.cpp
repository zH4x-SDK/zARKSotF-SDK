
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

// Function PrimalItemArmor_RexSaddle_StompedGlasses.PrimalItemArmor_RexSaddle_StompedGlasses_C.ExecuteUbergraph_PrimalItemArmor_RexSaddle_StompedGlasses
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_RexSaddle_StompedGlasses_C::ExecuteUbergraph_PrimalItemArmor_RexSaddle_StompedGlasses(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_RexSaddle_StompedGlasses.PrimalItemArmor_RexSaddle_StompedGlasses_C.ExecuteUbergraph_PrimalItemArmor_RexSaddle_StompedGlasses");

	UPrimalItemArmor_RexSaddle_StompedGlasses_C_ExecuteUbergraph_PrimalItemArmor_RexSaddle_StompedGlasses_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
