
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

// Function Saber_Character_BP.Saber_Character_BP_C.UserConstructionScript
// (Final)

void ASaber_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Saber_Character_BP.Saber_Character_BP_C.UserConstructionScript");

	ASaber_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saber_Character_BP.Saber_Character_BP_C.ExecuteUbergraph_Saber_Character_BP
// (Final)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASaber_Character_BP_C::ExecuteUbergraph_Saber_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Saber_Character_BP.Saber_Character_BP_C.ExecuteUbergraph_Saber_Character_BP");

	ASaber_Character_BP_C_ExecuteUbergraph_Saber_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif