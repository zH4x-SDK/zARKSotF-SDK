
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

// Function PlayerHUDNew.PlayerHUDNew_C.ExecuteUbergraph_PlayerHUDNew
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerHUDNew_C::ExecuteUbergraph_PlayerHUDNew(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHUDNew.PlayerHUDNew_C.ExecuteUbergraph_PlayerHUDNew");

	UPlayerHUDNew_C_ExecuteUbergraph_PlayerHUDNew_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
