
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

// Function Dodo_Character_BP.Dodo_Character_BP_C.UserConstructionScript
// (Final)

void ADodo_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dodo_Character_BP.Dodo_Character_BP_C.UserConstructionScript");

	ADodo_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dodo_Character_BP.Dodo_Character_BP_C.ExecuteUbergraph_Dodo_Character_BP
// (Final)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADodo_Character_BP_C::ExecuteUbergraph_Dodo_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dodo_Character_BP.Dodo_Character_BP_C.ExecuteUbergraph_Dodo_Character_BP");

	ADodo_Character_BP_C_ExecuteUbergraph_Dodo_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
