
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

// Function PrimalItemResource_ApexDrop_Sauro.PrimalItemResource_ApexDrop_Sauro_C.ExecuteUbergraph_PrimalItemResource_ApexDrop_Sauro
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_ApexDrop_Sauro_C::ExecuteUbergraph_PrimalItemResource_ApexDrop_Sauro(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_ApexDrop_Sauro.PrimalItemResource_ApexDrop_Sauro_C.ExecuteUbergraph_PrimalItemResource_ApexDrop_Sauro");

	UPrimalItemResource_ApexDrop_Sauro_C_ExecuteUbergraph_PrimalItemResource_ApexDrop_Sauro_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
