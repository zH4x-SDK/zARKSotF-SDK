
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

// Function Doorframe_Wood_SM_New.Doorframe_Wood_SM_New_C.UserConstructionScript
// (Final)

void ADoorframe_Wood_SM_New_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Doorframe_Wood_SM_New.Doorframe_Wood_SM_New_C.UserConstructionScript");

	ADoorframe_Wood_SM_New_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Doorframe_Wood_SM_New.Doorframe_Wood_SM_New_C.ExecuteUbergraph_Doorframe_Wood_SM_New
// (Final)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADoorframe_Wood_SM_New_C::ExecuteUbergraph_Doorframe_Wood_SM_New(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Doorframe_Wood_SM_New.Doorframe_Wood_SM_New_C.ExecuteUbergraph_Doorframe_Wood_SM_New");

	ADoorframe_Wood_SM_New_C_ExecuteUbergraph_Doorframe_Wood_SM_New_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
