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

// WidgetBlueprintGeneratedClass AdminManagement.AdminManagement_C
// 0x0138 (0x0910 - 0x07D8)
class UAdminManagement_C : public UUI_AdminMangment
{
public:
	unsigned char                                      UnknownData00[0x138];                                     // 0x07D8(0x0138) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AdminManagement.AdminManagement_C");
		return ptr;
	}


	void ExecuteUbergraph_AdminManagement(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
