
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

// Function AttackTargetMove_DR.AttackTargetMove_DR_C.ReceiveConditionCheck
// (RequiredAPI)
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UAttackTargetMove_DR_C::ReceiveConditionCheck(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AttackTargetMove_DR.AttackTargetMove_DR_C.ReceiveConditionCheck");

	UAttackTargetMove_DR_C_ReceiveConditionCheck_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AttackTargetMove_DR.AttackTargetMove_DR_C.ExecuteUbergraph_AttackTargetMove_DR
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UAttackTargetMove_DR_C::ExecuteUbergraph_AttackTargetMove_DR(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AttackTargetMove_DR.AttackTargetMove_DR_C.ExecuteUbergraph_AttackTargetMove_DR");

	UAttackTargetMove_DR_C_ExecuteUbergraph_AttackTargetMove_DR_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
