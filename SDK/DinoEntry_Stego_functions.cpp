
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

// Function DinoEntry_Stego.DinoEntry_Stego_C.ExecuteUbergraph_DinoEntry_Stego
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Stego_C::ExecuteUbergraph_DinoEntry_Stego(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Stego.DinoEntry_Stego_C.ExecuteUbergraph_DinoEntry_Stego");

	UDinoEntry_Stego_C_ExecuteUbergraph_DinoEntry_Stego_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
