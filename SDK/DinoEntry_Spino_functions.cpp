
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

// Function DinoEntry_Spino.DinoEntry_Spino_C.ExecuteUbergraph_DinoEntry_Spino
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Spino_C::ExecuteUbergraph_DinoEntry_Spino(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Spino.DinoEntry_Spino_C.ExecuteUbergraph_DinoEntry_Spino");

	UDinoEntry_Spino_C_ExecuteUbergraph_DinoEntry_Spino_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
