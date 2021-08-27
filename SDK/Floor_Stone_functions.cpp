
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

// Function Floor_Stone.Floor_Stone_C.UserConstructionScript
// (Final)

void AFloor_Stone_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Floor_Stone.Floor_Stone_C.UserConstructionScript");

	AFloor_Stone_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Floor_Stone.Floor_Stone_C.ExecuteUbergraph_Floor_Stone
// (Final)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AFloor_Stone_C::ExecuteUbergraph_Floor_Stone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Floor_Stone.Floor_Stone_C.ExecuteUbergraph_Floor_Stone");

	AFloor_Stone_C_ExecuteUbergraph_Floor_Stone_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
