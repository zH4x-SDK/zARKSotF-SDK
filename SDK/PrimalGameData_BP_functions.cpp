
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

// Function PrimalGameData_BP.PrimalGameData_BP_C.ExecuteUbergraph_PrimalGameData_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalGameData_BP_C::ExecuteUbergraph_PrimalGameData_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalGameData_BP.PrimalGameData_BP_C.ExecuteUbergraph_PrimalGameData_BP");

	UPrimalGameData_BP_C_ExecuteUbergraph_PrimalGameData_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
