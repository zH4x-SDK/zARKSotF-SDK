
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

// Function DinoDeathHarvestingComponent_Tiny.DinoDeathHarvestingComponent_Tiny_C.ExecuteUbergraph_DinoDeathHarvestingComponent_Tiny
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoDeathHarvestingComponent_Tiny_C::ExecuteUbergraph_DinoDeathHarvestingComponent_Tiny(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoDeathHarvestingComponent_Tiny.DinoDeathHarvestingComponent_Tiny_C.ExecuteUbergraph_DinoDeathHarvestingComponent_Tiny");

	UDinoDeathHarvestingComponent_Tiny_C_ExecuteUbergraph_DinoDeathHarvestingComponent_Tiny_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
