
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

// Function DinoSpawnEntriesCave1.DinoSpawnEntriesCave1_C.ExecuteUbergraph_DinoSpawnEntriesCave1
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSpawnEntriesCave1_C::ExecuteUbergraph_DinoSpawnEntriesCave1(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSpawnEntriesCave1.DinoSpawnEntriesCave1_C.ExecuteUbergraph_DinoSpawnEntriesCave1");

	UDinoSpawnEntriesCave1_C_ExecuteUbergraph_DinoSpawnEntriesCave1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
