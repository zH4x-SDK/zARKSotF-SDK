
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

// Function DinoColorSet_Bigfoot.DinoColorSet_Bigfoot_C.ExecuteUbergraph_DinoColorSet_Bigfoot
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_Bigfoot_C::ExecuteUbergraph_DinoColorSet_Bigfoot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_Bigfoot.DinoColorSet_Bigfoot_C.ExecuteUbergraph_DinoColorSet_Bigfoot");

	UDinoColorSet_Bigfoot_C_ExecuteUbergraph_DinoColorSet_Bigfoot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
