
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

// Function PrimalItemStructure_MetalWall.PrimalItemStructure_MetalWall_C.ExecuteUbergraph_PrimalItemStructure_MetalWall
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_MetalWall_C::ExecuteUbergraph_PrimalItemStructure_MetalWall(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_MetalWall.PrimalItemStructure_MetalWall_C.ExecuteUbergraph_PrimalItemStructure_MetalWall");

	UPrimalItemStructure_MetalWall_C_ExecuteUbergraph_PrimalItemStructure_MetalWall_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
