
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

// Function DinoSpawnEntriesTinyCave.DinoSpawnEntriesTinyCave_C.ExecuteUbergraph_DinoSpawnEntriesTinyCave
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSpawnEntriesTinyCave_C::ExecuteUbergraph_DinoSpawnEntriesTinyCave(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSpawnEntriesTinyCave.DinoSpawnEntriesTinyCave_C.ExecuteUbergraph_DinoSpawnEntriesTinyCave");

	UDinoSpawnEntriesTinyCave_C_ExecuteUbergraph_DinoSpawnEntriesTinyCave_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
