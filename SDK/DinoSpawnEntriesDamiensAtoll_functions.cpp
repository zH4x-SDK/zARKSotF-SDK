
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

// Function DinoSpawnEntriesDamiensAtoll.DinoSpawnEntriesDamiensAtoll_C.ExecuteUbergraph_DinoSpawnEntriesDamiensAtoll
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSpawnEntriesDamiensAtoll_C::ExecuteUbergraph_DinoSpawnEntriesDamiensAtoll(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSpawnEntriesDamiensAtoll.DinoSpawnEntriesDamiensAtoll_C.ExecuteUbergraph_DinoSpawnEntriesDamiensAtoll");

	UDinoSpawnEntriesDamiensAtoll_C_ExecuteUbergraph_DinoSpawnEntriesDamiensAtoll_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
