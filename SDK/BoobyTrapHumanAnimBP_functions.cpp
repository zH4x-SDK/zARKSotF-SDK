
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

// Function BoobyTrapHumanAnimBP.BoobyTrapHumanAnimBP_C.ExecuteUbergraph_BoobyTrapHumanAnimBP
// (Final)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBoobyTrapHumanAnimBP_C::ExecuteUbergraph_BoobyTrapHumanAnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BoobyTrapHumanAnimBP.BoobyTrapHumanAnimBP_C.ExecuteUbergraph_BoobyTrapHumanAnimBP");

	UBoobyTrapHumanAnimBP_C_ExecuteUbergraph_BoobyTrapHumanAnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
