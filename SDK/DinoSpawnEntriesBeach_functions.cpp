
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

// Function DinoSpawnEntriesBeach.DinoSpawnEntriesBeach_C.ExecuteUbergraph_DinoSpawnEntriesBeach
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSpawnEntriesBeach_C::ExecuteUbergraph_DinoSpawnEntriesBeach(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSpawnEntriesBeach.DinoSpawnEntriesBeach_C.ExecuteUbergraph_DinoSpawnEntriesBeach");

	UDinoSpawnEntriesBeach_C_ExecuteUbergraph_DinoSpawnEntriesBeach_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
