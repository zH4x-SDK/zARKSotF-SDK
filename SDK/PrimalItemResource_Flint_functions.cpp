
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

// Function PrimalItemResource_Flint.PrimalItemResource_Flint_C.ExecuteUbergraph_PrimalItemResource_Flint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_Flint_C::ExecuteUbergraph_PrimalItemResource_Flint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_Flint.PrimalItemResource_Flint_C.ExecuteUbergraph_PrimalItemResource_Flint");

	UPrimalItemResource_Flint_C_ExecuteUbergraph_PrimalItemResource_Flint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
