
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

// Function EndLanding_TK.EndLanding_TK_C.ReceiveExecute
// (RequiredAPI)
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UEndLanding_TK_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndLanding_TK.EndLanding_TK_C.ReceiveExecute");

	UEndLanding_TK_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndLanding_TK.EndLanding_TK_C.ExecuteUbergraph_EndLanding_TK
// (Final, BlueprintCosmetic)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEndLanding_TK_C::ExecuteUbergraph_EndLanding_TK(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndLanding_TK.EndLanding_TK_C.ExecuteUbergraph_EndLanding_TK");

	UEndLanding_TK_C_ExecuteUbergraph_EndLanding_TK_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
