
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

// Function DinoSpawnEntriesCave2.DinoSpawnEntriesCave2_C.ExecuteUbergraph_DinoSpawnEntriesCave2
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSpawnEntriesCave2_C::ExecuteUbergraph_DinoSpawnEntriesCave2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSpawnEntriesCave2.DinoSpawnEntriesCave2_C.ExecuteUbergraph_DinoSpawnEntriesCave2");

	UDinoSpawnEntriesCave2_C_ExecuteUbergraph_DinoSpawnEntriesCave2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
