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

// WidgetBlueprintGeneratedClass DataListEntryWidgetHostSession.DataListEntryWidgetHostSession_C
// 0x0008 (0x0298 - 0x0290)
class UDataListEntryWidgetHostSession_C : public UDataListEntryWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0290(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DataListEntryWidgetHostSession.DataListEntryWidgetHostSession_C");
		return ptr;
	}


	void ExecuteUbergraph_DataListEntryWidgetHostSession(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif