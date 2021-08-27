
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

// Function TurretWarningLong.TurretWarningLong_C.UserConstructionScript
// ()

void ATurretWarningLong_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TurretWarningLong.TurretWarningLong_C.UserConstructionScript");

	ATurretWarningLong_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TurretWarningLong.TurretWarningLong_C.ExecuteUbergraph_TurretWarningLong
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATurretWarningLong_C::ExecuteUbergraph_TurretWarningLong(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TurretWarningLong.TurretWarningLong_C.ExecuteUbergraph_TurretWarningLong");

	ATurretWarningLong_C_ExecuteUbergraph_TurretWarningLong_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
