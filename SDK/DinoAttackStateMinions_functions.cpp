
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

// Function DinoAttackStateMinions.DinoAttackStateMinions_C.ExecuteUbergraph_DinoAttackStateMinions
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackStateMinions_C::ExecuteUbergraph_DinoAttackStateMinions(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateMinions.DinoAttackStateMinions_C.ExecuteUbergraph_DinoAttackStateMinions");

	UDinoAttackStateMinions_C_ExecuteUbergraph_DinoAttackStateMinions_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
