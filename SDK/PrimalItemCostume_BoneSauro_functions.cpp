
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

// Function PrimalItemCostume_BoneSauro.PrimalItemCostume_BoneSauro_C.ExecuteUbergraph_PrimalItemCostume_BoneSauro
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemCostume_BoneSauro_C::ExecuteUbergraph_PrimalItemCostume_BoneSauro(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemCostume_BoneSauro.PrimalItemCostume_BoneSauro_C.ExecuteUbergraph_PrimalItemCostume_BoneSauro");

	UPrimalItemCostume_BoneSauro_C_ExecuteUbergraph_PrimalItemCostume_BoneSauro_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
