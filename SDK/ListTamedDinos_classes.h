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

// WidgetBlueprintGeneratedClass ListTamedDinos.ListTamedDinos_C
// 0x0030 (0x0528 - 0x04F8)
class UListTamedDinos_C : public UUI_ListTamedDinos
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x04F8(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ListTamedDinos.ListTamedDinos_C");
		return ptr;
	}


	void ExecuteUbergraph_ListTamedDinos(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
