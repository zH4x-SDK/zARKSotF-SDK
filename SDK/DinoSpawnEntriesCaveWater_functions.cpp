
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

// Function DinoSpawnEntriesCaveWater.DinoSpawnEntriesCaveWater_C.ExecuteUbergraph_DinoSpawnEntriesCaveWater
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSpawnEntriesCaveWater_C::ExecuteUbergraph_DinoSpawnEntriesCaveWater(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSpawnEntriesCaveWater.DinoSpawnEntriesCaveWater_C.ExecuteUbergraph_DinoSpawnEntriesCaveWater");

	UDinoSpawnEntriesCaveWater_C_ExecuteUbergraph_DinoSpawnEntriesCaveWater_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
