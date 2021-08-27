
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

// Function Dragonfly_Character_BP.Dragonfly_Character_BP_C.UserConstructionScript
// (Final)

void ADragonfly_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dragonfly_Character_BP.Dragonfly_Character_BP_C.UserConstructionScript");

	ADragonfly_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dragonfly_Character_BP.Dragonfly_Character_BP_C.ExecuteUbergraph_Dragonfly_Character_BP
// (Final)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADragonfly_Character_BP_C::ExecuteUbergraph_Dragonfly_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dragonfly_Character_BP.Dragonfly_Character_BP_C.ExecuteUbergraph_Dragonfly_Character_BP");

	ADragonfly_Character_BP_C_ExecuteUbergraph_Dragonfly_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
