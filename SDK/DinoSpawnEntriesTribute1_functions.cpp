
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

// Function DinoSpawnEntriesTribute1.DinoSpawnEntriesTribute1_C.ExecuteUbergraph_DinoSpawnEntriesTribute1
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSpawnEntriesTribute1_C::ExecuteUbergraph_DinoSpawnEntriesTribute1(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSpawnEntriesTribute1.DinoSpawnEntriesTribute1_C.ExecuteUbergraph_DinoSpawnEntriesTribute1");

	UDinoSpawnEntriesTribute1_C_ExecuteUbergraph_DinoSpawnEntriesTribute1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
