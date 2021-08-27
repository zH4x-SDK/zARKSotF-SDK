
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

// Function Wall_Wood_Small_SM_New.Wall_Wood_Small_SM_New_C.UserConstructionScript
// (Final)

void AWall_Wood_Small_SM_New_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Wall_Wood_Small_SM_New.Wall_Wood_Small_SM_New_C.UserConstructionScript");

	AWall_Wood_Small_SM_New_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Wall_Wood_Small_SM_New.Wall_Wood_Small_SM_New_C.ExecuteUbergraph_Wall_Wood_Small_SM_New
// (Final)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWall_Wood_Small_SM_New_C::ExecuteUbergraph_Wall_Wood_Small_SM_New(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Wall_Wood_Small_SM_New.Wall_Wood_Small_SM_New_C.ExecuteUbergraph_Wall_Wood_Small_SM_New");

	AWall_Wood_Small_SM_New_C_ExecuteUbergraph_Wall_Wood_Small_SM_New_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
