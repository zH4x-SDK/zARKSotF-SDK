
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

// Function StorageBox_Small.StorageBox_Small_C.UserConstructionScript
// ()

void AStorageBox_Small_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_Small.StorageBox_Small_C.UserConstructionScript");

	AStorageBox_Small_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_Small.StorageBox_Small_C.ExecuteUbergraph_StorageBox_Small
// (Final)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStorageBox_Small_C::ExecuteUbergraph_StorageBox_Small(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_Small.StorageBox_Small_C.ExecuteUbergraph_StorageBox_Small");

	AStorageBox_Small_C_ExecuteUbergraph_StorageBox_Small_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
