
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

// Function DinoDeathHarvestingComponent_Huge_Prime.DinoDeathHarvestingComponent_Huge_Prime_C.ExecuteUbergraph_DinoDeathHarvestingComponent_Huge_Prime
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoDeathHarvestingComponent_Huge_Prime_C::ExecuteUbergraph_DinoDeathHarvestingComponent_Huge_Prime(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoDeathHarvestingComponent_Huge_Prime.DinoDeathHarvestingComponent_Huge_Prime_C.ExecuteUbergraph_DinoDeathHarvestingComponent_Huge_Prime");

	UDinoDeathHarvestingComponent_Huge_Prime_C_ExecuteUbergraph_DinoDeathHarvestingComponent_Huge_Prime_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
