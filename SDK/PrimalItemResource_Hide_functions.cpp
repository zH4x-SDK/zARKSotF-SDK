
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

// Function PrimalItemResource_Hide.PrimalItemResource_Hide_C.ExecuteUbergraph_PrimalItemResource_Hide
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_Hide_C::ExecuteUbergraph_PrimalItemResource_Hide(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_Hide.PrimalItemResource_Hide_C.ExecuteUbergraph_PrimalItemResource_Hide");

	UPrimalItemResource_Hide_C_ExecuteUbergraph_PrimalItemResource_Hide_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
