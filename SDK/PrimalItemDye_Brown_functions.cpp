
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

// Function PrimalItemDye_Brown.PrimalItemDye_Brown_C.ExecuteUbergraph_PrimalItemDye_Brown
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemDye_Brown_C::ExecuteUbergraph_PrimalItemDye_Brown(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemDye_Brown.PrimalItemDye_Brown_C.ExecuteUbergraph_PrimalItemDye_Brown");

	UPrimalItemDye_Brown_C_ExecuteUbergraph_PrimalItemDye_Brown_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
