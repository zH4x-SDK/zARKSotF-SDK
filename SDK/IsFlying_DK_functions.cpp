
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

// Function IsFlying_DK.IsFlying_DK_C.ReceiveConditionCheck
// (RequiredAPI)
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UIsFlying_DK_C::ReceiveConditionCheck(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function IsFlying_DK.IsFlying_DK_C.ReceiveConditionCheck");

	UIsFlying_DK_C_ReceiveConditionCheck_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IsFlying_DK.IsFlying_DK_C.ReceiveExecutionStart
// (RequiredAPI)
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UIsFlying_DK_C::ReceiveExecutionStart(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function IsFlying_DK.IsFlying_DK_C.ReceiveExecutionStart");

	UIsFlying_DK_C_ReceiveExecutionStart_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IsFlying_DK.IsFlying_DK_C.ReceiveExecutionFinish
// (BlueprintAuthorityOnly)
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EBTNodeResult>*    NodeResult                     (Parm, ZeroConstructor, IsPlainOldData)

void UIsFlying_DK_C::ReceiveExecutionFinish(class AActor** OwnerActor, TEnumAsByte<EBTNodeResult>* NodeResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function IsFlying_DK.IsFlying_DK_C.ReceiveExecutionFinish");

	UIsFlying_DK_C_ReceiveExecutionFinish_Params params;
	params.OwnerActor = OwnerActor;
	params.NodeResult = NodeResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IsFlying_DK.IsFlying_DK_C.ExecuteUbergraph_IsFlying_DK
// (BlueprintCosmetic)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UIsFlying_DK_C::ExecuteUbergraph_IsFlying_DK(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IsFlying_DK.IsFlying_DK_C.ExecuteUbergraph_IsFlying_DK");

	UIsFlying_DK_C_ExecuteUbergraph_IsFlying_DK_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
