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

// Enum ShooterGame.ESTOFNotificationType
enum class ESTOFNotificationType : uint8_t
{
	ESTOFNotificationType__Death   = 0,
	ESTOFNotificationType__MatchVictory = 1,
	ESTOFNotificationType__MAX     = 2,
	ESlateColorStylingMode__UseColor_Specified = 3,
	ESlateColorStylingMode__UseColor_Foreground = 4,
	ESlateColorStylingMode__UseColor_MAX = 5
};


// Enum ShooterGame.EPrimalARKTributeDataType
enum class EPrimalARKTributeDataType : uint8_t
{
	EPrimalARKTributeDataType__Items = 0,
	EPrimalARKTributeDataType__CharacterData = 1,
	EPrimalARKTributeDataType__EPrimalARKTributeDataType_MAX = 2,
	HAlign_Fill                    = 3,
	HAlign_Center                  = 4
};


// Enum ShooterGame.EPrimalCharacterStatusValue
enum class EPrimalCharacterStatusValue : uint8_t
{
	EPrimalCharacterStatusValue__Health = 0,
	EPrimalCharacterStatusValue__Torpidity = 1,
	EPrimalCharacterStatusValue__Food = 2,
	EPrimalCharacterStatusValue__Temperature = 3,
	EPrimalCharacterStatusValue__MeleeDamageMultiplier = 4,
	EPrimalCharacterStatusValue__TemperatureFortitude = 5,
	EPrimalCharacterStatusValue__MAX = 6,
	ETribeGroupPermission__STRUCTUREACTIVATE = 7,
	ETribeGroupPermission__PET_ORDER = 8,
	ETribeGroupPermission__GENERAL_STRUCTUREDEMOLISH = 9,
	ETribeGroupPermission__GENERAL_BUILDSTRUCTUREINRANGE = 10,
	ETribeGroupPermission__PROMOTEMEMBER = 11,
	ETribeGroupPermission__BANISHMEMBER = 12,
	ETribeGroupPermission__ETribeGroupPermission_MAX = 13
};


// Enum ShooterGame.EChatMessageType
enum class EChatMessageType : uint8_t
{
	EChatMessageType__MyMessage    = 0,
	EChatMessageType__DifferentTeamMessage = 1,
	EChatMessageType__NotificationMessage = 2,
	EChatMessageType__EChatMessageType_MAX = 3
};


// Enum ShooterGame.EChatType
enum class EChatType : uint8_t
{
	EChatType__GlobalChat          = 0,
	EChatType__RadioChat           = 1,
	EChatType__Notification        = 2,
	EChatType__EChatType_MAX       = 3,
	EPathFollowingResult__Success  = 4,
	EPathFollowingResult__OffPath  = 5,
	EPathFollowingResult__Skipped  = 6
};


// Enum ShooterGame.EShooterPhysMaterialType
enum class EShooterPhysMaterialType : uint8_t
{
	EShooterPhysMaterialType__Unknown = 0,
	EShooterPhysMaterialType__Dirt = 1,
	EShooterPhysMaterialType__Metal = 2,
	EShooterPhysMaterialType__Grass = 3,
	EShooterPhysMaterialType__Flesh = 4,
	EShooterPhysMaterialType__Rock = 5,
	EShooterPhysMaterialType__Snow = 6,
	EShooterPhysMaterialType__EShooterPhysMaterialType_MAX = 7
};


// Enum ShooterGame.EPlayerActionIndex
enum class EPlayerActionIndex : uint8_t
{
	EPlayerActionIndex__None       = 0,
	EPlayerActionIndex__WhistleFollowOne = 1,
	EPlayerActionIndex__WhistleStopOne = 2,
	EPlayerActionIndex__WhistleNeutral = 3,
	EPlayerActionIndex__WhistleAttackTarget = 4,
	EPlayerActionIndex__ShowCraftables = 5,
	EPlayerActionIndex__Poop       = 6,
	EPlayerActionIndex__Emote_Salute = 7,
	EPlayerActionIndex__Emote_Thank = 8,
	EPlayerActionIndex__Emote_Laugh = 9,
	EPlayerActionIndex__Emote_No   = 10,
	EPlayerActionIndex__Emote_Cheer = 11,
	EPlayerActionIndex__EPlayerActionIndex_MAX = 12
};


// Enum ShooterGame.PrimalGameData.EPrimalCharacterStatusState
enum class EPrimalCharacterStatusState : uint8_t
{
	EPrimalCharacterStatusState__Dead = 0,
	EPrimalCharacterStatusState__Starvation = 1,
	EPrimalCharacterStatusState__Suffocation = 2,
	EPrimalCharacterStatusState__Hypothermia = 3,
	EPrimalCharacterStatusState__Injured = 4,
	EPrimalCharacterStatusState__Sleeping = 5,
	EPrimalCharacterStatusState__Hot = 6,
	EPrimalCharacterStatusState__Suicide = 7,
	EPrimalCharacterStatusState__MAX = 8,
	EServerOctreeGroup__STASISCOMPONENTS = 9,
	EServerOctreeGroup__DINOPAWNS  = 10,
	EServerOctreeGroup__STRUCTURES = 11,
	EServerOctreeGroup__SPATIALNETWORKEDACTORS = 12,
	EServerOctreeGroup__ALL_SPATIAL = 13,
	EServerOctreeGroup__STRUCTURES_CORE = 14,
	EServerOctreeGroup__PLAYERS_AND_TAMED_DINOS = 15,
	EServerOctreeGroup__GRENADES   = 16
};


// Enum ShooterGame.PrimalGameData.EPrimalConsumableType
enum class EPrimalConsumableType : uint8_t
{
	EPrimalConsumableType__Food    = 0,
	EPrimalConsumableType__Medicine = 1,
	EPrimalConsumableType__MAX     = 2,
	ELevelExperienceRampType__Player = 3,
	ELevelExperienceRampType__DinoMedium = 4,
	ELevelExperienceRampType__MAX  = 5
};


// Enum ShooterGame.PrimalGameData.ELevelExperienceRampType
enum class ELevelExperienceRampType : uint8_t
{
	ELevelExperienceRampType__Player = 0,
	ELevelExperienceRampType__DinoMedium = 1,
	ELevelExperienceRampType__MAX  = 2,
	EAxis__None                    = 3,
	EAxis__Y                       = 4,
	EAxis__EAxis_MAX               = 5
};


// Enum ShooterGame.PrimalGameData.EPrimalItemType
enum class EPrimalItemType : uint8_t
{
	EPrimalItemType__MiscConsumable = 0,
	EPrimalItemType__Weapon        = 1,
	EPrimalItemType__Structure     = 2,
	EPrimalItemType__Skin          = 3,
	EPrimalItemType__Artifact      = 4,
	EPrimalItemType__EPrimalItemType_MAX = 5
};


// Enum ShooterGame.PrimalGameData.EPrimalItemStat
enum class EPrimalItemStat : uint8_t
{
	EPrimalItemStat__GenericQuality = 0,
	EPrimalItemStat__MaxDurability = 1,
	EPrimalItemStat__WeaponClipAmmo = 2,
	EPrimalItemStat__Weight        = 3,
	EPrimalItemStat__MAX           = 4,
	PSPT_None                      = 5,
	PSPT_ScalarRand                = 6,
	PSPT_VectorRand                = 7,
	PSPT_Actor                     = 8,
	PSPT_MAX                       = 9
};


// Enum ShooterGame.PrimalGameData.EDinoTamedOrder
enum class EDinoTamedOrder : uint8_t
{
	EDinoTamedOrder__SetAggressionPassive = 0,
	EDinoTamedOrder__SetAggressionAggressive = 1,
	EDinoTamedOrder__ToggleFollowMe = 2,
	EDinoTamedOrder__StopFollowing = 3,
	EDinoTamedOrder__MAX           = 4
};


// Enum ShooterGame.PrimalGameData.EXPType
enum class EXPType : uint8_t
{
	EXPType__XP_GENERIC            = 0,
	EXPType__XP_HARVEST            = 1,
	EXPType__XP_SPECIAL            = 2,
	EXPType__EXPType_MAX           = 3,
	IntProperty                    = 4
};


// Enum ShooterGame.PrimalGameData.ETribeGroupPermission
enum class ETribeGroupPermission : uint8_t
{
	ETribeGroupPermission__STRUCTUREACTIVATE = 0,
	ETribeGroupPermission__PET_ORDER = 1,
	ETribeGroupPermission__GENERAL_STRUCTUREDEMOLISH = 2,
	ETribeGroupPermission__GENERAL_BUILDSTRUCTUREINRANGE = 3,
	ETribeGroupPermission__PROMOTEMEMBER = 4,
	ETribeGroupPermission__BANISHMEMBER = 5,
	ETribeGroupPermission__ETribeGroupPermission_MAX = 6,
	MATUSAGE_SkeletalMesh          = 7,
	MATUSAGE_BeamTrails            = 8,
	MATUSAGE_StaticLighting        = 9,
	MATUSAGE_SplineMesh            = 10,
	MATUSAGE_InstancedStaticMeshes = 11,
	MATUSAGE_UI                    = 12
};


// Enum ShooterGame.PrimalGameData.EBoneModifierType
enum class EBoneModifierType : uint8_t
{
	EBoneModifierType__HEAD        = 0,
	EBoneModifierType__NECKLENGTH  = 1,
	EBoneModifierType__SHOULDERS   = 2,
	EBoneModifierType__UPPERARM    = 3,
	EBoneModifierType__HAND        = 4,
	EBoneModifierType__UPPERLEG    = 5,
	EBoneModifierType__FOOT        = 6,
	EBoneModifierType__TORSO       = 7,
	EBoneModifierType__LOWERFACESIZE = 8,
	EBoneModifierType__HEADHEIGHT  = 9,
	EBoneModifierType__HEADDEPTH   = 10,
	EBoneModifierType__MAX         = 11
};


// Enum ShooterGame.PrimalInventoryComponent.EPrimalItemMessage
enum class EPrimalItemMessage : uint8_t
{
	EPrimalItemMessage__Broken     = 0,
	EPrimalItemMessage__MAX        = 1,
	ESearchCase__CaseSensitive     = 2,
	ESearchCase__ESearchCase_MAX   = 3
};


// Enum ShooterGame.ShooterPlayerController.ESoTFDamageType
enum class ESoTFDamageType : uint8_t
{
	PVP                            = 0,
	DEATH                          = 1,
	EControllerAnalogStick__CAS_LeftStick = 2,
	EControllerAnalogStick__CAS_MAX = 3
};


// Enum ShooterGame.PrimalDinoCharacter.EBabyCuddleType
enum class EBabyCuddleType : uint8_t
{
	EBabyCuddleType__PET           = 0,
	EBabyCuddleType__WALK          = 1,
	EBabyCuddleType__EBabyCuddleType_MAX = 2,
	VTBlend_Linear                 = 3,
	VTBlend_EaseIn                 = 4
};


// Enum ShooterGame.PrimalStructureElevatorPlatform.EPrimalStructureElevatorState
enum class EPrimalStructureElevatorState : uint8_t
{
	PSLS_Down                      = 0,
	PSLS_MAX                       = 1,
	EEnvQueryTestClamping__None    = 2
};


// Enum ShooterGame.VictoryCore.EServerOctreeGroup
enum class EServerOctreeGroup : uint8_t
{
	EServerOctreeGroup__STASISCOMPONENTS = 0,
	EServerOctreeGroup__DINOPAWNS  = 1,
	EServerOctreeGroup__STRUCTURES = 2,
	EServerOctreeGroup__SPATIALNETWORKEDACTORS = 3,
	EServerOctreeGroup__ALL_SPATIAL = 4,
	EServerOctreeGroup__STRUCTURES_CORE = 5,
	EServerOctreeGroup__PLAYERS_AND_TAMED_DINOS = 6,
	EServerOctreeGroup__GRENADES   = 7,
	EServerOctreeGroup__EServerOctreeGroup_MAX = 8
};


// Enum ShooterGame.DataListEntryButton_PrimalFolder.FolderWidgetType
enum class EFolderWidgetType : uint8_t
{
	FolderWidgetType__FWT_Back     = 0,
	FolderWidgetType__FWT_CustomFolder = 1,
	TA_Wrap                        = 2,
	TA_Mirror                      = 3
};


// Enum ShooterGame.PrimalStructurePlacer.EPrimalStructurePlacerState
enum class EPrimalStructurePlacerState : uint8_t
{
	EPrimalStructurePlacerState__Default = 0,
	EPrimalStructurePlacerState__PlacingStructure = 1
};


// Enum ShooterGame.PrimalStructureItemContainer_CropPlot.ESeedCropPhase
enum class ESeedCropPhase : uint8_t
{
	ESeedCropPhase__Seedling       = 0,
	ESeedCropPhase__Growthling     = 1,
	ESeedCropPhase__MAX            = 2
};


// Enum ShooterGame.UI_Inventory.EDropItemIconAction
enum class EDropItemIconAction : uint8_t
{
	EDropItemIconAction__DA_NoAction = 0,
	EDropItemIconAction__DA_UnEquip = 1,
	EDropItemIconAction__DA_RemoveFromSlot = 2,
	EDropItemIconAction__DA_FromRemoteInv = 3,
	EDropItemIconAction__DA_MergeItemStack = 4,
	EDropItemIconAction__DA_SwapItems = 5,
	EDropItemIconAction__DA_UnEquipTransferToLocal = 6,
	EDropItemIconAction__DA_SplitItemStackOne = 7,
	EDropItemIconAction__DA_FromRemoteInvToSlot = 8,
	EDropItemIconAction__DA_EquipLocalFromRemote = 9,
	EDropItemIconAction__DA_UnequipTransferToRemote = 10,
	EDropItemIconAction__DA_FromArkInv = 11,
	EDropItemIconAction__MAX       = 12
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ShooterGame.PrimalGameData.PrimalCharacterStatusValueDefinition
// 0x0020
struct FPrimalCharacterStatusValueDefinition
{
	class UTexture2D*                                  StatusValueIcon;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     StatusValueName;                                          // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	bool                                               bLevelUpSetToMaxValue;                                    // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDisplayHideCurrentValue;                                 // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDisplayAsPercent;                                        // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1F];                                      // 0x0001(0x001F) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalGameData.PrimalCharacterStatusStateDefinition
// 0x0050
struct FPrimalCharacterStatusStateDefinition
{
	TEnumAsByte<EPrimalCharacterStatusValue>           StatusValueType;                                          // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                StatusValueThresholdIndex;                                // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  StatusStateIcon;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     StatusStateName;                                          // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     StatusStateDescription;                                   // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FColor                                      StatusStateNameColor;                                     // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUsed;                                                    // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDisplayHUDMessage;                                       // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     HUDMessage;                                               // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FColor                                      HUDMessageColor;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4C];                                      // 0x0004(0x004C) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalGameData.PrimalItemStatDefinition
// 0x0018
struct FPrimalItemStatDefinition
{
	class UTexture2D*                                  ItemStatIcon;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     ItemStatName;                                             // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalGameData.PrimalItemDefinition
// 0x0018
struct FPrimalItemDefinition
{
	class UTexture2D*                                  ItemTypeIcon;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     ItemTypeName;                                             // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalGameData.PrimalEquipmentDefinition
// 0x0018
struct FPrimalEquipmentDefinition
{
	class UTexture2D*                                  EquipmentTypeIcon;                                        // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     EquipmentTypeName;                                        // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalGameData.PrimalItemQuality
// 0x0030
struct FPrimalItemQuality
{
	struct FLinearColor                                QualityColor;                                             // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     QualityName;                                              // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              QualityRandomMultiplierThreshold;                         // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CraftingXPMultiplier;                                     // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RepairingXPMultiplier;                                    // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CraftingResourceRequirementsMultiplier;                   // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2C];                                      // 0x0004(0x002C) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalGameData.StatusValueModifierDescription
// 0x0048
struct FStatusValueModifierDescription
{
	class UTexture2D*                                  ModifierIcon;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     ModifierName;                                             // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     ModifierDescription;                                      // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FColor                                      ModifierColor;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDisplayHUDMessage;                                       // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     HUDMessage;                                               // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FColor                                      HUDMessageColor;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x44];                                      // 0x0004(0x0044) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalGameData.AppIDItem
// 0x0020
struct FAppIDItem
{
	int                                                AppID;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PlayerBadgeGroup;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             PlayerIDStrings;                                          // 0x0000(0x0010) (Edit, ZeroConstructor)
	class UClass*                                      ItemClass;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalGameData.TutorialDefinition
// 0x0030
struct FTutorialDefinition
{
	struct FString                                     TutorialTitle;                                            // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     TutorialText;                                             // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UTexture2D*                                  TutorialImage;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TutorialDuration;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NextTutorialIndex;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2C];                                      // 0x0004(0x002C) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalGameData.ColorDefinition
// 0x0018
struct FColorDefinition
{
	struct FName                                       ColorName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                ColorValue;                                               // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalGameData.BoneModifierRange
// 0x003C
struct FBoneModifierRange
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     MinScale;                                                 // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     MaxScale;                                                 // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     MinTranslation;                                           // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     MaxTranslation;                                           // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Recursive;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3B];                                      // 0x0001(0x003B) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalGameData.BoneModifierRangeArray
// 0x0020
struct FBoneModifierRangeArray
{
	unsigned char                                      bAffectsLegLength : 1;                                    // 0x0000(0x0001) (Edit)
	unsigned char                                      bUseExtraMax : 1;                                         // 0x0000(0x0001) (Edit)
	float                                              MinLegLengthMultiplier;                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxLegLengthMultiplier;                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FBoneModifierRange>                  BoneArray;                                                // 0x0000(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalGameData.PlayerCharacterGenderDefinition
// 0x05E0
struct FPlayerCharacterGenderDefinition
{
	struct FString                                     GenderString;                                             // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      CharacterBlueprint;                                       // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FLinearColor>                        ColorSetBody;                                             // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FLinearColor>                        ColorSetHair;                                             // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FLinearColor>                        ColorSetEyes;                                             // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UMaterialInterface*                          CharacterPreviewMaterial;                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FString>                             DefaultCharacterNames;                                    // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FBoneModifierRangeArray                     CharacterBoneModifierRanges[0x16];                        // 0x0000(0x0020) (Edit, DisableEditOnInstance)
	struct FBoneModifierRangeArray                     ExtraCharacterBoneModifierMax[0x16];                      // 0x0000(0x0020) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x320];                                     // 0x02C0(0x0320) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalGameData.LevelExperienceRamp
// 0x0010
struct FLevelExperienceRamp
{
	TArray<float>                                      ExperiencePointsForLevel;                                 // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct ShooterGame.PrimalGameData.NamedTeamDefinition
// 0x0080
struct FNamedTeamDefinition
{
	struct FName                                       TeamName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bTargetingTeamExclusionList : 1;                          // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bTargetingTeamInclusionList : 1;                          // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bAllowTargetsOnOwnTeam : 1;                               // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bIsCarnivore : 1;                                         // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bTargetPlayersAndTamedOnly : 1;                           // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bForceTargetPlayersAndTamed : 1;                          // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bIgnoredByAllTeams : 1;                                   // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	TArray<struct FName>                               TeamNameList;                                             // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               TargetingMultiplierTeamNames;                             // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               DontGiveDamageTeamList;                                   // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               DontReceiveDamageTeamList;                                // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               MaximumTargetableDistanceTeams;                           // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      MaximumTargetableDistances;                               // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      TargetingMultiplierTeamWeights;                           // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x70];                                      // 0x0010(0x0070) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalGameData.ClassRemapping
// 0x0010
struct FClassRemapping
{
	class UClass*                                      FromClass;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ToClass;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalGameData.ClassAddition
// 0x0018
struct FClassAddition
{
	class UClass*                                      ForClass;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              ClassAdditions;                                           // 0x0000(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalGameData.RandValueRange
// 0x000C
struct FRandValueRange
{
	float                                              MinVal;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxVal;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RandPower;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0004(0x0008) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalGameData.DinoBabySetup
// 0x0038
struct FDinoBabySetup
{
	struct FName                                       DinoNameTag;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FBoneModifierRangeArray>             BabyBoneModifierRanges;                                   // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      WildRandomScaleRangeWeights;                              // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FRandValueRange>                     WildRandomScaleRanges;                                    // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0010(0x0028) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalGameData.MultiAchievement
// 0x0020
struct FMultiAchievement
{
	struct FString                                     UnlockAchievement;                                        // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FString>                             RequiredAchievements;                                     // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalGameData.ClassRemappingWeight
// 0x0028
struct FClassRemappingWeight
{
	class UClass*                                      FromClass;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              ToClasses;                                                // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<float>                                      Weights;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0010(0x0018) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalGameData.NPCDifficultyLevelRange
// 0x0030
struct FNPCDifficultyLevelRange
{
	TArray<float>                                      EnemyLevelsMin;                                           // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate)
	TArray<float>                                      EnemyLevelsMax;                                           // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate)
	TArray<float>                                      GameDifficulties;                                         // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0010(0x0020) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalGameData.NPCSpawnEntry
// 0x00F0
struct FNPCSpawnEntry
{
	struct FString                                     AnEntryName;                                              // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              NPCsToSpawn;                                              // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FClassRemappingWeight>               NPCRandomSpawnClassWeights;                               // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                             NPCsSpawnOffsets;                                         // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      NPCsToSpawnPercentageChance;                              // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      NPCMinLevelOffset;                                        // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      NPCMaxLevelOffset;                                        // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      NPCMinLevelMultiplier;                                    // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      NPCMaxLevelMultiplier;                                    // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      bAddLevelOffsetBeforeMultiplier : 1;                      // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	TArray<unsigned char>                              NPCOverrideLevel;                                         // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FVector                                     ExtentCheck;                                              // 0x0000(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     GroupSpawnOffset;                                         // 0x0000(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EntryWeight;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ManualSpawnPointSpreadRadius;                             // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WaterOnlySpawnMinimumWaterHeight;                         // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaximumWaterHeight;                                       // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FNPCDifficultyLevelRange>            NPCDifficultyLevelRanges;                                 // 0x0000(0x0010) (Edit, ZeroConstructor)
	float                                              LevelDifficultyTestOverride;                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpawnMinDistanceFromStructuresMultiplier;                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpawnMinDistanceFromPlayersMultiplier;                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpawnMinDistanceFromTamedDinosMultiplier;                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xEC];                                      // 0x0004(0x00EC) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalGameData.NPCSpawnLimit
// 0x0010
struct FNPCSpawnLimit
{
	class UClass*                                      NPCClass;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxPercentageOfDesiredNumToAllow;                         // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalGameData.NPCSpawnEntriesContainerAdditions
// 0x0028
struct FNPCSpawnEntriesContainerAdditions
{
	class UClass*                                      SpawnEntriesContainerClass;                               // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FNPCSpawnEntry>                      AdditionalNPCSpawnEntries;                                // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FNPCSpawnLimit>                      AdditionalNPCSpawnLimits;                                 // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0010(0x0018) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalGameData.ItemAttachmentInfo
// 0x0028
struct FItemAttachmentInfo
{
	class UActorComponent*                             ComponentToAttach;                                        // 0x0000(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FName                                       SocketToAttachTo;                                         // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bCanBuildStructuresOn : 1;                                // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bAttachmentRequireWeaponSupportShield : 1;                // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bUseParentAnims : 1;                                      // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bAttachToFirstPersonHands : 1;                            // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bAttachToThirdPersonWeaponMesh : 1;                       // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bDisabled : 1;                                            // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bUseItemColors : 1;                                       // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bUseIgnoreAttachmentWhenEquipmentOfType : 1;              // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bHideCharacterMesh : 1;                                   // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	TEnumAsByte<EPrimalEquipmentType>                  IgnoreAttachmentWhenEquipmentOfType;                      // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       AttachedCompName;                                         // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TWeakObjectPtr<class UActorComponent>              AttachedCompReference;                                    // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0008(0x0020) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalItem.ActorClassAttachmentInfo
// 0x0050
struct FActorClassAttachmentInfo
{
	class UClass*                                      OwnerActorClassParent;                                    // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FItemAttachmentInfo>                 ItemAttachmentInfos;                                      // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       PlayerMeshTextureMaskParamName;                           // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  PlayerMeshTextureMask;                                    // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  PlayerMeshNoItemDefaultTextureMask;                       // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                PlayerMeshTextureMaskMaterialIndex;                       // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       FPVHandsMeshTextureMaskParamName;                         // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  FPVHandsMeshTextureMask;                                  // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                FPVHandsMeshTextureMaskMaterialIndex;                     // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4C];                                      // 0x0004(0x004C) MISSED OFFSET
};

// ScriptStruct ShooterGame.ItemNetID
// 0x0008
struct FItemNetID
{
	uint32_t                                           ItemID1;                                                  // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	uint32_t                                           ItemID2;                                                  // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalGameData.CraftingResourceRequirement
// 0x0018
struct FCraftingResourceRequirement
{
	float                                              BaseResourceRequirement;                                  // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ResourceItemType;                                         // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCraftingRequireExactResourceType;                        // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x17];                                      // 0x0001(0x0017) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalItem.UseItemAddCharacterStatusValue
// 0x001C
struct FUseItemAddCharacterStatusValue
{
	float                                              BaseAmountToAdd;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bPercentOfMaxStatusValue : 1;                             // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bSetAdditionalValue : 1;                                  // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bPercentOfCurrentStatusValue : 1;                         // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bResetExistingModifierDescriptionIndex : 1;               // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bUseItemQuality : 1;                                      // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bDontRequireLessThanMaxToUse : 1;                         // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bAddOverTime : 1;                                         // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bAddOverTimeSpeedInSeconds : 1;                           // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bContinueOnUnchangedValue : 1;                            // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bSetValue : 1;                                            // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	float                                              LimitExistingModifierDescriptionToMaxAmount;              // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AddOverTimeSpeed;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                StatusValueModifierDescriptionIndex;                      // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ItemQualityAddValueMultiplier;                            // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EPrimalCharacterStatusValue>           StatusValueType;                                          // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EPrimalCharacterStatusValue>           StopAtValueNearMax;                                       // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1B];                                      // 0x0001(0x001B) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalItem.ItemStatInfo
// 0x0020
struct FItemStatInfo
{
	unsigned char                                      bUsed : 1;                                                // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bCalculateAsPercent : 1;                                  // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bDisplayAsPercent : 1;                                    // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bRequiresSubmerged : 1;                                   // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bPreventIfSubmerged : 1;                                  // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	int                                                DefaultModifierValue;                                     // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                RandomizerRangeOverride;                                  // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RandomizerRangeMultiplier;                                // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TheRandomizerPower;                                       // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	float                                              StateModifierScale;                                       // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InitialValueConstant;                                     // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RatingValueMultiplier;                                    // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0004(0x001C) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalItem.CropItemPhaseData
// 0x00D0
struct FCropItemPhaseData
{
	float                                              NextStageFertilizerCacheThreshold;                        // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMesh*                                 StageStaticMesh;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UStaticMesh*>                         StageStaticMeshes;                                        // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UStaticMesh*                                 HasFruitStageStaticMesh;                                  // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UStaticMesh*>                         HasFruitStageStaticMeshes;                                // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FVector                                     StageStaticMeshScale3D;                                   // 0x0000(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     StageStaticMeshTranslationOffset;                         // 0x0000(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    StageStaticMeshRotationOffset;                            // 0x0000(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FVector>                             StageStaticMeshScales3D;                                  // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                             StageStaticMeshTranslationOffsets;                        // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FRotator>                            StageStaticMeshRotationOffsets;                           // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              StageReachedItemsToGive;                                  // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      StageReachedItemsToGiveWeights;                           // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      StageBlockCollisions;                                     // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseStageStructure;                                       // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      StageStructure;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     StageStructureOffset;                                     // 0x0000(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC4];                                      // 0x000C(0x00C4) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalItem.SaddlePassengerSeatDefinition
// 0x0070
struct FSaddlePassengerSeatDefinition
{
	struct FName                                       AttachBoneName;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     BoardActionText;                                          // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FVector                                     UnboardLocationOffset;                                    // 0x0000(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     FPVCameraLocationOffset;                                  // 0x0000(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     AttachRelativeLocation;                                   // 0x0000(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    AttachRelativeRotation;                                   // 0x0000(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               CharacterAdditiveAnim;                                    // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bHideCharacterLowerBody : 1;                              // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bLimitCameraYaw : 1;                                      // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bWeaponIgnoreDino : 1;                                    // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bHideDinoForLocalPassenger : 1;                           // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	float                                              CameraYawRange;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimOffsetYawFactor;                                       // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimOffsetPitchFactor;                                     // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimOffsetYawBias;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimOffsetPitchBias;                                       // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExtraHypoThermalInsulation;                               // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExtraHyperThermalInsulation;                              // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6C];                                      // 0x0004(0x006C) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalItem.ItemCraftQueueEntry
// 0x0010
struct FItemCraftQueueEntry
{
	struct FItemNetID                                  ItemId;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                Quantity;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsRepair;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0001(0x000F) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalInventoryComponent.ItemMultiplier
// 0x0010
struct FItemMultiplier
{
	class UClass*                                      ItemClass;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ItemMultiplier;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalInventoryComponent.ItemSpawnActorClassOverride
// 0x0010
struct FItemSpawnActorClassOverride
{
	class UClass*                                      ItemClass;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ActorClassOverride;                                       // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalInventoryComponent.ItemCraftingConsumptionReplenishment
// 0x0018
struct FItemCraftingConsumptionReplenishment
{
	TArray<class UClass*>                              ItemResourceClasses;                                      // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      ToReplaceWithClass;                                       // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalGameData.SupplyCrateItemEntry
// 0x0070
struct FSupplyCrateItemEntry
{
	struct FString                                     ItemEntryName;                                            // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              EntryWeight;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UClass*>                              Items;                                                    // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FString>                             ItemClassStrings;                                         // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      ItemsWeights;                                             // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              MinQuantity;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxQuantity;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              QuantityPower;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinQuality;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxQuality;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              QualityPower;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bForceBlueprint : 1;                                      // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	float                                              ChanceToBeBlueprintOverride;                              // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ChanceToActuallyGiveItem;                                 // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6C];                                      // 0x0004(0x006C) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalGameData.SupplyCrateItemSet
// 0x0040
struct FSupplyCrateItemSet
{
	struct FString                                     SetName;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FSupplyCrateItemEntry>               ItemEntries;                                              // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              MinNumItems;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxNumItems;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NumItemsPower;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SetWeight;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bItemsRandomWithoutReplacement;                           // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ItemSetOverride;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x38];                                      // 0x0008(0x0038) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalInventoryComponent.ServerCustomFolder
// 0x0028
struct FServerCustomFolder
{
	int                                                InventoryCompType;                                        // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FString                                     FolderName;                                               // 0x0000(0x0010) (ZeroConstructor, Transient)
	TArray<struct FItemNetID>                          CustomFolderItemIds;                                      // 0x0000(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0010(0x0018) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalLocalProfile.EngramCustomFolder
// 0x0020
struct FEngramCustomFolder
{
	struct FString                                     FolderName;                                               // 0x0000(0x0010) (ZeroConstructor, Transient)
	TArray<class UClass*>                              EngramCustomFolderItemClasses;                            // 0x0000(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalLocalProfile.PrimalMapMarkerEntryData
// 0x0018
struct FPrimalMapMarkerEntryData
{
	int                                                coord1;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                coord2;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalItem.ItemNetInfo
// 0x0128
struct FItemNetInfo
{
	unsigned char                                      bIsBlueprint : 1;                                         // 0x0000(0x0001)
	unsigned char                                      bIsEngram : 1;                                            // 0x0000(0x0001)
	unsigned char                                      bIsCustomRecipe : 1;                                      // 0x0000(0x0001)
	unsigned char                                      bIsFoodRecipe : 1;                                        // 0x0000(0x0001)
	unsigned char                                      bIsRepairing : 1;                                         // 0x0000(0x0001)
	unsigned char                                      bAllowRemovalFromInventory : 1;                           // 0x0000(0x0001)
	class UClass*                                      ItemArchetype;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FItemNetID                                  ItemId;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00 : 6;                                        // 0x0000(0x0001)
	unsigned char                                      bOnlyRemoveFromSteamIfNoItems : 1;                        // 0x0000(0x0001)
	TArray<uint64_t>                                   SteamUserItemID;                                          // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      bFromSteamInventory : 1;                                  // 0x0000(0x0001)
	int                                                SlotIndex;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           WeaponClipAmmo;                                           // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	double                                             CreationTime;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              ItemDurability;                                           // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ItemRating;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      ItemQualityIndex;                                         // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           ItemQuantity;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           CraftQueue;                                               // 0x0000(0x0002) (ZeroConstructor, IsPlainOldData)
	double                                             NextCraftCompletionTime;                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           ItemStatValues[0x8];                                      // 0x0000(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            ItemColorID[0x6];                                         // 0x0000(0x0002) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      ItemCustomClass;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      ItemSkinTemplate;                                         // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              CraftingSkill;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     CustomItemName;                                           // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     CustomItemDescription;                                    // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FColor>                              CustomItemColors;                                         // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FCraftingResourceRequirement>        CustomResourceRequirements;                               // 0x0000(0x0010) (ZeroConstructor)
	double                                             NextSpoilingTime;                                         // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	double                                             LastSpoilingTime;                                         // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AShooterCharacter>            LastOwnerPlayer;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	double                                             LastAutoDurabilityDecreaseTime;                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FVector                                     OriginalItemDropLocation;                                 // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int16_t                                            PreSkinItemColorID[0x6];                                  // 0x0000(0x0002) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      EggNumberOfLevelUpPointsApplied[0xC];                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                              EggTamedIneffectivenessModifier;                          // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      EggColorSetIndices[0x6];                                  // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      ItemVersion;                                              // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int                                                CustomItemID;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01 : 7;                                        // 0x0000(0x0001)
	unsigned char                                      bHideFromInventoryDisplay : 1;                            // 0x0000(0x0001)
	unsigned char                                      UnknownData02[0x127];                                     // 0x0001(0x0127) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalLocalProfile.ArkTributeInventoryItem
// 0x0130
struct FArkTributeInventoryItem
{
	struct FItemNetInfo                                ArkTributeItem;                                           // 0x0000(0x0128) (Transient)
	float                                              Version;                                                  // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x12C];                                     // 0x0004(0x012C) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalLocalProfile.ARKTributeDino
// 0x0118
struct FARKTributeDino
{
	struct FString                                     DinoClassName;                                            // 0x0000(0x0010) (ZeroConstructor, Transient)
	class UClass*                                      DinoClass;                                                // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<unsigned char>                              DinoData;                                                 // 0x0000(0x0010) (ZeroConstructor, Transient)
	struct FString                                     DinoName;                                                 // 0x0000(0x0010) (ZeroConstructor, Transient)
	struct FString                                     DinoNameInMap;                                            // 0x0000(0x0010) (ZeroConstructor, Transient)
	struct FString                                     DinoStats[0xC];                                           // 0x0000(0x0010) (ZeroConstructor, Transient)
	float                                              DinoExperiencePoints;                                     // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              Version;                                                  // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	uint32_t                                           DinoID1;                                                  // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	uint32_t                                           DinoID2;                                                  // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x114];                                     // 0x0004(0x0114) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalLocalProfile.ArkTributePlayerData
// 0x00F8
struct FArkTributePlayerData
{
	struct FGuid                                       PlayerDataID;                                             // 0x0000(0x0010) (ZeroConstructor)
	TArray<unsigned char>                              PlayerDataBytes;                                          // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     PlayerName;                                               // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     PlayerStats[0xC];                                         // 0x0000(0x0010) (ZeroConstructor, Transient)
	float                                              Version;                                                  // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF4];                                      // 0x0004(0x00F4) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalLocalProfile.ArkInventoryData
// 0x0030
struct FArkInventoryData
{
	TArray<struct FArkTributeInventoryItem>            ArkItems;                                                 // 0x0000(0x0010) (ZeroConstructor, Transient)
	TArray<struct FARKTributeDino>                     ArkTamedDinosData;                                        // 0x0000(0x0010) (ZeroConstructor, Transient)
	TArray<struct FArkTributePlayerData>               ArkPlayerData;                                            // 0x0000(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0010(0x0020) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalLocalProfile.AfterActionReportURL
// 0x0020
struct FAfterActionReportURL
{
	struct FString                                     Title;                                                    // 0x0000(0x0010) (ZeroConstructor, Transient)
	struct FString                                     URL;                                                      // 0x0000(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalPlayerCharacterConfigStruct
// 0x00A8
struct FPrimalPlayerCharacterConfigStruct
{
	unsigned char                                      bIsFemale : 1;                                            // 0x0000(0x0001) (Edit, BlueprintVisible)
	struct FLinearColor                                BodyColors[0x3];                                          // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FString                                     PlayerCharacterName;                                      // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              RawBoneModifiers[0x16];                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int                                                PlayerSpawnRegionIndex;                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xA4];                                      // 0x0004(0x00A4) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalPlayerData.PrimalPersistentCharacterStatsStruct
// 0x0090
struct FPrimalPersistentCharacterStatsStruct
{
	uint16_t                                           CharacterStatusComponent_ExtraCharacterLevel;             // 0x0000(0x0002) (ZeroConstructor, IsPlainOldData)
	float                                              CharacterStatusComponent_ExperiencePoints;                // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PlayerState_TotalEngramPoints;                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              PlayerState_EngramBlueprints;                             // 0x0000(0x0010) (ZeroConstructor, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      CharacterStatusComponent_NumberOfLevelUpPointsApplied[0xC];// 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UClass*                                      PlayerState_DefaultItemSlotClasses[0xA];                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      PlayerState_DefaultItemSlotEngrams[0xA];                  // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x86];                                      // 0x000A(0x0086) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalPlayerData.PrimalPlayerDataStruct
// 0x01B0
struct FPrimalPlayerDataStruct
{
	uint64_t                                           PlayerDataID;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FUniqueNetIdRepl                            UniqueID;                                                 // 0x0000(0x0010)
	struct FString                                     SavedNetworkAddress;                                      // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     PlayerName;                                               // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	uint32_t                                           LocalPlayerIndex;                                         // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bFirstSpawned : 1;                                        // 0x0000(0x0001)
	unsigned char                                      bUseSpectator : 1;                                        // 0x0000(0x0001)
	struct FPrimalPlayerCharacterConfigStruct          MyPlayerCharacterConfig;                                  // 0x0000(0x00A8)
	struct FPrimalPersistentCharacterStatsStruct       MyPersistentCharacterStats;                               // 0x0000(0x0090)
	int                                                TribeID;                                                  // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        AppIDSet;                                                 // 0x0000(0x0010) (ZeroConstructor)
	int                                                PlayerDataVersion;                                        // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	double                                             NextAllowedRespawnTime;                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	double                                             LastTimeDiedToEnemyTeam;                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                              AllowedRespawnInterval;                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                              NumOfDeaths;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1AC];                                     // 0x0004(0x01AC) MISSED OFFSET
};

// ScriptStruct ShooterGame.CosmeticItemColorInfo
// 0x0024
struct FCosmeticItemColorInfo
{
	bool                                               bIsFemale;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           ArchIndex;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPrimalEquipmentType>                  EquipmentType;                                            // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	uint32_t                                           ArchColorIndex[0x6];                                      // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0018(0x000C) MISSED OFFSET
};

// ScriptStruct ShooterGame.DinoCosmeticInfo
// 0x0030
struct FDinoCosmeticInfo
{
	uint32_t                                           ArchIndex;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     DinoDescriptiveName;                                      // 0x0000(0x0010) (Edit, ZeroConstructor)
	uint32_t                                           ArchColorIndex[0x6];                                      // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0018(0x0018) MISSED OFFSET
};

// ScriptStruct ShooterGame.UserCosmeticInfo
// 0x0030
struct FUserCosmeticInfo
{
	TArray<struct FCosmeticItemColorInfo>              CosmeticItemColorInfos;                                   // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<struct FDinoCosmeticInfo>                   DinoCosmeticInfos;                                        // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FString                                     TribeFlagFile;                                            // 0x0000(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0010(0x0020) MISSED OFFSET
};

// ScriptStruct ShooterGame.SOTFPartyInfo
// 0x0080
struct FSOTFPartyInfo
{
	struct FString                                     PartyID;                                                  // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     PartyOwnerID;                                             // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FString>                             PartyMembers;                                             // 0x0000(0x0010) (ZeroConstructor)
	bool                                               bAutoCreateTribe;                                         // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	struct FString                                     TribeName;                                                // 0x0000(0x0010) (ZeroConstructor)
	uint64_t                                           TribeID;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FUserCosmeticInfo                           UserCosmeticInfo;                                         // 0x0000(0x0030)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0030(0x0050) MISSED OFFSET
};

// ScriptStruct ShooterGame.PaintItem
// 0x0028
struct FPaintItem
{
	class UPrimalInventoryComponent*                   InventoryComp;                                            // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AShooterPlayerController*                    Painter;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FItemNetID                                  ItemId;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      ColorCode;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	float                                              X;                                                        // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x24];                                      // 0x0004(0x0024) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalPlayerData.PrimalPlayerCharacterConfigStructReplicated
// 0x00A8
struct FPrimalPlayerCharacterConfigStructReplicated
{
	unsigned char                                      bIsFemale : 1;                                            // 0x0000(0x0001)
	struct FLinearColor                                BodyColors[0x3];                                          // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FString                                     PlayerCharacterName;                                      // 0x0000(0x0010) (ZeroConstructor)
	float                                              RawBoneModifiers[0x16];                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerSpawnRegionIndex;                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xA4];                                      // 0x0004(0x00A4) MISSED OFFSET
};

// ScriptStruct ShooterGame.ChatMessage
// 0x0080
struct FChatMessage
{
	struct FString                                     SenderName;                                               // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     SenderSteamName;                                          // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     SenderTribeName;                                          // 0x0000(0x0010) (ZeroConstructor)
	uint32_t                                           SenderId;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Message;                                                  // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     Receiver;                                                 // 0x0000(0x0010) (ZeroConstructor)
	int                                                SenderTeamIndex;                                          // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	double                                             ReceivedTime;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                SendMode;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           RadioFrequency;                                           // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EChatType>                             ChatType;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  SenderIcon;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x78];                                      // 0x0008(0x0078) MISSED OFFSET
};

// ScriptStruct ShooterGame.DamageVolumeBase.DamageNegatingItem
// 0x0010
struct FDamageNegatingItem
{
	class UClass*                                      ItemSubclass;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NegationFactor;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
};

// ScriptStruct ShooterGame.NPCZoneManager.LinkedZoneSpawnVolumeEntry
// 0x0030
struct FLinkedZoneSpawnVolumeEntry
{
	class ANPCZoneSpawnVolume*                         LinkedZoneSpawnVolume;                                    // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	TArray<class AActor*>                              ZoneSpawnVolumeFloors;                                    // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate)
	TArray<struct FName>                               ZoneSpawnVolumeFloorTags;                                 // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate)
	float                                              EntryWeight;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2C];                                      // 0x0004(0x002C) MISSED OFFSET
};

// ScriptStruct ShooterGame.DecalData
// 0x0018
struct FDecalData
{
	class UMaterialInterface*                          DecalMaterial;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DecalSize;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DecalDepth;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DecalImpactNormalOffset;                                  // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LifeSpan;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0004(0x0014) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalGameData.DamageTypeAdjuster
// 0x0010
struct FDamageTypeAdjuster
{
	class UClass*                                      DamageTypeClass;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageMultiplier;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bIgnoreMultiplierIfTamedDinoAttacker : 1;                 // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bOnlyUseMultiplierIfTamed : 1;                            // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0001(0x000F) MISSED OFFSET
};

// ScriptStruct ShooterGame.BoneDamageAdjuster
// 0x000C
struct FBoneDamageAdjuster
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageMultiplier;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0004(0x0008) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalCharacter.DefaultTextureParamOverride
// 0x0010
struct FDefaultTextureParamOverride
{
	struct FName                                       TextureParamName;                                         // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  TextureValue;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalDinoCharacter.DinoAttackInfo
// 0x0118
struct FDinoAttackInfo
{
	unsigned char                                      ForceUpdateInRange : 1;                                   // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bRequiresWalking : 1;                                     // 0x0000(0x0001) (Edit)
	unsigned char                                      bHighQualityAttack : 1;                                   // 0x0000(0x0001) (Edit)
	unsigned char                                      bOnlyUseWithPlayers : 1;                                  // 0x0000(0x0001) (Edit)
	unsigned char                                      bKeepExecutingWhenAcquiringTarget : 1;                    // 0x0000(0x0001) (Edit)
	unsigned char                                      AttackStatusStarted : 1;                                  // 0x0000(0x0001) (Transient)
	unsigned char                                      bUseSecondaryAnimationInAir : 1;                          // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bSkipUntamed : 1;                                         // 0x0000(0x0001) (Edit)
	unsigned char                                      bPreventWithRider : 1;                                    // 0x0000(0x0001) (Edit)
	unsigned char                                      bPreventWhenSwimming : 1;                                 // 0x0000(0x0001) (Edit)
	unsigned char                                      bAttackStopsMovement : 1;                                 // 0x0000(0x0001) (Edit)
	unsigned char                                      bUseBlueprintCanAttack : 1;                               // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bSkipTamed : 1;                                           // 0x0000(0x0001) (Edit)
	unsigned char                                      bAIForceAttackDotProductCheck : 1;                        // 0x0000(0x0001) (Edit)
	unsigned char                                      bPreventWhenInsufficientStamina : 1;                      // 0x0000(0x0001) (Edit)
	unsigned char                                      bOnlyOnWildDinos : 1;                                     // 0x0000(0x0001) (Edit)
	unsigned char                                      bSkipOnFlyers : 1;                                        // 0x0000(0x0001) (Edit)
	unsigned char                                      bPreventWhenEncumbered : 1;                               // 0x0000(0x0001) (Edit)
	unsigned char                                      bSkipAI : 1;                                              // 0x0000(0x0001) (Edit)
	unsigned char                                      bRidingOnlyAllowOnGround : 1;                             // 0x0000(0x0001) (Edit)
	unsigned char                                      bPreventOnFemale : 1;                                     // 0x0000(0x0001) (Edit)
	struct FName                                       AttackName;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AttackWeight;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AttackRange;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinAttackRange;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ActivateAttackRange;                                      // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AttackInterval;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00 : 6;                                        // 0x0000(0x0001)
	unsigned char                                      bRidingOnlyAllowWhileFlying : 1;                          // 0x0000(0x0001) (Edit)
	class UPrimalAIState*                              AttackStateType;                                          // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01 : 6;                                        // 0x0000(0x0001)
	unsigned char                                      bPreventOnMale : 1;                                       // 0x0000(0x0001) (Edit)
	TArray<struct FVector>                             LastSocketPositions;                                      // 0x0000(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData02 : 3;                                        // 0x0000(0x0001)
	unsigned char                                      bAttackWithJump : 1;                                      // 0x0000(0x0001) (Edit)
	float                                              LastProjectileSpawnTime;                                  // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03 : 3;                                        // 0x0000(0x0001)
	unsigned char                                      bDisableRunningWhenAttacking : 1;                         // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	TArray<int>                                        ChildStateIndexes;                                        // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              AttackWithJumpChance;                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LastAttackTime;                                           // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	double                                             RiderLastAttackTime;                                      // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              AttackSelectionExpirationTime;                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AttackSelectionTime;                                      // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              AttackRotationRangeDegrees;                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AttackRotationGroundSpeedMultiplier;                      // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    AttackRotationRate;                                       // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               MeleeSwingSockets;                                        // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FName                                       RangedSocket;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MeleeDamageAmount;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MeleeDamageImpulse;                                       // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MeleeSwingRadius;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      MeleeDamageType;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AttackOffset;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StaminaCost;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RiderAttackInterval;                                      // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DotProductCheckMin;                                       // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DotProductCheckMax;                                       // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UAnimMontage*>                        AttackAnimations;                                         // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      AttackAnimationWeights;                                   // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      AttackAnimationsTimeFromEndToConsiderFinished;            // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      ProjectileClass;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      AttackStateTypeClass;                                     // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AttackRunningSpeedModifier;                               // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SetAttackTargetTime;                                      // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04 : 4;                                        // 0x0000(0x0001)
	unsigned char                                      bLocationBasedAttack : 1;                                 // 0x0000(0x0001) (Edit)
	unsigned char                                      bDropCarriedCharacter : 1;                                // 0x0000(0x0001) (Edit)
	unsigned char                                      bCancelAndDropIfCarriedCharacter : 1;                     // 0x0000(0x0001) (Edit)
	unsigned char                                      bOnlyUseWithPlayersOrRiders : 1;                          // 0x0000(0x0001) (Edit)
	unsigned char                                      bPreventWhenDinoCarrying : 1;                             // 0x0000(0x0001) (Edit)
	unsigned char                                      bPreventAttackWhileRunning : 1;                           // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData05[0x117];                                     // 0x0001(0x0117) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalDinoCharacter.DinoBaseLevelWeightEntry
// 0x000C
struct FDinoBaseLevelWeightEntry
{
	float                                              EntryWeight;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BaseLevelMinRange;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BaseLevelMaxRange;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0004(0x0008) MISSED OFFSET
};

// ScriptStruct ShooterGame.WeightedObjectList
// 0x0020
struct FWeightedObjectList
{
	TArray<float>                                      Weights;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class UObject*>                             AssociatedObjects;                                        // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalDinoCharacter.PrimalSaddleStructure
// 0x0028
struct FPrimalSaddleStructure
{
	struct FVector                                     DinoRelativeLocation;                                     // 0x0000(0x000C) (ZeroConstructor, SaveGame, IsPlainOldData)
	struct FRotator                                    DinoRelativeRotation;                                     // 0x0000(0x000C) (ZeroConstructor, SaveGame, IsPlainOldData)
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	class APrimalStructure*                            MyStructure;                                              // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0008(0x0020) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalDinoCharacter.DinoSaddleStruct
// 0x0020
struct FDinoSaddleStruct
{
	class USkeletalMeshComponent*                      Saddle;                                                   // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMesh*                               SkeletalMesh;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FItemNetID                                  ItemId;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bJustRemoved;                                             // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1F];                                      // 0x0001(0x001F) MISSED OFFSET
};

// ScriptStruct ShooterGame.ShooterCharacter.PlayerStatusStateCharacterSound
// 0x0010
struct FPlayerStatusStateCharacterSound
{
	TEnumAsByte<EPrimalCharacterStatusState>           StateType;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   SoundToPlay;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct ShooterGame.ShooterCharacter.OverrideAnimBlueprintEntry
// 0x0010
struct FOverrideAnimBlueprintEntry
{
	class UClass*                                      FromBPClass;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ToBPClass;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct ShooterGame.ShooterPlayerController.TransponderInfo
// 0x0028
struct FTransponderInfo
{
	struct FString                                     TransName;                                                // 0x0000(0x0010) (ZeroConstructor)
	struct FVector                                     TransLocation;                                            // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              Frequency;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FColor                                      DrawingColor;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x24];                                      // 0x0004(0x0024) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalGameData.TribeAlliance
// 0x0048
struct FTribeAlliance
{
	struct FString                                     AllianceName;                                             // 0x0000(0x0010) (ZeroConstructor)
	uint32_t                                           AllianceID;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             MembersTribeName;                                         // 0x0000(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   MembersTribeID;                                           // 0x0000(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   AdminsTribeID;                                            // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x38];                                      // 0x0010(0x0038) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalGameData.TribeGovernment
// 0x0014
struct FTribeGovernment
{
	int                                                TribeGovern_PINCode;                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TribeGovern_DinoOwnership;                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TribeGovern_StructureOwnership;                           // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TribeGovern_DinoTaming;                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TribeGovern_DinoUnclaimAdminOnly;                         // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0004(0x0010) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalGameData.TribeWar
// 0x0030
struct FTribeWar
{
	int                                                EnemyTribeID;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                StartDayNumber;                                           // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EndDayNumber;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              StartDayTime;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              EndDayTime;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsApproved;                                              // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	int                                                InitiatingTribeID;                                        // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     EnemyTribeName;                                           // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0010(0x0020) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalGameData.TribeRankGroup
// 0x0020
struct FTribeRankGroup
{
	struct FString                                     RankGroupName;                                            // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      RankGroupRank;                                            // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      InventoryRank;                                            // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      StructureActivationRank;                                  // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      NewStructureActivationRank;                               // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      NewStructureInventoryRank;                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      PetOrderRank;                                             // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      PetRidingRank;                                            // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      InviteToGroupRank;                                        // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      MaxPromotionGroupRank;                                    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      MaxDemotionGroupRank;                                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      MaxBanishmentGroupRank;                                   // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      NumInvitesRemaining;                                      // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bPreventStructureDemolish : 1;                            // 0x0000(0x0001)
	unsigned char                                      bAllowBanishments : 1;                                    // 0x0000(0x0001)
	unsigned char                                      bPreventStructureAttachment : 1;                          // 0x0000(0x0001)
	unsigned char                                      bDefaultRank : 1;                                         // 0x0000(0x0001)
	unsigned char                                      bPreventStructureBuildInRange : 1;                        // 0x0000(0x0001)
	unsigned char                                      bPreventUnclaiming : 1;                                   // 0x0000(0x0001)
	unsigned char                                      bAllowInvites : 1;                                        // 0x0000(0x0001)
	unsigned char                                      bLimitInvites : 1;                                        // 0x0000(0x0001)
	unsigned char                                      bAllowDemotions : 1;                                      // 0x0000(0x0001)
	unsigned char                                      bAllowPromotions : 1;                                     // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x1F];                                      // 0x0001(0x001F) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalGameData.TribeData
// 0x00F8
struct FTribeData
{
	struct FString                                     TribeName;                                                // 0x0000(0x0010) (ZeroConstructor)
	uint32_t                                           OwnerPlayerDataID;                                        // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TribeID;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             MembersPlayerName;                                        // 0x0000(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   MembersPlayerDataID;                                      // 0x0000(0x0010) (ZeroConstructor)
	TArray<unsigned char>                              MembersRankGroups;                                        // 0x0000(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   TribeAdmins;                                              // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FTribeAlliance>                      TribeAlliances;                                           // 0x0000(0x0010) (ZeroConstructor)
	bool                                               bSetGovernment;                                           // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	struct FTribeGovernment                            TribeGovernment;                                          // 0x0000(0x0014) (ZeroConstructor, IsPlainOldData)
	struct FUserCosmeticInfo                           UserCosmeticInfo;                                         // 0x0000(0x0030)
	TArray<struct FPrimalPlayerCharacterConfigStruct>  MembersConfigs;                                           // 0x0000(0x0010) (ZeroConstructor, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FTribeWar>                           TribeWars;                                                // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FString>                             TribeLog;                                                 // 0x0000(0x0010) (ZeroConstructor, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int                                                LogIndex;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FTribeRankGroup>                     TribeRankGroups;                                          // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0xE8];                                      // 0x0010(0x00E8) MISSED OFFSET
};

// ScriptStruct ShooterGame.ShooterPlayerState.SpawnPointInfo
// 0x0048
struct FSpawnPointInfo
{
	int                                                spawnPointID;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     BedName;                                                  // 0x0000(0x0010) (ZeroConstructor)
	class ABiomeZoneVolume*                            SpawnPointVolume;                                         // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      SpawnPointActorClass;                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     AtLocation;                                               // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	double                                             NextAllowedUseTime;                                       // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bAllowedUse;                                              // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x47];                                      // 0x0001(0x0047) MISSED OFFSET
};

// ScriptStruct ShooterGame.ShooterPlayerState.ServerOptions
// 0x02A0
struct FServerOptions
{
	struct FString                                     MaxStructuresInRange;                                     // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     DifficultyOffset;                                         // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     GlobalVoiceChat;                                          // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     ProximityChat;                                            // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     NoTributeDownloads;                                       // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     AllowThirdPersonPlayer;                                   // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     AlwaysNotifyPlayerLeft;                                   // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     DontAlwaysNotifyPlayerJoined;                             // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     ServerHardcore;                                           // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     ServerPVE;                                                // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     ServerCrosshair;                                          // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     ServerForceNoHUD;                                         // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     ShowMapPlayerLocation;                                    // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     ServerPassword;                                           // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     ServerAdminPassword;                                      // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     SpectatorPassword;                                        // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     DayCycleSpeedScale;                                       // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     DayTimeSpeedScale;                                        // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     NightTimeSpeedScale;                                      // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     DinoDamageMultiplier;                                     // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     PlayerDamageMultiplier;                                   // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     StructureDamageMultiplier;                                // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     PlayerResistanceMultiplier;                               // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     DinoResistanceMultiplier;                                 // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     StructureResistanceMultiplier;                            // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     XPMultiplier;                                             // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     TamingSpeedMultiplier;                                    // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     HarvestAmountMultiplier;                                  // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     PlayerCharacterWaterDrainMultiplier;                      // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     PlayerCharacterFoodDrainMultiplier;                       // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     DinoCharacterFoodDrainMultiplier;                         // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     PlayerCharacterStaminaDrainMultiplier;                    // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     DinoCharacterStaminaDrainMultiplier;                      // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     PlayerCharacterHealthRecoveryMultiplier;                  // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     DinoCharacterHealthRecoveryMultiplier;                    // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     DinoCountMultiplier;                                      // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     HarvestHealthMultiplier;                                  // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     PvEStructureDecayPeriodMultiplier;                        // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     ResourcesRespawnPeriodMultiplier;                         // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     EnablePvPGamma;                                           // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     DisableStructureDecayPvE;                                 // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     AllowFlyerCarryPvE;                                       // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x290];                                     // 0x0010(0x0290) MISSED OFFSET
};

// ScriptStruct ShooterGame.ShooterPlayerState.AdminPlayerDataInfo
// 0x0038
struct FAdminPlayerDataInfo
{
	struct FString                                     PlayerName;                                               // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     PlayerSteamName;                                          // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     SteamID;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	int64_t                                            LinkedPlayerID;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0008(0x0030) MISSED OFFSET
};

// ScriptStruct ShooterGame.ShooterPlayerState.AliveNameAndLocation
// 0x0040
struct FAliveNameAndLocation
{
	struct FString                                     PlayerName;                                               // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     TribeName;                                                // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	uint32_t                                           TargetingTeam;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	uint64_t                                           PlayerId;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x34];                                      // 0x000C(0x0034) MISSED OFFSET
};

// ScriptStruct ShooterGame.ShooterPlayerState.AlivePlayerDataInfo
// 0x0040
struct FAlivePlayerDataInfo
{
	struct FString                                     PlayerName;                                               // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     PlayerSteamName;                                          // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	uint64_t                                           PlayerId;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     TribeName;                                                // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	uint64_t                                           TargetingTeamID;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x38];                                      // 0x0008(0x0038) MISSED OFFSET
};

// ScriptStruct ShooterGame.UI_Spawn.BoneModifierSlider
// 0x0028
struct FBoneModifierSlider
{
	struct FName                                       SliderWidgetName;                                         // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FBoneModifierRange>                  BoneModifierRanges;                                       // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TEnumAsByte<EBoneModifierType>                     BoneModifierType;                                         // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x27];                                      // 0x0001(0x0027) MISSED OFFSET
};

// ScriptStruct ShooterGame.UI_Spawn.CharacterPreset
// 0x0020
struct FCharacterPreset
{
	float                                              BodyColorSliderValue;                                     // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HairColorSliderValue;                                     // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EyeColorSliderValue;                                      // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<float>                                      BoneModifierSliderValues;                                 // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalCharacterStatusComponent.PrimalCharacterStatusStateThresholds
// 0x0048
struct FPrimalCharacterStatusStateThresholds
{
	TArray<float>                                      HighThresholdStatusStateValues;                           // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<TEnumAsByte<EPrimalCharacterStatusState>>   HighThresholdStatusStateType;                             // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      LowThresholdStatusStateValues;                            // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<TEnumAsByte<EPrimalCharacterStatusState>>   LowThresholdStatusStateType;                              // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	bool                                               StatusStateThresholdValuesAbsolute;                       // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x47];                                      // 0x0001(0x0047) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalColorSet.ColorSetDefinition
// 0x0060
struct FColorSetDefinition
{
	struct FString                                     RegionName;                                               // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               ColorEntryNames;                                          // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      RandomWeights;                                            // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      MinLevel;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      MaxLevel;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0010(0x0050) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalDinoAIController.TargetClassAggroMultiplier
// 0x0010
struct FTargetClassAggroMultiplier
{
	class UClass*                                      TargetClass;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TargetAggroDesireMult;                                    // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalDinoCharacter.DinoFoodEffectivenessMultipliers
// 0x0030
struct FDinoFoodEffectivenessMultipliers
{
	float                                              FoodEffectivenessMultiplier;                              // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HealthEffectivenessMultiplier;                            // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TorpidityEffectivenessMultiplier;                         // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AffinityEffectivenessMultiplier;                          // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AffinityOverride;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StaminaEffectivenessMultiplier;                           // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                FoodItemCategory;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      FoodItemParent;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UntamedFoodConsumptionPriority;                           // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2C];                                      // 0x0004(0x002C) MISSED OFFSET
};

// ScriptStruct ShooterGame.DamagePrimalCharacterStatusValueModifier
// 0x0024
struct FDamagePrimalCharacterStatusValueModifier
{
	TEnumAsByte<EPrimalCharacterStatusValue>           ValueType;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bSpeedToAddInSeconds : 1;                                 // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bContinueOnUnchangedValue : 1;                            // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bIgnorePawnDamageAdjusters : 1;                           // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bResetExistingModifierDescriptionIndex : 1;               // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bSetValue : 1;                                            // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bSetAdditionalValue : 1;                                  // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	float                                              LimitExistingModifierDescriptionToMaxAmount;              // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                UseAbsoluteDamageAmount;                                  // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageMultiplierAmountToAdd;                              // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpeedToAdd;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                StatusValueModifierDescriptionIndex;                      // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bUsePercentualDamage : 1;                                 // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bMakeUntameable : 1;                                      // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	float                                              PercentualDamage;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0004(0x0020) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalBuff.MaxStatScaler
// 0x000C
struct FMaxStatScaler
{
	TEnumAsByte<EPrimalCharacterStatusValue>           LevelUpValueType;                                         // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TargetValue;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TargetValueIsPercent;                                     // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB];                                       // 0x0001(0x000B) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalEngramEntry.EngramEntries
// 0x0010
struct FEngramEntries
{
	TArray<class UClass*>                              EngramEntries;                                            // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ShooterGame.PrimalHarvestingComponent.HarvestResourceEntry
// 0x0078
struct FHarvestResourceEntry
{
	int                                                OverrideQuantityMax;                                      // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                OverrideQuantityMin;                                      // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OverrideQuantityRandomPower;                              // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EntryWeight;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EffectivenessQuantityMultiplier;                          // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EffectivenessQualityMultiplier;                           // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ResourceItem;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              QualityMin;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              QualityMax;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              XPGainMax;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              XPGainMin;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UClass*>                              DamageTypeEntryValuesOverrides;                           // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      DamageTypeEntryWeightOverrides;                           // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      DamageTypeEntryMinQuantityOverrides;                      // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      DamageTypeEntryMaxQuantityOverrides;                      // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      bScaleWithDinoBabyAge : 1;                                // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x77];                                      // 0x0001(0x0077) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalHarvestingComponent.DamageHarvestingEntry
// 0x0028
struct FDamageHarvestingEntry
{
	float                                              DamageMultiplier;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HarvestQuantityMultiplier;                                // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageHarvestAdditionalEffectiveness;                     // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageDurabilityConsumptionMultiplier;                    // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bAllowUnderwaterHarvesting : 1;                           // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	class UClass*                                      DamageTypeParent;                                         // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      HarvestDamageFXOverride;                                  // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0008(0x0020) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalTextStyle
// 0x0120
struct FPrimalTextStyle
{
	struct FName                                       StyleName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTextBlockStyle                             TextStyle;                                                // 0x0000(0x0118) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0118(0x0008) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalImageStyle
// 0x0090
struct FPrimalImageStyle
{
	struct FName                                       StyleName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FInlineTextImageStyle                       ImageStyle;                                               // 0x0000(0x0088) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0088(0x0008) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalStructure.PrimalStructureSnapPoint
// 0x0088
struct FPrimalStructureSnapPoint
{
	struct FName                                       SnapPointDescription;                                     // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PointLocOffset;                                           // 0x0000(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    PointRotOffset;                                           // 0x0000(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    PointComparisonExtraRotOffset;                            // 0x0000(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bAttachToPoint : 1;                                       // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bAttachFromPoint : 1;                                     // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bHighPriorityAttachToPoint : 1;                           // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bSnapToUseAlternatePlacemenTraceScale : 1;                // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bAttachToDisableEncroachmentCheck : 1;                    // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bInvalidForStructureLinking : 1;                          // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bSnapForceNoGroundRequirement : 1;                        // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bSnapToOnlyAllowSingleAttachment : 1;                     // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	int                                                ToPointSnapTypeFlags;                                     // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ToPointSnapTypeExcludeFlags;                              // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SnapPointMatchGroup;                                      // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       StaticMeshSnapSocketName;                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UClass*>                              SnapToStructureTypesToExclude;                            // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              SnapFromStructureTypesToExclude;                          // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              SnapToStructureTypesToInclude;                            // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              SnapFromStructureTypesToInclude;                          // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x78];                                      // 0x0010(0x0078) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalStructure.PlacementData
// 0x0060
struct FPlacementData
{
	struct FVector                                     AdjustedLocation;                                         // 0x0000(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	struct FRotator                                    AdjustedRotation;                                         // 0x0000(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bSnapped;                                                 // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bDisableEncroachmentCheck;                                // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                MySnapToIndex;                                            // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                TheirSnapToIndex;                                         // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	class AActor*                                      FloorHitActor;                                            // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class APrimalStructure*                            ParentStructure;                                          // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class APrimalStructure*                            ForcePlacedOnFloorParentStructure;                        // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class APrimalStructure*                            ReplacesStructure;                                        // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class APawn*                                       AttachToPawn;                                             // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FName                                       AttachToBone;                                             // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class APrimalDinoCharacter*                        DinoCharacter;                                            // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x58];                                      // 0x0008(0x0058) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalStructureSeating.SeatingSpot
// 0x001C
struct FSeatingSpot
{
	int                                                SeatNumber;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LocationOffset;                                           // 0x0000(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    RotationOffset;                                           // 0x0000(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x000C(0x0010) MISSED OFFSET
};

// ScriptStruct ShooterGame.UI_ListRewards.RewardItem
// 0x0038
struct FRewardItem
{
	struct FString                                     RewardName;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Description;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     GroupReward;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UTexture2D*                                  IconReward;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0008(0x0030) MISSED OFFSET
};

// ScriptStruct ShooterGame.UI_OptionsMenu.KeyBindingItem
// 0x0030
struct FKeyBindingItem
{
	unsigned char                                      bIsAxisMapping : 1;                                       // 0x0000(0x0001) (Edit)
	struct FName                                       WidgetName;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     ActionName;                                               // 0x0000(0x0010) (Edit, ZeroConstructor)
	float                                              Scale;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2C];                                      // 0x0004(0x002C) MISSED OFFSET
};

// ScriptStruct ShooterGame.ShooterDamageType.TargetClassDamageScaler
// 0x0010
struct FTargetClassDamageScaler
{
	class UClass*                                      TargetClass;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageScale;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
};

// ScriptStruct ShooterGame.ShooterGameMode.ELOKConstantRange
// 0x001C
struct FELOKConstantRange
{
	float                                              KConstant;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bUseMatchCount : 1;                                       // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	int                                                StartMatchCount;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                EndMatchCount;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bUseRank : 1;                                             // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	int                                                StartRank;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                EndRank;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0004(0x0018) MISSED OFFSET
};

// ScriptStruct ShooterGame.ShooterGameMode.PlayerDeathReason
// 0x0020
struct FPlayerDeathReason
{
	int                                                PlayerId;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     DeathReason;                                              // 0x0000(0x0010) (ZeroConstructor)
	double                                             DiedAtTime;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct ShooterGame.ShooterGameMode.EngramEntryOverride
// 0x0028
struct FEngramEntryOverride
{
	struct FString                                     EngramClassName;                                          // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	int                                                EngramIndex;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EngramHidden;                                             // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TheEngramPointsCost;                                      // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                EngramLevelRequirement;                                   // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RemoveEngramPreReq;                                       // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x27];                                      // 0x0001(0x0027) MISSED OFFSET
};

// ScriptStruct ShooterGame.ShooterGameMode.DinoSpawnWeightMultiplier
// 0x0014
struct FDinoSpawnWeightMultiplier
{
	struct FName                                       DinoNameTag;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpawnWeightMultiplier;                                    // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               OverrideSpawnLimitPercentage;                             // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpawnLimitPercentage;                                     // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0004(0x0010) MISSED OFFSET
};

// ScriptStruct ShooterGame.ShooterGameMode.ClassMultiplier
// 0x0018
struct FClassMultiplier
{
	struct FString                                     ClassName;                                                // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              Multiplier;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0004(0x0014) MISSED OFFSET
};

// ScriptStruct ShooterGame.ClassNameReplacement
// 0x0020
struct FClassNameReplacement
{
	struct FString                                     FromClassName;                                            // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     ToClassName;                                              // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalGameData.ItemCraftingCostOverride
// 0x0018
struct FItemCraftingCostOverride
{
	class UClass*                                      ItemClass;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FCraftingResourceRequirement>        BaseCraftingResourceRequirements;                         // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalGameData.ConfigCraftingResourceRequirement
// 0x0020
struct FConfigCraftingResourceRequirement
{
	float                                              BaseResourceRequirement;                                  // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     ResourceItemTypeString;                                   // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	bool                                               bCraftingRequireExactResourceType;                        // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1F];                                      // 0x0001(0x001F) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalGameData.ConfigItemCraftingCostOverride
// 0x0020
struct FConfigItemCraftingCostOverride
{
	struct FString                                     ItemClassString;                                          // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FConfigCraftingResourceRequirement>  BaseCraftingResourceRequirements;                         // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalGameData.ConfigSupplyCrateItemsOverride
// 0x0030
struct FConfigSupplyCrateItemsOverride
{
	struct FString                                     SupplyCrateClassString;                                   // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	int                                                MinItemSets;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxItemSets;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumItemSetsPower;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSetsRandomWithoutReplacement;                            // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FSupplyCrateItemSet>                 ItemSets;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0010(0x0020) MISSED OFFSET
};

// ScriptStruct ShooterGame.PlayerStats
// 0x0078
struct FPlayerStats
{
	int                                                Win;                                                      // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Lose;                                                     // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Rank;                                                     // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                LastMatchResult;                                          // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int64_t                                            UniqueID;                                                 // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                TribeID;                                                  // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                DiffrenceSkill;                                           // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                DiffrenceLose;                                            // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	double                                             LogoutTime;                                               // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	double                                             KilledTime;                                               // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     PlayerName;                                               // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                NumDeaths;                                                // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumKills;                                                 // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumForfeits;                                              // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumTotalvictories;                                        // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bHadCharachter;                                           // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                LastPlayedDate;                                           // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               SkipEloCalcAtEOM;                                         // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x77];                                      // 0x0001(0x0077) MISSED OFFSET
};

// ScriptStruct ShooterGame.CustomGameMode.RewardsItem
// 0x0018
struct FRewardsItem
{
	float                                              Weight;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      RewardItem;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldGiveToMainGame;                                     // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MainGameItemIndex;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0004(0x0014) MISSED OFFSET
};

// ScriptStruct ShooterGame.CustomGameMode.RankedRewardsItem
// 0x0018
struct FRankedRewardsItem
{
	int                                                MinimumRank;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaximumRank;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FRewardsItem>                        RewardItems;                                              // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct ShooterGame.CustomGameMode.WinsRewardsItem
// 0x0018
struct FWinsRewardsItem
{
	int                                                TargetWins;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FRewardsItem>                        RewardItems;                                              // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalGameData.InventoryComponentDefaultItemsAppend
// 0x0038
struct FInventoryComponentDefaultItemsAppend
{
	TArray<class UClass*>                              InventoryComponentClasses;                                // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<class UClass*>                              AddItems;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<class UClass*>                              RemoveItems;                                              // 0x0000(0x0010) (Edit, ZeroConstructor)
	bool                                               bAddToForceAllowCrafting;                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x37];                                      // 0x0001(0x0037) MISSED OFFSET
};

// ScriptStruct ShooterGame.ActionReportItem
// 0x0080
struct FActionReportItem
{
	struct FString                                     PlayerName;                                               // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     PlayerUniqueID;                                           // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                TribeID;                                                  // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     TribeName;                                                // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     TimeOfDeath;                                              // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     LevelOfDeath;                                             // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     DeathMessage;                                             // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UTexture2D*                                  DeathIcon;                                                // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     Rank;                                                     // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData00[0x70];                                      // 0x0010(0x0070) MISSED OFFSET
};

// ScriptStruct ShooterGame.BattleGameState.PlayerDeathNotification
// 0x0090
struct FPlayerDeathNotification
{
	struct FString                                     PlayerDeathStringEnemy;                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     PlayerDeathStringAlly;                                    // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     PlayerDeathStringYou;                                     // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     DeathReason;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FString>                             DeadPlayerNames;                                          // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bIsTribeDeath;                                            // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     DeathTribeName;                                           // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                TargetingTeam;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                KillingTeamID;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int64_t                                            LinkedPlayerID;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FPrimalPlayerCharacterConfigStructReplicated> PlayersData;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UTexture2D*                                  DeathIcon;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x88];                                      // 0x0008(0x0088) MISSED OFFSET
};

// ScriptStruct ShooterGame.BattleGameState.BattleTribeData
// 0x0018
struct FBattleTribeData
{
	struct FString                                     TribeName;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                TribeID;                                                  // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0004(0x0014) MISSED OFFSET
};

// ScriptStruct ShooterGame.BattleGameState.BattlePlayerData
// 0x0028
struct FBattlePlayerData
{
	struct FString                                     PlayerName;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bConnected;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAlive;                                                   // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TribeID;                                                  // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PlayerId;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NumOfWins;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NumOfLosses;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Rank;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x24];                                      // 0x0004(0x0024) MISSED OFFSET
};

// ScriptStruct ShooterGame.ShooterWeapon.WeaponData
// 0x001C
struct FWeaponData
{
	bool                                               bInfiniteAmmo;                                            // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bNeverReload;                                             // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUsesAmmo;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AmmoPerClip;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeBetweenShots;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NoAnimReloadDuration;                                     // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bForceReloadDuration;                                     // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLoopedReloadAnim;                                        // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ReloadDurationPerAmmoCount;                               // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ItemDurabilityToConsumePerShot;                           // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0004(0x0018) MISSED OFFSET
};

// ScriptStruct ShooterGame.ShooterWeapon.WeaponAnim
// 0x0010
struct FWeaponAnim
{
	class UAnimMontage*                                Pawn1P;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Pawn3P;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct ShooterGame.ShooterProjectile.ProjectileWeaponData
// 0x0028
struct FProjectileWeaponData
{
	float                                              ProjectileLife;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ExplosionDamage;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExplosionImpulse;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DirectDamage;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DirectImpulse;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExplosionRadius;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      DamageType;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      DirectDamageType;                                         // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0008(0x0020) MISSED OFFSET
};

// ScriptStruct ShooterGame.ShooterWeapon_Instant.InstantWeaponData
// 0x0038
struct FInstantWeaponData
{
	float                                              WeaponSpread;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TargetingSpreadMod;                                       // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FinalWeaponSpreadMultiplier;                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FinalWeaponSpreadTargetingMultiplier;                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FiringSpreadIncrement;                                    // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FiringSpreadMax;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WeaponRange;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                HitDamage;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageImpulse;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      DamageType;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ClientSideHitLeeway;                                      // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AllowedViewDotHitDir;                                     // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x34];                                      // 0x0004(0x0034) MISSED OFFSET
};

// ScriptStruct ShooterGame.SOTFNotification.SOTFNotificationInfo
// 0x0078
struct FSOTFNotificationInfo
{
	bool                                               bIsActive;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             PlayerNames;                                              // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     PlayerDeathReason;                                        // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     TribeName;                                                // 0x0000(0x0010) (ZeroConstructor)
	int                                                TribeID;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     CustomDrawString;                                         // 0x0000(0x0010) (ZeroConstructor)
	double                                             StartDisplayTime;                                         // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              DisplayInterval;                                          // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FPrimalPlayerCharacterConfigStructReplicated> DisplayData;                                              // 0x0000(0x0010) (ZeroConstructor)
	bool                                               bLastPlayer;                                              // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESTOFNotificationType>                 Type;                                                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x77];                                      // 0x0001(0x0077) MISSED OFFSET
};

// ScriptStruct ShooterGame.SOTFNotificationDisplay.ScrollingTextInfo
// 0x0010
struct FScrollingTextInfo
{
	class UTextRenderComponent*                        TextComponent;                                            // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	float                                              Time;                                                     // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bActive;                                                  // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0001(0x000F) MISSED OFFSET
};

// ScriptStruct ShooterGame.SOTFNotificationDisplay.PlayerPreviewImage
// 0x0030
struct FPlayerPreviewImage
{
	class UStaticMeshComponent*                        PreviewMesh;                                              // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UTextRenderComponent*                        PlayerNameText;                                           // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UTextRenderComponent*                        TribeComponent;                                           // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UTextRenderComponent*                        DeathInfo;                                                // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) MISSED OFFSET
};

// ScriptStruct ShooterGame.SOTFNotificationDisplay.BannerTextInfo
// 0x0018
struct FBannerTextInfo
{
	class UTextRenderComponent*                        TextComponent;                                            // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        BackgroundComponent;                                      // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	bool                                               bActive;                                                  // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x17];                                      // 0x0001(0x0017) MISSED OFFSET
};

// ScriptStruct ShooterGame.SoundNodeVehicleEngine.VehicleEngineDatum
// 0x0014
struct FVehicleEngineDatum
{
	float                                              FadeInRPMStart;                                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FadeInRPMEnd;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FadeOutRPMStart;                                          // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FadeOutRPMEnd;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxPitchMultiplier;                                       // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0004(0x0010) MISSED OFFSET
};

// ScriptStruct ShooterGame.SupplyCrateSpawningVolume.SupplyCrateSpawnEntry
// 0x0018
struct FSupplyCrateSpawnEntry
{
	float                                              EntryWeight;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      CrateTemplate;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      CrateEnemySpawnEntries;                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct ShooterGame.SupplyCrateSpawningVolume.SupplyCrateSpawnPointEntry
// 0x0050
struct FSupplyCrateSpawnPointEntry
{
	class AActor*                                      LinkedSpawnPoint;                                         // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class ANPCZoneManager*                             LinkedEnemySpawnZoneManager;                              // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FName                                       LinkedEnemySpawnZoneManagerTag;                           // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      bTraceGroundPoint : 1;                                    // 0x0000(0x0001) (Edit, DisableEditOnTemplate)
	struct FVector                                     TraceGroundPointDownOffset;                               // 0x0000(0x000C) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FVector                                     TraceGroundPointUpOffset;                                 // 0x0000(0x000C) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              SpawnPointWeight;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	TArray<struct FSupplyCrateSpawnEntry>              OverrideSupplyCrateEntries;                               // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0010(0x0040) MISSED OFFSET
};

// ScriptStruct ShooterGame.ARKTributeData
// 0x0078
struct FARKTributeData
{
	struct FGuid                                       ID;                                                       // 0x0000(0x0010) (ZeroConstructor)
	TEnumAsByte<EPrimalARKTributeDataType>             DataType;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              DataBytes;                                                // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     DataClassName;                                            // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     DataTagName;                                              // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     Name;                                                     // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FString>                             DataStats;                                                // 0x0000(0x0010) (ZeroConstructor)
	double                                             LastReceiveDataTime;                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           DataID1;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           DataID2;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x74];                                      // 0x0004(0x0074) MISSED OFFSET
};

// ScriptStruct ShooterGame.SaveLoadDyePaintingItem
// 0x0038
struct FSaveLoadDyePaintingItem
{
	struct FItemNetID                                  ItemId;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     ColorName;                                                // 0x0000(0x0010) (ZeroConstructor)
	struct FColor                                      DyeColor;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MissingPercentage;                                        // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              NeededPercentage;                                         // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int16_t                                            ArchIndex;                                                // 0x0000(0x0002) (ZeroConstructor, IsPlainOldData)
	TArray<int>                                        ColorPixels;                                              // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0010(0x0028) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalItem.RequiresInventorySubclassMapping
// 0x0018
struct FRequiresInventorySubclassMapping
{
	class UClass*                                      InventoryComponentClassParent;                            // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UClass*>                              RequiresInventoryComponentClassChildren;                  // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct ShooterGame.PaintingCache.PaintingStreamingJob
// 0x0040
struct FPaintingStreamingJob
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalChatFontData
// 0x0038
struct FPrimalChatFontData
{
	struct FName                                       FontName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                FontSize;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FSlateColor                                 FontColor;                                                // 0x0000(0x0028) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalStructureElevatorPlatform.PrimalDroppedItemOnPlatform
// 0x0028
struct FPrimalDroppedItemOnPlatform
{
	struct FVector                                     ItemRelativeLocation;                                     // 0x0000(0x000C) (ZeroConstructor, SaveGame, IsPlainOldData)
	struct FRotator                                    ItemRelativeRotation;                                     // 0x0000(0x000C) (ZeroConstructor, SaveGame, IsPlainOldData)
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	class APrimalStructureItemContainer*               MyItem;                                                   // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0008(0x0020) MISSED OFFSET
};

// ScriptStruct ShooterGame.UI_Lobby.LobbyMember
// 0x0030
struct FLobbyMember
{
	struct FString                                     PlayerName;                                               // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0010(0x0020) MISSED OFFSET
};

// ScriptStruct ShooterGame.ReservationClientAgent.UnreservedServer
// 0x00B0
struct FUnreservedServer
{
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0000(0x00B0) MISSED OFFSET
};

// ScriptStruct ShooterGame.UI_PartySystem.PartyMember
// 0x0020
struct FPartyMember
{
	struct FString                                     PlayerName;                                               // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct ShooterGame.ReservationServerAgent.ReservationRequest
// 0x0028
struct FReservationRequest
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct ShooterGame.VictoryCore.JoyAnim
// 0x0010
struct FJoyAnim
{
	class UAnimMontage*                                Anim;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Chance;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
