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

// ScriptStruct EngineMessages.EngineServiceMessages.EngineServiceNotification
// 0x0018
struct FEngineServiceNotification
{
	struct FString                                     Text;                                                     // 0x0000(0x0010) (ZeroConstructor)
	double                                             TimeSeconds;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct EngineMessages.EngineServiceMessages.EngineServiceTerminate
// 0x0010
struct FEngineServiceTerminate
{
	struct FString                                     UserName;                                                 // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct EngineMessages.EngineServiceMessages.EngineServiceExecuteCommand
// 0x0020
struct FEngineServiceExecuteCommand
{
	struct FString                                     Command;                                                  // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     UserName;                                                 // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct EngineMessages.EngineServiceMessages.EngineServiceAuthGrant
// 0x0020
struct FEngineServiceAuthGrant
{
	struct FString                                     UserName;                                                 // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     UserToGrant;                                              // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct EngineMessages.EngineServiceMessages.EngineServiceAuthDeny
// 0x0020
struct FEngineServiceAuthDeny
{
	struct FString                                     UserName;                                                 // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     UserToDeny;                                               // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct EngineMessages.EngineServiceMessages.EngineServicePong
// 0x0050
struct FEngineServicePong
{
	struct FString                                     CurrentLevel;                                             // 0x0000(0x0010) (ZeroConstructor)
	int                                                EngineVersion;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               HasBegunPlay;                                             // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       InstanceId;                                               // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     InstanceType;                                             // 0x0000(0x0010) (ZeroConstructor)
	struct FGuid                                       SessionId;                                                // 0x0000(0x0010) (ZeroConstructor)
	float                                              WorldTimeSeconds;                                         // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4C];                                      // 0x0004(0x004C) MISSED OFFSET
};

// ScriptStruct EngineMessages.EngineServiceMessages.EngineServicePing
// 0x0001
struct FEngineServicePing
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
