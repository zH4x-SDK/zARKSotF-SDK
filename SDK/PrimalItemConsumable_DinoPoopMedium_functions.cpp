
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

// Function PrimalItemConsumable_DinoPoopMedium.PrimalItemConsumable_DinoPoopMedium_C.ExecuteUbergraph_PrimalItemConsumable_DinoPoopMedium
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_DinoPoopMedium_C::ExecuteUbergraph_PrimalItemConsumable_DinoPoopMedium(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_DinoPoopMedium.PrimalItemConsumable_DinoPoopMedium_C.ExecuteUbergraph_PrimalItemConsumable_DinoPoopMedium");

	UPrimalItemConsumable_DinoPoopMedium_C_ExecuteUbergraph_PrimalItemConsumable_DinoPoopMedium_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
