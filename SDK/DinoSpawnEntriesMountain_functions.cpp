
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

// Function DinoSpawnEntriesMountain.DinoSpawnEntriesMountain_C.ExecuteUbergraph_DinoSpawnEntriesMountain
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSpawnEntriesMountain_C::ExecuteUbergraph_DinoSpawnEntriesMountain(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSpawnEntriesMountain.DinoSpawnEntriesMountain_C.ExecuteUbergraph_DinoSpawnEntriesMountain");

	UDinoSpawnEntriesMountain_C_ExecuteUbergraph_DinoSpawnEntriesMountain_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
