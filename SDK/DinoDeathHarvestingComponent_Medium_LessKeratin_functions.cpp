
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

// Function DinoDeathHarvestingComponent_Medium_LessKeratin.DinoDeathHarvestingComponent_Medium_LessKeratin_C.ExecuteUbergraph_DinoDeathHarvestingComponent_Medium_LessKeratin
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoDeathHarvestingComponent_Medium_LessKeratin_C::ExecuteUbergraph_DinoDeathHarvestingComponent_Medium_LessKeratin(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoDeathHarvestingComponent_Medium_LessKeratin.DinoDeathHarvestingComponent_Medium_LessKeratin_C.ExecuteUbergraph_DinoDeathHarvestingComponent_Medium_LessKeratin");

	UDinoDeathHarvestingComponent_Medium_LessKeratin_C_ExecuteUbergraph_DinoDeathHarvestingComponent_Medium_LessKeratin_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
