
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

// Function EngramEntry_Gunpowder.EngramEntry_Gunpowder_C.ExecuteUbergraph_EngramEntry_Gunpowder
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Gunpowder_C::ExecuteUbergraph_EngramEntry_Gunpowder(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Gunpowder.EngramEntry_Gunpowder_C.ExecuteUbergraph_EngramEntry_Gunpowder");

	UEngramEntry_Gunpowder_C_ExecuteUbergraph_EngramEntry_Gunpowder_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
