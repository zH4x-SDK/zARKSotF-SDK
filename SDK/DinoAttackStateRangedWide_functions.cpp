
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

// Function DinoAttackStateRangedWide.DinoAttackStateRangedWide_C.ExecuteUbergraph_DinoAttackStateRangedWide
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackStateRangedWide_C::ExecuteUbergraph_DinoAttackStateRangedWide(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateRangedWide.DinoAttackStateRangedWide_C.ExecuteUbergraph_DinoAttackStateRangedWide");

	UDinoAttackStateRangedWide_C_ExecuteUbergraph_DinoAttackStateRangedWide_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
