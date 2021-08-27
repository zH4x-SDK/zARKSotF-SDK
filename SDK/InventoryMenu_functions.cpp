
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

// Function InventoryMenu.InventoryMenu_C.ExecuteUbergraph_InventoryMenu
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UInventoryMenu_C::ExecuteUbergraph_InventoryMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryMenu.InventoryMenu_C.ExecuteUbergraph_InventoryMenu");

	UInventoryMenu_C_ExecuteUbergraph_InventoryMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
