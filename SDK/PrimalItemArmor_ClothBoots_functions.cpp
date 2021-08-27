
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

// Function PrimalItemArmor_ClothBoots.PrimalItemArmor_ClothBoots_C.ExecuteUbergraph_PrimalItemArmor_ClothBoots
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_ClothBoots_C::ExecuteUbergraph_PrimalItemArmor_ClothBoots(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_ClothBoots.PrimalItemArmor_ClothBoots_C.ExecuteUbergraph_PrimalItemArmor_ClothBoots");

	UPrimalItemArmor_ClothBoots_C_ExecuteUbergraph_PrimalItemArmor_ClothBoots_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
