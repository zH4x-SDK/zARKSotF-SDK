
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

// Function EngramEntry_SimpleShotgun.EngramEntry_SimpleShotgun_C.ExecuteUbergraph_EngramEntry_SimpleShotgun
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_SimpleShotgun_C::ExecuteUbergraph_EngramEntry_SimpleShotgun(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_SimpleShotgun.EngramEntry_SimpleShotgun_C.ExecuteUbergraph_EngramEntry_SimpleShotgun");

	UEngramEntry_SimpleShotgun_C_ExecuteUbergraph_EngramEntry_SimpleShotgun_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
