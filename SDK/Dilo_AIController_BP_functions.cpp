
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

// Function Dilo_AIController_BP.Dilo_AIController_BP_C.UserConstructionScript
// (Final)

void ADilo_AIController_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dilo_AIController_BP.Dilo_AIController_BP_C.UserConstructionScript");

	ADilo_AIController_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dilo_AIController_BP.Dilo_AIController_BP_C.ExecuteUbergraph_Dilo_AIController_BP
// (Final)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADilo_AIController_BP_C::ExecuteUbergraph_Dilo_AIController_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dilo_AIController_BP.Dilo_AIController_BP_C.ExecuteUbergraph_Dilo_AIController_BP");

	ADilo_AIController_BP_C_ExecuteUbergraph_Dilo_AIController_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
