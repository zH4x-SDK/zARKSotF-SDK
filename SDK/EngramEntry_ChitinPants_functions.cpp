
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

// Function EngramEntry_ChitinPants.EngramEntry_ChitinPants_C.ExecuteUbergraph_EngramEntry_ChitinPants
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_ChitinPants_C::ExecuteUbergraph_EngramEntry_ChitinPants(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_ChitinPants.EngramEntry_ChitinPants_C.ExecuteUbergraph_EngramEntry_ChitinPants");

	UEngramEntry_ChitinPants_C_ExecuteUbergraph_EngramEntry_ChitinPants_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
