
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

// Function DinoCharacterStatusComponent_BP_Dilo.DinoCharacterStatusComponent_BP_Dilo_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Dilo
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoCharacterStatusComponent_BP_Dilo_C::ExecuteUbergraph_DinoCharacterStatusComponent_BP_Dilo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacterStatusComponent_BP_Dilo.DinoCharacterStatusComponent_BP_Dilo_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Dilo");

	UDinoCharacterStatusComponent_BP_Dilo_C_ExecuteUbergraph_DinoCharacterStatusComponent_BP_Dilo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
