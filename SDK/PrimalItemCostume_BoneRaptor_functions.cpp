
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

// Function PrimalItemCostume_BoneRaptor.PrimalItemCostume_BoneRaptor_C.ExecuteUbergraph_PrimalItemCostume_BoneRaptor
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemCostume_BoneRaptor_C::ExecuteUbergraph_PrimalItemCostume_BoneRaptor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemCostume_BoneRaptor.PrimalItemCostume_BoneRaptor_C.ExecuteUbergraph_PrimalItemCostume_BoneRaptor");

	UPrimalItemCostume_BoneRaptor_C_ExecuteUbergraph_PrimalItemCostume_BoneRaptor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
