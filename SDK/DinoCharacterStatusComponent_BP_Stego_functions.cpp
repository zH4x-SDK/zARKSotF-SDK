
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

// Function DinoCharacterStatusComponent_BP_Stego.DinoCharacterStatusComponent_BP_Stego_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Stego
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoCharacterStatusComponent_BP_Stego_C::ExecuteUbergraph_DinoCharacterStatusComponent_BP_Stego(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacterStatusComponent_BP_Stego.DinoCharacterStatusComponent_BP_Stego_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Stego");

	UDinoCharacterStatusComponent_BP_Stego_C_ExecuteUbergraph_DinoCharacterStatusComponent_BP_Stego_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
