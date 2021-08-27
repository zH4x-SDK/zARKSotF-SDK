#pragma once

// Name: ARKSotF, Version: 178.8.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct SessionMessages.SessionServiceMessages.SessionServiceLogUnsubscribe
// 0x0001
struct FSessionServiceLogUnsubscribe
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct SessionMessages.SessionServiceMessages.SessionServiceLogSubscribe
// 0x0001
struct FSessionServiceLogSubscribe
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct SessionMessages.SessionServiceMessages.SessionServiceLog
// 0x0038
struct FSessionServiceLog
{
	struct FName                                       Category;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Data;                                                     // 0x0000(0x0010) (ZeroConstructor)
	struct FGuid                                       InstanceId;                                               // 0x0000(0x0010) (ZeroConstructor)
	double                                             TimeSeconds;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      Verbosity;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x37];                                      // 0x0001(0x0037) MISSED OFFSET
};

// ScriptStruct SessionMessages.SessionServiceMessages.SessionServicePong
// 0x0090
struct FSessionServicePong
{
	struct FString                                     BuildDate;                                                // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     DeviceName;                                               // 0x0000(0x0010) (ZeroConstructor)
	struct FGuid                                       InstanceId;                                               // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     InstanceName;                                             // 0x0000(0x0010) (ZeroConstructor)
	bool                                               IsConsoleBuild;                                           // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	struct FString                                     PlatformName;                                             // 0x0000(0x0010) (ZeroConstructor)
	struct FGuid                                       SessionId;                                                // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     SessionName;                                              // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     SessionOwner;                                             // 0x0000(0x0010) (ZeroConstructor)
	bool                                               Standalone;                                               // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8F];                                      // 0x0001(0x008F) MISSED OFFSET
};

// ScriptStruct SessionMessages.SessionServiceMessages.SessionServicePing
// 0x0001
struct FSessionServicePing
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
