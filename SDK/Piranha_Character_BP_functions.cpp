
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

// Function Piranha_Character_BP.Piranha_Character_BP_C.UserConstructionScript
// (Final)

void APiranha_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Piranha_Character_BP.Piranha_Character_BP_C.UserConstructionScript");

	APiranha_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Piranha_Character_BP.Piranha_Character_BP_C.ExecuteUbergraph_Piranha_Character_BP
// (Final)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APiranha_Character_BP_C::ExecuteUbergraph_Piranha_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Piranha_Character_BP.Piranha_Character_BP_C.ExecuteUbergraph_Piranha_Character_BP");

	APiranha_Character_BP_C_ExecuteUbergraph_Piranha_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif