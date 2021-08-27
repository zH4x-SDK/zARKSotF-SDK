
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

// Function PrimalItemDye_ActuallyMagenta.PrimalItemDye_ActuallyMagenta_C.ExecuteUbergraph_PrimalItemDye_ActuallyMagenta
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemDye_ActuallyMagenta_C::ExecuteUbergraph_PrimalItemDye_ActuallyMagenta(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemDye_ActuallyMagenta.PrimalItemDye_ActuallyMagenta_C.ExecuteUbergraph_PrimalItemDye_ActuallyMagenta");

	UPrimalItemDye_ActuallyMagenta_C_ExecuteUbergraph_PrimalItemDye_ActuallyMagenta_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
