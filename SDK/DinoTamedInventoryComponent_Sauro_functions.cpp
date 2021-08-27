
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

// Function DinoTamedInventoryComponent_Sauro.DinoTamedInventoryComponent_Sauro_C.ExecuteUbergraph_DinoTamedInventoryComponent_Sauro
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoTamedInventoryComponent_Sauro_C::ExecuteUbergraph_DinoTamedInventoryComponent_Sauro(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Sauro.DinoTamedInventoryComponent_Sauro_C.ExecuteUbergraph_DinoTamedInventoryComponent_Sauro");

	UDinoTamedInventoryComponent_Sauro_C_ExecuteUbergraph_DinoTamedInventoryComponent_Sauro_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
