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

// WidgetBlueprintGeneratedClass ListArkCharacterData.ListArkCharacterData_C
// 0x0028 (0x0520 - 0x04F8)
class UListArkCharacterData_C : public UUI_ListCharacterData
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x04F8(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ListArkCharacterData.ListArkCharacterData_C");
		return ptr;
	}


	void ExecuteUbergraph_ListArkCharacterData(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
