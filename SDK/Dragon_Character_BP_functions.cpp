
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

// Function Dragon_Character_BP.Dragon_Character_BP_C.UserConstructionScript
// (Final)

void ADragon_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dragon_Character_BP.Dragon_Character_BP_C.UserConstructionScript");

	ADragon_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dragon_Character_BP.Dragon_Character_BP_C.ReceiveTick
// (RequiredAPI)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ADragon_Character_BP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dragon_Character_BP.Dragon_Character_BP_C.ReceiveTick");

	ADragon_Character_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dragon_Character_BP.Dragon_Character_BP_C.ReceiveBeginPlay
// ()

void ADragon_Character_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dragon_Character_BP.Dragon_Character_BP_C.ReceiveBeginPlay");

	ADragon_Character_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dragon_Character_BP.Dragon_Character_BP_C.ReceiveDestroyed
// ()

void ADragon_Character_BP_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dragon_Character_BP.Dragon_Character_BP_C.ReceiveDestroyed");

	ADragon_Character_BP_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dragon_Character_BP.Dragon_Character_BP_C.ExecuteUbergraph_Dragon_Character_BP
// (BlueprintAuthorityOnly, BlueprintCosmetic)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADragon_Character_BP_C::ExecuteUbergraph_Dragon_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dragon_Character_BP.Dragon_Character_BP_C.ExecuteUbergraph_Dragon_Character_BP");

	ADragon_Character_BP_C_ExecuteUbergraph_Dragon_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
