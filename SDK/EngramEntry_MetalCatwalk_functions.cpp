
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

// Function EngramEntry_MetalCatwalk.EngramEntry_MetalCatwalk_C.ExecuteUbergraph_EngramEntry_MetalCatwalk
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_MetalCatwalk_C::ExecuteUbergraph_EngramEntry_MetalCatwalk(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_MetalCatwalk.EngramEntry_MetalCatwalk_C.ExecuteUbergraph_EngramEntry_MetalCatwalk");

	UEngramEntry_MetalCatwalk_C_ExecuteUbergraph_EngramEntry_MetalCatwalk_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
