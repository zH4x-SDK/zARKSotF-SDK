
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

// Function PrimalItemStructure_MetalTrapdoor.PrimalItemStructure_MetalTrapdoor_C.ExecuteUbergraph_PrimalItemStructure_MetalTrapdoor
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_MetalTrapdoor_C::ExecuteUbergraph_PrimalItemStructure_MetalTrapdoor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_MetalTrapdoor.PrimalItemStructure_MetalTrapdoor_C.ExecuteUbergraph_PrimalItemStructure_MetalTrapdoor");

	UPrimalItemStructure_MetalTrapdoor_C_ExecuteUbergraph_PrimalItemStructure_MetalTrapdoor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
