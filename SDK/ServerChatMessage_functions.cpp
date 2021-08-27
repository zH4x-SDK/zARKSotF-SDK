
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

// Function ServerChatMessage.ServerChatMessage_C.ExecuteUbergraph_ServerChatMessage
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UServerChatMessage_C::ExecuteUbergraph_ServerChatMessage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerChatMessage.ServerChatMessage_C.ExecuteUbergraph_ServerChatMessage");

	UServerChatMessage_C_ExecuteUbergraph_ServerChatMessage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
