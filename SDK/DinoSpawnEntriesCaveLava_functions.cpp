
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

// Function DinoSpawnEntriesCaveLava.DinoSpawnEntriesCaveLava_C.ExecuteUbergraph_DinoSpawnEntriesCaveLava
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSpawnEntriesCaveLava_C::ExecuteUbergraph_DinoSpawnEntriesCaveLava(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSpawnEntriesCaveLava.DinoSpawnEntriesCaveLava_C.ExecuteUbergraph_DinoSpawnEntriesCaveLava");

	UDinoSpawnEntriesCaveLava_C_ExecuteUbergraph_DinoSpawnEntriesCaveLava_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
