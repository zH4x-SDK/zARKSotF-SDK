
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

// Function WeapCrossbow_Tranq.WeapCrossbow_Tranq_C.UserConstructionScript
// (Final)

void AWeapCrossbow_Tranq_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapCrossbow_Tranq.WeapCrossbow_Tranq_C.UserConstructionScript");

	AWeapCrossbow_Tranq_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapCrossbow_Tranq.WeapCrossbow_Tranq_C.ExecuteUbergraph_WeapCrossbow_Tranq
// (Final)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapCrossbow_Tranq_C::ExecuteUbergraph_WeapCrossbow_Tranq(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapCrossbow_Tranq.WeapCrossbow_Tranq_C.ExecuteUbergraph_WeapCrossbow_Tranq");

	AWeapCrossbow_Tranq_C_ExecuteUbergraph_WeapCrossbow_Tranq_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
