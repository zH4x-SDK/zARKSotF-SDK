
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

// Function DinoSpawnEntriesCave3.DinoSpawnEntriesCave3_C.ExecuteUbergraph_DinoSpawnEntriesCave3
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSpawnEntriesCave3_C::ExecuteUbergraph_DinoSpawnEntriesCave3(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSpawnEntriesCave3.DinoSpawnEntriesCave3_C.ExecuteUbergraph_DinoSpawnEntriesCave3");

	UDinoSpawnEntriesCave3_C_ExecuteUbergraph_DinoSpawnEntriesCave3_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
