
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

// Function EngramEntry_WoodGateway.EngramEntry_WoodGateway_C.ExecuteUbergraph_EngramEntry_WoodGateway
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_WoodGateway_C::ExecuteUbergraph_EngramEntry_WoodGateway(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_WoodGateway.EngramEntry_WoodGateway_C.ExecuteUbergraph_EngramEntry_WoodGateway");

	UEngramEntry_WoodGateway_C_ExecuteUbergraph_EngramEntry_WoodGateway_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
