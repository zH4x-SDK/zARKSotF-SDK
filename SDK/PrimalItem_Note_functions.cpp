
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

// Function PrimalItem_Note.PrimalItem_Note_C.ExecuteUbergraph_PrimalItem_Note
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_Note_C::ExecuteUbergraph_PrimalItem_Note(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_Note.PrimalItem_Note_C.ExecuteUbergraph_PrimalItem_Note");

	UPrimalItem_Note_C_ExecuteUbergraph_PrimalItem_Note_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
