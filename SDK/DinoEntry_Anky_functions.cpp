
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

// Function DinoEntry_Anky.DinoEntry_Anky_C.ExecuteUbergraph_DinoEntry_Anky
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Anky_C::ExecuteUbergraph_DinoEntry_Anky(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Anky.DinoEntry_Anky_C.ExecuteUbergraph_DinoEntry_Anky");

	UDinoEntry_Anky_C_ExecuteUbergraph_DinoEntry_Anky_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
