
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

// Function DinoTamedInventoryComponent_Para.DinoTamedInventoryComponent_Para_C.ExecuteUbergraph_DinoTamedInventoryComponent_Para
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoTamedInventoryComponent_Para_C::ExecuteUbergraph_DinoTamedInventoryComponent_Para(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Para.DinoTamedInventoryComponent_Para_C.ExecuteUbergraph_DinoTamedInventoryComponent_Para");

	UDinoTamedInventoryComponent_Para_C_ExecuteUbergraph_DinoTamedInventoryComponent_Para_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
