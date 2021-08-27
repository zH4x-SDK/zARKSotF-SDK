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

// WidgetBlueprintGeneratedClass ListLobbies.ListLobbies_C
// 0x0068 (0x0658 - 0x05F0)
class UListLobbies_C : public UUI_ListLobbies
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x05F0(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ListLobbies.ListLobbies_C");
		return ptr;
	}


	void ExecuteUbergraph_ListLobbies(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
