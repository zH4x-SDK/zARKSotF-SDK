
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

// Function DinoColorSet_Scorp.DinoColorSet_Scorp_C.ExecuteUbergraph_DinoColorSet_Scorp
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_Scorp_C::ExecuteUbergraph_DinoColorSet_Scorp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_Scorp.DinoColorSet_Scorp_C.ExecuteUbergraph_DinoColorSet_Scorp");

	UDinoColorSet_Scorp_C_ExecuteUbergraph_DinoColorSet_Scorp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
