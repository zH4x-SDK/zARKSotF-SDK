
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

// Function PrimalInventoryBP_StorageBox_Small.PrimalInventoryBP_StorageBox_Small_C.ExecuteUbergraph_PrimalInventoryBP_StorageBox_Small
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryBP_StorageBox_Small_C::ExecuteUbergraph_PrimalInventoryBP_StorageBox_Small(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_StorageBox_Small.PrimalInventoryBP_StorageBox_Small_C.ExecuteUbergraph_PrimalInventoryBP_StorageBox_Small");

	UPrimalInventoryBP_StorageBox_Small_C_ExecuteUbergraph_PrimalInventoryBP_StorageBox_Small_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
