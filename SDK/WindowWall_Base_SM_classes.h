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

// BlueprintGeneratedClass WindowWall_Base_SM.WindowWall_Base_SM_C
// 0x0000 (0x0928 - 0x0928)
class AWindowWall_Base_SM_C : public AWall_Base_Small_SM_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WindowWall_Base_SM.WindowWall_Base_SM_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WindowWall_Base_SM(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
