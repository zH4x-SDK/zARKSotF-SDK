
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

// Function EngramEntry_ChitinGloves.EngramEntry_ChitinGloves_C.ExecuteUbergraph_EngramEntry_ChitinGloves
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_ChitinGloves_C::ExecuteUbergraph_EngramEntry_ChitinGloves(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_ChitinGloves.EngramEntry_ChitinGloves_C.ExecuteUbergraph_EngramEntry_ChitinGloves");

	UEngramEntry_ChitinGloves_C_ExecuteUbergraph_EngramEntry_ChitinGloves_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
