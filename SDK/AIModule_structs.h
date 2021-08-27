#pragma once

// Name: ARKSotF, Version: 178.8.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum AIModule.EAIOptionFlag
enum class EAIOptionFlag : uint8_t
{
	EAIOptionFlag__Default         = 0,
	EAIOptionFlag__Disable         = 1,
	EAIOptionFlag__EAIOptionFlag_MAX = 2,
	ESelectionMode__None           = 3,
	ESelectionMode__SingleToggle   = 4
};


// Enum AIModule.EPawnActionAbortState
enum class EPawnActionAbortState : uint8_t
{
	EPawnActionAbortState__NotBeingAborted = 0,
	EPawnActionAbortState__LatentAbortInProgress = 1,
	EPawnActionAbortState__MAX     = 2,
	EPawnActionResult__InProgress  = 3,
	EPawnActionResult__Failed      = 4,
	EPawnActionResult__EPawnActionResult_MAX = 5
};


// Enum AIModule.EPawnActionResult
enum class EPawnActionResult : uint8_t
{
	EPawnActionResult__InProgress  = 0,
	EPawnActionResult__Failed      = 1,
	EPawnActionResult__EPawnActionResult_MAX = 2,
	EPawnActionEventType__Invalid  = 3,
	EPawnActionEventType__FinishedAborting = 4
};


// Enum AIModule.EPawnActionEventType
enum class EPawnActionEventType : uint8_t
{
	EPawnActionEventType__Invalid  = 0,
	EPawnActionEventType__FinishedAborting = 1,
	EPawnActionEventType__Push     = 2,
	EAIOptionFlag__Default         = 3,
	EAIOptionFlag__Disable         = 4,
	EAIOptionFlag__EAIOptionFlag_MAX = 5
};


// Enum AIModule.EAIRequestPriority
enum class EAIRequestPriority : uint8_t
{
	EAIRequestPriority__SoftScript = 0,
	EAIRequestPriority__HardScript = 1,
	EAIRequestPriority__Ultimate   = 2,
	EAIRequestPriority__EAIRequestPriority_MAX = 3,
	ECorePerceptionTypes__Sight    = 4,
	ECorePerceptionTypes__Damage   = 5,
	ECorePerceptionTypes__Team     = 6
};


// Enum AIModule.EAILockSource
enum class EAILockSource : uint8_t
{
	EAILockSource__Animation       = 0,
	EAILockSource__Script          = 1,
	EAILockSource__MAX             = 2,
	EPrimalConsumableType__Food    = 3,
	EPrimalConsumableType__Medicine = 4,
	EPrimalConsumableType__MAX     = 5
};


// Enum AIModule.EPathFollowingStatus
enum class EPathFollowingStatus : uint8_t
{
	EPathFollowingStatus__Idle     = 0,
	EPathFollowingStatus__Paused   = 1,
	EPathFollowingStatus__EPathFollowingStatus_MAX = 2,
	EPathFollowingAction__Error    = 3,
	EPathFollowingAction__DirectMove = 4
};


// Enum AIModule.EPathFollowingResult
enum class EPathFollowingResult : uint8_t
{
	EPathFollowingResult__Success  = 0,
	EPathFollowingResult__OffPath  = 1,
	EPathFollowingResult__Skipped  = 2,
	EPathFollowingResult__EPathFollowingResult_MAX = 3,
	EInAppPurchaseState__Success   = 4,
	EInAppPurchaseState__Cancelled = 5,
	EInAppPurchaseState__NotAllowed = 6
};


// Enum AIModule.EPathFollowingAction
enum class EPathFollowingAction : uint8_t
{
	EPathFollowingAction__Error    = 0,
	EPathFollowingAction__DirectMove = 1,
	EPathFollowingAction__PathToGoal = 2,
	ESlateVisibility__Visible      = 3,
	ESlateVisibility__Hidden       = 4,
	ESlateVisibility__SelfHitTestInvisible = 5
};


// Enum AIModule.EPathFollowingRequestResult
enum class EPathFollowingRequestResult : uint8_t
{
	EPathFollowingRequestResult__Failed = 0,
	EPathFollowingRequestResult__RequestSuccessful = 1,
	ETextJustify__Left             = 2,
	ETextJustify__Right            = 3
};


// Enum AIModule.ECorePerceptionTypes
enum class ECorePerceptionTypes : uint8_t
{
	ECorePerceptionTypes__Sight    = 0,
	ECorePerceptionTypes__Damage   = 1,
	ECorePerceptionTypes__Team     = 2,
	ECorePerceptionTypes__MAX      = 3,
	FloatProperty                  = 4
};


// Enum AIModule.BehaviorTreeTypes.EBTFlowAbortMode
enum class EBTFlowAbortMode : uint8_t
{
	EBTFlowAbortMode__None         = 0,
	EBTFlowAbortMode__Self         = 1,
	EBTFlowAbortMode__EBTFlowAbortMode_MAX = 2
};


// Enum AIModule.BehaviorTreeTypes.EBTNodeResult
enum class EBTNodeResult : uint8_t
{
	EBTNodeResult__Succeeded       = 0,
	EBTNodeResult__Aborted         = 1,
	EBTNodeResult__EBTNodeResult_MAX = 2,
	EEnvTraceShape__Line           = 3,
	EEnvTraceShape__Sphere         = 4
};


// Enum AIModule.BTCompositeNode.EBTDecoratorLogic
enum class EBTDecoratorLogic : uint8_t
{
	EBTDecoratorLogic__Invalid     = 0,
	EBTDecoratorLogic__And         = 1,
	EBTDecoratorLogic__Not         = 2,
	MD_Surface                     = 3,
	MD_LightFunction               = 4,
	MD_MAX                         = 5
};


// Enum AIModule.BTCompositeNode.EBTChildIndex
enum class EBTChildIndex : uint8_t
{
	EBTChildIndex__FirstNode       = 0,
	EBTChildIndex__EBTChildIndex_MAX = 1
};


// Enum AIModule.EnvQueryTypes.EEnvQueryTestClamping
enum class EEnvQueryTestClamping : uint8_t
{
	EEnvQueryTestClamping__None    = 0,
	EEnvQueryTestClamping__FilterThreshold = 1,
	SLS_CapturedScene              = 2,
	SLS_MAX                        = 3
};


// Enum AIModule.EnvQueryTypes.EEnvDirection
enum class EEnvDirection : uint8_t
{
	EEnvDirection__TwoPoints       = 0,
	EEnvDirection__EEnvDirection_MAX = 1,
	EBTChildIndex__FirstNode       = 2
};


// Enum AIModule.EnvQueryTypes.EEnvTraceShape
enum class EEnvTraceShape : uint8_t
{
	EEnvTraceShape__Line           = 0,
	EEnvTraceShape__Sphere         = 1,
	EEnvTraceShape__EEnvTraceShape_MAX = 2,
	EEnvTestCondition__NoCondition = 3,
	EEnvTestCondition__UpTo        = 4
};


// Enum AIModule.EnvQueryTypes.EEnvQueryTrace
enum class EEnvQueryTrace : uint8_t
{
	EEnvQueryTrace__None           = 0,
	EEnvQueryTrace__Geometry       = 1,
	EEnvQueryParam__Float          = 2,
	EEnvQueryParam__Bool           = 3
};


// Enum AIModule.EnvQueryTypes.EEnvQueryParam
enum class EEnvQueryParam : uint8_t
{
	EEnvQueryParam__Float          = 0,
	EEnvQueryParam__Bool           = 1,
	EEnvDirection__TwoPoints       = 2,
	EEnvDirection__EEnvDirection_MAX = 3
};


// Enum AIModule.EnvQueryTypes.EEnvQueryRunMode
enum class EEnvQueryRunMode : uint8_t
{
	EEnvQueryRunMode__SingleResult = 0,
	EEnvQueryRunMode__EEnvQueryRunMode_MAX = 1,
	EEnvTestCost__Low              = 2
};


// Enum AIModule.EnvQueryTypes.EEnvQueryStatus
enum class EEnvQueryStatus : uint8_t
{
	EEnvQueryStatus__Processing    = 0,
	EEnvQueryStatus__Failed        = 1,
	EEnvQueryStatus__OwnerLost     = 2,
	EEnvQueryStatus__EEnvQueryStatus_MAX = 3,
	Camera                         = 4
};


// Enum AIModule.EnvQueryTypes.EEnvTestCost
enum class EEnvTestCost : uint8_t
{
	EEnvTestCost__Low              = 0,
	EEnvTestCost__High             = 1,
	EEnvQueryTrace__None           = 2,
	EEnvQueryTrace__Geometry       = 3
};


// Enum AIModule.EnvQueryTypes.EEnvTestWeight
enum class EEnvTestWeight : uint8_t
{
	EEnvTestWeight__None           = 0,
	EEnvTestWeight__Inverse        = 1,
	EEnvTestWeight__Constant       = 2,
	EEnvTestWeight__EEnvTestWeight_MAX = 3
};


// Enum AIModule.EnvQueryTypes.EEnvTestScoreEquation
enum class EEnvTestScoreEquation : uint8_t
{
	EEnvTestScoreEquation__Linear  = 0,
	EEnvTestScoreEquation__InverseLinear = 1,
	EEnvTestScoreEquation__EEnvTestScoreEquation_MAX = 2,
	EEnvTestFilterType__Minimum    = 3,
	EEnvTestFilterType__Range      = 4
};


// Enum AIModule.EnvQueryTypes.EEnvTestCondition
enum class EEnvTestCondition : uint8_t
{
	EEnvTestCondition__NoCondition = 0,
	EEnvTestCondition__UpTo        = 1,
	EEnvTestCondition__EEnvTestCondition_MAX = 2,
	EEnvTestScoreEquation__Linear  = 3,
	EEnvTestScoreEquation__InverseLinear = 4
};


// Enum AIModule.EnvQueryTypes.EEnvTestFilterType
enum class EEnvTestFilterType : uint8_t
{
	EEnvTestFilterType__Minimum    = 0,
	EEnvTestFilterType__Range      = 1,
	EEnvTestFilterType__EEnvTestFilterType_MAX = 2,
	ENavigationQueryResult__Invalid = 3,
	ENavigationQueryResult__Fail   = 4
};


// Enum AIModule.EnvQueryTypes.EEnvTestPurpose
enum class EEnvTestPurpose : uint8_t
{
	EEnvTestPurpose__Filter        = 0,
	EEnvTestPurpose__FilterAndScore = 1,
	EEnvQueryRunMode__SingleResult = 2,
	EEnvQueryRunMode__EEnvQueryRunMode_MAX = 3
};


// Enum AIModule.GenericTeamAgentInterface.ETeamAttitude
enum class ETeamAttitude : uint8_t
{
	ETeamAttitude__Friendly        = 0,
	ETeamAttitude__Hostile         = 1,
	EEnvTestPurpose__Filter        = 2,
	EEnvTestPurpose__FilterAndScore = 3
};


// Enum AIModule.BlackboardKeyType.ETextKeyOperation
enum class ETextKeyOperation : uint8_t
{
	ETextKeyOperation__Equal       = 0,
	ETextKeyOperation__Contain     = 1,
	ETextKeyOperation__ETextKeyOperation_MAX = 2,
	SVB_Loading                    = 3,
	SVB_VisibilityBlockingOnLoad   = 4
};


// Enum AIModule.BlackboardKeyType.EArithmeticKeyOperation
enum class EArithmeticKeyOperation : uint8_t
{
	EArithmeticKeyOperation__Equal = 0,
	EArithmeticKeyOperation__Less  = 1,
	EArithmeticKeyOperation__Greater = 2,
	EArithmeticKeyOperation__EArithmeticKeyOperation_MAX = 3
};


// Enum AIModule.BlackboardKeyType.EBasicKeyOperation
enum class EBasicKeyOperation : uint8_t
{
	EBasicKeyOperation__Set        = 0,
	EBasicKeyOperation__EBasicKeyOperation_MAX = 1
};


// Enum AIModule.BTDecorator_Blackboard.EBTBlackboardRestart
enum class EBTBlackboardRestart : uint8_t
{
	EBTBlackboardRestart__ValueChange = 0,
	EBTBlackboardRestart__EBTBlackboardRestart_MAX = 1
};


// Enum AIModule.BTDecorator_CompareBBEntries.EBlackBoardEntryComparison
enum class EBlackBoardEntryComparison : uint8_t
{
	EBlackBoardEntryComparison__Equal = 0,
	EBlackBoardEntryComparison__EBlackBoardEntryComparison_MAX = 1,
	EBTBlackboardRestart__ValueChange = 2
};


// Enum AIModule.BTDecorator_DoesPathExist.EPathExistanceQueryType
enum class EPathExistanceQueryType : uint8_t
{
	EPathExistanceQueryType__NavmeshRaycast2D = 0,
	EPathExistanceQueryType__RegularPathFinding = 1,
	EBlackBoardEntryComparison__Equal = 2,
	EBlackBoardEntryComparison__EBlackBoardEntryComparison_MAX = 3
};


// Enum AIModule.BTComposite_SimpleParallel.EBTParallelMode
enum class EBTParallelMode : uint8_t
{
	EBTParallelMode__AbortBackground = 0,
	EBTParallelMode__EBTParallelMode_MAX = 1,
	EPathExistanceQueryType__NavmeshRaycast2D = 2
};


// Enum AIModule.EnvQueryTest_Distance.EEnvTestDistance
enum class EEnvTestDistance : uint8_t
{
	EEnvTestDistance__Distance3D   = 0,
	EEnvTestDistance__DistanceZ    = 1,
	EBTParallelMode__AbortBackground = 2,
	EBTParallelMode__EBTParallelMode_MAX = 3
};


// Enum AIModule.EnvQueryTest_Pathfinding.EEnvTestPathfinding
enum class EEnvTestPathfinding : uint8_t
{
	EEnvTestPathfinding__PathExist = 0,
	EEnvTestPathfinding__PathLength = 1,
	EEnvTestDistance__Distance3D   = 2,
	EEnvTestDistance__DistanceZ    = 3
};


// Enum AIModule.PawnAction.EPawnActionFailHandling
enum class EPawnActionFailHandling : uint8_t
{
	EPawnActionFailHandling__RequireSuccess = 0,
	EPawnActionFailHandling__EPawnActionFailHandling_MAX = 1,
	EEnvTestPathfinding__PathExist = 2
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AIModule.BehaviorTreeTypes.BlackboardKeySelector
// 0x0028
struct FBlackboardKeySelector
{
	TArray<class UBlackboardKeyType*>                  AllowedTypes;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance)
	struct FName                                       SelectedKeyName;                                          // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UClass*                                      SelectedKeyType;                                          // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, IsPlainOldData)
	unsigned char                                      SelectedKeyID;                                            // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, IsPlainOldData)
	unsigned char                                      bNoneIsAllowedValue : 1;                                  // 0x0000(0x0001) (Edit, Transient, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x27];                                      // 0x0001(0x0027) MISSED OFFSET
};

// ScriptStruct AIModule.AIRequestID
// 0x0004
struct FAIRequestID
{
	uint32_t                                           RequestID;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AIModule.PawnActionsComponent.PawnActionStack
// 0x0008
struct FPawnActionStack
{
	class UPawnAction*                                 TopAction;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AIModule.PawnActionsComponent.PawnActionEvent
// 0x0018
struct FPawnActionEvent
{
	class UPawnAction*                                 Action;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct AIModule.AISense_Damage.AIDamageEvent
// 0x0030
struct FAIDamageEvent
{
	class AActor*                                      DamagedActor;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      Instigator;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) MISSED OFFSET
};

// ScriptStruct AIModule.AISense_Hearing.AINoiseEvent
// 0x0020
struct FAINoiseEvent
{
	class AActor*                                      Instigator;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct AIModule.AISense_Prediction.AIPredictionEvent
// 0x0018
struct FAIPredictionEvent
{
	class AActor*                                      Requestor;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      PredictedActor;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct AIModule.AISense_Team.AITeamStimulusEvent
// 0x0038
struct FAITeamStimulusEvent
{
	class AActor*                                      Broadcaster;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      Enemy;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0008(0x0030) MISSED OFFSET
};

// ScriptStruct AIModule.AISense_Touch.AITouchEvent
// 0x0020
struct FAITouchEvent
{
	class AActor*                                      TouchReceiver;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct AIModule.BTCompositeNode.BTDecoratorLogic
// 0x0004
struct FBTDecoratorLogic
{
	TEnumAsByte<EBTDecoratorLogic>                     Operation;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           Number;                                                   // 0x0000(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
};

// ScriptStruct AIModule.BTCompositeNode.BTCompositeChild
// 0x0030
struct FBTCompositeChild
{
	class UBTCompositeNode*                            ChildComposite;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UBTTaskNode*                                 ChildTask;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UBTDecorator*>                        Decorators;                                               // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FBTDecoratorLogic>                   DecoratorOps;                                             // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0010(0x0020) MISSED OFFSET
};

// ScriptStruct AIModule.BehaviorTreeManager.BehaviorTreeTemplateInfo
// 0x0028
struct FBehaviorTreeTemplateInfo
{
	class UBehaviorTree*                               Asset;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UBTCompositeNode*                            Template;                                                 // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FString                                     Category;                                                 // 0x0000(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0010(0x0018) MISSED OFFSET
};

// ScriptStruct AIModule.BlackboardData.BlackboardEntry
// 0x0010
struct FBlackboardEntry
{
	struct FName                                       EntryName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UBlackboardKeyType*                          KeyType;                                                  // 0x0000(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct AIModule.EnvQueryTypes.EnvNamedValue
// 0x0010
struct FEnvNamedValue
{
	struct FName                                       ParamName;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEnvQueryParam>                        ParamType;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
};

// ScriptStruct AIModule.EnvQueryTypes.EnvFloatParam
// 0x000C
struct FEnvFloatParam
{
	float                                              Value;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ParamName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0008(0x0004) MISSED OFFSET
};

// ScriptStruct AIModule.EnvQueryTypes.EnvBoolParam
// 0x000C
struct FEnvBoolParam
{
	bool                                               Value;                                                    // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ParamName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0008(0x0004) MISSED OFFSET
};

// ScriptStruct AIModule.EnvQueryTypes.EnvTraceData
// 0x0028
struct FEnvTraceData
{
	class UClass*                                      NavigationFilter;                                         // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ProjectDown;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ProjectUp;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExtentX;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExtentY;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExtentZ;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ETraceTypeQuery>                       TraceChannel;                                             // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EEnvTraceShape>                        TraceShape;                                               // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EEnvQueryTrace>                        TraceMode;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bTraceComplex : 1;                                        // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bOnlyBlockingHits : 1;                                    // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bCanTraceOnNavMesh : 1;                                   // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bCanTraceOnGeometry : 1;                                  // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bCanDisableTrace : 1;                                     // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bCanProjectDown : 1;                                      // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x27];                                      // 0x0001(0x0027) MISSED OFFSET
};

// ScriptStruct AIModule.EnvQueryTypes.EnvDirection
// 0x0020
struct FEnvDirection
{
	class UClass*                                      LineFrom;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      LineTo;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      Rotation;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EEnvDirection>                         DirMode;                                                  // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1F];                                      // 0x0001(0x001F) MISSED OFFSET
};

// ScriptStruct AIModule.AISense_Sight.AISightEvent
// 0x0018
struct FAISightEvent
{
	class AActor*                                      SeenActor;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      Observer;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct AIModule.EnvQueryTypes.EnvIntParam
// 0x000C
struct FEnvIntParam
{
	int                                                Value;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ParamName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0008(0x0004) MISSED OFFSET
};

// ScriptStruct AIModule.EnvQueryManager.EnvQueryRequest
// 0x0068
struct FEnvQueryRequest
{
	class UEnvQuery*                                   QueryTemplate;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UObject*                                     Owner;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UWorld*                                      World;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x60];                                      // 0x0008(0x0060) MISSED OFFSET
};

// ScriptStruct AIModule.GenericTeamAgentInterface.GenericTeamId
// 0x0001
struct FGenericTeamId
{
	unsigned char                                      TeamId;                                                   // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
