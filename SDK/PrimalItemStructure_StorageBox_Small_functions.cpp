
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

// Function PrimalItemStructure_StorageBox_Small.PrimalItemStructure_StorageBox_Small_C.ExecuteUbergraph_PrimalItemStructure_StorageBox_Small
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_StorageBox_Small_C::ExecuteUbergraph_PrimalItemStructure_StorageBox_Small(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_StorageBox_Small.PrimalItemStructure_StorageBox_Small_C.ExecuteUbergraph_PrimalItemStructure_StorageBox_Small");

	UPrimalItemStructure_StorageBox_Small_C_ExecuteUbergraph_PrimalItemStructure_StorageBox_Small_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif