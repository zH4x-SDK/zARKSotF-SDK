
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

// Function Bat_AnimBlueprint.Bat_AnimBlueprint_C.ExecuteUbergraph_Bat_AnimBlueprint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBat_AnimBlueprint_C::ExecuteUbergraph_Bat_AnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bat_AnimBlueprint.Bat_AnimBlueprint_C.ExecuteUbergraph_Bat_AnimBlueprint");

	UBat_AnimBlueprint_C_ExecuteUbergraph_Bat_AnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
