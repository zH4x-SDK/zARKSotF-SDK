
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

// Function DinoSpawnEntries_DeepWater.DinoSpawnEntries_DeepWater_C.ExecuteUbergraph_DinoSpawnEntries_DeepWater
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSpawnEntries_DeepWater_C::ExecuteUbergraph_DinoSpawnEntries_DeepWater(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSpawnEntries_DeepWater.DinoSpawnEntries_DeepWater_C.ExecuteUbergraph_DinoSpawnEntries_DeepWater");

	UDinoSpawnEntries_DeepWater_C_ExecuteUbergraph_DinoSpawnEntries_DeepWater_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
