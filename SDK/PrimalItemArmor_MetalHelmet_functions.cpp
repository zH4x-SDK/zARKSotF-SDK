
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

// Function PrimalItemArmor_MetalHelmet.PrimalItemArmor_MetalHelmet_C.ExecuteUbergraph_PrimalItemArmor_MetalHelmet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_MetalHelmet_C::ExecuteUbergraph_PrimalItemArmor_MetalHelmet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_MetalHelmet.PrimalItemArmor_MetalHelmet_C.ExecuteUbergraph_PrimalItemArmor_MetalHelmet");

	UPrimalItemArmor_MetalHelmet_C_ExecuteUbergraph_PrimalItemArmor_MetalHelmet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
