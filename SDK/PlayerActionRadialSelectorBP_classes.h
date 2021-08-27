#pragma once

// Name: ARKSotF, Version: 178.8.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PlayerActionRadialSelectorBP.PlayerActionRadialSelectorBP_C
// 0x0000 (0x00F0 - 0x00F0)
class UPlayerActionRadialSelectorBP_C : public URadialSelectorHUD_PlayerAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlayerActionRadialSelectorBP.PlayerActionRadialSelectorBP_C");
		return ptr;
	}


	void ExecuteUbergraph_PlayerActionRadialSelectorBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
