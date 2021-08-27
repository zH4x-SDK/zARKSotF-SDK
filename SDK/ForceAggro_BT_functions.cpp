
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

// Function ForceAggro_BT.ForceAggro_BT_C.ReceiveConditionCheck
// (RequiredAPI)
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UForceAggro_BT_C::ReceiveConditionCheck(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForceAggro_BT.ForceAggro_BT_C.ReceiveConditionCheck");

	UForceAggro_BT_C_ReceiveConditionCheck_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForceAggro_BT.ForceAggro_BT_C.ExecuteUbergraph_ForceAggro_BT
// (Final, RequiredAPI, BlueprintAuthorityOnly)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UForceAggro_BT_C::ExecuteUbergraph_ForceAggro_BT(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForceAggro_BT.ForceAggro_BT_C.ExecuteUbergraph_ForceAggro_BT");

	UForceAggro_BT_C_ExecuteUbergraph_ForceAggro_BT_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
