
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

// Function DroppedItemGeneric.DroppedItemGeneric_C.UserConstructionScript
// ()

void ADroppedItemGeneric_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DroppedItemGeneric.DroppedItemGeneric_C.UserConstructionScript");

	ADroppedItemGeneric_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DroppedItemGeneric.DroppedItemGeneric_C.ExecuteUbergraph_DroppedItemGeneric
// (Final)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADroppedItemGeneric_C::ExecuteUbergraph_DroppedItemGeneric(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DroppedItemGeneric.DroppedItemGeneric_C.ExecuteUbergraph_DroppedItemGeneric");

	ADroppedItemGeneric_C_ExecuteUbergraph_DroppedItemGeneric_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
