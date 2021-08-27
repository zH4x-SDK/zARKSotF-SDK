
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

// Function Bat_Character_BP.Bat_Character_BP_C.UserConstructionScript
// (Final)

void ABat_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bat_Character_BP.Bat_Character_BP_C.UserConstructionScript");

	ABat_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bat_Character_BP.Bat_Character_BP_C.ExecuteUbergraph_Bat_Character_BP
// (Final)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABat_Character_BP_C::ExecuteUbergraph_Bat_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bat_Character_BP.Bat_Character_BP_C.ExecuteUbergraph_Bat_Character_BP");

	ABat_Character_BP_C_ExecuteUbergraph_Bat_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
