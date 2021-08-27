
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

// Function PistolTPV_AnimBlueprint.PistolTPV_AnimBlueprint_C.BlueprintUpdateAnimation
// (RequiredAPI)
// Parameters:
// float*                         DeltaTimeX                     (Parm, ZeroConstructor, IsPlainOldData)

void UPistolTPV_AnimBlueprint_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function PistolTPV_AnimBlueprint.PistolTPV_AnimBlueprint_C.BlueprintUpdateAnimation");

	UPistolTPV_AnimBlueprint_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PistolTPV_AnimBlueprint.PistolTPV_AnimBlueprint_C.ExecuteUbergraph_PistolTPV_AnimBlueprint
// (Final)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPistolTPV_AnimBlueprint_C::ExecuteUbergraph_PistolTPV_AnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PistolTPV_AnimBlueprint.PistolTPV_AnimBlueprint_C.ExecuteUbergraph_PistolTPV_AnimBlueprint");

	UPistolTPV_AnimBlueprint_C_ExecuteUbergraph_PistolTPV_AnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
