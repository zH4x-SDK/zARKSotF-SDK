
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

// Function DinoAttackStateRanged.DinoAttackStateRanged_C.ExecuteUbergraph_DinoAttackStateRanged
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackStateRanged_C::ExecuteUbergraph_DinoAttackStateRanged(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateRanged.DinoAttackStateRanged_C.ExecuteUbergraph_DinoAttackStateRanged");

	UDinoAttackStateRanged_C_ExecuteUbergraph_DinoAttackStateRanged_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
