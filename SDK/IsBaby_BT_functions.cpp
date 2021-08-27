
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

// Function IsBaby_BT.IsBaby_BT_C.ReceiveConditionCheck
// (RequiredAPI)
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UIsBaby_BT_C::ReceiveConditionCheck(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function IsBaby_BT.IsBaby_BT_C.ReceiveConditionCheck");

	UIsBaby_BT_C_ReceiveConditionCheck_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IsBaby_BT.IsBaby_BT_C.ExecuteUbergraph_IsBaby_BT
// (BlueprintAuthorityOnly, BlueprintCosmetic)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UIsBaby_BT_C::ExecuteUbergraph_IsBaby_BT(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IsBaby_BT.IsBaby_BT_C.ExecuteUbergraph_IsBaby_BT");

	UIsBaby_BT_C_ExecuteUbergraph_IsBaby_BT_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
