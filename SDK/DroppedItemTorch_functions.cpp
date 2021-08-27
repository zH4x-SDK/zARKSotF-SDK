
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

// Function DroppedItemTorch.DroppedItemTorch_C.UserConstructionScript
// ()

void ADroppedItemTorch_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DroppedItemTorch.DroppedItemTorch_C.UserConstructionScript");

	ADroppedItemTorch_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DroppedItemTorch.DroppedItemTorch_C.ExecuteUbergraph_DroppedItemTorch
// (Final)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADroppedItemTorch_C::ExecuteUbergraph_DroppedItemTorch(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DroppedItemTorch.DroppedItemTorch_C.ExecuteUbergraph_DroppedItemTorch");

	ADroppedItemTorch_C_ExecuteUbergraph_DroppedItemTorch_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
