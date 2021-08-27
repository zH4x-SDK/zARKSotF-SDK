
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

// Function PrimalItemHelmet2.PrimalItemHelmet2_C.ExecuteUbergraph_PrimalItemHelmet2
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemHelmet2_C::ExecuteUbergraph_PrimalItemHelmet2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemHelmet2.PrimalItemHelmet2_C.ExecuteUbergraph_PrimalItemHelmet2");

	UPrimalItemHelmet2_C_ExecuteUbergraph_PrimalItemHelmet2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
