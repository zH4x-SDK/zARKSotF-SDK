
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

// Function HostSession.HostSession_C.ExecuteUbergraph_HostSession
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UHostSession_C::ExecuteUbergraph_HostSession(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HostSession.HostSession_C.ExecuteUbergraph_HostSession");

	UHostSession_C_ExecuteUbergraph_HostSession_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
