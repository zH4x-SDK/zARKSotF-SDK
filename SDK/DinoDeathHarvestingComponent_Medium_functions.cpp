
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

// Function DinoDeathHarvestingComponent_Medium.DinoDeathHarvestingComponent_Medium_C.ExecuteUbergraph_DinoDeathHarvestingComponent_Medium
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoDeathHarvestingComponent_Medium_C::ExecuteUbergraph_DinoDeathHarvestingComponent_Medium(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoDeathHarvestingComponent_Medium.DinoDeathHarvestingComponent_Medium_C.ExecuteUbergraph_DinoDeathHarvestingComponent_Medium");

	UDinoDeathHarvestingComponent_Medium_C_ExecuteUbergraph_DinoDeathHarvestingComponent_Medium_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
