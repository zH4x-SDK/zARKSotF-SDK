
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

// Function DinoTamedInventoryComponent_Dragon.DinoTamedInventoryComponent_Dragon_C.ExecuteUbergraph_DinoTamedInventoryComponent_Dragon
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoTamedInventoryComponent_Dragon_C::ExecuteUbergraph_DinoTamedInventoryComponent_Dragon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Dragon.DinoTamedInventoryComponent_Dragon_C.ExecuteUbergraph_DinoTamedInventoryComponent_Dragon");

	UDinoTamedInventoryComponent_Dragon_C_ExecuteUbergraph_DinoTamedInventoryComponent_Dragon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
