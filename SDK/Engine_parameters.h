#pragma once

#include "../SDK.h"

// Name: ARKSotF, Version: 178.8.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function Engine.AnimNotify.Received_Notify
struct UAnimNotify_Received_Notify_Params
{
	class USkeletalMeshComponent*                      MeshComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAnimSequenceBase*                           Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimNotify.GetNotifyName
struct UAnimNotify_GetNotifyName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.AnimNotifyState.Received_NotifyTick
struct UAnimNotifyState_Received_NotifyTick_Params
{
	class USkeletalMeshComponent*                      MeshComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAnimSequenceBase*                           Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FrameDeltaTime;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimNotifyState.Received_NotifyEnd
struct UAnimNotifyState_Received_NotifyEnd_Params
{
	class USkeletalMeshComponent*                      MeshComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAnimSequenceBase*                           Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimNotifyState.Received_NotifyBegin
struct UAnimNotifyState_Received_NotifyBegin_Params
{
	class USkeletalMeshComponent*                      MeshComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAnimSequenceBase*                           Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TotalDuration;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimNotifyState.GetNotifyName
struct UAnimNotifyState_GetNotifyName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.Actor.UserConstructionScript
struct AActor_UserConstructionScript_Params
{
};

// Function Engine.Actor.TryMultiUse
struct AActor_TryMultiUse_Params
{
	class APlayerController*                           ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.TargetingTeamChanged
struct AActor_TargetingTeamChanged_Params
{
};

// Function Engine.Actor.TakePointDamageSignature__DelegateSignature
struct AActor_TakePointDamageSignature__DelegateSignature_Params
{
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         FHitComponent;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ShotFromDirection;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.TakeAnyDamageSignature__DelegateSignature
struct AActor_TakeAnyDamageSignature__DelegateSignature_Params
{
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SnapRootComponentTo
struct AActor_SnapRootComponentTo_Params
{
	class AActor*                                      InParentActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       InSocketName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetTickFunctionEnabled
struct AActor_SetTickFunctionEnabled_Params
{
	bool                                               bEnableTick;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetTickableWhenPaused
struct AActor_SetTickableWhenPaused_Params
{
	bool                                               bTickableWhenPaused;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetReplicates
struct AActor_SetReplicates_Params
{
	bool                                               bInReplicates;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetOwner
struct AActor_SetOwner_Params
{
	class AActor*                                      NewOwner;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetLifeSpan
struct AActor_SetLifeSpan_Params
{
	float                                              InLifespan;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetActorTransform
struct AActor_SetActorTransform_Params
{
	struct FTransform                                  NewTransform;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.SetActorScale3D
struct AActor_SetActorScale3D_Params
{
	struct FVector                                     NewScale3D;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Engine.Actor.SetActorRotation
struct AActor_SetActorRotation_Params
{
	struct FRotator                                    NewRotation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.SetActorRelativeTransform
struct AActor_SetActorRelativeTransform_Params
{
	struct FTransform                                  NewRelativeTransform;                                     // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetActorRelativeScale3D
struct AActor_SetActorRelativeScale3D_Params
{
	struct FVector                                     NewRelativeScale;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetActorRelativeRotation
struct AActor_SetActorRelativeRotation_Params
{
	struct FRotator                                    NewRelativeRotation;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetActorRelativeLocation
struct AActor_SetActorRelativeLocation_Params
{
	struct FVector                                     NewRelativeLocation;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetActorLocationAndRotation
struct AActor_SetActorLocationAndRotation_Params
{
	struct FVector                                     NewLocation;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator                                    NewRotation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.SetActorHiddenInGame
struct AActor_SetActorHiddenInGame_Params
{
	bool                                               bNewHidden;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetActorEnableCollision
struct AActor_SetActorEnableCollision_Params
{
	bool                                               bNewActorEnableCollision;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ServerSendExecCommandToPlayer
struct AActor_ServerSendExecCommandToPlayer_Params
{
	class APlayerController*                           ToPC;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPNetExecParams                            ExecParams;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bIsReliable;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForceSendToLocalPlayer;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreRelevancy;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ServerSendExecCommandToEveryone
struct AActor_ServerSendExecCommandToEveryone_Params
{
	struct FName                                       CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPNetExecParams                            ExecParams;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bIsReliable;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForceSendToLocalPlayer;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreRelevancy;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.RemoveTickPrerequisiteComponent
struct AActor_RemoveTickPrerequisiteComponent_Params
{
	class UActorComponent*                             PrerequisiteComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Engine.Actor.RemoveTickPrerequisiteActor
struct AActor_RemoveTickPrerequisiteActor_Params
{
	class AActor*                                      PrerequisiteActor;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.RecieveMatineeUpdated
struct AActor_RecieveMatineeUpdated_Params
{
};

// Function Engine.Actor.ReceiveTick
struct AActor_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceiveRadialDamage
struct AActor_ReceiveRadialDamage_Params
{
	float                                              DamageReceived;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Origin;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	class AController*                                 InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceivePointDamage
struct AActor_ReceivePointDamage_Params
{
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitNormal;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         HitComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ShotFromDirection;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceiveInput
struct AActor_ReceiveInput_Params
{
	struct FString                                     InputName;                                                // (Parm, ZeroConstructor)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     VectorValue;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bStarted;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEnded;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceiveHit
struct AActor_ReceiveHit_Params
{
	class UPrimitiveComponent*                         MyComp;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bSelfMoved;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitNormal;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Engine.Actor.ReceiveEndPlay
struct AActor_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceiveDestroyed
struct AActor_ReceiveDestroyed_Params
{
};

// Function Engine.Actor.ReceiveBeginPlay
struct AActor_ReceiveBeginPlay_Params
{
};

// Function Engine.Actor.ReceiveAnyDamage
struct AActor_ReceiveAnyDamage_Params
{
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorOnReleased
struct AActor_ReceiveActorOnReleased_Params
{
};

// Function Engine.Actor.ReceiveActorOnInputTouchLeave
struct AActor_ReceiveActorOnInputTouchLeave_Params
{
	TEnumAsByte<ETouchIndex>                           FingerIndex;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorOnInputTouchEnter
struct AActor_ReceiveActorOnInputTouchEnter_Params
{
	TEnumAsByte<ETouchIndex>                           FingerIndex;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorOnInputTouchEnd
struct AActor_ReceiveActorOnInputTouchEnd_Params
{
	TEnumAsByte<ETouchIndex>                           FingerIndex;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorOnInputTouchBegin
struct AActor_ReceiveActorOnInputTouchBegin_Params
{
	TEnumAsByte<ETouchIndex>                           FingerIndex;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorOnClicked
struct AActor_ReceiveActorOnClicked_Params
{
};

// Function Engine.Actor.ReceiveActorEndOverlap
struct AActor_ReceiveActorEndOverlap_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorEndCursorOver
struct AActor_ReceiveActorEndCursorOver_Params
{
};

// Function Engine.Actor.ReceiveActorBeginOverlap
struct AActor_ReceiveActorBeginOverlap_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorBeginCursorOver
struct AActor_ReceiveActorBeginCursorOver_Params
{
};

// Function Engine.Actor.PlaySoundOnActor
struct AActor_PlaySoundOnActor_Params
{
	class USoundCue*                                   InSoundCue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              VolumeMultiplier;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PitchMultiplier;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.PlaySoundAtLocation
struct AActor_PlaySoundAtLocation_Params
{
	class USoundCue*                                   InSoundCue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SoundLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              VolumeMultiplier;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PitchMultiplier;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.OnRep_ReplicatedMovement
struct AActor_OnRep_ReplicatedMovement_Params
{
};

// Function Engine.Actor.OnRep_Instigator
struct AActor_OnRep_Instigator_Params
{
};

// Function Engine.Actor.OnRep_AttachmentReplication
struct AActor_OnRep_AttachmentReplication_Params
{
};

// Function Engine.Actor.MakeNoise
struct AActor_MakeNoise_Params
{
	float                                              Loudness;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       NoiseInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NoiseLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.MakeMIDForMaterial
struct AActor_MakeMIDForMaterial_Params
{
	class UMaterialInterface*                          Parent;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.K2_TeleportTo
struct AActor_K2_TeleportTo_Params
{
	struct FVector                                     DestLocation;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    DestRotation;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.K2_SetActorLocation
struct AActor_K2_SetActorLocation_Params
{
	struct FVector                                     NewLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.K2_OnEndViewTarget
struct AActor_K2_OnEndViewTarget_Params
{
	class APlayerController*                           PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_OnBecomeViewTarget
struct AActor_K2_OnBecomeViewTarget_Params
{
	class APlayerController*                           PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_GetWorld
struct AActor_K2_GetWorld_Params
{
	class UWorld*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.K2_GetRootComponent
struct AActor_K2_GetRootComponent_Params
{
	class USceneComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Engine.Actor.K2_GetActorRotation
struct AActor_K2_GetActorRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.K2_GetActorLocation
struct AActor_K2_GetActorLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.K2_DestroyComponent
struct AActor_K2_DestroyComponent_Params
{
	class UActorComponent*                             Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Engine.Actor.K2_DestroyActor
struct AActor_K2_DestroyActor_Params
{
};

// Function Engine.Actor.K2_AttachRootComponentToActor
struct AActor_K2_AttachRootComponentToActor_Params
{
	class AActor*                                      InParentActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       InSocketName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAttachLocation>                       AttachLocationType;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWeldSimulatedBodies;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_AttachRootComponentTo
struct AActor_K2_AttachRootComponentTo_Params
{
	class USceneComponent*                             InParent;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       InSocketName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAttachLocation>                       AttachLocationType;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWeldSimulatedBodies;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.IsShooterCharacter
struct AActor_IsShooterCharacter_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.IsFirstPersonMeshVisible
struct AActor_IsFirstPersonMeshVisible_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.IsDead
struct AActor_IsDead_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.HasAuthority
struct AActor_HasAuthority_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetVerticalDistanceTo
struct AActor_GetVerticalDistanceTo_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetVelocity
struct AActor_GetVelocity_Params
{
	bool                                               bIsForRagdoll;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetTransform
struct AActor_GetTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetOwnerController
struct AActor_GetOwnerController_Params
{
	class APlayerController*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetOwner
struct AActor_GetOwner_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetOverlappingComponents
struct AActor_GetOverlappingComponents_Params
{
	TArray<class UPrimitiveComponent*>                 OverlappingComponents;                                    // (Parm, OutParm, ZeroConstructor)
};

// Function Engine.Actor.GetOverlappingActors
struct AActor_GetOverlappingActors_Params
{
	TArray<class AActor*>                              OverlappingActors;                                        // (Parm, OutParm, ZeroConstructor)
	class UClass*                                      ClassFilter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.GetLifeSpan
struct AActor_GetLifeSpan_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetInterpolatedRotation
struct AActor_GetInterpolatedRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetInterpolatedLocation
struct AActor_GetInterpolatedLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetInstigatorController
struct AActor_GetInstigatorController_Params
{
	class AController*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetInstigator
struct AActor_GetInstigator_Params
{
	class APawn*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetInputVectorAxisValue
struct AActor_GetInputVectorAxisValue_Params
{
	struct FKey                                        InputAxisKey;                                             // (ConstParm, Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetInputAxisValue
struct AActor_GetInputAxisValue_Params
{
	struct FName                                       InputAxisName;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetInputAxisKeyValue
struct AActor_GetInputAxisKeyValue_Params
{
	struct FKey                                        InputAxisKey;                                             // (ConstParm, Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetHorizontalDotProductTo
struct AActor_GetHorizontalDotProductTo_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetHorizontalDistanceTo
struct AActor_GetHorizontalDistanceTo_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetDotProductTo
struct AActor_GetDotProductTo_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetDistanceTo
struct AActor_GetDistanceTo_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetComponentsByCustomTag
struct AActor_GetComponentsByCustomTag_Params
{
	struct FName                                       TheTag;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UActorComponent*>                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.Actor.GetComponentsByClass
struct AActor_GetComponentsByClass_Params
{
	class UClass*                                      ComponentClass;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UActorComponent*>                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.Actor.GetComponentByCustomTag
struct AActor_GetComponentByCustomTag_Params
{
	struct FName                                       TheTag;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UActorComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Engine.Actor.GetComponentByClass
struct AActor_GetComponentByClass_Params
{
	class UClass*                                      ComponentClass;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UActorComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Engine.Actor.GetAttachedSoundVolumeMultiplier
struct AActor_GetAttachedSoundVolumeMultiplier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetAttachedSoundPitchMultiplier
struct AActor_GetAttachedSoundPitchMultiplier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetActorUpVector
struct AActor_GetActorUpVector_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetActorTimeDilation
struct AActor_GetActorTimeDilation_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetActorScale3D
struct AActor_GetActorScale3D_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetActorRightVector
struct AActor_GetActorRightVector_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetActorRelativeScale3D
struct AActor_GetActorRelativeScale3D_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetActorForwardVector
struct AActor_GetActorForwardVector_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetActorEnableCollision
struct AActor_GetActorEnableCollision_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetActorClass
struct AActor_GetActorClass_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetActorBounds
struct AActor_GetActorBounds_Params
{
	bool                                               bOnlyCollidingComponents;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Origin;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BoxExtent;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ForceReplicateNowWithChannel
struct AActor_ForceReplicateNowWithChannel_Params
{
};

// Function Engine.Actor.ForceReplicateNow
struct AActor_ForceReplicateNow_Params
{
	bool                                               bForceCreateChannel;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForceCreateChannelIfRelevant;                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ForceNetUpdate
struct AActor_ForceNetUpdate_Params
{
	bool                                               bDormantDontReplicateProperties;                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.FlushNetDormancy
struct AActor_FlushNetDormancy_Params
{
};

// Function Engine.Actor.EnableInput
struct AActor_EnableInput_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.DisableInput
struct AActor_DisableInput_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.DetachRootComponentFromParent
struct AActor_DetachRootComponentFromParent_Params
{
	bool                                               bMaintainWorldPosition;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ClientMultiUse
struct AActor_ClientMultiUse_Params
{
	class APlayerController*                           ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.BPTryMultiUse
struct AActor_BPTryMultiUse_Params
{
	class APlayerController*                           ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.BPTargetingTeamChanged
struct AActor_BPTargetingTeamChanged_Params
{
};

// Function Engine.Actor.BPServerHandleNetExecCommand
struct AActor_BPServerHandleNetExecCommand_Params
{
	class APlayerController*                           FromPC;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPNetExecParams                            ExecParams;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.BPPreInitializeComponents
struct AActor_BPPreInitializeComponents_Params
{
};

// Function Engine.Actor.BPPostInitializeComponents
struct AActor_BPPostInitializeComponents_Params
{
};

// Function Engine.Actor.BPGetMultiUseEntries
struct AActor_BPGetMultiUseEntries_Params
{
	class APlayerController*                           ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.Actor.BPClientHandleNetExecCommand
struct AActor_BPClientHandleNetExecCommand_Params
{
	struct FName                                       CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPNetExecParams                            ExecParams;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.BPClientDoMultiUse
struct AActor_BPClientDoMultiUse_Params
{
	class APlayerController*                           ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ClientUseIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.AllowGrappling
struct AActor_AllowGrappling_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.AddTickPrerequisiteComponent
struct AActor_AddTickPrerequisiteComponent_Params
{
	class UActorComponent*                             PrerequisiteComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Engine.Actor.AddTickPrerequisiteActor
struct AActor_AddTickPrerequisiteActor_Params
{
	class AActor*                                      PrerequisiteActor;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.AddComponent
struct AActor_AddComponent_Params
{
	struct FName                                       TemplateName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bManualAttachment;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  RelativeTransform;                                        // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UObject*                                     ComponentTemplateContext;                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UActorComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Engine.Actor.AddActorWorldTransform
struct AActor_AddActorWorldTransform_Params
{
	struct FTransform                                  DeltaTransform;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.AddActorWorldRotation
struct AActor_AddActorWorldRotation_Params
{
	struct FRotator                                    DeltaRotation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.AddActorWorldOffset
struct AActor_AddActorWorldOffset_Params
{
	struct FVector                                     DeltaLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.AddActorLocalTransform
struct AActor_AddActorLocalTransform_Params
{
	struct FTransform                                  NewTransform;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.AddActorLocalRotation
struct AActor_AddActorLocalRotation_Params
{
	struct FRotator                                    DeltaRotation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.AddActorLocalOffset
struct AActor_AddActorLocalOffset_Params
{
	struct FVector                                     DeltaLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ActorOnReleasedSignature__DelegateSignature
struct AActor_ActorOnReleasedSignature__DelegateSignature_Params
{
};

// Function Engine.Actor.ActorOnInputTouchEndSignature__DelegateSignature
struct AActor_ActorOnInputTouchEndSignature__DelegateSignature_Params
{
	TEnumAsByte<ETouchIndex>                           FingerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ActorOnInputTouchBeginSignature__DelegateSignature
struct AActor_ActorOnInputTouchBeginSignature__DelegateSignature_Params
{
	TEnumAsByte<ETouchIndex>                           FingerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ActorOnClickedSignature__DelegateSignature
struct AActor_ActorOnClickedSignature__DelegateSignature_Params
{
};

// Function Engine.Actor.ActorMatineeUpdated__DelegateSignature
struct AActor_ActorMatineeUpdated__DelegateSignature_Params
{
};

// Function Engine.Actor.ActorHitSignature__DelegateSignature
struct AActor_ActorHitSignature__DelegateSignature_Params
{
	class AActor*                                      SelfActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Engine.Actor.ActorHasTag
struct AActor_ActorHasTag_Params
{
	struct FName                                       Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.ActorEndTouchOverSignature__DelegateSignature
struct AActor_ActorEndTouchOverSignature__DelegateSignature_Params
{
	TEnumAsByte<ETouchIndex>                           FingerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ActorEndPlaySignature__DelegateSignature
struct AActor_ActorEndPlaySignature__DelegateSignature_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ActorEndOverlapSignature__DelegateSignature
struct AActor_ActorEndOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ActorEndCursorOverSignature__DelegateSignature
struct AActor_ActorEndCursorOverSignature__DelegateSignature_Params
{
};

// Function Engine.Actor.ActorDestroyedSignature__DelegateSignature
struct AActor_ActorDestroyedSignature__DelegateSignature_Params
{
};

// Function Engine.Actor.ActorCustomEventSignature__DelegateSignature
struct AActor_ActorCustomEventSignature__DelegateSignature_Params
{
	struct FName                                       EventCustomName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     EventCustomString;                                        // (Parm, ZeroConstructor)
	class AActor*                                      InstigatorActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ActorBeginTouchOverSignature__DelegateSignature
struct AActor_ActorBeginTouchOverSignature__DelegateSignature_Params
{
	TEnumAsByte<ETouchIndex>                           FingerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ActorBeginOverlapSignature__DelegateSignature
struct AActor_ActorBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ActorBeginCursorOverSignature__DelegateSignature
struct AActor_ActorBeginCursorOverSignature__DelegateSignature_Params
{
};

// Function Engine.Controller.UnPossess
struct AController_UnPossess_Params
{
};

// Function Engine.Controller.StopMovement
struct AController_StopMovement_Params
{
};

// Function Engine.Controller.SetInitialLocationAndRotation
struct AController_SetInitialLocationAndRotation_Params
{
	struct FVector                                     NewLocation;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator                                    NewRotation;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Engine.Controller.SetControlRotation
struct AController_SetControlRotation_Params
{
	struct FRotator                                    NewRotation;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Engine.Controller.ReceiveInstigatedAnyDamage
struct AController_ReceiveInstigatedAnyDamage_Params
{
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamagedActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Controller.Possess
struct AController_Possess_Params
{
	class APawn*                                       inPawn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Controller.OnRep_PlayerState
struct AController_OnRep_PlayerState_Params
{
};

// Function Engine.Controller.OnRep_Pawn
struct AController_OnRep_Pawn_Params
{
};

// Function Engine.Controller.LineOfSightTo
struct AController_LineOfSightTo_Params
{
	class AActor*                                      Other;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ViewPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAlternateChecks;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Controller.K2_GetPawn
struct AController_K2_GetPawn_Params
{
	class APawn*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Controller.IsLocalPlayerController
struct AController_IsLocalPlayerController_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Controller.IsLocalController
struct AController_IsLocalController_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Controller.InstigatedAnyDamageSignature__DelegateSignature
struct AController_InstigatedAnyDamageSignature__DelegateSignature_Params
{
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamagedActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Controller.GetViewTarget
struct AController_GetViewTarget_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Controller.GetDesiredRotation
struct AController_GetDesiredRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Controller.GetControlRotation
struct AController_GetControlRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Controller.ClientSetRotation
struct AController_ClientSetRotation_Params
{
	struct FRotator                                    NewRotation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bResetCamera;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Controller.ClientSetLocation
struct AController_ClientSetLocation_Params
{
	struct FVector                                     NewLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    NewRotation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Controller.CastToPlayerController
struct AController_CastToPlayerController_Params
{
	class APlayerController*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.CurveBase.GetValueRange
struct UCurveBase_GetValueRange_Params
{
	float                                              MinValue;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              MaxValue;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.CurveBase.GetTimeRange
struct UCurveBase_GetTimeRange_Params
{
	float                                              MinTime;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              MaxTime;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.CurveFloat.GetFloatValue
struct UCurveFloat_GetFloatValue_Params
{
	float                                              InTime;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PlayerCameraManager.StopCameraAnimInst
struct APlayerCameraManager_StopCameraAnimInst_Params
{
	class UCameraAnimInst*                             AnimInst;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bImmediate;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerCameraManager.StopAllInstancesOfCameraAnim
struct APlayerCameraManager_StopAllInstancesOfCameraAnim_Params
{
	class UCameraAnim*                                 Anim;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bImmediate;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerCameraManager.StopAllCameraAnims
struct APlayerCameraManager_StopAllCameraAnims_Params
{
	bool                                               bImmediate;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerCameraManager.RemoveCameraLensEffect
struct APlayerCameraManager_RemoveCameraLensEffect_Params
{
	class AEmitterCameraLensEffectBase*                Emitter;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerCameraManager.PlayCameraAnim
struct APlayerCameraManager_PlayCameraAnim_Params
{
	class UCameraAnim*                                 Anim;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BlendInTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BlendOutTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLoop;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRandomStartTime;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECameraAnimPlaySpace>                  PlaySpace;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    UserPlaySpaceRot;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UCameraAnimInst*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PlayerCameraManager.GetOwningPlayerController
struct APlayerCameraManager_GetOwningPlayerController_Params
{
	class APlayerController*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PlayerCameraManager.GetCameraRotation
struct APlayerCameraManager_GetCameraRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PlayerCameraManager.GetCameraLocation
struct APlayerCameraManager_GetCameraLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PlayerCameraManager.ClearCameraLensEffects
struct APlayerCameraManager_ClearCameraLensEffects_Params
{
};

// Function Engine.PlayerCameraManager.BlueprintUpdateCamera
struct APlayerCameraManager_BlueprintUpdateCamera_Params
{
	class AActor*                                      CameraTarget;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewCameraLocation;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    NewCameraRotation;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              NewCameraFOV;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PlayerCameraManager.AddCameraLensEffect
struct APlayerCameraManager_AddCameraLensEffect_Params
{
	class UClass*                                      LensEffectEmitterClass;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AEmitterCameraLensEffectBase*                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PlayerController.WasInputKeyJustReleased
struct APlayerController_WasInputKeyJustReleased_Params
{
	struct FKey                                        Key;                                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PlayerController.WasInputKeyJustPressed
struct APlayerController_WasInputKeyJustPressed_Params
{
	struct FKey                                        Key;                                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PlayerController.ToggleSpeaking
struct APlayerController_ToggleSpeaking_Params
{
	bool                                               bSpeaking;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.SwitchLevel
struct APlayerController_SwitchLevel_Params
{
	struct FString                                     URL;                                                      // (Parm, ZeroConstructor)
};

// Function Engine.PlayerController.StartFire
struct APlayerController_StartFire_Params
{
	unsigned char                                      FireModeNum;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.SetVirtualJoystickVisibility
struct APlayerController_SetVirtualJoystickVisibility_Params
{
	bool                                               bVisible;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.SetViewTargetWithBlend
struct APlayerController_SetViewTargetWithBlend_Params
{
	class AActor*                                      NewViewTarget;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BlendTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EViewTargetBlendFunction>              BlendFunc;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BlendExp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLockOutgoing;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.SetName
struct APlayerController_SetName_Params
{
	struct FString                                     S;                                                        // (Parm, ZeroConstructor)
};

// Function Engine.PlayerController.SetIgnoreMoveInput
struct APlayerController_SetIgnoreMoveInput_Params
{
	bool                                               bNewMoveInput;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.SetIgnoreLookInput
struct APlayerController_SetIgnoreLookInput_Params
{
	bool                                               bNewLookInput;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.ServerViewSelf
struct APlayerController_ServerViewSelf_Params
{
	struct FViewTargetTransitionParams                 TransitionParams;                                         // (Parm)
};

// Function Engine.PlayerController.ServerViewPrevPlayer
struct APlayerController_ServerViewPrevPlayer_Params
{
};

// Function Engine.PlayerController.ServerViewNextPlayer
struct APlayerController_ServerViewNextPlayer_Params
{
};

// Function Engine.PlayerController.ServerVerifyViewTarget
struct APlayerController_ServerVerifyViewTarget_Params
{
};

// Function Engine.PlayerController.ServerUpdateLevelVisibility
struct APlayerController_ServerUpdateLevelVisibility_Params
{
	struct FName                                       PackageName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsVisible;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.ServerUpdateCamera
struct APlayerController_ServerUpdateCamera_Params
{
	struct FVector_NetQuantize                         CamLoc;                                                   // (Parm)
	int                                                CamPitchAndYaw;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.ServerUnmutePlayer
struct APlayerController_ServerUnmutePlayer_Params
{
	struct FUniqueNetIdRepl                            PlayerId;                                                 // (Parm)
};

// Function Engine.PlayerController.ServerToggleAILogging
struct APlayerController_ServerToggleAILogging_Params
{
};

// Function Engine.PlayerController.ServerShortTimeout
struct APlayerController_ServerShortTimeout_Params
{
};

// Function Engine.PlayerController.ServerSetSpectatorLocation
struct APlayerController_ServerSetSpectatorLocation_Params
{
	struct FVector                                     NewLoc;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.ServerRestartPlayer
struct APlayerController_ServerRestartPlayer_Params
{
};

// Function Engine.PlayerController.ServerReceivedPlayerControllerAck
struct APlayerController_ServerReceivedPlayerControllerAck_Params
{
};

// Function Engine.PlayerController.ServerProcessNetExecCommandUnreliable
struct APlayerController_ServerProcessNetExecCommandUnreliable_Params
{
	class AActor*                                      forActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPNetExecParams                            ExecParams;                                               // (Parm)
};

// Function Engine.PlayerController.ServerProcessNetExecCommand
struct APlayerController_ServerProcessNetExecCommand_Params
{
	class AActor*                                      forActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPNetExecParams                            ExecParams;                                               // (Parm)
};

// Function Engine.PlayerController.ServerPause
struct APlayerController_ServerPause_Params
{
};

// Function Engine.PlayerController.ServerNotifyLoadedWorld
struct APlayerController_ServerNotifyLoadedWorld_Params
{
	struct FName                                       WorldPackageName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.ServerMutePlayer
struct APlayerController_ServerMutePlayer_Params
{
	struct FUniqueNetIdRepl                            PlayerId;                                                 // (Parm)
};

// Function Engine.PlayerController.ServerCheckClientPossession
struct APlayerController_ServerCheckClientPossession_Params
{
};

// Function Engine.PlayerController.ServerChangeName
struct APlayerController_ServerChangeName_Params
{
	struct FString                                     S;                                                        // (Parm, ZeroConstructor)
};

// Function Engine.PlayerController.ServerCamera
struct APlayerController_ServerCamera_Params
{
	struct FName                                       NewMode;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.ServerAcknowledgePossession
struct APlayerController_ServerAcknowledgePossession_Params
{
	class APawn*                                       P;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.SendToConsole
struct APlayerController_SendToConsole_Params
{
	struct FString                                     Command;                                                  // (Parm, ZeroConstructor)
};

// Function Engine.PlayerController.RestartLevel
struct APlayerController_RestartLevel_Params
{
};

// Function Engine.PlayerController.ResetIgnoreInputFlags
struct APlayerController_ResetIgnoreInputFlags_Params
{
};

// Function Engine.PlayerController.ProjectWorldLocationToScreen
struct APlayerController_ProjectWorldLocationToScreen_Params
{
	struct FVector                                     WorldLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ScreenLocation;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PlayerController.PlayDynamicForceFeedback
struct APlayerController_PlayDynamicForceFeedback_Params
{
	float                                              Intensity;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAffectsLeftLarge;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAffectsLeftSmall;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAffectsRightLarge;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAffectsRightSmall;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDynamicForceFeedbackAction>           Action;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
};

// Function Engine.PlayerController.Pause
struct APlayerController_Pause_Params
{
};

// Function Engine.PlayerController.NetSpawnActorAtLocation
struct APlayerController_NetSpawnActorAtLocation_Params
{
	class UClass*                                      AnActorClass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize                         AtLocation;                                               // (Parm)
	struct FRotator_NetQuantize                        AtRotation;                                               // (Parm)
	class USceneComponent*                             attachToComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                dataIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       attachSocketName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.LocalTravel
struct APlayerController_LocalTravel_Params
{
	struct FString                                     URL;                                                      // (Parm, ZeroConstructor)
};

// Function Engine.PlayerController.IsMoveInputIgnored
struct APlayerController_IsMoveInputIgnored_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PlayerController.IsLookInputIgnored
struct APlayerController_IsLookInputIgnored_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PlayerController.IsInputKeyDown
struct APlayerController_IsInputKeyDown_Params
{
	struct FKey                                        Key;                                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PlayerController.GetViewportSize
struct APlayerController_GetViewportSize_Params
{
	int                                                SizeX;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                SizeY;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.GetMousePosition
struct APlayerController_GetMousePosition_Params
{
	float                                              LocationX;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              LocationY;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PlayerController.GetInputVectorKeyState
struct APlayerController_GetInputVectorKeyState_Params
{
	struct FKey                                        Key;                                                      // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PlayerController.GetInputTouchState
struct APlayerController_GetInputTouchState_Params
{
	TEnumAsByte<ETouchIndex>                           FingerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LocationX;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              LocationY;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsCurrentlyPressed;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.GetInputMouseDelta
struct APlayerController_GetInputMouseDelta_Params
{
	float                                              DeltaX;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaY;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.GetInputMotionState
struct APlayerController_GetInputMotionState_Params
{
	struct FVector                                     Tilt;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RotationRate;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Gravity;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Acceleration;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.GetInputKeyTimeDown
struct APlayerController_GetInputKeyTimeDown_Params
{
	struct FKey                                        Key;                                                      // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PlayerController.GetInputAnalogStickState
struct APlayerController_GetInputAnalogStickState_Params
{
	TEnumAsByte<EControllerAnalogStick>                WhichStick;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StickX;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              StickY;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.GetInputAnalogKeyState
struct APlayerController_GetInputAnalogKeyState_Params
{
	struct FKey                                        Key;                                                      // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PlayerController.GetHUD
struct APlayerController_GetHUD_Params
{
	class AHUD*                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PlayerController.GetHitResultUnderFingerForObjects
struct APlayerController_GetHitResultUnderFingerForObjects_Params
{
	TEnumAsByte<ETouchIndex>                           FingerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<EObjectTypeQuery>>              ObjectTypes;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitResult;                                                // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PlayerController.GetHitResultUnderFingerByChannel
struct APlayerController_GetHitResultUnderFingerByChannel_Params
{
	TEnumAsByte<ETouchIndex>                           FingerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETraceTypeQuery>                       TraceChannel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitResult;                                                // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PlayerController.GetHitResultUnderFinger
struct APlayerController_GetHitResultUnderFinger_Params
{
	TEnumAsByte<ETouchIndex>                           FingerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     TraceChannel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitResult;                                                // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PlayerController.GetHitResultUnderCursorForObjects
struct APlayerController_GetHitResultUnderCursorForObjects_Params
{
	TArray<TEnumAsByte<EObjectTypeQuery>>              ObjectTypes;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitResult;                                                // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PlayerController.GetHitResultUnderCursorByChannel
struct APlayerController_GetHitResultUnderCursorByChannel_Params
{
	TEnumAsByte<ETraceTypeQuery>                       TraceChannel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitResult;                                                // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PlayerController.GetHitResultUnderCursor
struct APlayerController_GetHitResultUnderCursor_Params
{
	TEnumAsByte<ECollisionChannel>                     TraceChannel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitResult;                                                // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PlayerController.FOV
struct APlayerController_FOV_Params
{
	float                                              NewFOV;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.EnableCheats
struct APlayerController_EnableCheats_Params
{
	struct FString                                     pass;                                                     // (ConstParm, Parm, ZeroConstructor)
};

// Function Engine.PlayerController.DeprojectScreenPositionToWorld
struct APlayerController_DeprojectScreenPositionToWorld_Params
{
	float                                              ScreenX;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ScreenY;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WorldLocation;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WorldDirection;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PlayerController.DeprojectMousePositionToWorld
struct APlayerController_DeprojectMousePositionToWorld_Params
{
	struct FVector                                     WorldLocation;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WorldDirection;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PlayerController.ConsoleKey
struct APlayerController_ConsoleKey_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function Engine.PlayerController.ClientWasKicked
struct APlayerController_ClientWasKicked_Params
{
	struct FText                                       KickReason;                                               // (ConstParm, Parm)
};

// Function Engine.PlayerController.ClientVoiceHandshakeComplete
struct APlayerController_ClientVoiceHandshakeComplete_Params
{
};

// Function Engine.PlayerController.ClientUpdateLevelStreamingStatus
struct APlayerController_ClientUpdateLevelStreamingStatus_Params
{
	struct FName                                       PackageName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bNewShouldBeLoaded;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bNewShouldBeVisible;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bNewShouldBlockOnLoad;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                LODIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.ClientUnmutePlayer
struct APlayerController_ClientUnmutePlayer_Params
{
	struct FUniqueNetIdRepl                            PlayerId;                                                 // (Parm)
};

// Function Engine.PlayerController.ClientTravelInternal
struct APlayerController_ClientTravelInternal_Params
{
	struct FString                                     URL;                                                      // (Parm, ZeroConstructor)
	TEnumAsByte<ETravelType>                           TravelType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSeamless;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       MapPackageGuid;                                           // (Parm, ZeroConstructor)
};

// Function Engine.PlayerController.ClientTravel
struct APlayerController_ClientTravel_Params
{
	struct FString                                     URL;                                                      // (Parm, ZeroConstructor)
	TEnumAsByte<ETravelType>                           TravelType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSeamless;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       MapPackageGuid;                                           // (Parm, ZeroConstructor)
};

// Function Engine.PlayerController.ClientTeamMessage
struct APlayerController_ClientTeamMessage_Params
{
	class APlayerState*                                SenderPlayerState;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     S;                                                        // (Parm, ZeroConstructor)
	struct FName                                       Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MsgLifeTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.ClientStopForceFeedback
struct APlayerController_ClientStopForceFeedback_Params
{
	class UForceFeedbackEffect*                        ForceFeedbackEffect;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.ClientStopCameraShake
struct APlayerController_ClientStopCameraShake_Params
{
	class UClass*                                      Shake;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.ClientStopCameraAnim
struct APlayerController_ClientStopCameraAnim_Params
{
	class UCameraAnim*                                 AnimToStop;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.ClientSpawnCameraLensEffect
struct APlayerController_ClientSpawnCameraLensEffect_Params
{
	class UClass*                                      LensEffectEmitterClass;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.ClientSetViewTarget
struct APlayerController_ClientSetViewTarget_Params
{
	class AActor*                                      A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FViewTargetTransitionParams                 TransitionParams;                                         // (Parm)
};

// Function Engine.PlayerController.ClientSetHUD
struct APlayerController_ClientSetHUD_Params
{
	class UClass*                                      NewHUDClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.ClientSetForceMipLevelsToBeResident
struct APlayerController_ClientSetForceMipLevelsToBeResident_Params
{
	class UMaterialInterface*                          Material;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ForceDuration;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CinematicTextureGroups;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.ClientSetCinematicMode
struct APlayerController_ClientSetCinematicMode_Params
{
	bool                                               bInCinematicMode;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAffectsMovement;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAffectsTurning;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAffectsHUD;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.ClientSetCameraMode
struct APlayerController_ClientSetCameraMode_Params
{
	struct FName                                       NewCamMode;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.ClientSetCameraFade
struct APlayerController_ClientSetCameraFade_Params
{
	bool                                               bEnableFading;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FColor                                      FadeColor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   FadeAlpha;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FadeTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFadeAudio;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.ClientSetBlockOnAsyncLoading
struct APlayerController_ClientSetBlockOnAsyncLoading_Params
{
};

// Function Engine.PlayerController.ClientSendNetExecCommandToServer
struct APlayerController_ClientSendNetExecCommandToServer_Params
{
	class AActor*                                      forActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPNetExecParams                            ExecParams;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bIsReliable;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.ClientReturnToMainMenu
struct APlayerController_ClientReturnToMainMenu_Params
{
	struct FString                                     ReturnReason;                                             // (Parm, ZeroConstructor)
};

// Function Engine.PlayerController.ClientRetryClientRestart
struct APlayerController_ClientRetryClientRestart_Params
{
	class APawn*                                       NewPawn;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.ClientRestart
struct APlayerController_ClientRestart_Params
{
	class APawn*                                       NewPawn;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.ClientReset
struct APlayerController_ClientReset_Params
{
};

// Function Engine.PlayerController.ClientRepObjRef
struct APlayerController_ClientRepObjRef_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.ClientReceiveLocalizedMessage
struct APlayerController_ClientReceiveLocalizedMessage_Params
{
	class UClass*                                      Message;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Switch;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerState*                                RelatedPlayerState_2;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerState*                                RelatedPlayerState_3;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     OptionalObject;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.ClientProcessNetExecCommandUnreliableBP
struct APlayerController_ClientProcessNetExecCommandUnreliableBP_Params
{
	class AActor*                                      forActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPNetExecParams                            ExecParams;                                               // (Parm)
};

// Function Engine.PlayerController.ClientProcessNetExecCommandUnreliable
struct APlayerController_ClientProcessNetExecCommandUnreliable_Params
{
	class AActor*                                      forActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FNetExecParams                              ExecParams;                                               // (Parm)
};

// Function Engine.PlayerController.ClientProcessNetExecCommandBP
struct APlayerController_ClientProcessNetExecCommandBP_Params
{
	class AActor*                                      forActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPNetExecParams                            ExecParams;                                               // (Parm)
};

// Function Engine.PlayerController.ClientProcessNetExecCommand
struct APlayerController_ClientProcessNetExecCommand_Params
{
	class AActor*                                      forActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FNetExecParams                              ExecParams;                                               // (Parm)
};

// Function Engine.PlayerController.ClientPrestreamTextures
struct APlayerController_ClientPrestreamTextures_Params
{
	class AActor*                                      ForcedActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ForceDuration;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableStreaming;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CinematicTextureGroups;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.ClientPrepareMapChange
struct APlayerController_ClientPrepareMapChange_Params
{
	struct FName                                       LevelName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFirst;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLast;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.ClientPlaySoundAtLocation
struct APlayerController_ClientPlaySoundAtLocation_Params
{
	class USoundBase*                                  Sound;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              VolumeMultiplier;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PitchMultiplier;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.ClientPlaySound
struct APlayerController_ClientPlaySound_Params
{
	class USoundBase*                                  Sound;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              VolumeMultiplier;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PitchMultiplier;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.ClientPlayForceFeedback
struct APlayerController_ClientPlayForceFeedback_Params
{
	class UForceFeedbackEffect*                        ForceFeedbackEffect;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLooping;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.ClientPlayCameraShake
struct APlayerController_ClientPlayCameraShake_Params
{
	class UClass*                                      Shake;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECameraAnimPlaySpace>                  PlaySpace;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    UserPlaySpaceRot;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Speed;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.ClientPlayCameraAnim
struct APlayerController_ClientPlayCameraAnim_Params
{
	class UCameraAnim*                                 AnimToPlay;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BlendInTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BlendOutTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLoop;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRandomStartTime;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECameraAnimPlaySpace>                  Space;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    CustomPlaySpace;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.ClientNotifyRespawned
struct APlayerController_ClientNotifyRespawned_Params
{
	class APawn*                                       NewPawn;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsFirstSpawn;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.ClientMutePlayer
struct APlayerController_ClientMutePlayer_Params
{
	struct FUniqueNetIdRepl                            PlayerId;                                                 // (Parm)
};

// Function Engine.PlayerController.ClientMessage
struct APlayerController_ClientMessage_Params
{
	struct FString                                     S;                                                        // (Parm, ZeroConstructor)
	struct FName                                       Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MsgLifeTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.ClientIgnoreMoveInput
struct APlayerController_ClientIgnoreMoveInput_Params
{
	bool                                               bIgnore;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.ClientIgnoreLookInput
struct APlayerController_ClientIgnoreLookInput_Params
{
	bool                                               bIgnore;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.ClientGotoState
struct APlayerController_ClientGotoState_Params
{
	struct FName                                       NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.ClientGameEnded
struct APlayerController_ClientGameEnded_Params
{
	class AActor*                                      EndGameFocus;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsWinner;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.ClientForceGarbageCollection
struct APlayerController_ClientForceGarbageCollection_Params
{
};

// Function Engine.PlayerController.ClientFlushLevelStreaming
struct APlayerController_ClientFlushLevelStreaming_Params
{
};

// Function Engine.PlayerController.ClientEnableNetworkVoice
struct APlayerController_ClientEnableNetworkVoice_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.ClientCommitMapChange
struct APlayerController_ClientCommitMapChange_Params
{
};

// Function Engine.PlayerController.ClientClearCameraLensEffects
struct APlayerController_ClientClearCameraLensEffects_Params
{
};

// Function Engine.PlayerController.ClientCapBandwidth
struct APlayerController_ClientCapBandwidth_Params
{
	int                                                Cap;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.ClientCancelPendingMapChange
struct APlayerController_ClientCancelPendingMapChange_Params
{
};

// Function Engine.PlayerController.ClientAddTextureStreamingLoc
struct APlayerController_ClientAddTextureStreamingLoc_Params
{
	struct FVector                                     InLoc;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideLocation;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.Camera
struct APlayerController_Camera_Params
{
	struct FName                                       NewMode;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.AddYawInput
struct APlayerController_AddYawInput_Params
{
	float                                              Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.AddRollInput
struct APlayerController_AddRollInput_Params
{
	float                                              Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.AddPitchInput
struct APlayerController_AddPitchInput_Params
{
	float                                              Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.ActivateTouchInterface
struct APlayerController_ActivateTouchInterface_Params
{
	class UTouchInterface*                             NewTouchInterface;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.HUD.ShowHUD
struct AHUD_ShowHUD_Params
{
};

// Function Engine.HUD.ShowDebugToggleSubCategory
struct AHUD_ShowDebugToggleSubCategory_Params
{
	struct FName                                       Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.HUD.ShowDebug
struct AHUD_ShowDebug_Params
{
	struct FName                                       DebugType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.HUD.RemoveDebugText
struct AHUD_RemoveDebugText_Params
{
	class AActor*                                      SrcActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLeaveDurationText;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.HUD.RemoveAllDebugStrings
struct AHUD_RemoveAllDebugStrings_Params
{
};

// Function Engine.HUD.ReceiveHitBoxRelease
struct AHUD_ReceiveHitBoxRelease_Params
{
	struct FName                                       BoxName;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.HUD.ReceiveHitBoxEndCursorOver
struct AHUD_ReceiveHitBoxEndCursorOver_Params
{
	struct FName                                       BoxName;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.HUD.ReceiveHitBoxClick
struct AHUD_ReceiveHitBoxClick_Params
{
	struct FName                                       BoxName;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.HUD.ReceiveHitBoxBeginCursorOver
struct AHUD_ReceiveHitBoxBeginCursorOver_Params
{
	struct FName                                       BoxName;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.HUD.ReceiveDrawHUD
struct AHUD_ReceiveDrawHUD_Params
{
	int                                                SizeX;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SizeY;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.HUD.Project
struct AHUD_Project_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.HUD.GetTextSize
struct AHUD_GetTextSize_Params
{
	struct FString                                     Text;                                                     // (Parm, ZeroConstructor)
	float                                              OutWidth;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutHeight;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UFont*                                       Font;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.HUD.GetOwningPlayerController
struct AHUD_GetOwningPlayerController_Params
{
	class APlayerController*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.HUD.GetOwningPawn
struct AHUD_GetOwningPawn_Params
{
	class APawn*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.HUD.GetActorsInSelectionRectangle
struct AHUD_GetActorsInSelectionRectangle_Params
{
	class UClass*                                      ClassFilter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   FirstPoint;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   SecondPoint;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TArray<class AActor*>                              OutActors;                                                // (Parm, OutParm, ZeroConstructor)
	bool                                               bIncludeNonCollidingComponents;                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bActorMustBeFullyEnclosed;                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.HUD.DrawTextureSimple
struct AHUD_DrawTextureSimple_Params
{
	class UTexture*                                    Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ScreenX;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ScreenY;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bScalePosition;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.HUD.DrawTexture
struct AHUD_DrawTexture_Params
{
	class UTexture*                                    Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ScreenX;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ScreenY;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ScreenW;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ScreenH;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TextureU;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TextureV;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TextureUWidth;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TextureVHeight;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                TintColor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBlendMode>                            BlendMode;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bScalePosition;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   RotPivot;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.HUD.DrawText
struct AHUD_DrawText_Params
{
	struct FString                                     Text;                                                     // (Parm, ZeroConstructor)
	struct FLinearColor                                TextColor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ScreenX;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ScreenY;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UFont*                                       Font;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bScalePosition;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.HUD.DrawRect
struct AHUD_DrawRect_Params
{
	struct FLinearColor                                RectColor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ScreenX;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ScreenY;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ScreenW;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ScreenH;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.HUD.DrawMaterialSimple
struct AHUD_DrawMaterialSimple_Params
{
	class UMaterialInterface*                          Material;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ScreenX;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ScreenY;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ScreenW;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ScreenH;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bScalePosition;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.HUD.DrawMaterial
struct AHUD_DrawMaterial_Params
{
	class UMaterialInterface*                          Material;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ScreenX;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ScreenY;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ScreenW;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ScreenH;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaterialU;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaterialV;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaterialUWidth;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaterialVHeight;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bScalePosition;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   RotPivot;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.HUD.DrawLine
struct AHUD_DrawLine_Params
{
	float                                              StartScreenX;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartScreenY;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndScreenX;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndScreenY;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                LineColor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.HUD.Deproject
struct AHUD_Deproject_Params
{
	float                                              ScreenX;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ScreenY;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WorldPosition;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WorldDirection;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.HUD.AddHitBox
struct AHUD_AddHitBox_Params
{
	struct FVector2D                                   Position;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Size;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bConsumesInput;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Priority;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.HUD.AddDebugText
struct AHUD_AddDebugText_Params
{
	struct FString                                     DebugText;                                                // (Parm, ZeroConstructor)
	class AActor*                                      SrcActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Offset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DesiredOffset;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FColor                                      TextColor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSkipOverwriteCheck;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAbsoluteLocation;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bKeepAttachedToActor;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UFont*                                       InFont;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FontScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.ToggleActive
struct UActorComponent_ToggleActive_Params
{
};

// Function Engine.ActorComponent.SetIsReplicated
struct UActorComponent_SetIsReplicated_Params
{
	bool                                               ShouldReplicate;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.SetActive
struct UActorComponent_SetActive_Params
{
	bool                                               bNewActive;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bReset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.RemoveTickPrerequisiteComponent
struct UActorComponent_RemoveTickPrerequisiteComponent_Params
{
	class UActorComponent*                             PrerequisiteComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Engine.ActorComponent.RemoveTickPrerequisiteActor
struct UActorComponent_RemoveTickPrerequisiteActor_Params
{
	class AActor*                                      PrerequisiteActor;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.OnRep_IsActive
struct UActorComponent_OnRep_IsActive_Params
{
};

// Function Engine.ActorComponent.K2_DestroyComponent
struct UActorComponent_K2_DestroyComponent_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.IsActive
struct UActorComponent_IsActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.ActorComponent.GetWorld
struct UActorComponent_GetWorld_Params
{
	class UWorld*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.ActorComponent.GetOwner
struct UActorComponent_GetOwner_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.ActorComponent.Deactivate
struct UActorComponent_Deactivate_Params
{
};

// Function Engine.ActorComponent.ComponentHasTag
struct UActorComponent_ComponentHasTag_Params
{
	struct FName                                       Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.ActorComponent.AddTickPrerequisiteComponent
struct UActorComponent_AddTickPrerequisiteComponent_Params
{
	class UActorComponent*                             PrerequisiteComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Engine.ActorComponent.AddTickPrerequisiteActor
struct UActorComponent_AddTickPrerequisiteActor_Params
{
	class AActor*                                      PrerequisiteActor;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.Activate
struct UActorComponent_Activate_Params
{
	bool                                               bReset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.DestructibleActor.ActorFractureSignature__DelegateSignature
struct ADestructibleActor_ActorFractureSignature__DelegateSignature_Params
{
	struct FVector                                     HitPoint;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     HitDirection;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Engine.SceneComponent.ToggleVisibility
struct USceneComponent_ToggleVisibility_Params
{
	bool                                               bPropagateToChildren;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SceneComponent.StopSound
struct USceneComponent_StopSound_Params
{
	class USoundBase*                                  SoundToStop;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FadeOutTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SceneComponent.SnapTo
struct USceneComponent_SnapTo_Params
{
	class USceneComponent*                             InParent;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       InSocketName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SceneComponent.SetWorldTransform
struct USceneComponent_SetWorldTransform_Params
{
	struct FTransform                                  NewTransform;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SceneComponent.SetWorldScale3D
struct USceneComponent_SetWorldScale3D_Params
{
	struct FVector                                     NewScale;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SceneComponent.SetWorldRotation
struct USceneComponent_SetWorldRotation_Params
{
	struct FRotator                                    NewRotation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SceneComponent.SetWorldLocation
struct USceneComponent_SetWorldLocation_Params
{
	struct FVector                                     NewLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SceneComponent.SetVisibility
struct USceneComponent_SetVisibility_Params
{
	bool                                               bNewVisibility;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPropagateToChildren;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SceneComponent.SetRelativeTransform
struct USceneComponent_SetRelativeTransform_Params
{
	struct FTransform                                  NewTransform;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SceneComponent.SetRelativeScale3D
struct USceneComponent_SetRelativeScale3D_Params
{
	struct FVector                                     NewScale3D;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SceneComponent.SetRelativeRotation
struct USceneComponent_SetRelativeRotation_Params
{
	struct FRotator                                    NewRotation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SceneComponent.SetRelativeLocation
struct USceneComponent_SetRelativeLocation_Params
{
	struct FVector                                     NewLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SceneComponent.SetHiddenInGame
struct USceneComponent_SetHiddenInGame_Params
{
	bool                                               NewHidden;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPropagateToChildren;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SceneComponent.SetAbsolute
struct USceneComponent_SetAbsolute_Params
{
	bool                                               bNewAbsoluteLocation;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bNewAbsoluteRotation;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bNewAbsoluteScale;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SceneComponent.ResetRelativeTransform
struct USceneComponent_ResetRelativeTransform_Params
{
};

// Function Engine.SceneComponent.PhysicsVolumeChanged__DelegateSignature
struct USceneComponent_PhysicsVolumeChanged__DelegateSignature_Params
{
	class APhysicsVolume*                              NewVolume;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SceneComponent.OnRep_Visibility
struct USceneComponent_OnRep_Visibility_Params
{
	bool                                               OldValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SceneComponent.OnRep_Transform
struct USceneComponent_OnRep_Transform_Params
{
};

// Function Engine.SceneComponent.K2_GetComponentToWorld
struct USceneComponent_K2_GetComponentToWorld_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.SceneComponent.K2_GetComponentScale
struct USceneComponent_K2_GetComponentScale_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SceneComponent.K2_GetComponentRotation
struct USceneComponent_K2_GetComponentRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SceneComponent.K2_GetComponentLocation
struct USceneComponent_K2_GetComponentLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SceneComponent.K2_AttachTo
struct USceneComponent_K2_AttachTo_Params
{
	class USceneComponent*                             InParent;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       InSocketName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAttachLocation>                       AttachType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWeldSimulatedBodies;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SceneComponent.IsVisible
struct USceneComponent_IsVisible_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SceneComponent.IsSimulatingPhysics
struct USceneComponent_IsSimulatingPhysics_Params
{
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SceneComponent.IsAnySimulatingPhysics
struct USceneComponent_IsAnySimulatingPhysics_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SceneComponent.GetWorldLocation
struct USceneComponent_GetWorldLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SceneComponent.GetUpVector
struct USceneComponent_GetUpVector_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SceneComponent.GetSocketTransform
struct USceneComponent_GetSocketTransform_Params
{
	struct FName                                       InSocketName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERelativeTransformSpace>               TransformSpace;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.SceneComponent.GetSocketRotation
struct USceneComponent_GetSocketRotation_Params
{
	struct FName                                       InSocketName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SceneComponent.GetSocketQuaternion
struct USceneComponent_GetSocketQuaternion_Params
{
	struct FName                                       InSocketName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FQuat                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.SceneComponent.GetSocketLocation
struct USceneComponent_GetSocketLocation_Params
{
	struct FName                                       InSocketName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SceneComponent.GetRightVector
struct USceneComponent_GetRightVector_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SceneComponent.GetRelativeTransform
struct USceneComponent_GetRelativeTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.SceneComponent.GetPhysicsVolume
struct USceneComponent_GetPhysicsVolume_Params
{
	class APhysicsVolume*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SceneComponent.GetParentComponents
struct USceneComponent_GetParentComponents_Params
{
	TArray<class USceneComponent*>                     Parents;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function Engine.SceneComponent.GetNumChildrenComponents
struct USceneComponent_GetNumChildrenComponents_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SceneComponent.GetForwardVector
struct USceneComponent_GetForwardVector_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SceneComponent.GetComponentVelocity
struct USceneComponent_GetComponentVelocity_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SceneComponent.GetChildrenComponents
struct USceneComponent_GetChildrenComponents_Params
{
	bool                                               bIncludeAllDescendants;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class USceneComponent*>                     Children;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function Engine.SceneComponent.GetChildComponent
struct USceneComponent_GetChildComponent_Params
{
	int                                                ChildIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Engine.SceneComponent.GetAttachParent
struct USceneComponent_GetAttachParent_Params
{
	class USceneComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Engine.SceneComponent.GetAllSocketNames
struct USceneComponent_GetAllSocketNames_Params
{
	TArray<struct FName>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.SceneComponent.DoesSocketExist
struct USceneComponent_DoesSocketExist_Params
{
	struct FName                                       InSocketName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SceneComponent.DetachFromParent
struct USceneComponent_DetachFromParent_Params
{
	bool                                               bMaintainWorldPosition;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SceneComponent.AddWorldTransform
struct USceneComponent_AddWorldTransform_Params
{
	struct FTransform                                  DeltaTransform;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SceneComponent.AddWorldRotation
struct USceneComponent_AddWorldRotation_Params
{
	struct FRotator                                    DeltaRotation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SceneComponent.AddWorldOffset
struct USceneComponent_AddWorldOffset_Params
{
	struct FVector                                     DeltaLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SceneComponent.AddRelativeRotation
struct USceneComponent_AddRelativeRotation_Params
{
	struct FRotator                                    DeltaRotation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SceneComponent.AddRelativeLocation
struct USceneComponent_AddRelativeLocation_Params
{
	struct FVector                                     DeltaLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SceneComponent.AddLocalTransform
struct USceneComponent_AddLocalTransform_Params
{
	struct FTransform                                  DeltaTransform;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SceneComponent.AddLocalRotation
struct USceneComponent_AddLocalRotation_Params
{
	struct FRotator                                    DeltaRotation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SceneComponent.AddLocalOffset
struct USceneComponent_AddLocalOffset_Params
{
	struct FVector                                     DeltaLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.WasRecentlyVisible
struct UPrimitiveComponent_WasRecentlyVisible_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.WakeRigidBody
struct UPrimitiveComponent_WakeRigidBody_Params
{
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.WakeAllRigidBodies
struct UPrimitiveComponent_WakeAllRigidBodies_Params
{
};

// Function Engine.PrimitiveComponent.SetTranslucentSortPriority
struct UPrimitiveComponent_SetTranslucentSortPriority_Params
{
	int                                                NewTranslucentSortPriority;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetSimulatePhysics
struct UPrimitiveComponent_SetSimulatePhysics_Params
{
	bool                                               bSimulate;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetRenderCustomDepth
struct UPrimitiveComponent_SetRenderCustomDepth_Params
{
	bool                                               bValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetPhysMaterialOverride
struct UPrimitiveComponent_SetPhysMaterialOverride_Params
{
	class UPhysicalMaterial*                           NewPhysMaterial;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocity
struct UPrimitiveComponent_SetPhysicsMaxAngularVelocity_Params
{
	float                                              NewMaxAngVel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAddToCurrent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetPhysicsLinearVelocity
struct UPrimitiveComponent_SetPhysicsLinearVelocity_Params
{
	struct FVector                                     NewVel;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAddToCurrent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetPhysicsAngularVelocity
struct UPrimitiveComponent_SetPhysicsAngularVelocity_Params
{
	struct FVector                                     NewAngVel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAddToCurrent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetOwnerNoSee
struct UPrimitiveComponent_SetOwnerNoSee_Params
{
	bool                                               bNewOwnerNoSee;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetOnlyOwnerSee
struct UPrimitiveComponent_SetOnlyOwnerSee_Params
{
	bool                                               bNewOnlyOwnerSee;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetNotifyRigidBodyCollision
struct UPrimitiveComponent_SetNotifyRigidBodyCollision_Params
{
	bool                                               bNewNotifyRigidBodyCollision;                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetMaterial
struct UPrimitiveComponent_SetMaterial_Params
{
	int                                                ElementIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          Material;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetLinearDamping
struct UPrimitiveComponent_SetLinearDamping_Params
{
	float                                              InDamping;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetEnableGravity
struct UPrimitiveComponent_SetEnableGravity_Params
{
	bool                                               bGravityEnabled;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetCollisionResponseToChannel
struct UPrimitiveComponent_SetCollisionResponseToChannel_Params
{
	TEnumAsByte<ECollisionChannel>                     Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    NewResponse;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetCollisionResponseToAllChannels
struct UPrimitiveComponent_SetCollisionResponseToAllChannels_Params
{
	TEnumAsByte<ECollisionResponse>                    NewResponse;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetCollisionProfileName
struct UPrimitiveComponent_SetCollisionProfileName_Params
{
	struct FName                                       InCollisionProfileName;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetCollisionObjectType
struct UPrimitiveComponent_SetCollisionObjectType_Params
{
	TEnumAsByte<ECollisionChannel>                     Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetCollisionEnabled
struct UPrimitiveComponent_SetCollisionEnabled_Params
{
	TEnumAsByte<ECollisionEnabled>                     NewType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetCastShadow
struct UPrimitiveComponent_SetCastShadow_Params
{
	bool                                               NewCastShadow;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetAngularDamping
struct UPrimitiveComponent_SetAngularDamping_Params
{
	float                                              InDamping;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetAllPhysicsLinearVelocity
struct UPrimitiveComponent_SetAllPhysicsLinearVelocity_Params
{
	struct FVector                                     NewVel;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAddToCurrent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.PutRigidBodyToSleep
struct UPrimitiveComponent_PutRigidBodyToSleep_Params
{
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.K2_LineTraceComponent
struct UPrimitiveComponent_K2_LineTraceComponent_Params
{
	struct FVector                                     TraceStart;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TraceEnd;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShowTrace;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitNormal;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.IsGravityEnabled
struct UPrimitiveComponent_IsGravityEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.IgnoreActorWhenMoving
struct UPrimitiveComponent_IgnoreActorWhenMoving_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldIgnore;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetWalkableSlopeOverride
struct UPrimitiveComponent_GetWalkableSlopeOverride_Params
{
	struct FWalkableSlopeOverride                      ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function Engine.PrimitiveComponent.GetPhysicsLinearVelocity
struct UPrimitiveComponent_GetPhysicsLinearVelocity_Params
{
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetPhysicsAngularVelocity
struct UPrimitiveComponent_GetPhysicsAngularVelocity_Params
{
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetOverlappingComponents
struct UPrimitiveComponent_GetOverlappingComponents_Params
{
	TArray<class UPrimitiveComponent*>                 OverlappingComponents;                                    // (Parm, OutParm, ZeroConstructor)
};

// Function Engine.PrimitiveComponent.GetOverlappingActors
struct UPrimitiveComponent_GetOverlappingActors_Params
{
	TArray<class AActor*>                              OverlappingActors;                                        // (Parm, OutParm, ZeroConstructor)
	class UClass*                                      ClassFilter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetOverlapInfos
struct UPrimitiveComponent_GetOverlapInfos_Params
{
	TArray<struct FOverlapInfo>                        ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Engine.PrimitiveComponent.GetNumMaterials
struct UPrimitiveComponent_GetNumMaterials_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetMoveIgnoreActors
struct UPrimitiveComponent_GetMoveIgnoreActors_Params
{
	TArray<TWeakObjectPtr<class AActor>>               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.PrimitiveComponent.GetMaterial
struct UPrimitiveComponent_GetMaterial_Params
{
	int                                                ElementIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetMass
struct UPrimitiveComponent_GetMass_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetLinearDamping
struct UPrimitiveComponent_GetLinearDamping_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetCollisionProfileName
struct UPrimitiveComponent_GetCollisionProfileName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetAngularDamping
struct UPrimitiveComponent_GetAngularDamping_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.CreateDynamicMaterialInstance
struct UPrimitiveComponent_CreateDynamicMaterialInstance_Params
{
	int                                                ElementIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          SourceMaterial;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamicFromMaterial
struct UPrimitiveComponent_CreateAndSetMaterialInstanceDynamicFromMaterial_Params
{
	int                                                ElementIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          Parent;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamic
struct UPrimitiveComponent_CreateAndSetMaterialInstanceDynamic_Params
{
	int                                                ElementIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.ComponentOnReleasedSignature__DelegateSignature
struct UPrimitiveComponent_ComponentOnReleasedSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         TouchedComponent;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.ComponentOnInputTouchEndSignature__DelegateSignature
struct UPrimitiveComponent_ComponentOnInputTouchEndSignature__DelegateSignature_Params
{
	TEnumAsByte<ETouchIndex>                           FingerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         TouchedComponent;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.ComponentOnInputTouchBeginSignature__DelegateSignature
struct UPrimitiveComponent_ComponentOnInputTouchBeginSignature__DelegateSignature_Params
{
	TEnumAsByte<ETouchIndex>                           FingerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         TouchedComponent;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.ComponentOnClickedSignature__DelegateSignature
struct UPrimitiveComponent_ComponentOnClickedSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         TouchedComponent;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.ComponentHitSignature__DelegateSignature
struct UPrimitiveComponent_ComponentHitSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Engine.PrimitiveComponent.ComponentEndTouchOverSignature__DelegateSignature
struct UPrimitiveComponent_ComponentEndTouchOverSignature__DelegateSignature_Params
{
	TEnumAsByte<ETouchIndex>                           FingerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         TouchedComponent;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.ComponentEndOverlapSignature__DelegateSignature
struct UPrimitiveComponent_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.ComponentEndCursorOverSignature__DelegateSignature
struct UPrimitiveComponent_ComponentEndCursorOverSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         TouchedComponent;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.ComponentBeginTouchOverSignature__DelegateSignature
struct UPrimitiveComponent_ComponentBeginTouchOverSignature__DelegateSignature_Params
{
	TEnumAsByte<ETouchIndex>                           FingerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         TouchedComponent;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.ComponentBeginOverlapSignature__DelegateSignature
struct UPrimitiveComponent_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Engine.PrimitiveComponent.ComponentBeginCursorOverSignature__DelegateSignature
struct UPrimitiveComponent_ComponentBeginCursorOverSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         TouchedComponent;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.ClearMoveIgnoreActors
struct UPrimitiveComponent_ClearMoveIgnoreActors_Params
{
};

// Function Engine.PrimitiveComponent.AddTorque
struct UPrimitiveComponent_AddTorque_Params
{
	struct FVector                                     Torque;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.AddRadialImpulse
struct UPrimitiveComponent_AddRadialImpulse_Params
{
	struct FVector                                     Origin;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Strength;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERadialImpulseFalloff>                 Falloff;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bVelChange;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.AddRadialForce
struct UPrimitiveComponent_AddRadialForce_Params
{
	struct FVector                                     Origin;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Strength;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERadialImpulseFalloff>                 Falloff;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.AddImpulseAtLocation
struct UPrimitiveComponent_AddImpulseAtLocation_Params
{
	struct FVector                                     Impulse;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.AddImpulse
struct UPrimitiveComponent_AddImpulse_Params
{
	struct FVector                                     Impulse;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bVelChange;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.AddForceAtLocation
struct UPrimitiveComponent_AddForceAtLocation_Params
{
	struct FVector                                     Force;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.AddForce
struct UPrimitiveComponent_AddForce_Params
{
	struct FVector                                     Force;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Pawn.SpawnDefaultController
struct APawn_SpawnDefaultController_Params
{
};

// Function Engine.Pawn.SetCanAffectNavigationGeneration
struct APawn_SetCanAffectNavigationGeneration_Params
{
	bool                                               bNewValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Pawn.ReceiveUnpossessed
struct APawn_ReceiveUnpossessed_Params
{
	class AController*                                 OldController;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Pawn.ReceivePossessed
struct APawn_ReceivePossessed_Params
{
	class AController*                                 NewController;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Pawn.PawnMakeNoise
struct APawn_PawnMakeNoise_Params
{
	float                                              Loudness;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NoiseLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseNoiseMakerLocation;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      NoiseMaker;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Pawn.OnRep_PlayerState
struct APawn_OnRep_PlayerState_Params
{
};

// Function Engine.Pawn.OnRep_Controller
struct APawn_OnRep_Controller_Params
{
};

// Function Engine.Pawn.LaunchPawn
struct APawn_LaunchPawn_Params
{
	struct FVector                                     LaunchVelocity;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bXYOverride;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bZOverride;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Pawn.K2_GetMovementInputVector
struct APawn_K2_GetMovementInputVector_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Pawn.IsWalking
struct APawn_IsWalking_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Pawn.IsMoveInputIgnored
struct APawn_IsMoveInputIgnored_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Pawn.IsLocallyControlled
struct APawn_IsLocallyControlled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Pawn.IsFalling
struct APawn_IsFalling_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Pawn.IsCrouched
struct APawn_IsCrouched_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Pawn.IsControlled
struct APawn_IsControlled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Pawn.GetPendingMovementInputVector
struct APawn_GetPendingMovementInputVector_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Pawn.GetNavAgentLocation
struct APawn_GetNavAgentLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Pawn.GetMovementComponent
struct APawn_GetMovementComponent_Params
{
	class UPawnMovementComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Engine.Pawn.GetMovementBaseActor
struct APawn_GetMovementBaseActor_Params
{
	class APawn*                                       Pawn;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Pawn.GetLastMovementInputVector
struct APawn_GetLastMovementInputVector_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Pawn.GetControlRotation
struct APawn_GetControlRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Pawn.GetController
struct APawn_GetController_Params
{
	class AController*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Pawn.GetBaseAimRotation
struct APawn_GetBaseAimRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Pawn.DetachFromControllerPendingDestroy
struct APawn_DetachFromControllerPendingDestroy_Params
{
};

// Function Engine.Pawn.ConsumeMovementInputVector
struct APawn_ConsumeMovementInputVector_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Pawn.AddMovementInput
struct APawn_AddMovementInput_Params
{
	struct FVector                                     WorldDirection;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ScaleValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Pawn.AddControllerYawInput
struct APawn_AddControllerYawInput_Params
{
	float                                              Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Pawn.AddControllerRollInput
struct APawn_AddControllerRollInput_Params
{
	float                                              Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Pawn.AddControllerPitchInput
struct APawn_AddControllerPitchInput_Params
{
	float                                              Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Character.UnProne
struct ACharacter_UnProne_Params
{
	bool                                               bClientSimulation;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Character.UnCrouch
struct ACharacter_UnCrouch_Params
{
	bool                                               bClientSimulation;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Character.StopJumping
struct ACharacter_StopJumping_Params
{
};

// Function Engine.Character.StopAnimMontage
struct ACharacter_StopAnimMontage_Params
{
	class UAnimMontage*                                AnimMontage;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Character.Prone
struct ACharacter_Prone_Params
{
	bool                                               bClientSimulation;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Character.PlayAnimMontage
struct ACharacter_PlayAnimMontage_Params
{
	class UAnimMontage*                                AnimMontage;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InPlayRate;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       StartSectionName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForceTickPoseAndServerUpdateMesh;                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForceTickPoseOnServer;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Character.OnWalkingOffLedge
struct ACharacter_OnWalkingOffLedge_Params
{
};

// Function Engine.Character.OnRep_RootMotion
struct ACharacter_OnRep_RootMotion_Params
{
};

// Function Engine.Character.OnRep_ReplicatedBasedMovement
struct ACharacter_OnRep_ReplicatedBasedMovement_Params
{
};

// Function Engine.Character.OnRep_IsProne
struct ACharacter_OnRep_IsProne_Params
{
};

// Function Engine.Character.OnRep_IsCrouched
struct ACharacter_OnRep_IsCrouched_Params
{
};

// Function Engine.Character.OnLaunched
struct ACharacter_OnLaunched_Params
{
	struct FVector                                     LaunchVelocity;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bXYOverride;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bZOverride;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Character.OnLanded
struct ACharacter_OnLanded_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Engine.Character.OnJumped
struct ACharacter_OnJumped_Params
{
};

// Function Engine.Character.MovementModeChangedSignature__DelegateSignature
struct ACharacter_MovementModeChangedSignature__DelegateSignature_Params
{
	class ACharacter*                                  Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         PrevMovementMode;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PreviousCustomMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Character.LaunchCharacter
struct ACharacter_LaunchCharacter_Params
{
	struct FVector                                     LaunchVelocity;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bXYOverride;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bZOverride;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Character.K2_UpdateCustomMovement
struct ACharacter_K2_UpdateCustomMovement_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Character.K2_OnStartCrouch
struct ACharacter_K2_OnStartCrouch_Params
{
	float                                              HalfHeightAdjust;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ScaledHalfHeightAdjust;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Character.K2_OnMovementModeChanged
struct ACharacter_K2_OnMovementModeChanged_Params
{
	TEnumAsByte<EMovementMode>                         PrevMovementMode;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         NewMovementMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PrevCustomMode;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      NewCustomMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Character.K2_OnEndCrouch
struct ACharacter_K2_OnEndCrouch_Params
{
	float                                              HalfHeightAdjust;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ScaledHalfHeightAdjust;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Character.Jump
struct ACharacter_Jump_Params
{
};

// Function Engine.Character.IsPlayingRootMotion
struct ACharacter_IsPlayingRootMotion_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Character.IsJumpProvidingForce
struct ACharacter_IsJumpProvidingForce_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Character.GetCurrentMontage
struct ACharacter_GetCurrentMontage_Params
{
	class UAnimMontage*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Character.Crouch
struct ACharacter_Crouch_Params
{
	bool                                               bClientSimulation;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Character.ClientCheatWalk
struct ACharacter_ClientCheatWalk_Params
{
};

// Function Engine.Character.ClientCheatGhost
struct ACharacter_ClientCheatGhost_Params
{
};

// Function Engine.Character.ClientCheatFly
struct ACharacter_ClientCheatFly_Params
{
};

// Function Engine.Character.CharacterMovementUpdatedSignature__DelegateSignature
struct ACharacter_CharacterMovementUpdatedSignature__DelegateSignature_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OldLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OldVelocity;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Character.CanJumpInternal
struct ACharacter_CanJumpInternal_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Character.CanJump
struct ACharacter_CanJump_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PlayerState.OnRep_UniqueId
struct APlayerState_OnRep_UniqueId_Params
{
};

// Function Engine.PlayerState.OnRep_Score
struct APlayerState_OnRep_Score_Params
{
};

// Function Engine.PlayerState.OnRep_PlayerName
struct APlayerState_OnRep_PlayerName_Params
{
};

// Function Engine.PlayerState.OnRep_bIsInactive
struct APlayerState_OnRep_bIsInactive_Params
{
};

// Function Engine.Emitter.ToggleActive
struct AEmitter_ToggleActive_Params
{
};

// Function Engine.Emitter.SetVectorParameter
struct AEmitter_SetVectorParameter_Params
{
	struct FName                                       ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Param;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Emitter.SetTemplate
struct AEmitter_SetTemplate_Params
{
	class UParticleSystem*                             NewTemplate;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Emitter.SetMaterialParameter
struct AEmitter_SetMaterialParameter_Params
{
	struct FName                                       ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          Param;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Emitter.SetFloatParameter
struct AEmitter_SetFloatParameter_Params
{
	struct FName                                       ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Param;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Emitter.SetColorParameter
struct AEmitter_SetColorParameter_Params
{
	struct FName                                       ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Param;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Emitter.SetActorParameter
struct AEmitter_SetActorParameter_Params
{
	struct FName                                       ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Param;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Emitter.ParticleSpawnSignature__DelegateSignature
struct AEmitter_ParticleSpawnSignature__DelegateSignature_Params
{
	struct FName                                       EventName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EmitterTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Emitter.ParticleDeathSignature__DelegateSignature
struct AEmitter_ParticleDeathSignature__DelegateSignature_Params
{
	struct FName                                       EventName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EmitterTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ParticleTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Emitter.ParticleCollisionSignature__DelegateSignature
struct AEmitter_ParticleCollisionSignature__DelegateSignature_Params
{
	struct FName                                       EventName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EmitterTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ParticleTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Emitter.ParticleBurstSignature__DelegateSignature
struct AEmitter_ParticleBurstSignature__DelegateSignature_Params
{
	struct FName                                       EventName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EmitterTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ParticleCount;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Emitter.OnRep_bCurrentlyActive
struct AEmitter_OnRep_bCurrentlyActive_Params
{
};

// Function Engine.Emitter.OnParticleSystemFinished
struct AEmitter_OnParticleSystemFinished_Params
{
	class UParticleSystemComponent*                    FinishedComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Engine.Emitter.IsActive
struct AEmitter_IsActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Emitter.Deactivate
struct AEmitter_Deactivate_Params
{
};

// Function Engine.Emitter.Activate
struct AEmitter_Activate_Params
{
};

// Function Engine.WorldSettings.PooledParticleSystemFinished
struct AWorldSettings_PooledParticleSystemFinished_Params
{
	class UParticleSystemComponent*                    FinishedComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Engine.MovementComponent.StopMovementImmediately
struct UMovementComponent_StopMovementImmediately_Params
{
};

// Function Engine.MovementComponent.SnapUpdatedComponentToPlane
struct UMovementComponent_SnapUpdatedComponentToPlane_Params
{
};

// Function Engine.MovementComponent.SetUpdatedComponent
struct UMovementComponent_SetUpdatedComponent_Params
{
	class UPrimitiveComponent*                         NewUpdatedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Engine.MovementComponent.SetPlaneConstraintOrigin
struct UMovementComponent_SetPlaneConstraintOrigin_Params
{
	struct FVector                                     PlaneOrigin;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.MovementComponent.SetPlaneConstraintNormal
struct UMovementComponent_SetPlaneConstraintNormal_Params
{
	struct FVector                                     PlaneNormal;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.MovementComponent.SetPlaneConstraintFromVectors
struct UMovementComponent_SetPlaneConstraintFromVectors_Params
{
	struct FVector                                     Forward;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Up;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.MovementComponent.PhysicsVolumeChanged
struct UMovementComponent_PhysicsVolumeChanged_Params
{
	class APhysicsVolume*                              NewVolume;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.MovementComponent.K2_MoveUpdatedComponent
struct UMovementComponent_K2_MoveUpdatedComponent_Params
{
	struct FVector                                     Delta;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    NewRotation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  OutHit;                                                   // (Parm, OutParm)
	bool                                               bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.MovementComponent.K2_GetModifiedMaxSpeed
struct UMovementComponent_K2_GetModifiedMaxSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.MovementComponent.K2_GetMaxSpeedModifier
struct UMovementComponent_K2_GetMaxSpeedModifier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.MovementComponent.IsExceedingMaxSpeed
struct UMovementComponent_IsExceedingMaxSpeed_Params
{
	float                                              MaxSpeed;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.MovementComponent.GetPlaneConstraintOrigin
struct UMovementComponent_GetPlaneConstraintOrigin_Params
{
	struct FVector                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData)
};

// Function Engine.MovementComponent.GetPlaneConstraintNormal
struct UMovementComponent_GetPlaneConstraintNormal_Params
{
	struct FVector                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData)
};

// Function Engine.MovementComponent.GetPhysicsVolume
struct UMovementComponent_GetPhysicsVolume_Params
{
	class APhysicsVolume*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.MovementComponent.GetMaxSpeed
struct UMovementComponent_GetMaxSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.MovementComponent.GetGravityZ
struct UMovementComponent_GetGravityZ_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.MovementComponent.ConstrainLocationToPlane
struct UMovementComponent_ConstrainLocationToPlane_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.MovementComponent.ConstrainDirectionToPlane
struct UMovementComponent_ConstrainDirectionToPlane_Params
{
	struct FVector                                     Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.NavMovementComponent.StopMovementKeepPathing
struct UNavMovementComponent_StopMovementKeepPathing_Params
{
};

// Function Engine.NavMovementComponent.StopActiveMovement
struct UNavMovementComponent_StopActiveMovement_Params
{
};

// Function Engine.NavMovementComponent.IsSwimming
struct UNavMovementComponent_IsSwimming_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.NavMovementComponent.IsMovingOnGround
struct UNavMovementComponent_IsMovingOnGround_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.NavMovementComponent.IsFlying
struct UNavMovementComponent_IsFlying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.NavMovementComponent.IsFalling
struct UNavMovementComponent_IsFalling_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.NavMovementComponent.IsCrouching
struct UNavMovementComponent_IsCrouching_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PawnMovementComponent.K2_GetInputVector
struct UPawnMovementComponent_K2_GetInputVector_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PawnMovementComponent.IsMoveInputIgnored
struct UPawnMovementComponent_IsMoveInputIgnored_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PawnMovementComponent.GetPendingInputVector
struct UPawnMovementComponent_GetPendingInputVector_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PawnMovementComponent.GetPawnOwner
struct UPawnMovementComponent_GetPawnOwner_Params
{
	class APawn*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PawnMovementComponent.GetLastInputVector
struct UPawnMovementComponent_GetLastInputVector_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PawnMovementComponent.ConsumeInputVector
struct UPawnMovementComponent_ConsumeInputVector_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PawnMovementComponent.AddInputVector
struct UPawnMovementComponent_AddInputVector_Params
{
	struct FVector                                     WorldVector;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.CharacterMovementComponent.SetWalkableFloorZ
struct UCharacterMovementComponent_SetWalkableFloorZ_Params
{
	float                                              InWalkableFloorZ;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.CharacterMovementComponent.SetWalkableFloorAngle
struct UCharacterMovementComponent_SetWalkableFloorAngle_Params
{
	float                                              InWalkableFloorAngle;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.CharacterMovementComponent.SetMovementMode
struct UCharacterMovementComponent_SetMovementMode_Params
{
	TEnumAsByte<EMovementMode>                         NewMovementMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      NewCustomMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.CharacterMovementComponent.SetGroupsToIgnore
struct UCharacterMovementComponent_SetGroupsToIgnore_Params
{
	int                                                GroupFlags;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.CharacterMovementComponent.SetGroupsToAvoid
struct UCharacterMovementComponent_SetGroupsToAvoid_Params
{
	int                                                GroupFlags;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.CharacterMovementComponent.SetAvoidanceGroup
struct UCharacterMovementComponent_SetAvoidanceGroup_Params
{
	int                                                GroupFlags;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.CharacterMovementComponent.SetAvoidanceEnabled
struct UCharacterMovementComponent_SetAvoidanceEnabled_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.CharacterMovementComponent.ServerMoveWithRotation
struct UCharacterMovementComponent_ServerMoveWithRotation_Params
{
	float                                              TimeStamp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize100                      InAccel;                                                  // (Parm)
	struct FVector_NetQuantize100                      ClientLoc;                                                // (Parm)
	unsigned char                                      CompressedMoveFlags;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ClientRoll;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           View;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         ClientMovementBase;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       ClientBaseBoneName;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ClientMovementMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ClientRotation;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.CharacterMovementComponent.ServerMoveOnlyRotation
struct UCharacterMovementComponent_ServerMoveOnlyRotation_Params
{
	float                                              TimeStamp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ClientRoll;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           View;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.CharacterMovementComponent.ServerMoveOldWithRotation
struct UCharacterMovementComponent_ServerMoveOldWithRotation_Params
{
	float                                              OldTimeStamp;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize100                      OldAccel;                                                 // (Parm)
	unsigned char                                      OldMoveFlags;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    OldRotation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.CharacterMovementComponent.ServerMoveOld
struct UCharacterMovementComponent_ServerMoveOld_Params
{
	float                                              OldTimeStamp;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize100                      OldAccel;                                                 // (Parm)
	unsigned char                                      OldMoveFlags;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.CharacterMovementComponent.ServerMoveDualWithRotation
struct UCharacterMovementComponent_ServerMoveDualWithRotation_Params
{
	float                                              TimeStamp0;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize100                      InAccel0;                                                 // (Parm)
	unsigned char                                      PendingFlags;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           View0;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeStamp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize100                      InAccel;                                                  // (Parm)
	struct FVector_NetQuantize100                      ClientLoc;                                                // (Parm)
	unsigned char                                      NewFlags;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ClientRoll;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           View;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         ClientMovementBase;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       ClientBaseBoneName;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ClientMovementMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    InRotation0;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    InRotation;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.CharacterMovementComponent.ServerMoveDualOnlyRotation
struct UCharacterMovementComponent_ServerMoveDualOnlyRotation_Params
{
	float                                              TimeStamp0;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           View0;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeStamp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ClientRoll;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           View;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.CharacterMovementComponent.ServerMoveDual
struct UCharacterMovementComponent_ServerMoveDual_Params
{
	float                                              TimeStamp0;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize100                      InAccel0;                                                 // (Parm)
	unsigned char                                      PendingFlags;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           View0;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeStamp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize100                      InAccel;                                                  // (Parm)
	struct FVector_NetQuantize100                      ClientLoc;                                                // (Parm)
	unsigned char                                      NewFlags;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ClientRoll;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           View;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         ClientMovementBase;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       ClientBaseBoneName;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ClientMovementMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.CharacterMovementComponent.ServerMove
struct UCharacterMovementComponent_ServerMove_Params
{
	float                                              TimeStamp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize100                      InAccel;                                                  // (Parm)
	struct FVector_NetQuantize100                      ClientLoc;                                                // (Parm)
	unsigned char                                      CompressedMoveFlags;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ClientRoll;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           View;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         ClientMovementBase;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       ClientBaseBoneName;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ClientMovementMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.CharacterMovementComponent.ServerJumpOutOfWater
struct UCharacterMovementComponent_ServerJumpOutOfWater_Params
{
	struct FVector_NetQuantize100                      WallNormal;                                               // (Parm)
	unsigned char                                      JumpFlag;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.CharacterMovementComponent.K2_GetWalkableFloorZ
struct UCharacterMovementComponent_K2_GetWalkableFloorZ_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.CharacterMovementComponent.K2_GetWalkableFloorAngle
struct UCharacterMovementComponent_K2_GetWalkableFloorAngle_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.CharacterMovementComponent.K2_GetModifiedMaxAcceleration
struct UCharacterMovementComponent_K2_GetModifiedMaxAcceleration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.CharacterMovementComponent.IsWalking
struct UCharacterMovementComponent_IsWalking_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.CharacterMovementComponent.IsWalkable
struct UCharacterMovementComponent_IsWalkable_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.CharacterMovementComponent.IsOnWalkableFloor
struct UCharacterMovementComponent_IsOnWalkableFloor_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.CharacterMovementComponent.GetValidPerchRadius
struct UCharacterMovementComponent_GetValidPerchRadius_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.CharacterMovementComponent.GetPerchRadiusThreshold
struct UCharacterMovementComponent_GetPerchRadiusThreshold_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.CharacterMovementComponent.GetMovementBase
struct UCharacterMovementComponent_GetMovementBase_Params
{
	class UPrimitiveComponent*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Engine.CharacterMovementComponent.GetMaxJumpHeight
struct UCharacterMovementComponent_GetMaxJumpHeight_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.CharacterMovementComponent.GetMaxAcceleration
struct UCharacterMovementComponent_GetMaxAcceleration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.CharacterMovementComponent.GetImpartedMovementBaseVelocity
struct UCharacterMovementComponent_GetImpartedMovementBaseVelocity_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.CharacterMovementComponent.GetCurrentAcceleration
struct UCharacterMovementComponent_GetCurrentAcceleration_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.CharacterMovementComponent.GetCharacterOwner
struct UCharacterMovementComponent_GetCharacterOwner_Params
{
	class ACharacter*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.CharacterMovementComponent.GetAnalogInputModifier
struct UCharacterMovementComponent_GetAnalogInputModifier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.CharacterMovementComponent.ClientVeryShortAdjustPosition
struct UCharacterMovementComponent_ClientVeryShortAdjustPosition_Params
{
	float                                              TimeStamp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewLoc;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         NewBase;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       NewBaseBoneName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHasBase;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBaseRelativePosition;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ServerMovementMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.CharacterMovementComponent.ClientDrawDebugSphere
struct UCharacterMovementComponent_ClientDrawDebugSphere_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FColor                                      SphereColor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LifeSpan;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.CharacterMovementComponent.ClientAdjustRootMotionPosition
struct UCharacterMovementComponent_ClientAdjustRootMotionPosition_Params
{
	float                                              TimeStamp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ServerMontageTrackPosition;                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ServerLoc;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantizeNormal                   ServerRotation;                                           // (Parm)
	float                                              ServerVelZ;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         ServerBase;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       ServerBoneName;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHasBase;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBaseRelativePosition;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ServerMovementMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.CharacterMovementComponent.ClientAdjustPosition
struct UCharacterMovementComponent_ClientAdjustPosition_Params
{
	float                                              TimeStamp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewLoc;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewVel;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         NewBase;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       NewBaseBoneName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHasBase;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBaseRelativePosition;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ServerMovementMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.CharacterMovementComponent.ClientAckGoodMove
struct UCharacterMovementComponent_ClientAckGoodMove_Params
{
	float                                              TimeStamp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.CharacterMovementComponent.CapsuleTouched
struct UCharacterMovementComponent_CapsuleTouched_Params
{
	class AActor*                                      Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Engine.CharacterMovementComponent.CalcVelocity
struct UCharacterMovementComponent_CalcVelocity_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Friction;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFluid;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BrakingDeceleration;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.CharacterMovementComponent.AddImpulse
struct UCharacterMovementComponent_AddImpulse_Params
{
	struct FVector                                     Impulse;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bVelocityChange;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MassScaleImpulseExponent;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.CharacterMovementComponent.AddForce
struct UCharacterMovementComponent_AddForce_Params
{
	struct FVector                                     Force;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.CheatManager.WidgetReflector
struct UCheatManager_WidgetReflector_Params
{
};

// Function Engine.CheatManager.Walk
struct UCheatManager_Walk_Params
{
};

// Function Engine.CheatManager.ViewSelf
struct UCheatManager_ViewSelf_Params
{
};

// Function Engine.CheatManager.ViewPlayer
struct UCheatManager_ViewPlayer_Params
{
	struct FString                                     S;                                                        // (Parm, ZeroConstructor)
};

// Function Engine.CheatManager.ViewClass
struct UCheatManager_ViewClass_Params
{
	class UClass*                                      DesiredClass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.CheatManager.ViewActor
struct UCheatManager_ViewActor_Params
{
	struct FName                                       ActorName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.CheatManager.ToggleDebugCamera
struct UCheatManager_ToggleDebugCamera_Params
{
};

// Function Engine.CheatManager.ToggleAILogging
struct UCheatManager_ToggleAILogging_Params
{
};

// Function Engine.CheatManager.TestCollisionDistance
struct UCheatManager_TestCollisionDistance_Params
{
};

// Function Engine.CheatManager.Teleport
struct UCheatManager_Teleport_Params
{
};

// Function Engine.CheatManager.Summon
struct UCheatManager_Summon_Params
{
	struct FString                                     ClassName;                                                // (Parm, ZeroConstructor)
};

// Function Engine.CheatManager.StreamLevelOut
struct UCheatManager_StreamLevelOut_Params
{
	struct FName                                       PackageName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.CheatManager.StreamLevelIn
struct UCheatManager_StreamLevelIn_Params
{
	struct FName                                       PackageName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.CheatManager.Slomo
struct UCheatManager_Slomo_Params
{
	float                                              T;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.CheatManager.SetWorldOrigin
struct UCheatManager_SetWorldOrigin_Params
{
};

// Function Engine.CheatManager.SetNavDrawDistance
struct UCheatManager_SetNavDrawDistance_Params
{
	float                                              DrawDistance;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.CheatManager.ServerToggleAILogging
struct UCheatManager_ServerToggleAILogging_Params
{
};

// Function Engine.CheatManager.RebuildNavigation
struct UCheatManager_RebuildNavigation_Params
{
};

// Function Engine.CheatManager.PlayersOnly
struct UCheatManager_PlayersOnly_Params
{
};

// Function Engine.CheatManager.OnlyLoadLevel
struct UCheatManager_OnlyLoadLevel_Params
{
	struct FName                                       PackageName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.CheatManager.LogLoc
struct UCheatManager_LogLoc_Params
{
};

// Function Engine.CheatManager.God
struct UCheatManager_God_Params
{
};

// Function Engine.CheatManager.Ghost
struct UCheatManager_Ghost_Params
{
};

// Function Engine.CheatManager.FreezeFrame
struct UCheatManager_FreezeFrame_Params
{
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.CheatManager.Fly
struct UCheatManager_Fly_Params
{
};

// Function Engine.CheatManager.FlushLog
struct UCheatManager_FlushLog_Params
{
};

// Function Engine.CheatManager.DumpVoiceMutingState
struct UCheatManager_DumpVoiceMutingState_Params
{
};

// Function Engine.CheatManager.DumpOnlineSessionState
struct UCheatManager_DumpOnlineSessionState_Params
{
};

// Function Engine.CheatManager.DestroyTarget
struct UCheatManager_DestroyTarget_Params
{
};

// Function Engine.CheatManager.DestroyPawns
struct UCheatManager_DestroyPawns_Params
{
	class UClass*                                      aClass;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.CheatManager.DestroyAll
struct UCheatManager_DestroyAll_Params
{
	class UClass*                                      aClass;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.CheatManager.DebugCapsuleSweepSize
struct UCheatManager_DebugCapsuleSweepSize_Params
{
	float                                              HalfHeight;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.CheatManager.DebugCapsuleSweepPawn
struct UCheatManager_DebugCapsuleSweepPawn_Params
{
};

// Function Engine.CheatManager.DebugCapsuleSweepComplex
struct UCheatManager_DebugCapsuleSweepComplex_Params
{
	bool                                               bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.CheatManager.DebugCapsuleSweepClear
struct UCheatManager_DebugCapsuleSweepClear_Params
{
};

// Function Engine.CheatManager.DebugCapsuleSweepChannel
struct UCheatManager_DebugCapsuleSweepChannel_Params
{
	TEnumAsByte<ECollisionChannel>                     Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.CheatManager.DebugCapsuleSweepCapture
struct UCheatManager_DebugCapsuleSweepCapture_Params
{
};

// Function Engine.CheatManager.DebugCapsuleSweep
struct UCheatManager_DebugCapsuleSweep_Params
{
};

// Function Engine.CheatManager.DamageTarget
struct UCheatManager_DamageTarget_Params
{
	float                                              DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.CheatManager.ChangeSize
struct UCheatManager_ChangeSize_Params
{
	float                                              F;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.CheatManager.BugItStringCreator
struct UCheatManager_BugItStringCreator_Params
{
	struct FVector                                     ViewLocation;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ViewRotation;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     GoString;                                                 // (Parm, OutParm, ZeroConstructor)
	struct FString                                     LocString;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function Engine.CheatManager.BugItGo
struct UCheatManager_BugItGo_Params
{
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Pitch;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Yaw;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Roll;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.CheatManager.BugIt
struct UCheatManager_BugIt_Params
{
	struct FString                                     ScreenShotDescription;                                    // (Parm, ZeroConstructor)
};

// Function Engine.DamageType.HandleDamage
struct UDamageType_HandleDamage_Params
{
	class AActor*                                      Victim;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	class AController*                                 EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.GameMode.ShouldSpawnAtStartSpot
struct AGameMode_ShouldSpawnAtStartSpot_Params
{
	class AController*                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.GameMode.SetBandwidthLimit
struct AGameMode_SetBandwidthLimit_Params
{
	float                                              AsyncIOBandwidthLimit;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.GameMode.K2_PostLogin
struct AGameMode_K2_PostLogin_Params
{
	class APlayerController*                           NewPlayer;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.GameMode.GetDefaultPawnClassForController
struct AGameMode_GetDefaultPawnClassForController_Params
{
	class AController*                                 InController;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.GameMode.ChoosePlayerStart
struct AGameMode_ChoosePlayerStart_Params
{
	class AController*                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.GameInstance.DebugRemovePlayer
struct UGameInstance_DebugRemovePlayer_Params
{
	int                                                ControllerId;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.GameInstance.DebugCreatePlayer
struct UGameInstance_DebugCreatePlayer_Params
{
	int                                                ControllerId;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.GameState.OnRep_SpectatorClass
struct AGameState_OnRep_SpectatorClass_Params
{
};

// Function Engine.GameState.OnRep_MatchState
struct AGameState_OnRep_MatchState_Params
{
};

// Function Engine.GameState.OnRep_GameModeClass
struct AGameState_OnRep_GameModeClass_Params
{
};

// Function Engine.GameState.BPNetSpawnActorAtLocation
struct AGameState_BPNetSpawnActorAtLocation_Params
{
	class UClass*                                      AnActorClass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AtLocation;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    AtRotation;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      EffectOwnerToIgnore;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxRangeToReplicate;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             attachToComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                dataIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       attachSocketName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.GameViewportClient.SSSwapControllers
struct UGameViewportClient_SSSwapControllers_Params
{
};

// Function Engine.GameViewportClient.ShowTitleSafeArea
struct UGameViewportClient_ShowTitleSafeArea_Params
{
};

// Function Engine.GameViewportClient.SetConsoleTarget
struct UGameViewportClient_SetConsoleTarget_Params
{
	int                                                PlayerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.MaterialInterface.GetPhysicalMaterial
struct UMaterialInterface_GetPhysicalMaterial_Params
{
	class UPhysicalMaterial*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.MaterialInterface.GetBaseMaterial
struct UMaterialInterface_GetBaseMaterial_Params
{
	class UMaterial*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.ParticleSystemComponent.SetVectorParameter
struct UParticleSystemComponent_SetVectorParameter_Params
{
	struct FName                                       ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Param;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ParticleSystemComponent.SetTrailSourceData
struct UParticleSystemComponent_SetTrailSourceData_Params
{
	struct FName                                       InFirstSocketName;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       InSecondSocketName;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETrailWidthMode>                       InWidthMode;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InWidth;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ParticleSystemComponent.SetTemplate
struct UParticleSystemComponent_SetTemplate_Params
{
	class UParticleSystem*                             NewTemplate;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ParticleSystemComponent.SetMaterialParameter
struct UParticleSystemComponent_SetMaterialParameter_Params
{
	struct FName                                       ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          Param;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ParticleSystemComponent.SetFloatParameter
struct UParticleSystemComponent_SetFloatParameter_Params
{
	struct FName                                       ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Param;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ParticleSystemComponent.SetEmitterEnable
struct UParticleSystemComponent_SetEmitterEnable_Params
{
	struct FName                                       EmitterName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bNewEnableState;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ParticleSystemComponent.SetColorParameter
struct UParticleSystemComponent_SetColorParameter_Params
{
	struct FName                                       ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Param;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ParticleSystemComponent.SetBeamTargetTangent
struct UParticleSystemComponent_SetBeamTargetTangent_Params
{
	int                                                EmitterIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewTangentPoint;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TargetIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ParticleSystemComponent.SetBeamTargetStrength
struct UParticleSystemComponent_SetBeamTargetStrength_Params
{
	int                                                EmitterIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewTargetStrength;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TargetIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ParticleSystemComponent.SetBeamTargetPoint
struct UParticleSystemComponent_SetBeamTargetPoint_Params
{
	int                                                EmitterIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewTargetPoint;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TargetIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ParticleSystemComponent.SetBeamSourceTangent
struct UParticleSystemComponent_SetBeamSourceTangent_Params
{
	int                                                EmitterIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewTangentPoint;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SourceIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ParticleSystemComponent.SetBeamSourceStrength
struct UParticleSystemComponent_SetBeamSourceStrength_Params
{
	int                                                EmitterIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewSourceStrength;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SourceIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ParticleSystemComponent.SetBeamSourcePoint
struct UParticleSystemComponent_SetBeamSourcePoint_Params
{
	int                                                EmitterIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewSourcePoint;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SourceIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ParticleSystemComponent.SetBeamEndPoint
struct UParticleSystemComponent_SetBeamEndPoint_Params
{
	int                                                EmitterIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewEndPoint;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ParticleSystemComponent.SetActorParameter
struct UParticleSystemComponent_SetActorParameter_Params
{
	struct FName                                       ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Param;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ParticleSystemComponent.OnSystemFinished__DelegateSignature
struct UParticleSystemComponent_OnSystemFinished__DelegateSignature_Params
{
	class UParticleSystemComponent*                    PSystem;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Engine.ParticleSystemComponent.GetNumActiveParticles
struct UParticleSystemComponent_GetNumActiveParticles_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.ParticleSystemComponent.GetNamedMaterial
struct UParticleSystemComponent_GetNamedMaterial_Params
{
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.ParticleSystemComponent.GenerateParticleEvent
struct UParticleSystemComponent_GenerateParticleEvent_Params
{
	struct FName                                       InEventName;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InEmitterTime;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InLocation;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InDirection;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InVelocity;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ParticleSystemComponent.EndTrails
struct UParticleSystemComponent_EndTrails_Params
{
};

// Function Engine.ParticleSystemComponent.CreateNamedDynamicMaterialInstance
struct UParticleSystemComponent_CreateNamedDynamicMaterialInstance_Params
{
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          SourceMaterial;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.ParticleSystemComponent.BeginTrails
struct UParticleSystemComponent_BeginTrails_Params
{
	struct FName                                       InFirstSocketName;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       InSecondSocketName;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETrailWidthMode>                       InWidthMode;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InWidth;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.DefaultPawn.TurnAtRate
struct ADefaultPawn_TurnAtRate_Params
{
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.DefaultPawn.Turn
struct ADefaultPawn_Turn_Params
{
	float                                              Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.DefaultPawn.MoveUp_World
struct ADefaultPawn_MoveUp_World_Params
{
	float                                              Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.DefaultPawn.MoveRight
struct ADefaultPawn_MoveRight_Params
{
	float                                              Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.DefaultPawn.MoveForward
struct ADefaultPawn_MoveForward_Params
{
	float                                              Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.DefaultPawn.LookUpAtRate
struct ADefaultPawn_LookUpAtRate_Params
{
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.DefaultPawn.LookUp
struct ADefaultPawn_LookUp_Params
{
	float                                              Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.AmbientSound.Stop
struct AAmbientSound_Stop_Params
{
};

// Function Engine.AmbientSound.Play
struct AAmbientSound_Play_Params
{
	float                                              StartTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.AmbientSound.FadeOut
struct AAmbientSound_FadeOut_Params
{
	float                                              FadeOutDuration;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FadeVolumeLevel;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.AmbientSound.FadeIn
struct AAmbientSound_FadeIn_Params
{
	float                                              FadeInDuration;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FadeVolumeLevel;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.AmbientSound.AdjustVolume
struct AAmbientSound_AdjustVolume_Params
{
	float                                              AdjustVolumeDuration;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AdjustVolumeLevel;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.World.GetWorldSettings
struct UWorld_GetWorldSettings_Params
{
	bool                                               bCheckStreamingPesistent;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bChecked;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AWorldSettings*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PostProcessVolume.PostprocessVolumeLeftSignature__DelegateSignature
struct APostProcessVolume_PostprocessVolumeLeftSignature__DelegateSignature_Params
{
};

// Function Engine.PostProcessVolume.PostprocessVolumeEnteredSignature__DelegateSignature
struct APostProcessVolume_PostprocessVolumeEnteredSignature__DelegateSignature_Params
{
};

// Function Engine.CameraActor.GetAutoActivatePlayerIndex
struct ACameraActor_GetAutoActivatePlayerIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.InputComponent.WasControllerKeyJustReleased
struct UInputComponent_WasControllerKeyJustReleased_Params
{
	struct FKey                                        Key;                                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.InputComponent.WasControllerKeyJustPressed
struct UInputComponent_WasControllerKeyJustPressed_Params
{
	struct FKey                                        Key;                                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.InputComponent.IsControllerKeyDown
struct UInputComponent_IsControllerKeyDown_Params
{
	struct FKey                                        Key;                                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.InputComponent.InputVectorAxisHandlerDynamicSignature__DelegateSignature
struct UInputComponent_InputVectorAxisHandlerDynamicSignature__DelegateSignature_Params
{
	struct FVector                                     AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.InputComponent.InputTouchHandlerDynamicSignature__DelegateSignature
struct UInputComponent_InputTouchHandlerDynamicSignature__DelegateSignature_Params
{
	TEnumAsByte<ETouchIndex>                           FingerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.InputComponent.InputGestureHandlerDynamicSignature__DelegateSignature
struct UInputComponent_InputGestureHandlerDynamicSignature__DelegateSignature_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.InputComponent.InputAxisHandlerDynamicSignature__DelegateSignature
struct UInputComponent_InputAxisHandlerDynamicSignature__DelegateSignature_Params
{
	float                                              AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.InputComponent.InputActionHandlerDynamicSignature__DelegateSignature
struct UInputComponent_InputActionHandlerDynamicSignature__DelegateSignature_Params
{
};

// Function Engine.InputComponent.GetTouchState
struct UInputComponent_GetTouchState_Params
{
	int                                                FingerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LocationX;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              LocationY;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsCurrentlyPressed;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.InputComponent.GetControllerVectorKeyState
struct UInputComponent_GetControllerVectorKeyState_Params
{
	struct FKey                                        Key;                                                      // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.InputComponent.GetControllerMouseDelta
struct UInputComponent_GetControllerMouseDelta_Params
{
	float                                              DeltaX;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaY;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.InputComponent.GetControllerKeyTimeDown
struct UInputComponent_GetControllerKeyTimeDown_Params
{
	struct FKey                                        Key;                                                      // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.InputComponent.GetControllerAnalogStickState
struct UInputComponent_GetControllerAnalogStickState_Params
{
	TEnumAsByte<EControllerAnalogStick>                WhichStick;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StickX;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              StickY;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.InputComponent.GetControllerAnalogKeyState
struct UInputComponent_GetControllerAnalogKeyState_Params
{
	struct FKey                                        Key;                                                      // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.DebugCameraController.ShowDebugSelectedInfo
struct ADebugCameraController_ShowDebugSelectedInfo_Params
{
};

// Function Engine.DecalActor.SetDecalMaterial
struct ADecalActor_SetDecalMaterial_Params
{
	class UMaterialInterface*                          NewDecalMaterial;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.DecalActor.GetDecalMaterial
struct ADecalActor_GetDecalMaterial_Params
{
	class UMaterialInterface*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.DecalActor.CreateDynamicMaterialInstance
struct ADecalActor_CreateDynamicMaterialInstance_Params
{
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.ExponentialHeightFog.OnRep_bEnabled
struct AExponentialHeightFog_OnRep_bEnabled_Params
{
};

// Function Engine.SkyLight.OnRep_bEnabled
struct ASkyLight_OnRep_bEnabled_Params
{
};

// Function Engine.LandscapeProxy.ChangeLODDistanceFactor
struct ALandscapeProxy_ChangeLODDistanceFactor_Params
{
	float                                              InLODDistanceFactor;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.LevelScriptActor.WorldOriginLocationChanged
struct ALevelScriptActor_WorldOriginLocationChanged_Params
{
	struct FIntVector                                  OldOriginLocation;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FIntVector                                  NewOriginLocation;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.LevelScriptActor.SetCinematicMode
struct ALevelScriptActor_SetCinematicMode_Params
{
	bool                                               bCinematicMode;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHidePlayer;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAffectsHUD;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAffectsMovement;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAffectsTurning;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.LevelScriptActor.RemoteEvent
struct ALevelScriptActor_RemoteEvent_Params
{
	struct FName                                       EventName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.LevelScriptActor.LevelReset
struct ALevelScriptActor_LevelReset_Params
{
};

// Function Engine.Light.ToggleEnabled
struct ALight_ToggleEnabled_Params
{
};

// Function Engine.Light.SetLightFunctionScale
struct ALight_SetLightFunctionScale_Params
{
	struct FVector                                     NewLightFunctionScale;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Light.SetLightFunctionMaterial
struct ALight_SetLightFunctionMaterial_Params
{
	class UMaterialInterface*                          NewLightFunctionMaterial;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Light.SetLightFunctionFadeDistance
struct ALight_SetLightFunctionFadeDistance_Params
{
	float                                              NewLightFunctionFadeDistance;                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Light.SetLightColor
struct ALight_SetLightColor_Params
{
	struct FLinearColor                                NewLightColor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Light.SetEnabled
struct ALight_SetEnabled_Params
{
	bool                                               bSetEnabled;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Light.SetCastShadows
struct ALight_SetCastShadows_Params
{
	bool                                               bNewValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Light.SetBrightness
struct ALight_SetBrightness_Params
{
	float                                              NewBrightness;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Light.SetAffectTranslucentLighting
struct ALight_SetAffectTranslucentLighting_Params
{
	bool                                               bNewValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Light.OnRep_bEnabled
struct ALight_OnRep_bEnabled_Params
{
};

// Function Engine.Light.IsEnabled
struct ALight_IsEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Light.GetLightColor
struct ALight_GetLightColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Light.GetBrightness
struct ALight_GetBrightness_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PointLight.SetRadius
struct APointLight_SetRadius_Params
{
	float                                              NewRadius;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PointLight.SetLightFalloffExponent
struct APointLight_SetLightFalloffExponent_Params
{
	float                                              NewLightFalloffExponent;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SpotLight.SetOuterConeAngle
struct ASpotLight_SetOuterConeAngle_Params
{
	float                                              NewOuterConeAngle;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SpotLight.SetInnerConeAngle
struct ASpotLight_SetInnerConeAngle_Params
{
	float                                              NewInnerConeAngle;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.MatineeActor.Stop
struct AMatineeActor_Stop_Params
{
};

// Function Engine.MatineeActor.SetPosition
struct AMatineeActor_SetPosition_Params
{
	float                                              NewPosition;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bJump;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.MatineeActor.SetLoopingState
struct AMatineeActor_SetLoopingState_Params
{
	bool                                               bNewLooping;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.MatineeActor.Reverse
struct AMatineeActor_Reverse_Params
{
};

// Function Engine.MatineeActor.Play
struct AMatineeActor_Play_Params
{
};

// Function Engine.MatineeActor.Pause
struct AMatineeActor_Pause_Params
{
};

// Function Engine.MatineeActor.OnMatineeEvent__DelegateSignature
struct AMatineeActor_OnMatineeEvent__DelegateSignature_Params
{
};

// Function Engine.MatineeActor.InitClientMatinee
struct AMatineeActor_InitClientMatinee_Params
{
};

// Function Engine.MatineeActor.ChangePlaybackDirection
struct AMatineeActor_ChangePlaybackDirection_Params
{
};

// Function Engine.MatineeActor.AddActorToGroup
struct AMatineeActor_AddActorToGroup_Params
{
	struct FName                                       GroupName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      TheGroupActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.NavLinkProxy.SmartLinkReachedSignature__DelegateSignature
struct ANavLinkProxy_SmartLinkReachedSignature__DelegateSignature_Params
{
	class AActor*                                      MovingActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DestinationPoint;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Engine.NavLinkProxy.SetSmartLinkEnabled
struct ANavLinkProxy_SetSmartLinkEnabled_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.NavLinkProxy.ResumePathFollowing
struct ANavLinkProxy_ResumePathFollowing_Params
{
	class AActor*                                      Agent;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.NavLinkProxy.ReceiveSmartLinkReached
struct ANavLinkProxy_ReceiveSmartLinkReached_Params
{
	class AActor*                                      Agent;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Destination;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Engine.NavLinkProxy.IsSmartLinkEnabled
struct ANavLinkProxy_IsSmartLinkEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.NavLinkProxy.HasMovingAgents
struct ANavLinkProxy_HasMovingAgents_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SphereReflectionCapture.GetSphereCaptureComponent
struct ASphereReflectionCapture_GetSphereCaptureComponent_Params
{
	class USphereReflectionCaptureComponent*           ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Engine.RadialForceActor.ToggleForce
struct ARadialForceActor_ToggleForce_Params
{
};

// Function Engine.RadialForceActor.FireImpulse
struct ARadialForceActor_FireImpulse_Params
{
};

// Function Engine.RadialForceActor.EnableForce
struct ARadialForceActor_EnableForce_Params
{
};

// Function Engine.RadialForceActor.DisableForce
struct ARadialForceActor_DisableForce_Params
{
};

// Function Engine.BoxReflectionCapture.GetBoxCaptureComponent
struct ABoxReflectionCapture_GetBoxCaptureComponent_Params
{
	class UBoxReflectionCaptureComponent*              ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Engine.SceneCapture2D.OnInterpToggle
struct ASceneCapture2D_OnInterpToggle_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SceneCaptureCube.OnInterpToggle
struct ASceneCaptureCube_OnInterpToggle_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SkinnedMeshComponent.UnHideBoneByName
struct USkinnedMeshComponent_UnHideBoneByName_Params
{
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SkinnedMeshComponent.TransformToBoneSpace
struct USkinnedMeshComponent_TransformToBoneSpace_Params
{
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InPosition;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    InRotation;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutPosition;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    OutRotation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SkinnedMeshComponent.TransformFromBoneSpace
struct USkinnedMeshComponent_TransformFromBoneSpace_Params
{
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InPosition;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    InRotation;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutPosition;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    OutRotation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SkinnedMeshComponent.SetSkeletalMesh
struct USkinnedMeshComponent_SetSkeletalMesh_Params
{
	class USkeletalMesh*                               NewMesh;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SkinnedMeshComponent.SetPhysicsAsset
struct USkinnedMeshComponent_SetPhysicsAsset_Params
{
	class UPhysicsAsset*                               NewPhysicsAsset;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForceReInit;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SkinnedMeshComponent.SetMasterPoseComponent
struct USkinnedMeshComponent_SetMasterPoseComponent_Params
{
	class USkinnedMeshComponent*                       NewMasterBoneComponent;                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Engine.SkinnedMeshComponent.IsBoneHiddenByName
struct USkinnedMeshComponent_IsBoneHiddenByName_Params
{
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SkinnedMeshComponent.HideBoneByName
struct USkinnedMeshComponent_HideBoneByName_Params
{
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPhysBodyOp>                           PhysBodyOption;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SkinnedMeshComponent.GetSocketBoneName
struct USkinnedMeshComponent_GetSocketBoneName_Params
{
	struct FName                                       InSocketName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SkinnedMeshComponent.GetParentBone
struct USkinnedMeshComponent_GetParentBone_Params
{
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SkinnedMeshComponent.GetNumBones
struct USkinnedMeshComponent_GetNumBones_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SkinnedMeshComponent.GetBoneName
struct USkinnedMeshComponent_GetBoneName_Params
{
	int                                                BoneIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SkinnedMeshComponent.GetBoneIndex
struct USkinnedMeshComponent_GetBoneIndex_Params
{
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PhysicsConstraintComponent.SetLinearZLimit
struct UPhysicsConstraintComponent_SetLinearZLimit_Params
{
	TEnumAsByte<ELinearConstraintMotion>               ConstraintType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LimitSize;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PhysicsConstraintComponent.SetLinearYLimit
struct UPhysicsConstraintComponent_SetLinearYLimit_Params
{
	TEnumAsByte<ELinearConstraintMotion>               ConstraintType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LimitSize;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PhysicsConstraintComponent.SetLinearXLimit
struct UPhysicsConstraintComponent_SetLinearXLimit_Params
{
	TEnumAsByte<ELinearConstraintMotion>               ConstraintType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LimitSize;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PhysicsConstraintComponent.SetLinearVelocityTarget
struct UPhysicsConstraintComponent_SetLinearVelocityTarget_Params
{
	struct FVector                                     InVelTarget;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Engine.PhysicsConstraintComponent.SetLinearVelocityDrive
struct UPhysicsConstraintComponent_SetLinearVelocityDrive_Params
{
	bool                                               bEnableDriveX;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableDriveY;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableDriveZ;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PhysicsConstraintComponent.SetLinearPositionTarget
struct UPhysicsConstraintComponent_SetLinearPositionTarget_Params
{
	struct FVector                                     InPosTarget;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Engine.PhysicsConstraintComponent.SetLinearPositionDrive
struct UPhysicsConstraintComponent_SetLinearPositionDrive_Params
{
	bool                                               bEnableDriveX;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableDriveY;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableDriveZ;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PhysicsConstraintComponent.SetLinearDriveParams
struct UPhysicsConstraintComponent_SetLinearDriveParams_Params
{
	float                                              InSpring;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InDamping;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InForceLimit;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PhysicsConstraintComponent.SetDisableCollision
struct UPhysicsConstraintComponent_SetDisableCollision_Params
{
	bool                                               bDisableCollision;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PhysicsConstraintComponent.SetConstraintReferencePosition
struct UPhysicsConstraintComponent_SetConstraintReferencePosition_Params
{
	TEnumAsByte<EConstraintFrame>                      Frame;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RefPosition;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Engine.PhysicsConstraintComponent.SetConstraintReferenceOrientation
struct UPhysicsConstraintComponent_SetConstraintReferenceOrientation_Params
{
	TEnumAsByte<EConstraintFrame>                      Frame;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PriAxis;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     SecAxis;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Engine.PhysicsConstraintComponent.SetConstraintReferenceFrame
struct UPhysicsConstraintComponent_SetConstraintReferenceFrame_Params
{
	TEnumAsByte<EConstraintFrame>                      Frame;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  RefFrame;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Engine.PhysicsConstraintComponent.SetConstrainedComponents
struct UPhysicsConstraintComponent_SetConstrainedComponents_Params
{
	class UPrimitiveComponent*                         Component1;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       BoneName1;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         Component2;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       BoneName2;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PhysicsConstraintComponent.SetAngularVelocityTarget
struct UPhysicsConstraintComponent_SetAngularVelocityTarget_Params
{
	struct FVector                                     InVelTarget;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Engine.PhysicsConstraintComponent.SetAngularVelocityDrive
struct UPhysicsConstraintComponent_SetAngularVelocityDrive_Params
{
	bool                                               bEnableSwingDrive;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableTwistDrive;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PhysicsConstraintComponent.SetAngularTwistLimit
struct UPhysicsConstraintComponent_SetAngularTwistLimit_Params
{
	TEnumAsByte<EAngularConstraintMotion>              ConstraintType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TwistLimitAngle;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PhysicsConstraintComponent.SetAngularSwing2Limit
struct UPhysicsConstraintComponent_SetAngularSwing2Limit_Params
{
	TEnumAsByte<EAngularConstraintMotion>              MotionType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Swing2LimitAngle;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PhysicsConstraintComponent.SetAngularSwing1Limit
struct UPhysicsConstraintComponent_SetAngularSwing1Limit_Params
{
	TEnumAsByte<EAngularConstraintMotion>              MotionType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Swing1LimitAngle;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PhysicsConstraintComponent.SetAngularOrientationTarget
struct UPhysicsConstraintComponent_SetAngularOrientationTarget_Params
{
	struct FRotator                                    InPosTarget;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Engine.PhysicsConstraintComponent.SetAngularOrientationDrive
struct UPhysicsConstraintComponent_SetAngularOrientationDrive_Params
{
	bool                                               bEnableSwingDrive;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableTwistDrive;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PhysicsConstraintComponent.SetAngularDriveParams
struct UPhysicsConstraintComponent_SetAngularDriveParams_Params
{
	float                                              InSpring;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InDamping;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InForceLimit;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PhysicsConstraintComponent.GetConstraintForce
struct UPhysicsConstraintComponent_GetConstraintForce_Params
{
	struct FVector                                     OutLinearForce;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutAngularForce;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PhysicsConstraintComponent.ConstraintBrokenSignature__DelegateSignature
struct UPhysicsConstraintComponent_ConstraintBrokenSignature__DelegateSignature_Params
{
	int                                                ConstraintIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PhysicsConstraintComponent.BreakConstraint
struct UPhysicsConstraintComponent_BreakConstraint_Params
{
};

// Function Engine.SkeletalMeshComponent.Stop
struct USkeletalMeshComponent_Stop_Params
{
};

// Function Engine.SkeletalMeshComponent.SetupBetweenAnimationBlueprintBlending
struct USkeletalMeshComponent_SetupBetweenAnimationBlueprintBlending_Params
{
};

// Function Engine.SkeletalMeshComponent.SetPosition
struct USkeletalMeshComponent_SetPosition_Params
{
	float                                              InPos;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFireNotifies;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SkeletalMeshComponent.SetPlayRate
struct USkeletalMeshComponent_SetPlayRate_Params
{
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SkeletalMeshComponent.SetPhysicsBlendWeight
struct USkeletalMeshComponent_SetPhysicsBlendWeight_Params
{
	float                                              PhysicsBlendWeight;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SkeletalMeshComponent.SetMorphTarget
struct USkeletalMeshComponent_SetMorphTarget_Params
{
	struct FName                                       MorphTargetName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SkeletalMeshComponent.SetEnablePhysicsBlending
struct USkeletalMeshComponent_SetEnablePhysicsBlending_Params
{
	bool                                               bNewBlendPhysics;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SkeletalMeshComponent.SetClothMaxDistanceScale
struct USkeletalMeshComponent_SetClothMaxDistanceScale_Params
{
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SkeletalMeshComponent.SetAnimInstanceClass
struct USkeletalMeshComponent_SetAnimInstanceClass_Params
{
	class UClass*                                      NewClass;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SkeletalMeshComponent.SetAnimationMode
struct USkeletalMeshComponent_SetAnimationMode_Params
{
	TEnumAsByte<EAnimationMode>                        InAnimationMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SkeletalMeshComponent.SetAnimation
struct USkeletalMeshComponent_SetAnimation_Params
{
	class UAnimationAsset*                             NewAnimToPlay;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SkeletalMeshComponent.SetAllBodiesSimulatePhysics
struct USkeletalMeshComponent_SetAllBodiesSimulatePhysics_Params
{
	bool                                               bNewSimulate;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SkeletalMeshComponent.SetAllBodiesPhysicsBlendWeight
struct USkeletalMeshComponent_SetAllBodiesPhysicsBlendWeight_Params
{
	float                                              PhysicsBlendWeight;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSkipCustomPhysicsType;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SkeletalMeshComponent.SetAllBodiesBelowSimulatePhysics
struct USkeletalMeshComponent_SetAllBodiesBelowSimulatePhysics_Params
{
	struct FName                                       InBoneName;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               bNewSimulate;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SkeletalMeshComponent.SetAllBodiesBelowPhysicsBlendWeight
struct USkeletalMeshComponent_SetAllBodiesBelowPhysicsBlendWeight_Params
{
	struct FName                                       InBoneName;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              PhysicsBlendWeight;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSkipCustomPhysicsType;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SkeletalMeshComponent.ResetClothTeleportMode
struct USkeletalMeshComponent_ResetClothTeleportMode_Params
{
};

// Function Engine.SkeletalMeshComponent.ResetAllBodiesSimulatePhysics
struct USkeletalMeshComponent_ResetAllBodiesSimulatePhysics_Params
{
};

// Function Engine.SkeletalMeshComponent.PlayAnimation
struct USkeletalMeshComponent_PlayAnimation_Params
{
	class UAnimationAsset*                             NewAnimToPlay;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLooping;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SkeletalMeshComponent.Play
struct USkeletalMeshComponent_Play_Params
{
	bool                                               bLooping;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SkeletalMeshComponent.IsPlaying
struct USkeletalMeshComponent_IsPlaying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SkeletalMeshComponent.GetPosition
struct USkeletalMeshComponent_GetPosition_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SkeletalMeshComponent.GetPlayRate
struct USkeletalMeshComponent_GetPlayRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SkeletalMeshComponent.GetMorphTarget
struct USkeletalMeshComponent_GetMorphTarget_Params
{
	struct FName                                       MorphTargetName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SkeletalMeshComponent.GetClothMaxDistanceScale
struct USkeletalMeshComponent_GetClothMaxDistanceScale_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SkeletalMeshComponent.GetAnimInstance
struct USkeletalMeshComponent_GetAnimInstance_Params
{
	class UAnimInstance*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SkeletalMeshComponent.GetAnimationMode
struct USkeletalMeshComponent_GetAnimationMode_Params
{
	TEnumAsByte<EAnimationMode>                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SkeletalMeshComponent.ForceClothNextUpdateTeleportAndReset
struct USkeletalMeshComponent_ForceClothNextUpdateTeleportAndReset_Params
{
};

// Function Engine.SkeletalMeshComponent.ForceClothNextUpdateTeleport
struct USkeletalMeshComponent_ForceClothNextUpdateTeleport_Params
{
};

// Function Engine.SkeletalMeshComponent.ClearMorphTargets
struct USkeletalMeshComponent_ClearMorphTargets_Params
{
};

// Function Engine.SkeletalMeshComponent.BPTickPose
struct USkeletalMeshComponent_BPTickPose_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SkeletalMeshComponent.BPRefreshBoneTransforms
struct USkeletalMeshComponent_BPRefreshBoneTransforms_Params
{
};

// Function Engine.SkeletalMeshComponent.AccumulateAllBodiesBelowPhysicsBlendWeight
struct USkeletalMeshComponent_AccumulateAllBodiesBelowPhysicsBlendWeight_Params
{
	struct FName                                       InBoneName;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              AddPhysicsBlendWeight;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSkipCustomPhysicsType;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SkeletalMeshActor.OnRep_ReplicatedPhysAsset
struct ASkeletalMeshActor_OnRep_ReplicatedPhysAsset_Params
{
};

// Function Engine.SkeletalMeshActor.OnRep_ReplicatedMesh
struct ASkeletalMeshActor_OnRep_ReplicatedMesh_Params
{
};

// Function Engine.SkeletalMeshActor.OnRep_ReplicatedMaterial1
struct ASkeletalMeshActor_OnRep_ReplicatedMaterial1_Params
{
};

// Function Engine.SkeletalMeshActor.OnRep_ReplicatedMaterial0
struct ASkeletalMeshActor_OnRep_ReplicatedMaterial0_Params
{
};

// Function Engine.InteractiveFoliageActor.CapsuleTouched
struct AInteractiveFoliageActor_CapsuleTouched_Params
{
	class AActor*                                      Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  OverlapInfo;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Engine.ApplicationLifecycleComponent.ApplicationLifetimeDelegate__DelegateSignature
struct UApplicationLifecycleComponent_ApplicationLifetimeDelegate__DelegateSignature_Params
{
};

// Function Engine.NavigationSystem.SimpleMoveToLocation
struct UNavigationSystem_SimpleMoveToLocation_Params
{
	class AController*                                 Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Goal;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Engine.NavigationSystem.SimpleMoveToActor
struct UNavigationSystem_SimpleMoveToActor_Params
{
	class AController*                                 Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Goal;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.NavigationSystem.ProjectPointToNavigation
struct UNavigationSystem_ProjectPointToNavigation_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class ANavigationData*                             NavData;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      FilterClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.NavigationSystem.OnNavDataRegistered__DelegateSignature
struct UNavigationSystem_OnNavDataRegistered__DelegateSignature_Params
{
	class ANavigationData*                             NavData;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.NavigationSystem.NavigationRaycast
struct UNavigationSystem_NavigationRaycast_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RayStart;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     RayEnd;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      FilterClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 Querier;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.NavigationSystem.IsNavigationBeingBuilt
struct UNavigationSystem_IsNavigationBeingBuilt_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.NavigationSystem.GetRandomPointInRadius
struct UNavigationSystem_GetRandomPointInRadius_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Origin;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class ANavigationData*                             NavData;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      FilterClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.NavigationSystem.GetRandomPoint
struct UNavigationSystem_GetRandomPoint_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class ANavigationData*                             NavData;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      FilterClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.NavigationSystem.GetPathLength
struct UNavigationSystem_GetPathLength_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PathStart;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     PathEnd;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              PathLength;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class ANavigationData*                             NavData;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      FilterClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ENavigationQueryResult>                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.NavigationSystem.GetPathCost
struct UNavigationSystem_GetPathCost_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PathStart;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     PathEnd;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              PathCost;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class ANavigationData*                             NavData;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      FilterClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ENavigationQueryResult>                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.NavigationSystem.FindPathToLocationSynchronously
struct UNavigationSystem_FindPathToLocationSynchronously_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PathStart;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     PathEnd;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AActor*                                      PathfindingContext;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      FilterClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UNavigationPath*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.NavigationSystem.FindPathToActorSynchronously
struct UNavigationSystem_FindPathToActorSynchronously_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PathStart;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AActor*                                      GoalActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TetherDistance;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      PathfindingContext;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      FilterClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UNavigationPath*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.WheeledVehicleMovementComponent.SetUseAutoGears
struct UWheeledVehicleMovementComponent_SetUseAutoGears_Params
{
	bool                                               bUseAuto;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.WheeledVehicleMovementComponent.SetThrottleInput
struct UWheeledVehicleMovementComponent_SetThrottleInput_Params
{
	float                                              Throttle;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.WheeledVehicleMovementComponent.SetTargetGear
struct UWheeledVehicleMovementComponent_SetTargetGear_Params
{
	int                                                GearNum;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bImmediate;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.WheeledVehicleMovementComponent.SetSteeringInput
struct UWheeledVehicleMovementComponent_SetSteeringInput_Params
{
	float                                              Steering;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.WheeledVehicleMovementComponent.SetHandbrakeInput
struct UWheeledVehicleMovementComponent_SetHandbrakeInput_Params
{
	bool                                               bNewHandbrake;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.WheeledVehicleMovementComponent.SetGearUp
struct UWheeledVehicleMovementComponent_SetGearUp_Params
{
	bool                                               bNewGearUp;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.WheeledVehicleMovementComponent.SetGearDown
struct UWheeledVehicleMovementComponent_SetGearDown_Params
{
	bool                                               bNewGearDown;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.WheeledVehicleMovementComponent.ServerUpdateState
struct UWheeledVehicleMovementComponent_ServerUpdateState_Params
{
	float                                              InSteeringInput;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InThrottleInput;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InBrakeInput;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InHandbrakeInput;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CurrentGear;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.WheeledVehicleMovementComponent.GetUseAutoGears
struct UWheeledVehicleMovementComponent_GetUseAutoGears_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.WheeledVehicleMovementComponent.GetThrottleInput
struct UWheeledVehicleMovementComponent_GetThrottleInput_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.WheeledVehicleMovementComponent.GetTargetGear
struct UWheeledVehicleMovementComponent_GetTargetGear_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.WheeledVehicleMovementComponent.GetForwardSpeed
struct UWheeledVehicleMovementComponent_GetForwardSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.WheeledVehicleMovementComponent.GetEngineRotationSpeed
struct UWheeledVehicleMovementComponent_GetEngineRotationSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.WheeledVehicleMovementComponent.GetEngineMaxRotationSpeed
struct UWheeledVehicleMovementComponent_GetEngineMaxRotationSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.WheeledVehicleMovementComponent.GetCurrentGear
struct UWheeledVehicleMovementComponent_GetCurrentGear_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.ProjectileMovementComponent.StopSimulating
struct UProjectileMovementComponent_StopSimulating_Params
{
	struct FHitResult                                  HitResult;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Engine.ProjectileMovementComponent.SetVelocityInLocalSpace
struct UProjectileMovementComponent_SetVelocityInLocalSpace_Params
{
	struct FVector                                     NewVelocity;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ProjectileMovementComponent.OnProjectileStopDelegate__DelegateSignature
struct UProjectileMovementComponent_OnProjectileStopDelegate__DelegateSignature_Params
{
	struct FHitResult                                  ImpactResult;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Engine.ProjectileMovementComponent.OnProjectileBounceDelegate__DelegateSignature
struct UProjectileMovementComponent_OnProjectileBounceDelegate__DelegateSignature_Params
{
	struct FHitResult                                  ImpactResult;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     ImpactVelocity;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Engine.ProjectileMovementComponent.LimitVelocity
struct UProjectileMovementComponent_LimitVelocity_Params
{
	struct FVector                                     NewVelocity;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.NavRelevantComponent.SetNavigationRelevancy
struct UNavRelevantComponent_SetNavigationRelevancy_Params
{
	bool                                               bRelevant;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PawnNoiseEmitterComponent.MakeNoise
struct UPawnNoiseEmitterComponent_MakeNoise_Params
{
	class AActor*                                      NoiseMaker;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Loudness;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NoiseLocation;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Engine.PhysicsHandleComponent.SetTargetRotation
struct UPhysicsHandleComponent_SetTargetRotation_Params
{
	struct FRotator                                    NewRotation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PhysicsHandleComponent.SetTargetLocationAndRotation
struct UPhysicsHandleComponent_SetTargetLocationAndRotation_Params
{
	struct FVector                                     NewLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    NewRotation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PhysicsHandleComponent.SetTargetLocation
struct UPhysicsHandleComponent_SetTargetLocation_Params
{
	struct FVector                                     NewLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PhysicsHandleComponent.ReleaseComponent
struct UPhysicsHandleComponent_ReleaseComponent_Params
{
};

// Function Engine.PhysicsHandleComponent.GrabComponent
struct UPhysicsHandleComponent_GrabComponent_Params
{
	class UPrimitiveComponent*                         Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       InBoneName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     GrabLocation;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bConstrainRotation;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PhysicsHandleComponent.GetTargetLocationAndRotation
struct UPhysicsHandleComponent_GetTargetLocationAndRotation_Params
{
	struct FVector                                     TargetLocation;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    TargetRotation;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.AtmosphericFogComponent.StartPrecompute
struct UAtmosphericFogComponent_StartPrecompute_Params
{
};

// Function Engine.AtmosphericFogComponent.SetSunMultiplier
struct UAtmosphericFogComponent_SetSunMultiplier_Params
{
	float                                              NewSunMultiplier;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.AtmosphericFogComponent.SetStartDistance
struct UAtmosphericFogComponent_SetStartDistance_Params
{
	float                                              NewStartDistance;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.AtmosphericFogComponent.SetPrecomputeParams
struct UAtmosphericFogComponent_SetPrecomputeParams_Params
{
	float                                              DensityHeight;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxScatteringOrder;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InscatterAltitudeSampleNum;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.AtmosphericFogComponent.SetFogMultiplier
struct UAtmosphericFogComponent_SetFogMultiplier_Params
{
	float                                              NewFogMultiplier;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.AtmosphericFogComponent.SetDistanceScale
struct UAtmosphericFogComponent_SetDistanceScale_Params
{
	float                                              NewDistanceScale;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.AtmosphericFogComponent.SetDistanceOffset
struct UAtmosphericFogComponent_SetDistanceOffset_Params
{
	float                                              NewDistanceOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.AtmosphericFogComponent.SetDensityOffset
struct UAtmosphericFogComponent_SetDensityOffset_Params
{
	float                                              NewDensityOffset;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.AtmosphericFogComponent.SetDensityMultiplier
struct UAtmosphericFogComponent_SetDensityMultiplier_Params
{
	float                                              NewDensityMultiplier;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.AtmosphericFogComponent.SetDefaultLightColor
struct UAtmosphericFogComponent_SetDefaultLightColor_Params
{
	struct FLinearColor                                NewLightColor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.AtmosphericFogComponent.SetDefaultBrightness
struct UAtmosphericFogComponent_SetDefaultBrightness_Params
{
	float                                              NewBrightness;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.AtmosphericFogComponent.SetAltitudeScale
struct UAtmosphericFogComponent_SetAltitudeScale_Params
{
	float                                              NewAltitudeScale;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.AtmosphericFogComponent.DisableSunDisk
struct UAtmosphericFogComponent_DisableSunDisk_Params
{
	bool                                               NewSunDisk;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.AtmosphericFogComponent.DisableGroundScattering
struct UAtmosphericFogComponent_DisableGroundScattering_Params
{
	bool                                               NewGroundScattering;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.AudioComponent.Stop
struct UAudioComponent_Stop_Params
{
};

// Function Engine.AudioComponent.SetWaveParameter
struct UAudioComponent_SetWaveParameter_Params
{
	struct FName                                       InName;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundWave*                                  InWave;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.AudioComponent.SetVolumeMultiplier
struct UAudioComponent_SetVolumeMultiplier_Params
{
	float                                              NewVolumeMultiplier;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.AudioComponent.SetUISound
struct UAudioComponent_SetUISound_Params
{
	bool                                               bInUISound;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.AudioComponent.SetSound
struct UAudioComponent_SetSound_Params
{
	class USoundBase*                                  NewSound;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.AudioComponent.SetPitchMultiplier
struct UAudioComponent_SetPitchMultiplier_Params
{
	float                                              NewPitchMultiplier;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.AudioComponent.SetIntParameter
struct UAudioComponent_SetIntParameter_Params
{
	struct FName                                       InName;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InInt;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.AudioComponent.SetFloatParameter
struct UAudioComponent_SetFloatParameter_Params
{
	struct FName                                       InName;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InFloat;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.AudioComponent.SetBoolParameter
struct UAudioComponent_SetBoolParameter_Params
{
	struct FName                                       InName;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InBool;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.AudioComponent.Play
struct UAudioComponent_Play_Params
{
	float                                              StartTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.AudioComponent.OnQueueSubtitles__DelegateSignature
struct UAudioComponent_OnQueueSubtitles__DelegateSignature_Params
{
	TArray<struct FSubtitleCue>                        Subtitles;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              CueDuration;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.AudioComponent.OnAudioFinished__DelegateSignature
struct UAudioComponent_OnAudioFinished__DelegateSignature_Params
{
};

// Function Engine.AudioComponent.IsPlaying
struct UAudioComponent_IsPlaying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AudioComponent.FadeOut
struct UAudioComponent_FadeOut_Params
{
	float                                              FadeOutDuration;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FadeVolumeLevel;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.AudioComponent.FadeIn
struct UAudioComponent_FadeIn_Params
{
	float                                              FadeInDuration;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FadeVolumeLevel;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.AudioComponent.AdjustVolume
struct UAudioComponent_AdjustVolume_Params
{
	float                                              AdjustVolumeDuration;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AdjustVolumeLevel;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.AudioComponent.AdjustAttenuation
struct UAudioComponent_AdjustAttenuation_Params
{
	struct FAttenuationSettings                        InAttenuationSettings;                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Engine.CameraComponent.GetCameraView
struct UCameraComponent_GetCameraView_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMinimalViewInfo                            DesiredView;                                              // (Parm, OutParm)
};

// Function Engine.DecalComponent.SetSortOrder
struct UDecalComponent_SetSortOrder_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.DecalComponent.SetDecalMaterial
struct UDecalComponent_SetDecalMaterial_Params
{
	class UMaterialInterface*                          NewDecalMaterial;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.DecalComponent.GetDecalMaterial
struct UDecalComponent_GetDecalMaterial_Params
{
	class UMaterialInterface*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.DecalComponent.CreateDynamicMaterialInstance
struct UDecalComponent_CreateDynamicMaterialInstance_Params
{
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.DecalComponent.CheckDestructionFirst
struct UDecalComponent_CheckDestructionFirst_Params
{
};

// Function Engine.DecalComponent.CheckDestruction
struct UDecalComponent_CheckDestruction_Params
{
};

// Function Engine.ExponentialHeightFogComponent.SetStartDistance
struct UExponentialHeightFogComponent_SetStartDistance_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ExponentialHeightFogComponent.SetFogMaxOpacity
struct UExponentialHeightFogComponent_SetFogMaxOpacity_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ExponentialHeightFogComponent.SetFogInscatteringColor
struct UExponentialHeightFogComponent_SetFogInscatteringColor_Params
{
	struct FLinearColor                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ExponentialHeightFogComponent.SetFogHeightFalloff
struct UExponentialHeightFogComponent_SetFogHeightFalloff_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ExponentialHeightFogComponent.SetFogDensity
struct UExponentialHeightFogComponent_SetFogDensity_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ExponentialHeightFogComponent.SetDirectionalInscatteringStartDistance
struct UExponentialHeightFogComponent_SetDirectionalInscatteringStartDistance_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ExponentialHeightFogComponent.SetDirectionalInscatteringExponent
struct UExponentialHeightFogComponent_SetDirectionalInscatteringExponent_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ExponentialHeightFogComponent.SetDirectionalInscatteringColor
struct UExponentialHeightFogComponent_SetDirectionalInscatteringColor_Params
{
	struct FLinearColor                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.LightComponent.SetLightFunctionScale
struct ULightComponent_SetLightFunctionScale_Params
{
	struct FVector                                     NewLightFunctionScale;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.LightComponent.SetLightFunctionMaterial
struct ULightComponent_SetLightFunctionMaterial_Params
{
	class UMaterialInterface*                          NewLightFunctionMaterial;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.LightComponent.SetLightFunctionFadeDistance
struct ULightComponent_SetLightFunctionFadeDistance_Params
{
	float                                              NewLightFunctionFadeDistance;                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.LightComponent.SetLightColor
struct ULightComponent_SetLightColor_Params
{
	struct FLinearColor                                NewLightColor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.LightComponent.SetIntensity
struct ULightComponent_SetIntensity_Params
{
	float                                              NewIntensity;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.LightComponent.SetIESTexture
struct ULightComponent_SetIESTexture_Params
{
	class UTextureLightProfile*                        newValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.LightComponent.SetEnableLightShaftBloom
struct ULightComponent_SetEnableLightShaftBloom_Params
{
	bool                                               bNewValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.LightComponent.SetCastShadows
struct ULightComponent_SetCastShadows_Params
{
	bool                                               bNewValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.LightComponent.SetBloomTint
struct ULightComponent_SetBloomTint_Params
{
	struct FColor                                      newValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.LightComponent.SetBloomThreshold
struct ULightComponent_SetBloomThreshold_Params
{
	float                                              newValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.LightComponent.SetBloomScale
struct ULightComponent_SetBloomScale_Params
{
	float                                              newValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.LightComponent.SetAffectTranslucentLighting
struct ULightComponent_SetAffectTranslucentLighting_Params
{
	bool                                               bNewValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.LightComponent.SetAffectDynamicIndirectLighting
struct ULightComponent_SetAffectDynamicIndirectLighting_Params
{
	bool                                               bNewValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.DirectionalLightComponent.SetShadowDistanceFadeoutFraction
struct UDirectionalLightComponent_SetShadowDistanceFadeoutFraction_Params
{
	float                                              newValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.DirectionalLightComponent.SetOcclusionMaskDarkness
struct UDirectionalLightComponent_SetOcclusionMaskDarkness_Params
{
	float                                              newValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.DirectionalLightComponent.SetLightShaftOverrideDirection
struct UDirectionalLightComponent_SetLightShaftOverrideDirection_Params
{
	struct FVector                                     newValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.DirectionalLightComponent.SetEnableLightShaftOcclusion
struct UDirectionalLightComponent_SetEnableLightShaftOcclusion_Params
{
	bool                                               bNewValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.DirectionalLightComponent.SetDynamicShadowDistanceStationaryLight
struct UDirectionalLightComponent_SetDynamicShadowDistanceStationaryLight_Params
{
	float                                              newValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.DirectionalLightComponent.SetDynamicShadowDistanceMovableLight
struct UDirectionalLightComponent_SetDynamicShadowDistanceMovableLight_Params
{
	float                                              newValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.DirectionalLightComponent.SetDynamicShadowCascades
struct UDirectionalLightComponent_SetDynamicShadowCascades_Params
{
	int                                                newValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.DirectionalLightComponent.SetCascadeTransitionFraction
struct UDirectionalLightComponent_SetCascadeTransitionFraction_Params
{
	float                                              newValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.DirectionalLightComponent.SetCascadeDistributionExponent
struct UDirectionalLightComponent_SetCascadeDistributionExponent_Params
{
	float                                              newValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PointLightComponent.SetSourceRadius
struct UPointLightComponent_SetSourceRadius_Params
{
	float                                              bNewValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PointLightComponent.SetLightFalloffExponent
struct UPointLightComponent_SetLightFalloffExponent_Params
{
	float                                              NewLightFalloffExponent;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PointLightComponent.SetAttenuationRadius
struct UPointLightComponent_SetAttenuationRadius_Params
{
	float                                              NewRadius;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SpotLightComponent.SetOuterConeAngle
struct USpotLightComponent_SetOuterConeAngle_Params
{
	float                                              NewOuterConeAngle;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SpotLightComponent.SetInnerConeAngle
struct USpotLightComponent_SetInnerConeAngle_Params
{
	float                                              NewInnerConeAngle;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SkyLightComponent.SetOcclusionTint
struct USkyLightComponent_SetOcclusionTint_Params
{
	struct FColor                                      InTint;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Engine.SkyLightComponent.SetMinOcclusion
struct USkyLightComponent_SetMinOcclusion_Params
{
	float                                              InMinOcclusion;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SkyLightComponent.SetLightColor
struct USkyLightComponent_SetLightColor_Params
{
	struct FLinearColor                                NewLightColor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SkyLightComponent.SetIntensity
struct USkyLightComponent_SetIntensity_Params
{
	float                                              NewIntensity;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SkyLightComponent.SetCubemap
struct USkyLightComponent_SetCubemap_Params
{
	class UTextureCube*                                NewCubemap;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SkyLightComponent.RecaptureSky
struct USkyLightComponent_RecaptureSky_Params
{
};

// Function Engine.ArrowComponent.SetArrowColor_New
struct UArrowComponent_SetArrowColor_New_Params
{
	struct FLinearColor                                NewColor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ArrowComponent.SetArrowColor_DEPRECATED
struct UArrowComponent_SetArrowColor_DEPRECATED_Params
{
	struct FColor                                      NewColor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.BillboardComponent.SetUV
struct UBillboardComponent_SetUV_Params
{
	int                                                NewU;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewUL;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewV;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewVL;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.BillboardComponent.SetSpriteAndUV
struct UBillboardComponent_SetSpriteAndUV_Params
{
	class UTexture2D*                                  NewSprite;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewU;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewUL;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewV;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewVL;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.BillboardComponent.SetSprite
struct UBillboardComponent_SetSprite_Params
{
	class UTexture2D*                                  NewSprite;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.MaterialBillboardComponent.AddElement
struct UMaterialBillboardComponent_AddElement_Params
{
	class UMaterialInterface*                          Material;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 DistanceToOpacityCurve;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSizeIsInScreenSpace;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BaseSizeX;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BaseSizeY;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 DistanceToSizeCurve;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.DestructibleComponent.SetDestructibleMesh
struct UDestructibleComponent_SetDestructibleMesh_Params
{
	class UDestructibleMesh*                           NewMesh;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.DestructibleComponent.GetDestructibleMesh
struct UDestructibleComponent_GetDestructibleMesh_Params
{
	class UDestructibleMesh*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.DestructibleComponent.ComponentFractureSignature__DelegateSignature
struct UDestructibleComponent_ComponentFractureSignature__DelegateSignature_Params
{
	struct FVector                                     HitPoint;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     HitDirection;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Engine.DestructibleComponent.ApplyRadiusDamage
struct UDestructibleComponent_ApplyRadiusDamage_Params
{
	float                                              BaseDamage;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HurtOrigin;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              DamageRadius;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ImpulseStrength;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFullDamage;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.DestructibleComponent.ApplyDamage
struct UDestructibleComponent_ApplyDamage_Params
{
	float                                              DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     ImpulseDir;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              ImpulseStrength;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PoseableMeshComponent.SetBoneTransformByName
struct UPoseableMeshComponent_SetBoneTransformByName_Params
{
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  InTransform;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	TEnumAsByte<EBoneSpaces>                           BoneSpace;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PoseableMeshComponent.SetBoneScaleByName
struct UPoseableMeshComponent_SetBoneScaleByName_Params
{
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InScale3D;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneSpaces>                           BoneSpace;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PoseableMeshComponent.SetBoneRotationByName
struct UPoseableMeshComponent_SetBoneRotationByName_Params
{
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    InRotation;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneSpaces>                           BoneSpace;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PoseableMeshComponent.SetBoneLocationByName
struct UPoseableMeshComponent_SetBoneLocationByName_Params
{
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InLocation;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneSpaces>                           BoneSpace;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PoseableMeshComponent.ResetBoneTransformByName
struct UPoseableMeshComponent_ResetBoneTransformByName_Params
{
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PoseableMeshComponent.GetBoneTransformByName
struct UPoseableMeshComponent_GetBoneTransformByName_Params
{
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneSpaces>                           BoneSpace;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.PoseableMeshComponent.GetBoneScaleByName
struct UPoseableMeshComponent_GetBoneScaleByName_Params
{
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneSpaces>                           BoneSpace;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PoseableMeshComponent.GetBoneRotationByName
struct UPoseableMeshComponent_GetBoneRotationByName_Params
{
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneSpaces>                           BoneSpace;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PoseableMeshComponent.GetBoneLocationByName
struct UPoseableMeshComponent_GetBoneLocationByName_Params
{
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneSpaces>                           BoneSpace;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.StaticMeshComponent.SetStaticMesh
struct UStaticMeshComponent_SetStaticMesh_Params
{
	class UStaticMesh*                                 NewMesh;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.StaticMeshComponent.OnRep_StaticMesh
struct UStaticMeshComponent_OnRep_StaticMesh_Params
{
	class UStaticMesh*                                 OldStaticMesh;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.StaticMeshComponent.GetLocalBounds
struct UStaticMeshComponent_GetLocalBounds_Params
{
	struct FVector                                     Min;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Max;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.InstancedStaticMeshComponent.UpdateInstanceTransform
struct UInstancedStaticMeshComponent_UpdateInstanceTransform_Params
{
	int                                                InstanceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  NewInstanceTransform;                                     // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bWorldSpace;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.InstancedStaticMeshComponent.ShowInstance
struct UInstancedStaticMeshComponent_ShowInstance_Params
{
	int                                                originalIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.InstancedStaticMeshComponent.SetCullDistances
struct UInstancedStaticMeshComponent_SetCullDistances_Params
{
	int                                                StartCullDistance;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                EndCullDistance;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.InstancedStaticMeshComponent.RemoveInstance
struct UInstancedStaticMeshComponent_RemoveInstance_Params
{
	int                                                InstanceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitDirection;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.InstancedStaticMeshComponent.MulticastShowInstance
struct UInstancedStaticMeshComponent_MulticastShowInstance_Params
{
	int                                                originalIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.InstancedStaticMeshComponent.MulticastHideInstance
struct UInstancedStaticMeshComponent_MulticastHideInstance_Params
{
	int                                                originalIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitDirection;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.InstancedStaticMeshComponent.GetInstanceTransform
struct UInstancedStaticMeshComponent_GetInstanceTransform_Params
{
	int                                                InstanceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  OutInstanceTransform;                                     // (Parm, OutParm, IsPlainOldData)
	bool                                               bWorldSpace;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.InstancedStaticMeshComponent.GetInstanceCount
struct UInstancedStaticMeshComponent_GetInstanceCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.InstancedStaticMeshComponent.ClearInstances
struct UInstancedStaticMeshComponent_ClearInstances_Params
{
};

// Function Engine.InstancedStaticMeshComponent.AddInstanceWorldSpace
struct UInstancedStaticMeshComponent_AddInstanceWorldSpace_Params
{
	struct FTransform                                  WorldTransform;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.InstancedStaticMeshComponent.AddInstance
struct UInstancedStaticMeshComponent_AddInstance_Params
{
	struct FTransform                                  InstanceTransform;                                        // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SplineMeshComponent.SetStartTangent
struct USplineMeshComponent_SetStartTangent_Params
{
	struct FVector                                     StartTangent;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SplineMeshComponent.SetStartScale
struct USplineMeshComponent_SetStartScale_Params
{
	struct FVector2D                                   StartScale;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SplineMeshComponent.SetStartRoll
struct USplineMeshComponent_SetStartRoll_Params
{
	float                                              StartRoll;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SplineMeshComponent.SetStartPosition
struct USplineMeshComponent_SetStartPosition_Params
{
	struct FVector                                     StartPos;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SplineMeshComponent.SetStartOffset
struct USplineMeshComponent_SetStartOffset_Params
{
	struct FVector2D                                   StartOffset;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SplineMeshComponent.SetStartAndEnd
struct USplineMeshComponent_SetStartAndEnd_Params
{
	struct FVector                                     StartPos;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     StartTangent;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     EndPos;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     EndTangent;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SplineMeshComponent.SetEndTangent
struct USplineMeshComponent_SetEndTangent_Params
{
	struct FVector                                     EndTangent;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SplineMeshComponent.SetEndScale
struct USplineMeshComponent_SetEndScale_Params
{
	struct FVector2D                                   EndScale;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SplineMeshComponent.SetEndRoll
struct USplineMeshComponent_SetEndRoll_Params
{
	float                                              EndRoll;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SplineMeshComponent.SetEndPosition
struct USplineMeshComponent_SetEndPosition_Params
{
	struct FVector                                     EndPos;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SplineMeshComponent.SetEndOffset
struct USplineMeshComponent_SetEndOffset_Params
{
	struct FVector2D                                   EndOffset;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SplineMeshComponent.GetStartTangent
struct USplineMeshComponent_GetStartTangent_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SplineMeshComponent.GetStartScale
struct USplineMeshComponent_GetStartScale_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SplineMeshComponent.GetStartRoll
struct USplineMeshComponent_GetStartRoll_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SplineMeshComponent.GetStartPosition
struct USplineMeshComponent_GetStartPosition_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SplineMeshComponent.GetStartOffset
struct USplineMeshComponent_GetStartOffset_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SplineMeshComponent.GetEndTangent
struct USplineMeshComponent_GetEndTangent_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SplineMeshComponent.GetEndScale
struct USplineMeshComponent_GetEndScale_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SplineMeshComponent.GetEndRoll
struct USplineMeshComponent_GetEndRoll_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SplineMeshComponent.GetEndPosition
struct USplineMeshComponent_GetEndPosition_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SplineMeshComponent.GetEndOffset
struct USplineMeshComponent_GetEndOffset_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.ParticleSystem.ContainsEmitterType
struct UParticleSystem_ContainsEmitterType_Params
{
	class UClass*                                      TypeData;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.BoxComponent.SetBoxExtent
struct UBoxComponent_SetBoxExtent_Params
{
	struct FVector                                     InBoxExtent;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUpdateOverlaps;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.BoxComponent.GetUnscaledBoxExtent
struct UBoxComponent_GetUnscaledBoxExtent_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.BoxComponent.GetScaledBoxExtent
struct UBoxComponent_GetScaledBoxExtent_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.CapsuleComponent.SetCapsuleSize
struct UCapsuleComponent_SetCapsuleSize_Params
{
	float                                              InRadius;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InHalfHeight;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUpdateOverlaps;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.CapsuleComponent.SetCapsuleRadius
struct UCapsuleComponent_SetCapsuleRadius_Params
{
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUpdateOverlaps;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.CapsuleComponent.SetCapsuleHalfHeight
struct UCapsuleComponent_SetCapsuleHalfHeight_Params
{
	float                                              HalfHeight;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUpdateOverlaps;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.CapsuleComponent.GetUnscaledCapsuleSize
struct UCapsuleComponent_GetUnscaledCapsuleSize_Params
{
	float                                              OutRadius;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutHalfHeight;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.CapsuleComponent.GetUnscaledCapsuleRadius
struct UCapsuleComponent_GetUnscaledCapsuleRadius_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.CapsuleComponent.GetUnscaledCapsuleHalfHeight
struct UCapsuleComponent_GetUnscaledCapsuleHalfHeight_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.CapsuleComponent.GetShapeScale
struct UCapsuleComponent_GetShapeScale_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.CapsuleComponent.GetScaledCapsuleSize
struct UCapsuleComponent_GetScaledCapsuleSize_Params
{
	float                                              OutRadius;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutHalfHeight;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.CapsuleComponent.GetScaledCapsuleRadius
struct UCapsuleComponent_GetScaledCapsuleRadius_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.CapsuleComponent.GetScaledCapsuleHalfHeight
struct UCapsuleComponent_GetScaledCapsuleHalfHeight_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SphereComponent.SetSphereRadius
struct USphereComponent_SetSphereRadius_Params
{
	float                                              InSphereRadius;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUpdateOverlaps;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SphereComponent.GetUnscaledSphereRadius
struct USphereComponent_GetUnscaledSphereRadius_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SphereComponent.GetShapeScale
struct USphereComponent_GetShapeScale_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SphereComponent.GetScaledSphereRadius
struct USphereComponent_GetScaledSphereRadius_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.TextRenderComponent.SetYScale
struct UTextRenderComponent_SetYScale_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.TextRenderComponent.SetXScale
struct UTextRenderComponent_SetXScale_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.TextRenderComponent.SetWorldSize
struct UTextRenderComponent_SetWorldSize_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.TextRenderComponent.SetTextRenderColor
struct UTextRenderComponent_SetTextRenderColor_Params
{
	struct FColor                                      Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.TextRenderComponent.SetTextMaterial
struct UTextRenderComponent_SetTextMaterial_Params
{
	class UMaterialInterface*                          Material;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.TextRenderComponent.SetText
struct UTextRenderComponent_SetText_Params
{
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
};

// Function Engine.TextRenderComponent.SetHorizSpacingAdjust
struct UTextRenderComponent_SetHorizSpacingAdjust_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.TextRenderComponent.SetHorizontalAlignment
struct UTextRenderComponent_SetHorizontalAlignment_Params
{
	TEnumAsByte<EHorizTextAligment>                    Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.TextRenderComponent.SetFont
struct UTextRenderComponent_SetFont_Params
{
	class UFont*                                       Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.TextRenderComponent.GetTextWorldSize
struct UTextRenderComponent_GetTextWorldSize_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.TextRenderComponent.GetTextLocalSize
struct UTextRenderComponent_GetTextLocalSize_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.VectorFieldComponent.SetIntensity
struct UVectorFieldComponent_SetIntensity_Params
{
	float                                              NewIntensity;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.RadialForceComponent.RemoveObjectTypeToAffect
struct URadialForceComponent_RemoveObjectTypeToAffect_Params
{
	TEnumAsByte<EObjectTypeQuery>                      ObjectType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.RadialForceComponent.FireImpulse
struct URadialForceComponent_FireImpulse_Params
{
};

// Function Engine.RadialForceComponent.AddObjectTypeToAffect
struct URadialForceComponent_AddObjectTypeToAffect_Params
{
	TEnumAsByte<EObjectTypeQuery>                      ObjectType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ReflectionCaptureComponent.ForceUpdateReflectionCapture
struct UReflectionCaptureComponent_ForceUpdateReflectionCapture_Params
{
};

// Function Engine.SceneCaptureComponent.HideComponent
struct USceneCaptureComponent_HideComponent_Params
{
	class UPrimitiveComponent*                         InComponent;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Engine.SceneCaptureComponent.HideActorComponents
struct USceneCaptureComponent_HideActorComponents_Params
{
	class AActor*                                      InActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SplineComponent.SetWorldLocationAtSplinePoint
struct USplineComponent_SetWorldLocationAtSplinePoint_Params
{
	int                                                PointIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InLocation;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Engine.SplineComponent.SetSplineWorldPoints
struct USplineComponent_SetSplineWorldPoints_Params
{
	TArray<struct FVector>                             Points;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Engine.SplineComponent.SetSplineLocalPoints
struct USplineComponent_SetSplineLocalPoints_Params
{
	TArray<struct FVector>                             Points;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Engine.SplineComponent.GetWorldTangentAtDistanceAlongSpline
struct USplineComponent_GetWorldTangentAtDistanceAlongSpline_Params
{
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SplineComponent.GetWorldRotationAtTime
struct USplineComponent_GetWorldRotationAtTime_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseConstantVelocity;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SplineComponent.GetWorldRotationAtDistanceAlongSpline
struct USplineComponent_GetWorldRotationAtDistanceAlongSpline_Params
{
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SplineComponent.GetWorldLocationAtTime
struct USplineComponent_GetWorldLocationAtTime_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseConstantVelocity;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SplineComponent.GetWorldLocationAtSplinePoint
struct USplineComponent_GetWorldLocationAtSplinePoint_Params
{
	int                                                PointIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SplineComponent.GetWorldLocationAtDistanceAlongSpline
struct USplineComponent_GetWorldLocationAtDistanceAlongSpline_Params
{
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SplineComponent.GetWorldDirectionAtTime
struct USplineComponent_GetWorldDirectionAtTime_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseConstantVelocity;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SplineComponent.GetWorldDirectionAtDistanceAlongSpline
struct USplineComponent_GetWorldDirectionAtDistanceAlongSpline_Params
{
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SplineComponent.GetSplineLength
struct USplineComponent_GetSplineLength_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SplineComponent.GetNumSplinePoints
struct USplineComponent_GetNumSplinePoints_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SplineComponent.GetLocalLocationAndTangentAtSplinePoint
struct USplineComponent_GetLocalLocationAndTangentAtSplinePoint_Params
{
	int                                                PointIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LocalLocation;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LocalTangent;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SplineComponent.GetInputKeyAtDistanceAlongSpline
struct USplineComponent_GetInputKeyAtDistanceAlongSpline_Params
{
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SplineComponent.GetDistanceAlongSplineAtSplinePoint
struct USplineComponent_GetDistanceAlongSplineAtSplinePoint_Params
{
	int                                                PointIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SplineComponent.ClearSplinePoints
struct USplineComponent_ClearSplinePoints_Params
{
};

// Function Engine.SplineComponent.AddSplineWorldPoint
struct USplineComponent_AddSplineWorldPoint_Params
{
	struct FVector                                     Position;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Engine.SplineComponent.AddSplineLocalPoint
struct USplineComponent_AddSplineLocalPoint_Params
{
	struct FVector                                     Position;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Engine.TimelineComponent.Stop
struct UTimelineComponent_Stop_Params
{
};

// Function Engine.TimelineComponent.SetTimelineLengthMode
struct UTimelineComponent_SetTimelineLengthMode_Params
{
	TEnumAsByte<ETimelineLengthMode>                   NewLengthMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.TimelineComponent.SetTimelineLength
struct UTimelineComponent_SetTimelineLength_Params
{
	float                                              NewLength;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.TimelineComponent.SetPlayRate
struct UTimelineComponent_SetPlayRate_Params
{
	float                                              NewRate;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.TimelineComponent.SetPlaybackPosition
struct UTimelineComponent_SetPlaybackPosition_Params
{
	float                                              NewPosition;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFireEvents;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.TimelineComponent.SetNewTime
struct UTimelineComponent_SetNewTime_Params
{
	float                                              NewTime;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.TimelineComponent.SetLooping
struct UTimelineComponent_SetLooping_Params
{
	bool                                               bNewLooping;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.TimelineComponent.ReverseFromEnd
struct UTimelineComponent_ReverseFromEnd_Params
{
};

// Function Engine.TimelineComponent.Reverse
struct UTimelineComponent_Reverse_Params
{
};

// Function Engine.TimelineComponent.PlayFromStart
struct UTimelineComponent_PlayFromStart_Params
{
};

// Function Engine.TimelineComponent.Play
struct UTimelineComponent_Play_Params
{
};

// Function Engine.TimelineComponent.OnTimelineVector__DelegateSignature
struct UTimelineComponent_OnTimelineVector__DelegateSignature_Params
{
	struct FVector                                     Output;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.TimelineComponent.OnTimelineLinearColor__DelegateSignature
struct UTimelineComponent_OnTimelineLinearColor__DelegateSignature_Params
{
	struct FLinearColor                                Output;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.TimelineComponent.OnTimelineFloat__DelegateSignature
struct UTimelineComponent_OnTimelineFloat__DelegateSignature_Params
{
	float                                              Output;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.TimelineComponent.OnTimelineEvent__DelegateSignature
struct UTimelineComponent_OnTimelineEvent__DelegateSignature_Params
{
};

// Function Engine.TimelineComponent.OnRep_Timeline
struct UTimelineComponent_OnRep_Timeline_Params
{
};

// Function Engine.TimelineComponent.IsReversing
struct UTimelineComponent_IsReversing_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.TimelineComponent.IsPlaying
struct UTimelineComponent_IsPlaying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.TimelineComponent.IsLooping
struct UTimelineComponent_IsLooping_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.TimelineComponent.GetTimelineLength
struct UTimelineComponent_GetTimelineLength_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.TimelineComponent.GetPlayRate
struct UTimelineComponent_GetPlayRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.TimelineComponent.GetPlaybackPosition
struct UTimelineComponent_GetPlaybackPosition_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.UnlockAIResources
struct UAnimInstance_UnlockAIResources_Params
{
	bool                                               bUnlockMovement;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UnlockAILogic;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.AnimInstance.TryGetPawnOwner
struct UAnimInstance_TryGetPawnOwner_Params
{
	class APawn*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.StopSlotAnimation
struct UAnimInstance_StopSlotAnimation_Params
{
	float                                              InBlendOutTime;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.AnimInstance.SetMorphTarget
struct UAnimInstance_SetMorphTarget_Params
{
	struct FName                                       MorphTargetName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.AnimInstance.PlaySlotAnimation
struct UAnimInstance_PlaySlotAnimation_Params
{
	class UAnimSequenceBase*                           Asset;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SlotNodeName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BlendInTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BlendOutTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InPlayRate;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.OnMontageEndedMCDelegate__DelegateSignature
struct UAnimInstance_OnMontageEndedMCDelegate__DelegateSignature_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInterrupted;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.AnimInstance.OnMontageBlendingOutStartedMCDelegate__DelegateSignature
struct UAnimInstance_OnMontageBlendingOutStartedMCDelegate__DelegateSignature_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInterrupted;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.AnimInstance.Montage_Stop
struct UAnimInstance_Montage_Stop_Params
{
	float                                              InBlendOutTime;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.AnimInstance.Montage_SetPlayRate
struct UAnimInstance_Montage_SetPlayRate_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewPlayRate;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.AnimInstance.Montage_SetNextSection
struct UAnimInstance_Montage_SetNextSection_Params
{
	struct FName                                       SectionNameToChange;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       NextSection;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.AnimInstance.Montage_Play_WithBlending
struct UAnimInstance_Montage_Play_WithBlending_Params
{
	class UAnimMontage*                                MontageToPlay;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BlendInTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BlendOutTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InPlayRate;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPauseOnFinish;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.Montage_Play
struct UAnimInstance_Montage_Play_Params
{
	class UAnimMontage*                                MontageToPlay;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InPlayRate;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPauseOnFinish;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.Montage_JumpToSectionsEnd
struct UAnimInstance_Montage_JumpToSectionsEnd_Params
{
	struct FName                                       SectionName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.AnimInstance.Montage_JumpToSection
struct UAnimInstance_Montage_JumpToSection_Params
{
	struct FName                                       SectionName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.AnimInstance.Montage_IsPlaying
struct UAnimInstance_Montage_IsPlaying_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeFromEndToConsiderFinished;                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.Montage_IsActive
struct UAnimInstance_Montage_IsActive_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.Montage_GetCurrentSection
struct UAnimInstance_Montage_GetCurrentSection_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.LockAIResources
struct UAnimInstance_LockAIResources_Params
{
	bool                                               bLockMovement;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               LockAILogic;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.AnimInstance.IsPlayingSlotAnimation
struct UAnimInstance_IsPlayingSlotAnimation_Params
{
	class UAnimSequenceBase*                           Asset;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SlotNodeName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.GetStateWeight
struct UAnimInstance_GetStateWeight_Params
{
	int                                                MachineIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                StateIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.GetOwningComponent
struct UAnimInstance_GetOwningComponent_Params
{
	class USkeletalMeshComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Engine.AnimInstance.GetOwningActor
struct UAnimInstance_GetOwningActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.GetCurveValue
struct UAnimInstance_GetCurveValue_Params
{
	struct FName                                       CurveName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.GetCurrentStateElapsedTime
struct UAnimInstance_GetCurrentStateElapsedTime_Params
{
	int                                                MachineIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.GetAnimAssetPlayerTimeFromEndFraction
struct UAnimInstance_GetAnimAssetPlayerTimeFromEndFraction_Params
{
	class UAnimationAsset*                             AnimAsset;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CurrentTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.GetAnimAssetPlayerTimeFromEnd
struct UAnimInstance_GetAnimAssetPlayerTimeFromEnd_Params
{
	class UAnimationAsset*                             AnimAsset;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CurrentTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.GetAnimAssetPlayerTimeFraction
struct UAnimInstance_GetAnimAssetPlayerTimeFraction_Params
{
	class UAnimationAsset*                             AnimAsset;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CurrentTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.GetAnimAssetPlayerLength
struct UAnimInstance_GetAnimAssetPlayerLength_Params
{
	class UAnimationAsset*                             AnimAsset;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.ClearMorphTargets
struct UAnimInstance_ClearMorphTargets_Params
{
};

// Function Engine.AnimInstance.CalculateDirection
struct UAnimInstance_CalculateDirection_Params
{
	struct FVector                                     Velocity;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator                                    BaseRotation;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.BlueprintUpdateAnimation
struct UAnimInstance_BlueprintUpdateAnimation_Params
{
	float                                              DeltaTimeX;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.AnimInstance.BlueprintTriggerAnimationEvent
struct UAnimInstance_BlueprintTriggerAnimationEvent_Params
{
	struct FName                                       AnimationEventName;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              playedAnimLength;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.AnimInstance.BlueprintPlayAnimationEvent
struct UAnimInstance_BlueprintPlayAnimationEvent_Params
{
	class UAnimMontage*                                AnimationMontage;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PlayRate;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              playedAnimLength;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.AnimInstance.BlueprintInitializeAnimation
struct UAnimInstance_BlueprintInitializeAnimation_Params
{
};

// Function Engine.AnimInstance.AnimNotify_Sound
struct UAnimInstance_AnimNotify_Sound_Params
{
	class UAnimNotify*                                 Notify;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.AnimSingleNodeInstance.StopAnim
struct UAnimSingleNodeInstance_StopAnim_Params
{
};

// Function Engine.AnimSingleNodeInstance.SetVertexAnimation
struct UAnimSingleNodeInstance_SetVertexAnimation_Params
{
	class UVertexAnimation*                            NewVertexAnim;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsLooping;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InPlayRate;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.AnimSingleNodeInstance.SetReverse
struct UAnimSingleNodeInstance_SetReverse_Params
{
	bool                                               bInReverse;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.AnimSingleNodeInstance.SetPosition
struct UAnimSingleNodeInstance_SetPosition_Params
{
	float                                              InPosition;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFireNotifies;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.AnimSingleNodeInstance.SetPlayRate
struct UAnimSingleNodeInstance_SetPlayRate_Params
{
	float                                              InPlayRate;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.AnimSingleNodeInstance.SetPlaying
struct UAnimSingleNodeInstance_SetPlaying_Params
{
	bool                                               bIsPlaying;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.AnimSingleNodeInstance.SetLooping
struct UAnimSingleNodeInstance_SetLooping_Params
{
	bool                                               bIsLooping;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.AnimSingleNodeInstance.SetBlendSpaceInput
struct UAnimSingleNodeInstance_SetBlendSpaceInput_Params
{
	struct FVector                                     InBlendInput;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Engine.AnimSingleNodeInstance.SetAnimationAsset
struct UAnimSingleNodeInstance_SetAnimationAsset_Params
{
	class UAnimationAsset*                             NewAsset;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsLooping;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InPlayRate;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.AnimSingleNodeInstance.PostEvaluateAnimEvent__DelegateSignature
struct UAnimSingleNodeInstance_PostEvaluateAnimEvent__DelegateSignature_Params
{
};

// Function Engine.AnimSingleNodeInstance.PlayAnim
struct UAnimSingleNodeInstance_PlayAnim_Params
{
	bool                                               bIsLooping;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InPlayRate;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InStartPosition;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.AnimSingleNodeInstance.GetLength
struct UAnimSingleNodeInstance_GetLength_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.VehicleAnimInstance.GetVehicle
struct UVehicleAnimInstance_GetVehicle_Params
{
	class AWheeledVehicle*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AvoidanceManager.RegisterMovementComponent
struct UAvoidanceManager_RegisterMovementComponent_Params
{
	class UCharacterMovementComponent*                 MovementComp;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              AvoidanceWeight;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AvoidanceManager.GetObjectCount
struct UAvoidanceManager_GetObjectCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AvoidanceManager.GetNewAvoidanceUID
struct UAvoidanceManager_GetNewAvoidanceUID_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AvoidanceManager.GetAvoidanceVelocityIgnoringUID
struct UAvoidanceManager_GetAvoidanceVelocityIgnoringUID_Params
{
	struct FNavAvoidanceData                           AvoidanceData;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                IgnoreThisUID;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AvoidanceManager.GetAvoidanceVelocity
struct UAvoidanceManager_GetAvoidanceVelocity_Params
{
	struct FNavAvoidanceData                           AvoidanceData;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.DataTableFunctionLibrary.GetDataTableRowFromName
struct UDataTableFunctionLibrary_GetDataTableRowFromName_Params
{
	class UDataTable*                                  Table;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       RowName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTableRowBase                               OutRow;                                                   // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.DataTableFunctionLibrary.EvaluateCurveTableRow
struct UDataTableFunctionLibrary_EvaluateCurveTableRow_Params
{
	class UCurveTable*                                 CurveTable;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       RowName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InXY;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEvaluateCurveTableResult>             OutResult;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutXY;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.GameplayStatics.UnloadStreamLevel
struct UGameplayStatics_UnloadStreamLevel_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       LevelName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
};

// Function Engine.GameplayStatics.SpawnEmitterAttached
struct UGameplayStatics_SpawnEmitterAttached_Params
{
	class UParticleSystem*                             EmitterTemplate;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             attachToComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       AttachPointName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAttachLocation>                       LocationType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoDestroy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDontSpawnOutOfView;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowSpawnLoopingFX;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OverrideSecondsBeforeInactive;                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Engine.GameplayStatics.SpawnEmitterAtLocation
struct UGameplayStatics_SpawnEmitterAtLocation_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             EmitterTemplate;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoDestroy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDontSpawnOutOfView;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DontSpawnOutOfViewCheckRadius;                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowSpawnLoopingFX;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OverrideSecondsBeforeInactive;                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Engine.GameplayStatics.SpawnDecalAttached
struct UGameplayStatics_SpawnDecalAttached_Params
{
	class UMaterialInterface*                          DecalMaterial;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DecalSize;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             attachToComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       AttachPointName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAttachLocation>                       LocationType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LifeSpan;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UDecalComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Engine.GameplayStatics.SpawnDecalAtLocation
struct UGameplayStatics_SpawnDecalAtLocation_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          DecalMaterial;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DecalSize;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LifeSpan;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UDecalComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Engine.GameplayStatics.SetWorldOriginLocation
struct UGameplayStatics_SetWorldOriginLocation_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FIntVector                                  NewLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.GameplayStatics.SetSoundMode
struct UGameplayStatics_SetSoundMode_Params
{
	struct FName                                       SoundModeName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.GameplayStatics.SetGlobalTimeDilation
struct UGameplayStatics_SetGlobalTimeDilation_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeDilation;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.GameplayStatics.SetGamePaused
struct UGameplayStatics_SetGamePaused_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPaused;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.GameplayStatics.SetBaseSoundMix
struct UGameplayStatics_SetBaseSoundMix_Params
{
	class USoundMix*                                   InSoundMix;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.GameplayStatics.SaveGameToSlot
struct UGameplayStatics_SaveGameToSlot_Params
{
	class USaveGame*                                   SaveGameObject;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     SlotName;                                                 // (Parm, ZeroConstructor)
	int                                                UserIndex;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.GameplayStatics.PushSoundMixModifier
struct UGameplayStatics_PushSoundMixModifier_Params
{
	class USoundMix*                                   InSoundMixModifier;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.GameplayStatics.PopSoundMixModifier
struct UGameplayStatics_PopSoundMixModifier_Params
{
	class USoundMix*                                   InSoundMixModifier;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.GameplayStatics.PlayWorldCameraShake
struct UGameplayStatics_PlayWorldCameraShake_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Shake;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Epicenter;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InnerRadius;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OuterRadius;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Falloff;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOrientShakeTowardsEpicenter;                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ScaleMultiplier;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.GameplayStatics.PlaySoundAttached
struct UGameplayStatics_PlaySoundAttached_Params
{
	class USoundBase*                                  Sound;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             attachToComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       AttachPointName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAttachLocation>                       LocationType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bStopWhenAttachedToDestroyed;                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              VolumeMultiplier;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PitchMultiplier;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundAttenuation*                           AttenuationSettings;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Engine.GameplayStatics.PlaySoundAtLocation
struct UGameplayStatics_PlaySoundAtLocation_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Sound;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              VolumeMultiplier;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PitchMultiplier;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundAttenuation*                           AttenuationSettings;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAlwaysPlay;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.GameplayStatics.PlaySound
struct UGameplayStatics_PlaySound_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   InSoundCue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             AttachComponent;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       AttachName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFollow;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              VolumeMultiplier;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PitchMultiplier;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.GameplayStatics.PlayDialogueAttached
struct UGameplayStatics_PlayDialogueAttached_Params
{
	class UDialogueWave*                               Dialogue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDialogueContext                            Context;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	class USceneComponent*                             attachToComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       AttachPointName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAttachLocation>                       LocationType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bStopWhenAttachedToDestroyed;                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              VolumeMultiplier;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PitchMultiplier;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundAttenuation*                           AttenuationSettings;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Engine.GameplayStatics.PlayDialogueAtLocation
struct UGameplayStatics_PlayDialogueAtLocation_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UDialogueWave*                               Dialogue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDialogueContext                            Context;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              VolumeMultiplier;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PitchMultiplier;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundAttenuation*                           AttenuationSettings;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.GameplayStatics.OpenLevel
struct UGameplayStatics_OpenLevel_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       LevelName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAbsolute;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Options;                                                  // (Parm, ZeroConstructor)
};

// Function Engine.GameplayStatics.LoadStreamLevel
struct UGameplayStatics_LoadStreamLevel_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       LevelName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bMakeVisibleAfterLoad;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldBlockOnLoad;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
};

// Function Engine.GameplayStatics.LoadGameFromSlot
struct UGameplayStatics_LoadGameFromSlot_Params
{
	struct FString                                     SlotName;                                                 // (Parm, ZeroConstructor)
	int                                                UserIndex;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class USaveGame*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.GameplayStatics.IsGameWorld
struct UGameplayStatics_IsGameWorld_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.GameplayStatics.IsGamePaused
struct UGameplayStatics_IsGamePaused_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.GameplayStatics.GetWorldOriginLocation
struct UGameplayStatics_GetWorldOriginLocation_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FIntVector                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.GameplayStatics.GetWorldDeltaSeconds
struct UGameplayStatics_GetWorldDeltaSeconds_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.GameplayStatics.GetSurfaceType
struct UGameplayStatics_GetSurfaceType_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<EPhysicalSurface>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.GameplayStatics.GetStreamingLevel
struct UGameplayStatics_GetStreamingLevel_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       PackageName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class ULevelStreaming*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.GameplayStatics.GetRealTimeSeconds
struct UGameplayStatics_GetRealTimeSeconds_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.GameplayStatics.GetPlayerPawn
struct UGameplayStatics_GetPlayerPawn_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PlayerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.GameplayStatics.GetPlayerController
struct UGameplayStatics_GetPlayerController_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PlayerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.GameplayStatics.GetPlayerCharacter
struct UGameplayStatics_GetPlayerCharacter_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PlayerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class ACharacter*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.GameplayStatics.GetPlayerCameraManager
struct UGameplayStatics_GetPlayerCameraManager_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PlayerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerCameraManager*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.GameplayStatics.GetPlatformName
struct UGameplayStatics_GetPlatformName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.GameplayStatics.GetObjectClass
struct UGameplayStatics_GetObjectClass_Params
{
	class UObject*                                     Object;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.GameplayStatics.GetGlobalTimeDilation
struct UGameplayStatics_GetGlobalTimeDilation_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.GameplayStatics.GetGameState
struct UGameplayStatics_GetGameState_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AGameState*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.GameplayStatics.GetGameMode
struct UGameplayStatics_GetGameMode_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AGameMode*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.GameplayStatics.GetGameInstance
struct UGameplayStatics_GetGameInstance_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UGameInstance*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.GameplayStatics.GetAudioTimeSeconds
struct UGameplayStatics_GetAudioTimeSeconds_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.GameplayStatics.GetAllActorsWithInterface
struct UGameplayStatics_GetAllActorsWithInterface_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Interface;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              OutActors;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function Engine.GameplayStatics.GetAllActorsOfClass
struct UGameplayStatics_GetAllActorsOfClass_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ActorClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              OutActors;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function Engine.GameplayStatics.GetActorArrayBounds
struct UGameplayStatics_GetActorArrayBounds_Params
{
	TArray<class AActor*>                              actors;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bOnlyCollidingComponents;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Center;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BoxExtent;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.GameplayStatics.GetActorArrayAverageLocation
struct UGameplayStatics_GetActorArrayAverageLocation_Params
{
	TArray<class AActor*>                              actors;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.GameplayStatics.GetAccurateRealTime
struct UGameplayStatics_GetAccurateRealTime_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Seconds;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              PartialSeconds;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.GameplayStatics.FinishSpawningActor
struct UGameplayStatics_FinishSpawningActor_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  SpawnTransform;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.GameplayStatics.EnableLiveStreaming
struct UGameplayStatics_EnableLiveStreaming_Params
{
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.GameplayStatics.DoesSaveGameExist
struct UGameplayStatics_DoesSaveGameExist_Params
{
	struct FString                                     SlotName;                                                 // (Parm, ZeroConstructor)
	int                                                UserIndex;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.GameplayStatics.DeleteGameInSlot
struct UGameplayStatics_DeleteGameInSlot_Params
{
	struct FString                                     SlotName;                                                 // (Parm, ZeroConstructor)
	int                                                UserIndex;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.GameplayStatics.DeactivateReverbEffect
struct UGameplayStatics_DeactivateReverbEffect_Params
{
	struct FName                                       TagName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.GameplayStatics.CreateSaveGameObjectFromBlueprint
struct UGameplayStatics_CreateSaveGameObjectFromBlueprint_Params
{
	class UBlueprint*                                  SaveGameBlueprint;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class USaveGame*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.GameplayStatics.CreateSaveGameObject
struct UGameplayStatics_CreateSaveGameObject_Params
{
	class UClass*                                      SaveGameClass;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class USaveGame*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.GameplayStatics.CreatePlayer
struct UGameplayStatics_CreatePlayer_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ControllerId;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSpawnPawn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.GameplayStatics.ClearSoundMixModifiers
struct UGameplayStatics_ClearSoundMixModifiers_Params
{
};

// Function Engine.GameplayStatics.BreakHitResult
struct UGameplayStatics_BreakHitResult_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     Location;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ImpactPoint;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ImpactNormal;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UPhysicalMaterial*                           PhysMat;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      HitActor;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         HitComponent;                                             // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       HitBoneName;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                HitItem;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.GameplayStatics.BlueprintSuggestProjectileVelocity
struct UGameplayStatics_BlueprintSuggestProjectileVelocity_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TossVelocity;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     StartLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     EndLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LaunchSpeed;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OverrideGravityZ;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESuggestProjVelocityTraceOption>       TraceOption;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CollisionRadius;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFavorHighArc;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawDebug;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.GameplayStatics.BeginSpawningActorFromClass
struct UGameplayStatics_BeginSpawningActorFromClass_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ActorClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  SpawnTransform;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bNoCollisionFail;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.GameplayStatics.BeginSpawningActorFromBlueprint
struct UGameplayStatics_BeginSpawningActorFromBlueprint_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UBlueprint*                                  Blueprint;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  SpawnTransform;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bNoCollisionFail;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.GameplayStatics.AreAnyListenersWithinRange
struct UGameplayStatics_AreAnyListenersWithinRange_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaximumRange;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.GameplayStatics.ApplyRadialDamage
struct UGameplayStatics_ApplyRadialDamage_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BaseDamage;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Origin;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              DamageRadius;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageTypeClass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              IgnoreActors;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedByController;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDoFullDamage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     DamagePreventionChannel;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Impulse;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OnlyDamageTargetingTeam;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                IgnoreDamageTargetingTeam;                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.GameplayStatics.ApplyPointDamage
struct UGameplayStatics_ApplyPointDamage_Params
{
	class AActor*                                      DamagedActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BaseDamage;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitFromDirection;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	class AController*                                 EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageTypeClass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Impulse;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForceCollisionCheck;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     ForceCollisionCheckTraceChannel;                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.GameplayStatics.ApplyDamage
struct UGameplayStatics_ApplyDamage_Params
{
	class AActor*                                      DamagedActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BaseDamage;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageTypeClass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Impulse;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.GameplayStatics.ActivateReverbEffect
struct UGameplayStatics_ActivateReverbEffect_Params
{
	class UReverbEffect*                               ReverbEffect;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       TagName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Priority;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Volume;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FadeTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.HeadMountedDisplayFunctionLibrary.ResetOrientationAndPosition
struct UHeadMountedDisplayFunctionLibrary_ResetOrientationAndPosition_Params
{
	float                                              Yaw;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.HeadMountedDisplayFunctionLibrary.IsInLowPersistenceMode
struct UHeadMountedDisplayFunctionLibrary_IsInLowPersistenceMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.HeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayEnabled
struct UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.HeadMountedDisplayFunctionLibrary.HasValidTrackingPosition
struct UHeadMountedDisplayFunctionLibrary_HasValidTrackingPosition_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.HeadMountedDisplayFunctionLibrary.GetScreenPercentage
struct UHeadMountedDisplayFunctionLibrary_GetScreenPercentage_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.HeadMountedDisplayFunctionLibrary.GetPositionalTrackingCameraParameters
struct UHeadMountedDisplayFunctionLibrary_GetPositionalTrackingCameraParameters_Params
{
	struct FVector                                     CameraOrigin;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    CameraRotation;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              HFOV;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              VFOV;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              CameraDistance;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              NearPlane;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              FarPlane;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.HeadMountedDisplayFunctionLibrary.GetOrientationAndPosition
struct UHeadMountedDisplayFunctionLibrary_GetOrientationAndPosition_Params
{
	struct FRotator                                    DeviceRotation;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DevicePosition;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.HeadMountedDisplayFunctionLibrary.EnableLowPersistenceMode
struct UHeadMountedDisplayFunctionLibrary_EnableLowPersistenceMode_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.KismetArrayLibrary.SetArrayPropertyByName
struct UKismetArrayLibrary_SetArrayPropertyByName_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       PropertyName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        Value;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Engine.KismetArrayLibrary.FilterArray
struct UKismetArrayLibrary_FilterArray_Params
{
	TArray<class AActor*>                              TargetArray;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UClass*                                      FilterClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              FilteredArray;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function Engine.KismetArrayLibrary.Array_Shuffle
struct UKismetArrayLibrary_Array_Shuffle_Params
{
	TArray<int>                                        TargetArray;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UArrayProperty*                              ArrayProperty;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.KismetArrayLibrary.Array_Set
struct UKismetArrayLibrary_Array_Set_Params
{
	TArray<int>                                        TargetArray;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UArrayProperty*                              ArrayProperty;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Item;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               bSizeToFit;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.KismetArrayLibrary.Array_Resize
struct UKismetArrayLibrary_Array_Resize_Params
{
	TArray<int>                                        TargetArray;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UArrayProperty*                              ArrayProperty;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Size;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.KismetArrayLibrary.Array_RemoveItem
struct UKismetArrayLibrary_Array_RemoveItem_Params
{
	TArray<int>                                        TargetArray;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UArrayProperty*                              ArrayProperty;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Item;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetArrayLibrary.Array_Remove
struct UKismetArrayLibrary_Array_Remove_Params
{
	TArray<int>                                        TargetArray;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UArrayProperty*                              ArrayProperty;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                IndexToRemove;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.KismetArrayLibrary.Array_Length
struct UKismetArrayLibrary_Array_Length_Params
{
	TArray<int>                                        TargetArray;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UArrayProperty*                              ArrayProperty;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetArrayLibrary.Array_LastIndex
struct UKismetArrayLibrary_Array_LastIndex_Params
{
	TArray<int>                                        TargetArray;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UArrayProperty*                              ArrayProperty;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetArrayLibrary.Array_Insert
struct UKismetArrayLibrary_Array_Insert_Params
{
	TArray<int>                                        TargetArray;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UArrayProperty*                              ArrayProperty;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewItem;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.KismetArrayLibrary.Array_Get
struct UKismetArrayLibrary_Array_Get_Params
{
	TArray<int>                                        TargetArray;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UArrayProperty*                              ArrayProperty;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Item;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.KismetArrayLibrary.Array_Find
struct UKismetArrayLibrary_Array_Find_Params
{
	TArray<int>                                        TargetArray;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UArrayProperty*                              ArrayProperty;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemToFind;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetArrayLibrary.Array_Contains
struct UKismetArrayLibrary_Array_Contains_Params
{
	TArray<int>                                        TargetArray;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UArrayProperty*                              ArrayProperty;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemToFind;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetArrayLibrary.Array_Clear
struct UKismetArrayLibrary_Array_Clear_Params
{
	TArray<int>                                        TargetArray;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UArrayProperty*                              ArrayProperty;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.KismetArrayLibrary.Array_Append
struct UKismetArrayLibrary_Array_Append_Params
{
	TArray<int>                                        TargetArray;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UArrayProperty*                              TargetArrayProperty;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        SourceArray;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UArrayProperty*                              SourceArrayProperty;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.KismetArrayLibrary.Array_Add
struct UKismetArrayLibrary_Array_Add_Params
{
	TArray<int>                                        TargetArray;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UArrayProperty*                              ArrayProperty;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewItem;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetInputLibrary.PointerEvent_IsTouchEvent
struct UKismetInputLibrary_PointerEvent_IsTouchEvent_Params
{
	struct FPointerEvent                               Input;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetInputLibrary.PointerEvent_IsMouseButtonDown
struct UKismetInputLibrary_PointerEvent_IsMouseButtonDown_Params
{
	struct FPointerEvent                               Input;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FKey                                        MouseButton;                                              // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetInputLibrary.PointerEvent_GetWheelDelta
struct UKismetInputLibrary_PointerEvent_GetWheelDelta_Params
{
	struct FPointerEvent                               Input;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetInputLibrary.PointerEvent_GetUserIndex
struct UKismetInputLibrary_PointerEvent_GetUserIndex_Params
{
	struct FPointerEvent                               Input;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetInputLibrary.PointerEvent_GetTouchpadIndex
struct UKismetInputLibrary_PointerEvent_GetTouchpadIndex_Params
{
	struct FPointerEvent                               Input;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetInputLibrary.PointerEvent_GetScreenSpacePosition
struct UKismetInputLibrary_PointerEvent_GetScreenSpacePosition_Params
{
	struct FPointerEvent                               Input;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetInputLibrary.PointerEvent_GetPointerIndex
struct UKismetInputLibrary_PointerEvent_GetPointerIndex_Params
{
	struct FPointerEvent                               Input;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetInputLibrary.PointerEvent_GetLastScreenSpacePosition
struct UKismetInputLibrary_PointerEvent_GetLastScreenSpacePosition_Params
{
	struct FPointerEvent                               Input;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetInputLibrary.PointerEvent_GetGestureDelta
struct UKismetInputLibrary_PointerEvent_GetGestureDelta_Params
{
	struct FPointerEvent                               Input;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetInputLibrary.PointerEvent_GetEffectingButton
struct UKismetInputLibrary_PointerEvent_GetEffectingButton_Params
{
	struct FPointerEvent                               Input;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FKey                                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.KismetInputLibrary.PointerEvent_GetCursorDelta
struct UKismetInputLibrary_PointerEvent_GetCursorDelta_Params
{
	struct FPointerEvent                               Input;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetInputLibrary.InputEvent_IsShiftDown
struct UKismetInputLibrary_InputEvent_IsShiftDown_Params
{
	struct FInputEvent                                 Input;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetInputLibrary.InputEvent_IsRightShiftDown
struct UKismetInputLibrary_InputEvent_IsRightShiftDown_Params
{
	struct FInputEvent                                 Input;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetInputLibrary.InputEvent_IsRightControlDown
struct UKismetInputLibrary_InputEvent_IsRightControlDown_Params
{
	struct FInputEvent                                 Input;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetInputLibrary.InputEvent_IsRightCommandDown
struct UKismetInputLibrary_InputEvent_IsRightCommandDown_Params
{
	struct FInputEvent                                 Input;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetInputLibrary.InputEvent_IsRightAltDown
struct UKismetInputLibrary_InputEvent_IsRightAltDown_Params
{
	struct FInputEvent                                 Input;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetInputLibrary.InputEvent_IsRepeat
struct UKismetInputLibrary_InputEvent_IsRepeat_Params
{
	struct FInputEvent                                 Input;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetInputLibrary.InputEvent_IsLeftShiftDown
struct UKismetInputLibrary_InputEvent_IsLeftShiftDown_Params
{
	struct FInputEvent                                 Input;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetInputLibrary.InputEvent_IsLeftControlDown
struct UKismetInputLibrary_InputEvent_IsLeftControlDown_Params
{
	struct FInputEvent                                 Input;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetInputLibrary.InputEvent_IsLeftCommandDown
struct UKismetInputLibrary_InputEvent_IsLeftCommandDown_Params
{
	struct FInputEvent                                 Input;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetInputLibrary.InputEvent_IsLeftAltDown
struct UKismetInputLibrary_InputEvent_IsLeftAltDown_Params
{
	struct FInputEvent                                 Input;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetInputLibrary.InputEvent_IsControlDown
struct UKismetInputLibrary_InputEvent_IsControlDown_Params
{
	struct FInputEvent                                 Input;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetInputLibrary.InputEvent_IsCommandDown
struct UKismetInputLibrary_InputEvent_IsCommandDown_Params
{
	struct FInputEvent                                 Input;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetInputLibrary.InputEvent_IsAltDown
struct UKismetInputLibrary_InputEvent_IsAltDown_Params
{
	struct FInputEvent                                 Input;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetInputLibrary.GetKey
struct UKismetInputLibrary_GetKey_Params
{
	struct FKeyboardEvent                              Input;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FKey                                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.KismetInputLibrary.EqualEqual_KeyKey
struct UKismetInputLibrary_EqualEqual_KeyKey_Params
{
	struct FKey                                        A;                                                        // (Parm)
	struct FKey                                        B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetInputLibrary.ControllerEvent_GetUserIndex
struct UKismetInputLibrary_ControllerEvent_GetUserIndex_Params
{
	struct FControllerEvent                            Input;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetInputLibrary.ControllerEvent_GetEffectingButton
struct UKismetInputLibrary_ControllerEvent_GetEffectingButton_Params
{
	struct FControllerEvent                            Input;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FKey                                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.KismetInputLibrary.ControllerEvent_GetAnalogValue
struct UKismetInputLibrary_ControllerEvent_GetAnalogValue_Params
{
	struct FControllerEvent                            Input;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetInputLibrary.CalibrateTilt
struct UKismetInputLibrary_CalibrateTilt_Params
{
};

// Function Engine.KismetMaterialLibrary.SetVectorParameterValue
struct UKismetMaterialLibrary_SetVectorParameterValue_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialParameterCollection*                Collection;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ParameterValue;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Engine.KismetMaterialLibrary.SetScalarParameterValue
struct UKismetMaterialLibrary_SetScalarParameterValue_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialParameterCollection*                Collection;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ParameterValue;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.KismetMaterialLibrary.GetVectorParameterValue
struct UKismetMaterialLibrary_GetVectorParameterValue_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialParameterCollection*                Collection;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMaterialLibrary.GetScalarParameterValue
struct UKismetMaterialLibrary_GetScalarParameterValue_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialParameterCollection*                Collection;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMaterialLibrary.CreateDynamicMaterialInstance
struct UKismetMaterialLibrary_CreateDynamicMaterialInstance_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          Parent;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.Xor_IntInt
struct UKismetMathLibrary_Xor_IntInt_Params
{
	int                                                A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.VSize2D
struct UKismetMathLibrary_VSize2D_Params
{
	struct FVector2D                                   A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.VSize
struct UKismetMathLibrary_VSize_Params
{
	struct FVector                                     A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.VLerp
struct UKismetMathLibrary_VLerp_Params
{
	struct FVector                                     A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Alpha;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.VInterpTo_Constant
struct UKismetMathLibrary_VInterpTo_Constant_Params
{
	struct FVector                                     Current;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InterpSpeed;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.VInterpTo
struct UKismetMathLibrary_VInterpTo_Params
{
	struct FVector                                     Current;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InterpSpeed;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.VEase
struct UKismetMathLibrary_VEase_Params
{
	struct FVector                                     A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Alpha;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEasingFunc>                           EasingFunc;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BlendExp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Steps;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.UtcNow
struct UKismetMathLibrary_UtcNow_Params
{
	struct FDateTime                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.KismetMathLibrary.TransformLocation
struct UKismetMathLibrary_TransformLocation_Params
{
	struct FTransform                                  T;                                                        // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.TransformDirection
struct UKismetMathLibrary_TransformDirection_Params
{
	struct FTransform                                  T;                                                        // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.Today
struct UKismetMathLibrary_Today_Params
{
	struct FDateTime                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.KismetMathLibrary.TLerp
struct UKismetMathLibrary_TLerp_Params
{
	struct FTransform                                  A;                                                        // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FTransform                                  B;                                                        // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              Alpha;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.TInterpTo
struct UKismetMathLibrary_TInterpTo_Params
{
	struct FTransform                                  Current;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FTransform                                  Target;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InterpSpeed;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.TimespanZeroValue
struct UKismetMathLibrary_TimespanZeroValue_Params
{
	struct FTimespan                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.KismetMathLibrary.TimespanRatio
struct UKismetMathLibrary_TimespanRatio_Params
{
	struct FTimespan                                   A;                                                        // (Parm, ZeroConstructor)
	struct FTimespan                                   B;                                                        // (Parm, ZeroConstructor)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.TimespanMinValue
struct UKismetMathLibrary_TimespanMinValue_Params
{
	struct FTimespan                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.KismetMathLibrary.TimespanMaxValue
struct UKismetMathLibrary_TimespanMaxValue_Params
{
	struct FTimespan                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.KismetMathLibrary.TEase
struct UKismetMathLibrary_TEase_Params
{
	struct FTransform                                  A;                                                        // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FTransform                                  B;                                                        // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              Alpha;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEasingFunc>                           EasingFunc;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BlendExp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Steps;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.Tan
struct UKismetMathLibrary_Tan_Params
{
	float                                              A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.Subtract_VectorVector
struct UKismetMathLibrary_Subtract_VectorVector_Params
{
	struct FVector                                     A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.Subtract_VectorFloat
struct UKismetMathLibrary_Subtract_VectorFloat_Params
{
	struct FVector                                     A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.Subtract_Vector2DVector2D
struct UKismetMathLibrary_Subtract_Vector2DVector2D_Params
{
	struct FVector2D                                   A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.Subtract_Vector2DFloat
struct UKismetMathLibrary_Subtract_Vector2DFloat_Params
{
	struct FVector2D                                   A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.Subtract_TimespanTimespan
struct UKismetMathLibrary_Subtract_TimespanTimespan_Params
{
	struct FTimespan                                   A;                                                        // (Parm, ZeroConstructor)
	struct FTimespan                                   B;                                                        // (Parm, ZeroConstructor)
	struct FTimespan                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.KismetMathLibrary.Subtract_IntInt
struct UKismetMathLibrary_Subtract_IntInt_Params
{
	int                                                A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.Subtract_FloatFloat
struct UKismetMathLibrary_Subtract_FloatFloat_Params
{
	float                                              A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.Subtract_DoubleDouble
struct UKismetMathLibrary_Subtract_DoubleDouble_Params
{
	double                                             A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.Subtract_DateTimeTimespan
struct UKismetMathLibrary_Subtract_DateTimeTimespan_Params
{
	struct FDateTime                                   A;                                                        // (Parm, ZeroConstructor)
	struct FTimespan                                   B;                                                        // (Parm, ZeroConstructor)
	struct FDateTime                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.KismetMathLibrary.Subtract_ByteByte
struct UKismetMathLibrary_Subtract_ByteByte_Params
{
	unsigned char                                      A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.Square
struct UKismetMathLibrary_Square_Params
{
	float                                              A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.Sqrt
struct UKismetMathLibrary_Sqrt_Params
{
	float                                              A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.Sin
struct UKismetMathLibrary_Sin_Params
{
	float                                              A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.SignOfInteger
struct UKismetMathLibrary_SignOfInteger_Params
{
	int                                                A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.SignOfFloat
struct UKismetMathLibrary_SignOfFloat_Params
{
	float                                              A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.SetRandomStreamSeed
struct UKismetMathLibrary_SetRandomStreamSeed_Params
{
	struct FRandomStream                               Stream;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                NewSeed;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.SelectVector
struct UKismetMathLibrary_SelectVector_Params
{
	struct FVector                                     A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPickA;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.SelectTransform
struct UKismetMathLibrary_SelectTransform_Params
{
	struct FTransform                                  A;                                                        // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FTransform                                  B;                                                        // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bPickA;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.SelectString
struct UKismetMathLibrary_SelectString_Params
{
	struct FString                                     A;                                                        // (Parm, ZeroConstructor)
	struct FString                                     B;                                                        // (Parm, ZeroConstructor)
	bool                                               bPickA;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.KismetMathLibrary.SelectRotator
struct UKismetMathLibrary_SelectRotator_Params
{
	struct FRotator                                    A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPickA;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.SelectObject
struct UKismetMathLibrary_SelectObject_Params
{
	class UObject*                                     A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSelectA;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.SelectInt
struct UKismetMathLibrary_SelectInt_Params
{
	int                                                A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPickA;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.SelectFloat
struct UKismetMathLibrary_SelectFloat_Params
{
	float                                              A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPickA;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.SelectColor
struct UKismetMathLibrary_SelectColor_Params
{
	struct FLinearColor                                A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPickA;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.SeedRandomStream
struct UKismetMathLibrary_SeedRandomStream_Params
{
	struct FRandomStream                               Stream;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Engine.KismetMathLibrary.Round
struct UKismetMathLibrary_Round_Params
{
	float                                              A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.RotatorFromAxisAndAngle
struct UKismetMathLibrary_RotatorFromAxisAndAngle_Params
{
	struct FVector                                     Axis;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Angle;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.RotateAngleAxis
struct UKismetMathLibrary_RotateAngleAxis_Params
{
	struct FVector                                     InVect;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AngleDeg;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Axis;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.RLerp
struct UKismetMathLibrary_RLerp_Params
{
	struct FRotator                                    A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Alpha;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShortestPath;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.RInterpTo_Constant
struct UKismetMathLibrary_RInterpTo_Constant_Params
{
	struct FRotator                                    Current;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InterpSpeed;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.RInterpTo
struct UKismetMathLibrary_RInterpTo_Params
{
	struct FRotator                                    Current;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InterpSpeed;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.RGBToHSV_Vector
struct UKismetMathLibrary_RGBToHSV_Vector_Params
{
	struct FLinearColor                                RGB;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                HSV;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.RGBToHSV
struct UKismetMathLibrary_RGBToHSV_Params
{
	struct FLinearColor                                InColor;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              H;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              S;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              V;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              A;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.ResetRandomStream
struct UKismetMathLibrary_ResetRandomStream_Params
{
	struct FRandomStream                               Stream;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Engine.KismetMathLibrary.REase
struct UKismetMathLibrary_REase_Params
{
	struct FRotator                                    A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Alpha;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShortestPath;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEasingFunc>                           EasingFunc;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BlendExp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Steps;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.RandomUnitVectorInCone
struct UKismetMathLibrary_RandomUnitVectorInCone_Params
{
	struct FVector                                     ConeDir;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ConeHalfAngle;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.RandomUnitVectorFromStream
struct UKismetMathLibrary_RandomUnitVectorFromStream_Params
{
	struct FRandomStream                               Stream;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.RandomUnitVector
struct UKismetMathLibrary_RandomUnitVector_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.RandomRotatorFromStream
struct UKismetMathLibrary_RandomRotatorFromStream_Params
{
	bool                                               bRoll;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRandomStream                               Stream;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.RandomRotator
struct UKismetMathLibrary_RandomRotator_Params
{
	bool                                               bRoll;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.RandomPointInBoundingBox
struct UKismetMathLibrary_RandomPointInBoundingBox_Params
{
	struct FVector                                     Origin;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     BoxExtent;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.RandomIntegerInRangeFromStream
struct UKismetMathLibrary_RandomIntegerInRangeFromStream_Params
{
	int                                                Min;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Max;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRandomStream                               Stream;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.RandomIntegerInRange
struct UKismetMathLibrary_RandomIntegerInRange_Params
{
	int                                                Min;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Max;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.RandomIntegerFromStream
struct UKismetMathLibrary_RandomIntegerFromStream_Params
{
	int                                                Max;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRandomStream                               Stream;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.RandomInteger
struct UKismetMathLibrary_RandomInteger_Params
{
	int                                                Max;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.RandomFloatInRangeFromStream
struct UKismetMathLibrary_RandomFloatInRangeFromStream_Params
{
	float                                              Min;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRandomStream                               Stream;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.RandomFloatInRange
struct UKismetMathLibrary_RandomFloatInRange_Params
{
	float                                              Min;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.RandomFloatFromStream
struct UKismetMathLibrary_RandomFloatFromStream_Params
{
	struct FRandomStream                               Stream;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.RandomFloat
struct UKismetMathLibrary_RandomFloat_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.RandomBoolFromStream
struct UKismetMathLibrary_RandomBoolFromStream_Params
{
	struct FRandomStream                               Stream;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.RandomBool
struct UKismetMathLibrary_RandomBool_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.RadiansToDegrees
struct UKismetMathLibrary_RadiansToDegrees_Params
{
	float                                              A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.ProjectOnTo
struct UKismetMathLibrary_ProjectOnTo_Params
{
	struct FVector                                     X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.PointsAreCoplanar
struct UKismetMathLibrary_PointsAreCoplanar_Params
{
	TArray<struct FVector>                             Points;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              Tolerance;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.Percent_IntInt
struct UKismetMathLibrary_Percent_IntInt_Params
{
	int                                                A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.Percent_FloatFloat
struct UKismetMathLibrary_Percent_FloatFloat_Params
{
	float                                              A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.Percent_ByteByte
struct UKismetMathLibrary_Percent_ByteByte_Params
{
	unsigned char                                      A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.Or_IntInt
struct UKismetMathLibrary_Or_IntInt_Params
{
	int                                                A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.Now
struct UKismetMathLibrary_Now_Params
{
	struct FDateTime                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.KismetMathLibrary.NotEqual_VectorVector
struct UKismetMathLibrary_NotEqual_VectorVector_Params
{
	struct FVector                                     A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.NotEqual_TimespanTimespan
struct UKismetMathLibrary_NotEqual_TimespanTimespan_Params
{
	struct FTimespan                                   A;                                                        // (Parm, ZeroConstructor)
	struct FTimespan                                   B;                                                        // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.NotEqual_RotatorRotator
struct UKismetMathLibrary_NotEqual_RotatorRotator_Params
{
	struct FRotator                                    A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.NotEqual_ObjectObject
struct UKismetMathLibrary_NotEqual_ObjectObject_Params
{
	class UObject*                                     A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.NotEqual_NameName
struct UKismetMathLibrary_NotEqual_NameName_Params
{
	struct FName                                       A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.NotEqual_IntInt
struct UKismetMathLibrary_NotEqual_IntInt_Params
{
	int                                                A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.NotEqual_FloatFloat
struct UKismetMathLibrary_NotEqual_FloatFloat_Params
{
	float                                              A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.NotEqual_DateTimeDateTime
struct UKismetMathLibrary_NotEqual_DateTimeDateTime_Params
{
	struct FDateTime                                   A;                                                        // (Parm, ZeroConstructor)
	struct FDateTime                                   B;                                                        // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.NotEqual_ClassClass
struct UKismetMathLibrary_NotEqual_ClassClass_Params
{
	class UClass*                                      A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.NotEqual_ByteByte
struct UKismetMathLibrary_NotEqual_ByteByte_Params
{
	unsigned char                                      A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.NotEqual_BoolBool
struct UKismetMathLibrary_NotEqual_BoolBool_Params
{
	bool                                               A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.Not_PreBool
struct UKismetMathLibrary_Not_PreBool_Params
{
	bool                                               A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.NormalizeToRange
struct UKismetMathLibrary_NormalizeToRange_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RangeMin;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RangeMax;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.NormalizedDeltaRotator
struct UKismetMathLibrary_NormalizedDeltaRotator_Params
{
	struct FRotator                                    A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.Normal2D
struct UKismetMathLibrary_Normal2D_Params
{
	struct FVector2D                                   A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.Normal
struct UKismetMathLibrary_Normal_Params
{
	struct FVector                                     A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.NegateVector
struct UKismetMathLibrary_NegateVector_Params
{
	struct FVector                                     A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.NegateRotator
struct UKismetMathLibrary_NegateRotator_Params
{
	struct FRotator                                    A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.NearlyEqual_FloatFloat
struct UKismetMathLibrary_NearlyEqual_FloatFloat_Params
{
	float                                              A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ErrorTolerance;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.MultiplyMultiply_FloatFloat
struct UKismetMathLibrary_MultiplyMultiply_FloatFloat_Params
{
	float                                              Base;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Exp;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.MultiplyByPi
struct UKismetMathLibrary_MultiplyByPi_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.Multiply_VectorVector
struct UKismetMathLibrary_Multiply_VectorVector_Params
{
	struct FVector                                     A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.Multiply_VectorFloat
struct UKismetMathLibrary_Multiply_VectorFloat_Params
{
	struct FVector                                     A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.Multiply_Vector2DFloat
struct UKismetMathLibrary_Multiply_Vector2DFloat_Params
{
	struct FVector2D                                   A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.Multiply_TimespanFloat
struct UKismetMathLibrary_Multiply_TimespanFloat_Params
{
	struct FTimespan                                   A;                                                        // (Parm, ZeroConstructor)
	float                                              Scalar;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTimespan                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.KismetMathLibrary.Multiply_RotatorFloat
struct UKismetMathLibrary_Multiply_RotatorFloat_Params
{
	struct FRotator                                    A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.Multiply_LinearColorLinearColor
struct UKismetMathLibrary_Multiply_LinearColorLinearColor_Params
{
	struct FLinearColor                                A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.Multiply_LinearColorFloat
struct UKismetMathLibrary_Multiply_LinearColorFloat_Params
{
	struct FLinearColor                                A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.Multiply_IntInt
struct UKismetMathLibrary_Multiply_IntInt_Params
{
	int                                                A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.Multiply_IntFloat
struct UKismetMathLibrary_Multiply_IntFloat_Params
{
	int                                                A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.Multiply_FloatFloat
struct UKismetMathLibrary_Multiply_FloatFloat_Params
{
	float                                              A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.Multiply_ByteByte
struct UKismetMathLibrary_Multiply_ByteByte_Params
{
	unsigned char                                      A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.MirrorVectorByNormal
struct UKismetMathLibrary_MirrorVectorByNormal_Params
{
	struct FVector                                     InVect;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InNormal;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.MinOfIntArray
struct UKismetMathLibrary_MinOfIntArray_Params
{
	TArray<int>                                        IntArray;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                IndexOfMinValue;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                MinValue;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.MinOfFloatArray
struct UKismetMathLibrary_MinOfFloatArray_Params
{
	TArray<float>                                      FloatArray;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                IndexOfMinValue;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              MinValue;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.MinOfByteArray
struct UKismetMathLibrary_MinOfByteArray_Params
{
	TArray<unsigned char>                              ByteArray;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                IndexOfMinValue;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      MinValue;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.MinimumAreaRectangle
struct UKismetMathLibrary_MinimumAreaRectangle_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             InVerts;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FVector                                     SampleSurfaceNormal;                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     OutRectCenter;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    OutRectRotation;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutSideLengthX;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutSideLengthY;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugDraw;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.Min
struct UKismetMathLibrary_Min_Params
{
	int                                                A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.MaxOfIntArray
struct UKismetMathLibrary_MaxOfIntArray_Params
{
	TArray<int>                                        IntArray;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                IndexOfMaxValue;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                MaxValue;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.MaxOfFloatArray
struct UKismetMathLibrary_MaxOfFloatArray_Params
{
	TArray<float>                                      FloatArray;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                IndexOfMaxValue;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              MaxValue;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.MaxOfByteArray
struct UKismetMathLibrary_MaxOfByteArray_Params
{
	TArray<unsigned char>                              ByteArray;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                IndexOfMaxValue;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      MaxValue;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.Max
struct UKismetMathLibrary_Max_Params
{
	int                                                A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.MapRange
struct UKismetMathLibrary_MapRange_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InRangeA;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InRangeB;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutRangeA;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutRangeB;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.MakeVector2D
struct UKismetMathLibrary_MakeVector2D_Params
{
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.MakeVector
struct UKismetMathLibrary_MakeVector_Params
{
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.MakeTransform
struct UKismetMathLibrary_MakeTransform_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.MakeRotFromZY
struct UKismetMathLibrary_MakeRotFromZY_Params
{
	struct FVector                                     Z;                                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     Y;                                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.MakeRotFromZX
struct UKismetMathLibrary_MakeRotFromZX_Params
{
	struct FVector                                     Z;                                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     X;                                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.MakeRotFromZ
struct UKismetMathLibrary_MakeRotFromZ_Params
{
	struct FVector                                     Z;                                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.MakeRotFromYZ
struct UKismetMathLibrary_MakeRotFromYZ_Params
{
	struct FVector                                     Y;                                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     Z;                                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.MakeRotFromYX
struct UKismetMathLibrary_MakeRotFromYX_Params
{
	struct FVector                                     Y;                                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     X;                                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.MakeRotFromY
struct UKismetMathLibrary_MakeRotFromY_Params
{
	struct FVector                                     Y;                                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.MakeRotFromXZ
struct UKismetMathLibrary_MakeRotFromXZ_Params
{
	struct FVector                                     X;                                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     Z;                                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.MakeRotFromXY
struct UKismetMathLibrary_MakeRotFromXY_Params
{
	struct FVector                                     X;                                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     Y;                                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.MakeRotFromX
struct UKismetMathLibrary_MakeRotFromX_Params
{
	struct FVector                                     X;                                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.MakeRotationFromAxes
struct UKismetMathLibrary_MakeRotationFromAxes_Params
{
	struct FVector                                     Forward;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Right;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Up;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.MakeRot
struct UKismetMathLibrary_MakeRot_Params
{
	float                                              Pitch;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Yaw;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Roll;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.MakeColor
struct UKismetMathLibrary_MakeColor_Params
{
	float                                              R;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              G;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.Loge
struct UKismetMathLibrary_Loge_Params
{
	float                                              A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.LinePlaneIntersection_OriginNormal
struct UKismetMathLibrary_LinePlaneIntersection_OriginNormal_Params
{
	struct FVector                                     LineStart;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     LineEnd;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     PlaneOrigin;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PlaneNormal;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              T;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Intersection;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.LinePlaneIntersection
struct UKismetMathLibrary_LinePlaneIntersection_Params
{
	struct FVector                                     LineStart;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     LineEnd;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FPlane                                      APlane;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              T;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Intersection;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.LinearColorLerp
struct UKismetMathLibrary_LinearColorLerp_Params
{
	struct FLinearColor                                A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Alpha;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.LessLess_VectorRotator
struct UKismetMathLibrary_LessLess_VectorRotator_Params
{
	struct FVector                                     A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.LessEqual_TimespanTimespan
struct UKismetMathLibrary_LessEqual_TimespanTimespan_Params
{
	struct FTimespan                                   A;                                                        // (Parm, ZeroConstructor)
	struct FTimespan                                   B;                                                        // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.LessEqual_IntInt
struct UKismetMathLibrary_LessEqual_IntInt_Params
{
	int                                                A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.LessEqual_FloatFloat
struct UKismetMathLibrary_LessEqual_FloatFloat_Params
{
	float                                              A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.LessEqual_DateTimeDateTime
struct UKismetMathLibrary_LessEqual_DateTimeDateTime_Params
{
	struct FDateTime                                   A;                                                        // (Parm, ZeroConstructor)
	struct FDateTime                                   B;                                                        // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.LessEqual_ByteByte
struct UKismetMathLibrary_LessEqual_ByteByte_Params
{
	unsigned char                                      A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.Less_TimespanTimespan
struct UKismetMathLibrary_Less_TimespanTimespan_Params
{
	struct FTimespan                                   A;                                                        // (Parm, ZeroConstructor)
	struct FTimespan                                   B;                                                        // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.Less_IntInt
struct UKismetMathLibrary_Less_IntInt_Params
{
	int                                                A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.Less_FloatFloat
struct UKismetMathLibrary_Less_FloatFloat_Params
{
	float                                              A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.Less_DateTimeDateTime
struct UKismetMathLibrary_Less_DateTimeDateTime_Params
{
	struct FDateTime                                   A;                                                        // (Parm, ZeroConstructor)
	struct FDateTime                                   B;                                                        // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.Less_ByteByte
struct UKismetMathLibrary_Less_ByteByte_Params
{
	unsigned char                                      A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.Lerp
struct UKismetMathLibrary_Lerp_Params
{
	float                                              A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Alpha;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.IsMorning
struct UKismetMathLibrary_IsMorning_Params
{
	struct FDateTime                                   A;                                                        // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.IsLeapYear
struct UKismetMathLibrary_IsLeapYear_Params
{
	int                                                Year;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.IsAfternoon
struct UKismetMathLibrary_IsAfternoon_Params
{
	struct FDateTime                                   A;                                                        // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.InverseTransformLocation
struct UKismetMathLibrary_InverseTransformLocation_Params
{
	struct FTransform                                  T;                                                        // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.InverseTransformDirection
struct UKismetMathLibrary_InverseTransformDirection_Params
{
	struct FTransform                                  T;                                                        // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.InRange_FloatFloat
struct UKismetMathLibrary_InRange_FloatFloat_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Min;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InclusiveMin;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InclusiveMax;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.HSVToRGB_Vector
struct UKismetMathLibrary_HSVToRGB_Vector_Params
{
	struct FLinearColor                                HSV;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                RGB;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.HSVToRGB
struct UKismetMathLibrary_HSVToRGB_Params
{
	float                                              H;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              S;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              V;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.GreaterGreater_VectorRotator
struct UKismetMathLibrary_GreaterGreater_VectorRotator_Params
{
	struct FVector                                     A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.GreaterEqual_TimespanTimespan
struct UKismetMathLibrary_GreaterEqual_TimespanTimespan_Params
{
	struct FTimespan                                   A;                                                        // (Parm, ZeroConstructor)
	struct FTimespan                                   B;                                                        // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.GreaterEqual_IntInt
struct UKismetMathLibrary_GreaterEqual_IntInt_Params
{
	int                                                A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.GreaterEqual_FloatFloat
struct UKismetMathLibrary_GreaterEqual_FloatFloat_Params
{
	float                                              A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.GreaterEqual_DateTimeDateTime
struct UKismetMathLibrary_GreaterEqual_DateTimeDateTime_Params
{
	struct FDateTime                                   A;                                                        // (Parm, ZeroConstructor)
	struct FDateTime                                   B;                                                        // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.GreaterEqual_ByteByte
struct UKismetMathLibrary_GreaterEqual_ByteByte_Params
{
	unsigned char                                      A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.Greater_TimespanTimespan
struct UKismetMathLibrary_Greater_TimespanTimespan_Params
{
	struct FTimespan                                   A;                                                        // (Parm, ZeroConstructor)
	struct FTimespan                                   B;                                                        // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.Greater_IntInt
struct UKismetMathLibrary_Greater_IntInt_Params
{
	int                                                A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.Greater_FloatFloat
struct UKismetMathLibrary_Greater_FloatFloat_Params
{
	float                                              A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.Greater_DateTimeDateTime
struct UKismetMathLibrary_Greater_DateTimeDateTime_Params
{
	struct FDateTime                                   A;                                                        // (Parm, ZeroConstructor)
	struct FDateTime                                   B;                                                        // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.Greater_ByteByte
struct UKismetMathLibrary_Greater_ByteByte_Params
{
	unsigned char                                      A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.GetYear
struct UKismetMathLibrary_GetYear_Params
{
	struct FDateTime                                   A;                                                        // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.GetVectorArrayAverage
struct UKismetMathLibrary_GetVectorArrayAverage_Params
{
	TArray<struct FVector>                             Vectors;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.GetUpVector
struct UKismetMathLibrary_GetUpVector_Params
{
	struct FRotator                                    InRot;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.GetTotalSeconds
struct UKismetMathLibrary_GetTotalSeconds_Params
{
	struct FTimespan                                   A;                                                        // (Parm, ZeroConstructor)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.GetTotalMinutes
struct UKismetMathLibrary_GetTotalMinutes_Params
{
	struct FTimespan                                   A;                                                        // (Parm, ZeroConstructor)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.GetTotalMilliseconds
struct UKismetMathLibrary_GetTotalMilliseconds_Params
{
	struct FTimespan                                   A;                                                        // (Parm, ZeroConstructor)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.GetTotalHours
struct UKismetMathLibrary_GetTotalHours_Params
{
	struct FTimespan                                   A;                                                        // (Parm, ZeroConstructor)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.GetTotalDays
struct UKismetMathLibrary_GetTotalDays_Params
{
	struct FTimespan                                   A;                                                        // (Parm, ZeroConstructor)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.GetTimeOfDay
struct UKismetMathLibrary_GetTimeOfDay_Params
{
	struct FDateTime                                   A;                                                        // (Parm, ZeroConstructor)
	struct FTimespan                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.KismetMathLibrary.GetSeconds
struct UKismetMathLibrary_GetSeconds_Params
{
	struct FTimespan                                   A;                                                        // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.GetSecond
struct UKismetMathLibrary_GetSecond_Params
{
	struct FDateTime                                   A;                                                        // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.GetRightVector
struct UKismetMathLibrary_GetRightVector_Params
{
	struct FRotator                                    InRot;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.GetPI
struct UKismetMathLibrary_GetPI_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.GetMonth
struct UKismetMathLibrary_GetMonth_Params
{
	struct FDateTime                                   A;                                                        // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.GetMinutes
struct UKismetMathLibrary_GetMinutes_Params
{
	struct FTimespan                                   A;                                                        // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.GetMinute
struct UKismetMathLibrary_GetMinute_Params
{
	struct FDateTime                                   A;                                                        // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.GetMinElement
struct UKismetMathLibrary_GetMinElement_Params
{
	struct FVector                                     A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.GetMilliseconds
struct UKismetMathLibrary_GetMilliseconds_Params
{
	struct FTimespan                                   A;                                                        // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.GetMillisecond
struct UKismetMathLibrary_GetMillisecond_Params
{
	struct FDateTime                                   A;                                                        // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.GetMaxElement
struct UKismetMathLibrary_GetMaxElement_Params
{
	struct FVector                                     A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.GetHours
struct UKismetMathLibrary_GetHours_Params
{
	struct FTimespan                                   A;                                                        // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.GetHour12
struct UKismetMathLibrary_GetHour12_Params
{
	struct FDateTime                                   A;                                                        // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.GetHour
struct UKismetMathLibrary_GetHour_Params
{
	struct FDateTime                                   A;                                                        // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.GetForwardVector
struct UKismetMathLibrary_GetForwardVector_Params
{
	struct FRotator                                    InRot;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.GetDuration
struct UKismetMathLibrary_GetDuration_Params
{
	struct FTimespan                                   A;                                                        // (Parm, ZeroConstructor)
	struct FTimespan                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.KismetMathLibrary.GetDirectionVector
struct UKismetMathLibrary_GetDirectionVector_Params
{
	struct FVector                                     From;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     To;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.GetDays
struct UKismetMathLibrary_GetDays_Params
{
	struct FTimespan                                   A;                                                        // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.GetDayOfYear
struct UKismetMathLibrary_GetDayOfYear_Params
{
	struct FDateTime                                   A;                                                        // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.GetDay
struct UKismetMathLibrary_GetDay_Params
{
	struct FDateTime                                   A;                                                        // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.GetDate
struct UKismetMathLibrary_GetDate_Params
{
	struct FDateTime                                   A;                                                        // (Parm, ZeroConstructor)
	struct FDateTime                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.KismetMathLibrary.GetAxes
struct UKismetMathLibrary_GetAxes_Params
{
	struct FRotator                                    A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     X;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Y;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Z;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.FromSeconds
struct UKismetMathLibrary_FromSeconds_Params
{
	float                                              Seconds;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTimespan                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.KismetMathLibrary.FromMinutes
struct UKismetMathLibrary_FromMinutes_Params
{
	float                                              Minutes;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTimespan                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.KismetMathLibrary.FromMilliseconds
struct UKismetMathLibrary_FromMilliseconds_Params
{
	float                                              Milliseconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTimespan                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.KismetMathLibrary.FromHours
struct UKismetMathLibrary_FromHours_Params
{
	float                                              Hours;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTimespan                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.KismetMathLibrary.FromDays
struct UKismetMathLibrary_FromDays_Params
{
	float                                              Days;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTimespan                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.KismetMathLibrary.Fraction
struct UKismetMathLibrary_Fraction_Params
{
	float                                              A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.FMod
struct UKismetMathLibrary_FMod_Params
{
	float                                              Dividend;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Divisor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Remainder;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.FMin
struct UKismetMathLibrary_FMin_Params
{
	float                                              A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.FMax
struct UKismetMathLibrary_FMax_Params
{
	float                                              A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.FInterpTo_Constant
struct UKismetMathLibrary_FInterpTo_Constant_Params
{
	float                                              Current;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InterpSpeed;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.FInterpTo
struct UKismetMathLibrary_FInterpTo_Params
{
	float                                              Current;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InterpSpeed;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.FInterpEaseInOut
struct UKismetMathLibrary_FInterpEaseInOut_Params
{
	float                                              A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Alpha;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Exponent;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.FindLookAtRotation
struct UKismetMathLibrary_FindLookAtRotation_Params
{
	struct FVector                                     Start;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     Target;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.FFloor
struct UKismetMathLibrary_FFloor_Params
{
	float                                              A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.FClamp
struct UKismetMathLibrary_FClamp_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Min;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.FCeil
struct UKismetMathLibrary_FCeil_Params
{
	float                                              A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.Exp
struct UKismetMathLibrary_Exp_Params
{
	float                                              A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.EqualEqual_VectorVector
struct UKismetMathLibrary_EqualEqual_VectorVector_Params
{
	struct FVector                                     A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.EqualEqual_TimespanTimespan
struct UKismetMathLibrary_EqualEqual_TimespanTimespan_Params
{
	struct FTimespan                                   A;                                                        // (Parm, ZeroConstructor)
	struct FTimespan                                   B;                                                        // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.EqualEqual_RotatorRotator
struct UKismetMathLibrary_EqualEqual_RotatorRotator_Params
{
	struct FRotator                                    A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.EqualEqual_ObjectObject
struct UKismetMathLibrary_EqualEqual_ObjectObject_Params
{
	class UObject*                                     A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.EqualEqual_NameName
struct UKismetMathLibrary_EqualEqual_NameName_Params
{
	struct FName                                       A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.EqualEqual_IntInt
struct UKismetMathLibrary_EqualEqual_IntInt_Params
{
	int                                                A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.EqualEqual_FloatFloat
struct UKismetMathLibrary_EqualEqual_FloatFloat_Params
{
	float                                              A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.EqualEqual_DateTimeDateTime
struct UKismetMathLibrary_EqualEqual_DateTimeDateTime_Params
{
	struct FDateTime                                   A;                                                        // (Parm, ZeroConstructor)
	struct FDateTime                                   B;                                                        // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.EqualEqual_ClassClass
struct UKismetMathLibrary_EqualEqual_ClassClass_Params
{
	class UClass*                                      A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.EqualEqual_ByteByte
struct UKismetMathLibrary_EqualEqual_ByteByte_Params
{
	unsigned char                                      A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.EqualEqual_BoolBool
struct UKismetMathLibrary_EqualEqual_BoolBool_Params
{
	bool                                               A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.Ease
struct UKismetMathLibrary_Ease_Params
{
	float                                              A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Alpha;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEasingFunc>                           EasingFunc;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BlendExp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Steps;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.Dot_VectorVector
struct UKismetMathLibrary_Dot_VectorVector_Params
{
	struct FVector                                     A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.Divide_VectorVector
struct UKismetMathLibrary_Divide_VectorVector_Params
{
	struct FVector                                     A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.Divide_VectorFloat
struct UKismetMathLibrary_Divide_VectorFloat_Params
{
	struct FVector                                     A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.Divide_Vector2DFloat
struct UKismetMathLibrary_Divide_Vector2DFloat_Params
{
	struct FVector2D                                   A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.Divide_IntInt
struct UKismetMathLibrary_Divide_IntInt_Params
{
	int                                                A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.Divide_FloatFloat
struct UKismetMathLibrary_Divide_FloatFloat_Params
{
	float                                              A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.Divide_ByteByte
struct UKismetMathLibrary_Divide_ByteByte_Params
{
	unsigned char                                      A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.DegTan
struct UKismetMathLibrary_DegTan_Params
{
	float                                              A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.DegSin
struct UKismetMathLibrary_DegSin_Params
{
	float                                              A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.DegreesToRadians
struct UKismetMathLibrary_DegreesToRadians_Params
{
	float                                              A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.DegCos
struct UKismetMathLibrary_DegCos_Params
{
	float                                              A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.DegAtan2
struct UKismetMathLibrary_DegAtan2_Params
{
	float                                              A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.DegAsin
struct UKismetMathLibrary_DegAsin_Params
{
	float                                              A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.DegAcos
struct UKismetMathLibrary_DegAcos_Params
{
	float                                              A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.DaysInYear
struct UKismetMathLibrary_DaysInYear_Params
{
	int                                                Year;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.DaysInMonth
struct UKismetMathLibrary_DaysInMonth_Params
{
	int                                                Year;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Month;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.DateTimeMinValue
struct UKismetMathLibrary_DateTimeMinValue_Params
{
	struct FDateTime                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.KismetMathLibrary.DateTimeMaxValue
struct UKismetMathLibrary_DateTimeMaxValue_Params
{
	struct FDateTime                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.KismetMathLibrary.Cross_VectorVector
struct UKismetMathLibrary_Cross_VectorVector_Params
{
	struct FVector                                     A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.Cos
struct UKismetMathLibrary_Cos_Params
{
	float                                              A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.ConvertTransformToRelative
struct UKismetMathLibrary_ConvertTransformToRelative_Params
{
	struct FTransform                                  WorldTransform;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FTransform                                  LocalTransform;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.Conv_VectorToVector2D
struct UKismetMathLibrary_Conv_VectorToVector2D_Params
{
	struct FVector                                     InVector;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.Conv_VectorToTransform
struct UKismetMathLibrary_Conv_VectorToTransform_Params
{
	struct FVector                                     InLocation;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.Conv_VectorToRotator
struct UKismetMathLibrary_Conv_VectorToRotator_Params
{
	struct FVector                                     inVec;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.Conv_VectorToLinearColor
struct UKismetMathLibrary_Conv_VectorToLinearColor_Params
{
	struct FVector                                     inVec;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.Conv_Vector2DToVector
struct UKismetMathLibrary_Conv_Vector2DToVector_Params
{
	struct FVector2D                                   InVector2D;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.Conv_RotatorToVector
struct UKismetMathLibrary_Conv_RotatorToVector_Params
{
	struct FRotator                                    InRot;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.Conv_LinearColorToVector
struct UKismetMathLibrary_Conv_LinearColorToVector_Params
{
	struct FLinearColor                                InLinearColor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.Conv_LinearColorToColor
struct UKismetMathLibrary_Conv_LinearColorToColor_Params
{
	struct FLinearColor                                InLinearColor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FColor                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.Conv_IntToFloat
struct UKismetMathLibrary_Conv_IntToFloat_Params
{
	int                                                InInt;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.Conv_IntToByte
struct UKismetMathLibrary_Conv_IntToByte_Params
{
	int                                                InInt;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.Conv_IntToBool
struct UKismetMathLibrary_Conv_IntToBool_Params
{
	int                                                InInt;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.Conv_FloatToVector
struct UKismetMathLibrary_Conv_FloatToVector_Params
{
	float                                              InFloat;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.Conv_FloatToLinearColor
struct UKismetMathLibrary_Conv_FloatToLinearColor_Params
{
	float                                              InFloat;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.Conv_FloatToDouble
struct UKismetMathLibrary_Conv_FloatToDouble_Params
{
	float                                              InFloat;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.Conv_DoubleToFloat
struct UKismetMathLibrary_Conv_DoubleToFloat_Params
{
	double                                             InDouble;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.Conv_ColorToLinearColor
struct UKismetMathLibrary_Conv_ColorToLinearColor_Params
{
	struct FColor                                      InColor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.Conv_ByteToInt
struct UKismetMathLibrary_Conv_ByteToInt_Params
{
	unsigned char                                      InByte;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.Conv_ByteToFloat
struct UKismetMathLibrary_Conv_ByteToFloat_Params
{
	unsigned char                                      InByte;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.Conv_BoolToInt
struct UKismetMathLibrary_Conv_BoolToInt_Params
{
	bool                                               InBool;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.Conv_BoolToFloat
struct UKismetMathLibrary_Conv_BoolToFloat_Params
{
	bool                                               InBool;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.Conv_BoolToByte
struct UKismetMathLibrary_Conv_BoolToByte_Params
{
	bool                                               InBool;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.ComposeTransforms
struct UKismetMathLibrary_ComposeTransforms_Params
{
	struct FTransform                                  A;                                                        // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FTransform                                  B;                                                        // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.ComposeRotators
struct UKismetMathLibrary_ComposeRotators_Params
{
	struct FRotator                                    A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.ClassIsChildOf
struct UKismetMathLibrary_ClassIsChildOf_Params
{
	class UClass*                                      TestClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ParentClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.ClampVectorSize
struct UKismetMathLibrary_ClampVectorSize_Params
{
	struct FVector                                     A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Min;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.ClampAngle
struct UKismetMathLibrary_ClampAngle_Params
{
	float                                              AngleDegrees;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinAngleDegrees;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxAngleDegrees;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.Clamp
struct UKismetMathLibrary_Clamp_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Min;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Max;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.CInterpTo
struct UKismetMathLibrary_CInterpTo_Params
{
	struct FLinearColor                                Current;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InterpSpeed;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.BreakVector2D
struct UKismetMathLibrary_BreakVector2D_Params
{
	struct FVector2D                                   inVec;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              X;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.BreakVector
struct UKismetMathLibrary_BreakVector_Params
{
	struct FVector                                     inVec;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              X;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.BreakTransform
struct UKismetMathLibrary_BreakTransform_Params
{
	struct FTransform                                  InTransform;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Scale;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.BreakRotIntoAxes
struct UKismetMathLibrary_BreakRotIntoAxes_Params
{
	struct FRotator                                    InRot;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     X;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Y;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Z;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.BreakRot
struct UKismetMathLibrary_BreakRot_Params
{
	struct FRotator                                    InRot;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Pitch;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Yaw;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Roll;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.BreakColor
struct UKismetMathLibrary_BreakColor_Params
{
	struct FLinearColor                                InColor;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              R;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              G;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              B;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              A;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.BooleanXOR
struct UKismetMathLibrary_BooleanXOR_Params
{
	bool                                               A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.BooleanOR
struct UKismetMathLibrary_BooleanOR_Params
{
	bool                                               A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.BooleanAND
struct UKismetMathLibrary_BooleanAND_Params
{
	bool                                               A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.Atan2
struct UKismetMathLibrary_Atan2_Params
{
	float                                              A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.Asin
struct UKismetMathLibrary_Asin_Params
{
	float                                              A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.And_IntInt
struct UKismetMathLibrary_And_IntInt_Params
{
	int                                                A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.Add_VectorVector
struct UKismetMathLibrary_Add_VectorVector_Params
{
	struct FVector                                     A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.Add_VectorFloat
struct UKismetMathLibrary_Add_VectorFloat_Params
{
	struct FVector                                     A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.Add_Vector2DVector2D
struct UKismetMathLibrary_Add_Vector2DVector2D_Params
{
	struct FVector2D                                   A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.Add_Vector2DFloat
struct UKismetMathLibrary_Add_Vector2DFloat_Params
{
	struct FVector2D                                   A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.Add_TimespanTimespan
struct UKismetMathLibrary_Add_TimespanTimespan_Params
{
	struct FTimespan                                   A;                                                        // (Parm, ZeroConstructor)
	struct FTimespan                                   B;                                                        // (Parm, ZeroConstructor)
	struct FTimespan                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.KismetMathLibrary.Add_IntInt
struct UKismetMathLibrary_Add_IntInt_Params
{
	int                                                A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.Add_FloatFloat
struct UKismetMathLibrary_Add_FloatFloat_Params
{
	float                                              A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.Add_DateTimeTimespan
struct UKismetMathLibrary_Add_DateTimeTimespan_Params
{
	struct FDateTime                                   A;                                                        // (Parm, ZeroConstructor)
	struct FTimespan                                   B;                                                        // (Parm, ZeroConstructor)
	struct FDateTime                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.KismetMathLibrary.Add_ByteByte
struct UKismetMathLibrary_Add_ByteByte_Params
{
	unsigned char                                      A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.Acos
struct UKismetMathLibrary_Acos_Params
{
	float                                              A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.Abs_Int
struct UKismetMathLibrary_Abs_Int_Params
{
	int                                                A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetMathLibrary.Abs
struct UKismetMathLibrary_Abs_Params
{
	float                                              A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetNodeHelperLibrary.MarkBit
struct UKismetNodeHelperLibrary_MarkBit_Params
{
	int                                                Data;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.KismetNodeHelperLibrary.HasUnmarkedBit
struct UKismetNodeHelperLibrary_HasUnmarkedBit_Params
{
	int                                                Data;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumBits;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetNodeHelperLibrary.HasMarkedBit
struct UKismetNodeHelperLibrary_HasMarkedBit_Params
{
	int                                                Data;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumBits;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetNodeHelperLibrary.GetValidIndex
struct UKismetNodeHelperLibrary_GetValidIndex_Params
{
	class UEnum*                                       Enum;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      EnumeratorIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetNodeHelperLibrary.GetUnmarkedBit
struct UKismetNodeHelperLibrary_GetUnmarkedBit_Params
{
	int                                                Data;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                StartIdx;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumBits;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRandom;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetNodeHelperLibrary.GetRandomUnmarkedBit
struct UKismetNodeHelperLibrary_GetRandomUnmarkedBit_Params
{
	int                                                Data;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                StartIdx;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumBits;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetNodeHelperLibrary.GetFirstUnmarkedBit
struct UKismetNodeHelperLibrary_GetFirstUnmarkedBit_Params
{
	int                                                Data;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                StartIdx;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumBits;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetNodeHelperLibrary.GetEnumeratorUserFriendlyName
struct UKismetNodeHelperLibrary_GetEnumeratorUserFriendlyName_Params
{
	class UEnum*                                       Enum;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      EnumeratorIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.KismetNodeHelperLibrary.GetEnumeratorName
struct UKismetNodeHelperLibrary_GetEnumeratorName_Params
{
	class UEnum*                                       Enum;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      EnumeratorIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetNodeHelperLibrary.ClearBit
struct UKismetNodeHelperLibrary_ClearBit_Params
{
	int                                                Data;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.KismetNodeHelperLibrary.ClearAllBits
struct UKismetNodeHelperLibrary_ClearAllBits_Params
{
	int                                                Data;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.KismetNodeHelperLibrary.BitIsMarked
struct UKismetNodeHelperLibrary_BitIsMarked_Params
{
	int                                                Data;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetStringLibrary.TrimTrailing
struct UKismetStringLibrary_TrimTrailing_Params
{
	struct FString                                     SourceString;                                             // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.KismetStringLibrary.Trim
struct UKismetStringLibrary_Trim_Params
{
	struct FString                                     SourceString;                                             // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.KismetStringLibrary.ToUpper
struct UKismetStringLibrary_ToUpper_Params
{
	struct FString                                     SourceString;                                             // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.KismetStringLibrary.ToLower
struct UKismetStringLibrary_ToLower_Params
{
	struct FString                                     SourceString;                                             // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.KismetStringLibrary.StartsWith
struct UKismetStringLibrary_StartsWith_Params
{
	struct FString                                     SourceString;                                             // (Parm, ZeroConstructor)
	struct FString                                     InPrefix;                                                 // (Parm, ZeroConstructor)
	TEnumAsByte<ESearchCase>                           SearchCase;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetStringLibrary.Split
struct UKismetStringLibrary_Split_Params
{
	struct FString                                     SourceString;                                             // (Parm, ZeroConstructor)
	struct FString                                     InStr;                                                    // (Parm, ZeroConstructor)
	struct FString                                     LeftS;                                                    // (Parm, OutParm, ZeroConstructor)
	struct FString                                     RightS;                                                   // (Parm, OutParm, ZeroConstructor)
	TEnumAsByte<ESearchCase>                           SearchCase;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESearchDir>                            SearchDir;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetStringLibrary.RightPad
struct UKismetStringLibrary_RightPad_Params
{
	struct FString                                     SourceString;                                             // (Parm, ZeroConstructor)
	int                                                ChCount;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.KismetStringLibrary.RightChop
struct UKismetStringLibrary_RightChop_Params
{
	struct FString                                     SourceString;                                             // (Parm, ZeroConstructor)
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.KismetStringLibrary.Right
struct UKismetStringLibrary_Right_Params
{
	struct FString                                     SourceString;                                             // (Parm, ZeroConstructor)
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.KismetStringLibrary.Reverse
struct UKismetStringLibrary_Reverse_Params
{
	struct FString                                     SourceString;                                             // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.KismetStringLibrary.ReplaceInline
struct UKismetStringLibrary_ReplaceInline_Params
{
	struct FString                                     SourceString;                                             // (Parm, OutParm, ZeroConstructor)
	struct FString                                     SearchText;                                               // (Parm, ZeroConstructor)
	struct FString                                     ReplacementText;                                          // (Parm, ZeroConstructor)
	TEnumAsByte<ESearchCase>                           SearchCase;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetStringLibrary.Replace
struct UKismetStringLibrary_Replace_Params
{
	struct FString                                     SourceString;                                             // (Parm, ZeroConstructor)
	struct FString                                     From;                                                     // (Parm, ZeroConstructor)
	struct FString                                     To;                                                       // (Parm, ZeroConstructor)
	TEnumAsByte<ESearchCase>                           SearchCase;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.KismetStringLibrary.ParseIntoArray
struct UKismetStringLibrary_ParseIntoArray_Params
{
	struct FString                                     SourceString;                                             // (Parm, ZeroConstructor)
	struct FString                                     Delimiter;                                                // (Parm, ZeroConstructor)
	bool                                               CullEmptyStrings;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.KismetStringLibrary.NotEqual_StrStr
struct UKismetStringLibrary_NotEqual_StrStr_Params
{
	struct FString                                     A;                                                        // (Parm, ZeroConstructor)
	struct FString                                     B;                                                        // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetStringLibrary.NotEqual_StriStri
struct UKismetStringLibrary_NotEqual_StriStri_Params
{
	struct FString                                     A;                                                        // (Parm, ZeroConstructor)
	struct FString                                     B;                                                        // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetStringLibrary.Mid
struct UKismetStringLibrary_Mid_Params
{
	struct FString                                     SourceString;                                             // (Parm, ZeroConstructor)
	int                                                Start;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.KismetStringLibrary.MatchesWildcard
struct UKismetStringLibrary_MatchesWildcard_Params
{
	struct FString                                     SourceString;                                             // (Parm, ZeroConstructor)
	struct FString                                     Wildcard;                                                 // (Parm, ZeroConstructor)
	TEnumAsByte<ESearchCase>                           SearchCase;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetStringLibrary.Len
struct UKismetStringLibrary_Len_Params
{
	struct FString                                     S;                                                        // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetStringLibrary.LeftPad
struct UKismetStringLibrary_LeftPad_Params
{
	struct FString                                     SourceString;                                             // (Parm, ZeroConstructor)
	int                                                ChCount;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.KismetStringLibrary.LeftChop
struct UKismetStringLibrary_LeftChop_Params
{
	struct FString                                     SourceString;                                             // (Parm, ZeroConstructor)
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.KismetStringLibrary.Left
struct UKismetStringLibrary_Left_Params
{
	struct FString                                     SourceString;                                             // (Parm, ZeroConstructor)
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.KismetStringLibrary.IsNumeric
struct UKismetStringLibrary_IsNumeric_Params
{
	struct FString                                     SourceString;                                             // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetStringLibrary.GetSubstring
struct UKismetStringLibrary_GetSubstring_Params
{
	struct FString                                     SourceString;                                             // (Parm, ZeroConstructor)
	int                                                StartIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Length;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.KismetStringLibrary.GetCharacterAsNumber
struct UKismetStringLibrary_GetCharacterAsNumber_Params
{
	struct FString                                     SourceString;                                             // (Parm, ZeroConstructor)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetStringLibrary.GetCharacterArrayFromString
struct UKismetStringLibrary_GetCharacterArrayFromString_Params
{
	struct FString                                     SourceString;                                             // (Parm, ZeroConstructor)
	TArray<struct FString>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.KismetStringLibrary.FindSubstring
struct UKismetStringLibrary_FindSubstring_Params
{
	struct FString                                     SearchIn;                                                 // (Parm, ZeroConstructor)
	struct FString                                     Substring;                                                // (Parm, ZeroConstructor)
	bool                                               bUseCase;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSearchFromEnd;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                StartPosition;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetStringLibrary.EqualEqual_StrStr
struct UKismetStringLibrary_EqualEqual_StrStr_Params
{
	struct FString                                     A;                                                        // (Parm, ZeroConstructor)
	struct FString                                     B;                                                        // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetStringLibrary.EqualEqual_StriStri
struct UKismetStringLibrary_EqualEqual_StriStri_Params
{
	struct FString                                     A;                                                        // (Parm, ZeroConstructor)
	struct FString                                     B;                                                        // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetStringLibrary.EndsWith
struct UKismetStringLibrary_EndsWith_Params
{
	struct FString                                     SourceString;                                             // (Parm, ZeroConstructor)
	struct FString                                     InSuffix;                                                 // (Parm, ZeroConstructor)
	TEnumAsByte<ESearchCase>                           SearchCase;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetStringLibrary.CullArray
struct UKismetStringLibrary_CullArray_Params
{
	struct FString                                     SourceString;                                             // (Parm, ZeroConstructor)
	TArray<struct FString>                             InArray;                                                  // (Parm, OutParm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetStringLibrary.Conv_VectorToString
struct UKismetStringLibrary_Conv_VectorToString_Params
{
	struct FVector                                     inVec;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.KismetStringLibrary.Conv_Vector2dToString
struct UKismetStringLibrary_Conv_Vector2dToString_Params
{
	struct FVector2D                                   inVec;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.KismetStringLibrary.Conv_TransformToString
struct UKismetStringLibrary_Conv_TransformToString_Params
{
	struct FTransform                                  InTrans;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.KismetStringLibrary.Conv_StringToName
struct UKismetStringLibrary_Conv_StringToName_Params
{
	struct FString                                     InString;                                                 // (Parm, ZeroConstructor)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetStringLibrary.Conv_StringToInt
struct UKismetStringLibrary_Conv_StringToInt_Params
{
	struct FString                                     InString;                                                 // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetStringLibrary.Conv_StringToFloat
struct UKismetStringLibrary_Conv_StringToFloat_Params
{
	struct FString                                     InString;                                                 // (Parm, ZeroConstructor)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetStringLibrary.Conv_RotatorToString
struct UKismetStringLibrary_Conv_RotatorToString_Params
{
	struct FRotator                                    InRot;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.KismetStringLibrary.Conv_ObjectToString
struct UKismetStringLibrary_Conv_ObjectToString_Params
{
	class UObject*                                     InObj;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.KismetStringLibrary.Conv_NameToString
struct UKismetStringLibrary_Conv_NameToString_Params
{
	struct FName                                       InName;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.KismetStringLibrary.Conv_IntToString
struct UKismetStringLibrary_Conv_IntToString_Params
{
	int                                                InInt;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.KismetStringLibrary.Conv_FloatToString
struct UKismetStringLibrary_Conv_FloatToString_Params
{
	float                                              InFloat;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.KismetStringLibrary.Conv_ColorToString
struct UKismetStringLibrary_Conv_ColorToString_Params
{
	struct FLinearColor                                InColor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.KismetStringLibrary.Conv_ByteToString
struct UKismetStringLibrary_Conv_ByteToString_Params
{
	unsigned char                                      InByte;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.KismetStringLibrary.Conv_BoolToString
struct UKismetStringLibrary_Conv_BoolToString_Params
{
	bool                                               InBool;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.KismetStringLibrary.Concat_StrStr
struct UKismetStringLibrary_Concat_StrStr_Params
{
	struct FString                                     A;                                                        // (Parm, ZeroConstructor)
	struct FString                                     B;                                                        // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.KismetStringLibrary.BuildString_Vector2d
struct UKismetStringLibrary_BuildString_Vector2d_Params
{
	struct FString                                     AppendTo;                                                 // (Parm, ZeroConstructor)
	struct FString                                     Prefix;                                                   // (Parm, ZeroConstructor)
	struct FVector2D                                   InVector2D;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Suffix;                                                   // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.KismetStringLibrary.BuildString_Vector
struct UKismetStringLibrary_BuildString_Vector_Params
{
	struct FString                                     AppendTo;                                                 // (Parm, ZeroConstructor)
	struct FString                                     Prefix;                                                   // (Parm, ZeroConstructor)
	struct FVector                                     InVector;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Suffix;                                                   // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.KismetStringLibrary.BuildString_Rotator
struct UKismetStringLibrary_BuildString_Rotator_Params
{
	struct FString                                     AppendTo;                                                 // (Parm, ZeroConstructor)
	struct FString                                     Prefix;                                                   // (Parm, ZeroConstructor)
	struct FRotator                                    InRot;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Suffix;                                                   // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.KismetStringLibrary.BuildString_Object
struct UKismetStringLibrary_BuildString_Object_Params
{
	struct FString                                     AppendTo;                                                 // (Parm, ZeroConstructor)
	struct FString                                     Prefix;                                                   // (Parm, ZeroConstructor)
	class UObject*                                     InObj;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Suffix;                                                   // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.KismetStringLibrary.BuildString_Name
struct UKismetStringLibrary_BuildString_Name_Params
{
	struct FString                                     AppendTo;                                                 // (Parm, ZeroConstructor)
	struct FString                                     Prefix;                                                   // (Parm, ZeroConstructor)
	struct FName                                       InName;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Suffix;                                                   // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.KismetStringLibrary.BuildString_Int
struct UKismetStringLibrary_BuildString_Int_Params
{
	struct FString                                     AppendTo;                                                 // (Parm, ZeroConstructor)
	struct FString                                     Prefix;                                                   // (Parm, ZeroConstructor)
	int                                                InInt;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Suffix;                                                   // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.KismetStringLibrary.BuildString_Float
struct UKismetStringLibrary_BuildString_Float_Params
{
	struct FString                                     AppendTo;                                                 // (Parm, ZeroConstructor)
	struct FString                                     Prefix;                                                   // (Parm, ZeroConstructor)
	float                                              InFloat;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Suffix;                                                   // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.KismetStringLibrary.BuildString_Color
struct UKismetStringLibrary_BuildString_Color_Params
{
	struct FString                                     AppendTo;                                                 // (Parm, ZeroConstructor)
	struct FString                                     Prefix;                                                   // (Parm, ZeroConstructor)
	struct FLinearColor                                InColor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Suffix;                                                   // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.KismetStringLibrary.BuildString_Bool
struct UKismetStringLibrary_BuildString_Bool_Params
{
	struct FString                                     AppendTo;                                                 // (Parm, ZeroConstructor)
	struct FString                                     Prefix;                                                   // (Parm, ZeroConstructor)
	bool                                               InBool;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Suffix;                                                   // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.KismetSystemLibrary.StackTrace
struct UKismetSystemLibrary_StackTrace_Params
{
};

// Function Engine.KismetSystemLibrary.SphereTraceSingleForObjects
struct UKismetSystemLibrary_SphereTraceSingleForObjects_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Start;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<EObjectTypeQuery>>              ObjectTypes;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ActorsToIgnore;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<EDrawDebugTrace>                       DrawDebugType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  OutHit;                                                   // (Parm, OutParm)
	bool                                               bIgnoreSelf;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.SphereTraceSingleByObject_DEPRECATED
struct UKismetSystemLibrary_SphereTraceSingleByObject_DEPRECATED_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Start;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<ECollisionChannel>>             ObjectsToTrace;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ActorsToIgnore;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<EDrawDebugTrace>                       DrawDebugType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  OutHit;                                                   // (Parm, OutParm)
	bool                                               bIgnoreSelf;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.SphereTraceSingle_NEW
struct UKismetSystemLibrary_SphereTraceSingle_NEW_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Start;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETraceTypeQuery>                       TraceChannel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ActorsToIgnore;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<EDrawDebugTrace>                       DrawDebugType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  OutHit;                                                   // (Parm, OutParm)
	bool                                               bIgnoreSelf;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.SphereTraceSingle_DEPRECATED
struct UKismetSystemLibrary_SphereTraceSingle_DEPRECATED_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Start;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     TraceChannel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ActorsToIgnore;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<EDrawDebugTrace>                       DrawDebugType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  OutHit;                                                   // (Parm, OutParm)
	bool                                               bIgnoreSelf;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.SphereTraceMultiForObjects
struct UKismetSystemLibrary_SphereTraceMultiForObjects_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Start;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<EObjectTypeQuery>>              ObjectTypes;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ActorsToIgnore;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<EDrawDebugTrace>                       DrawDebugType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHitResult>                          OutHits;                                                  // (Parm, OutParm, ZeroConstructor)
	bool                                               bIgnoreSelf;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.SphereTraceMultiByObject_DEPRECATED
struct UKismetSystemLibrary_SphereTraceMultiByObject_DEPRECATED_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Start;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<ECollisionChannel>>             ObjectsToTrace;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ActorsToIgnore;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<EDrawDebugTrace>                       DrawDebugType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHitResult>                          OutHits;                                                  // (Parm, OutParm, ZeroConstructor)
	bool                                               bIgnoreSelf;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.SphereTraceMulti_NEW
struct UKismetSystemLibrary_SphereTraceMulti_NEW_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Start;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETraceTypeQuery>                       TraceChannel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ActorsToIgnore;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<EDrawDebugTrace>                       DrawDebugType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHitResult>                          OutHits;                                                  // (Parm, OutParm, ZeroConstructor)
	bool                                               bIgnoreSelf;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.SphereTraceMulti_DEPRECATED
struct UKismetSystemLibrary_SphereTraceMulti_DEPRECATED_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Start;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     TraceChannel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ActorsToIgnore;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<EDrawDebugTrace>                       DrawDebugType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHitResult>                          OutHits;                                                  // (Parm, OutParm, ZeroConstructor)
	bool                                               bIgnoreSelf;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.SphereOverlapComponents_NEW
struct UKismetSystemLibrary_SphereOverlapComponents_NEW_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SpherePos;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              SphereRadius;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<EObjectTypeQuery>>              ObjectTypes;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UClass*                                      ComponentClassFilter;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ActorsToIgnore;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UPrimitiveComponent*>                 OutComponents;                                            // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.SphereOverlapComponents_DEPRECATED
struct UKismetSystemLibrary_SphereOverlapComponents_DEPRECATED_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SpherePos;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              SphereRadius;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EOverlapFilterOption>                  Filter;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ComponentClassFilter;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ActorsToIgnore;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UPrimitiveComponent*>                 OutComponents;                                            // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.SphereOverlapActorsSimple
struct UKismetSystemLibrary_SphereOverlapActorsSimple_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SpherePos;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              SphereRadius;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EObjectTypeQuery>                      ObjectType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ActorClassFilter;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ActorsToIgnore;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class AActor*>                              OutActors;                                                // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.SphereOverlapActors_NEW
struct UKismetSystemLibrary_SphereOverlapActors_NEW_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SpherePos;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              SphereRadius;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<EObjectTypeQuery>>              ObjectTypes;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UClass*                                      ActorClassFilter;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ActorsToIgnore;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class AActor*>                              OutActors;                                                // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.SphereOverlapActors_DEPRECATED
struct UKismetSystemLibrary_SphereOverlapActors_DEPRECATED_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SpherePos;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              SphereRadius;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EOverlapFilterOption>                  Filter;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ActorClassFilter;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ActorsToIgnore;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class AActor*>                              OutActors;                                                // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.ShowPlatformSpecificLeaderboardScreen
struct UKismetSystemLibrary_ShowPlatformSpecificLeaderboardScreen_Params
{
	struct FString                                     CategoryName;                                             // (Parm, ZeroConstructor)
};

// Function Engine.KismetSystemLibrary.ShowPlatformSpecificAchievementsScreen
struct UKismetSystemLibrary_ShowPlatformSpecificAchievementsScreen_Params
{
	class APlayerController*                           SpecificPlayer;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.ShowAdBanner
struct UKismetSystemLibrary_ShowAdBanner_Params
{
	bool                                               bShowOnBottomOfScreen;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.SetVectorPropertyByName
struct UKismetSystemLibrary_SetVectorPropertyByName_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       PropertyName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Value;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.SetTransformPropertyByName
struct UKismetSystemLibrary_SetTransformPropertyByName_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       PropertyName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Value;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.SetTextPropertyByName
struct UKismetSystemLibrary_SetTextPropertyByName_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       PropertyName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Value;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Engine.KismetSystemLibrary.SetSupressViewportTransitionMessage
struct UKismetSystemLibrary_SetSupressViewportTransitionMessage_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bState;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.SetStructurePropertyByName
struct UKismetSystemLibrary_SetStructurePropertyByName_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       PropertyName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGenericStruct                              Value;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.SetStringPropertyByName
struct UKismetSystemLibrary_SetStringPropertyByName_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       PropertyName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
};

// Function Engine.KismetSystemLibrary.SetRotatorPropertyByName
struct UKismetSystemLibrary_SetRotatorPropertyByName_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       PropertyName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Value;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.SetObjectPropertyByName
struct UKismetSystemLibrary_SetObjectPropertyByName_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       PropertyName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.SetNamePropertyByName
struct UKismetSystemLibrary_SetNamePropertyByName_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       PropertyName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Value;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.SetLinearColorPropertyByName
struct UKismetSystemLibrary_SetLinearColorPropertyByName_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       PropertyName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Value;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.SetIntPropertyByName
struct UKismetSystemLibrary_SetIntPropertyByName_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       PropertyName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.SetFloatPropertyByName
struct UKismetSystemLibrary_SetFloatPropertyByName_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       PropertyName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.SetDoublePropertyByName
struct UKismetSystemLibrary_SetDoublePropertyByName_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       PropertyName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.SetClassPropertyByName
struct UKismetSystemLibrary_SetClassPropertyByName_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       PropertyName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.SetBytePropertyByName
struct UKismetSystemLibrary_SetBytePropertyByName_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       PropertyName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.SetBoolPropertyByName
struct UKismetSystemLibrary_SetBoolPropertyByName_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       PropertyName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.RetriggerableDelay
struct UKismetSystemLibrary_RetriggerableDelay_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
};

// Function Engine.KismetSystemLibrary.QuitGame
struct UKismetSystemLibrary_QuitGame_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           SpecificPlayer;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EQuitPreference>                       QuitPreference;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.PrintWarning
struct UKismetSystemLibrary_PrintWarning_Params
{
	struct FString                                     InString;                                                 // (Parm, ZeroConstructor)
};

// Function Engine.KismetSystemLibrary.PrintString
struct UKismetSystemLibrary_PrintString_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InString;                                                 // (Parm, ZeroConstructor)
	bool                                               bPrintToScreen;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPrintToLog;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                TextColor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.MoveComponentTo
struct UKismetSystemLibrary_MoveComponentTo_Params
{
	class USceneComponent*                             Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     TargetRelativeLocation;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    TargetRelativeRotation;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEaseOut;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEaseIn;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OverTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMoveComponentAction>                  MoveAction;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
};

// Function Engine.KismetSystemLibrary.MakeLiteralText
struct UKismetSystemLibrary_MakeLiteralText_Params
{
	struct FText                                       Value;                                                    // (Parm)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.KismetSystemLibrary.MakeLiteralString
struct UKismetSystemLibrary_MakeLiteralString_Params
{
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.KismetSystemLibrary.MakeLiteralName
struct UKismetSystemLibrary_MakeLiteralName_Params
{
	struct FName                                       Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.MakeLiteralInt
struct UKismetSystemLibrary_MakeLiteralInt_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.MakeLiteralFloat
struct UKismetSystemLibrary_MakeLiteralFloat_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.MakeLiteralByte
struct UKismetSystemLibrary_MakeLiteralByte_Params
{
	unsigned char                                      Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.MakeLiteralBool
struct UKismetSystemLibrary_MakeLiteralBool_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.LineTraceSingleForObjects
struct UKismetSystemLibrary_LineTraceSingleForObjects_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Start;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<EObjectTypeQuery>>              ObjectTypes;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ActorsToIgnore;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<EDrawDebugTrace>                       DrawDebugType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  OutHit;                                                   // (Parm, OutParm)
	bool                                               bIgnoreSelf;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.LineTraceSingleByObject_DEPRECATED
struct UKismetSystemLibrary_LineTraceSingleByObject_DEPRECATED_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Start;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<ECollisionChannel>>             ObjectsToTrace;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ActorsToIgnore;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<EDrawDebugTrace>                       DrawDebugType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  OutHit;                                                   // (Parm, OutParm)
	bool                                               bIgnoreSelf;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.LineTraceSingle_NEW
struct UKismetSystemLibrary_LineTraceSingle_NEW_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Start;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     TraceChannel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ActorsToIgnore;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<EDrawDebugTrace>                       DrawDebugType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  OutHit;                                                   // (Parm, OutParm)
	bool                                               bIgnoreSelf;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.LineTraceSingle_DEPRECATED
struct UKismetSystemLibrary_LineTraceSingle_DEPRECATED_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Start;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     TraceChannel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ActorsToIgnore;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<EDrawDebugTrace>                       DrawDebugType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  OutHit;                                                   // (Parm, OutParm)
	bool                                               bIgnoreSelf;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.LineTraceMultiForObjects
struct UKismetSystemLibrary_LineTraceMultiForObjects_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Start;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<EObjectTypeQuery>>              ObjectTypes;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ActorsToIgnore;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<EDrawDebugTrace>                       DrawDebugType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHitResult>                          OutHits;                                                  // (Parm, OutParm, ZeroConstructor)
	bool                                               bIgnoreSelf;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.LineTraceMultiByObject_DEPRECATED
struct UKismetSystemLibrary_LineTraceMultiByObject_DEPRECATED_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Start;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<ECollisionChannel>>             ObjectsToTrace;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ActorsToIgnore;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<EDrawDebugTrace>                       DrawDebugType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHitResult>                          OutHits;                                                  // (Parm, OutParm, ZeroConstructor)
	bool                                               bIgnoreSelf;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.LineTraceMulti_NEW
struct UKismetSystemLibrary_LineTraceMulti_NEW_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Start;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETraceTypeQuery>                       TraceChannel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ActorsToIgnore;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<EDrawDebugTrace>                       DrawDebugType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHitResult>                          OutHits;                                                  // (Parm, OutParm, ZeroConstructor)
	bool                                               bIgnoreSelf;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.LineTraceMulti_DEPRECATED
struct UKismetSystemLibrary_LineTraceMulti_DEPRECATED_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Start;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     TraceChannel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ActorsToIgnore;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<EDrawDebugTrace>                       DrawDebugType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHitResult>                          OutHits;                                                  // (Parm, OutParm, ZeroConstructor)
	bool                                               bIgnoreSelf;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.LaunchURL
struct UKismetSystemLibrary_LaunchURL_Params
{
	struct FString                                     URL;                                                      // (Parm, ZeroConstructor)
};

// Function Engine.KismetSystemLibrary.K2_UnPauseTimer
struct UKismetSystemLibrary_K2_UnPauseTimer_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     FunctionName;                                             // (Parm, ZeroConstructor)
};

// Function Engine.KismetSystemLibrary.K2_TimerExists
struct UKismetSystemLibrary_K2_TimerExists_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     FunctionName;                                             // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.K2_SetTimerDelegate
struct UKismetSystemLibrary_K2_SetTimerDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, ZeroConstructor)
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLooping;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.K2_SetTimer
struct UKismetSystemLibrary_K2_SetTimer_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     FunctionName;                                             // (Parm, ZeroConstructor)
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLooping;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.K2_PauseTimer
struct UKismetSystemLibrary_K2_PauseTimer_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     FunctionName;                                             // (Parm, ZeroConstructor)
};

// Function Engine.KismetSystemLibrary.K2_IsTimerPaused
struct UKismetSystemLibrary_K2_IsTimerPaused_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     FunctionName;                                             // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.K2_IsTimerActive
struct UKismetSystemLibrary_K2_IsTimerActive_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     FunctionName;                                             // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.K2_GetTimerRemainingTime
struct UKismetSystemLibrary_K2_GetTimerRemainingTime_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     FunctionName;                                             // (Parm, ZeroConstructor)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.K2_GetTimerElapsedTime
struct UKismetSystemLibrary_K2_GetTimerElapsedTime_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     FunctionName;                                             // (Parm, ZeroConstructor)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.K2_ClearTimer
struct UKismetSystemLibrary_K2_ClearTimer_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     FunctionName;                                             // (Parm, ZeroConstructor)
};

// Function Engine.KismetSystemLibrary.IsValid
struct UKismetSystemLibrary_IsValid_Params
{
	class UObject*                                     Object;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.IsServer
struct UKismetSystemLibrary_IsServer_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.IsPackagedForDistribution
struct UKismetSystemLibrary_IsPackagedForDistribution_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.IsDedicatedServer
struct UKismetSystemLibrary_IsDedicatedServer_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.HideAdBanner
struct UKismetSystemLibrary_HideAdBanner_Params
{
};

// Function Engine.KismetSystemLibrary.GetUniqueDeviceId
struct UKismetSystemLibrary_GetUniqueDeviceId_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.KismetSystemLibrary.GetRenderingMaterialQualityLevel
struct UKismetSystemLibrary_GetRenderingMaterialQualityLevel_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.GetRenderingDetailMode
struct UKismetSystemLibrary_GetRenderingDetailMode_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.GetPlatformUserName
struct UKismetSystemLibrary_GetPlatformUserName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.KismetSystemLibrary.GetGameTimeInSeconds
struct UKismetSystemLibrary_GetGameTimeInSeconds_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.GetGameName
struct UKismetSystemLibrary_GetGameName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.KismetSystemLibrary.GetEngineVersion
struct UKismetSystemLibrary_GetEngineVersion_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.KismetSystemLibrary.GetDisplayName
struct UKismetSystemLibrary_GetDisplayName_Params
{
	class UObject*                                     Object;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.KismetSystemLibrary.GetComponentBounds
struct UKismetSystemLibrary_GetComponentBounds_Params
{
	class USceneComponent*                             Component;                                                // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Origin;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BoxExtent;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              SphereRadius;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.GetClassDisplayName
struct UKismetSystemLibrary_GetClassDisplayName_Params
{
	class UClass*                                      Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.KismetSystemLibrary.GetActorListFromComponentList
struct UKismetSystemLibrary_GetActorListFromComponentList_Params
{
	TArray<class UPrimitiveComponent*>                 ComponentList;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UClass*                                      ActorClassFilter;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              OutActorList;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function Engine.KismetSystemLibrary.GetActorBounds
struct UKismetSystemLibrary_GetActorBounds_Params
{
	class AActor*                                      Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Origin;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BoxExtent;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.ForceCloseAdBanner
struct UKismetSystemLibrary_ForceCloseAdBanner_Params
{
};

// Function Engine.KismetSystemLibrary.FlushPersistentDebugLines
struct UKismetSystemLibrary_FlushPersistentDebugLines_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.FlushDebugStrings
struct UKismetSystemLibrary_FlushDebugStrings_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.ExecuteConsoleCommand
struct UKismetSystemLibrary_ExecuteConsoleCommand_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Command;                                                  // (Parm, ZeroConstructor)
	class APlayerController*                           SpecificPlayer;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.DrawDebugString
struct UKismetSystemLibrary_DrawDebugString_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TextLocation;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Text;                                                     // (Parm, ZeroConstructor)
	class AActor*                                      TestBaseActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                TextColor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.DrawDebugSphere
struct UKismetSystemLibrary_DrawDebugSphere_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Center;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Segments;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                LineColor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.DrawDebugPoint
struct UKismetSystemLibrary_DrawDebugPoint_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Size;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                PointColor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.DrawDebugPlane
struct UKismetSystemLibrary_DrawDebugPlane_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FPlane                                      PlaneCoordinates;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Size;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                PlaneColor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.DrawDebugLine
struct UKismetSystemLibrary_DrawDebugLine_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LineStart;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LineEnd;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                LineColor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.DrawDebugFrustum
struct UKismetSystemLibrary_DrawDebugFrustum_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  FrustumTransform;                                         // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FLinearColor                                FrustumColor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.DrawDebugFloatHistoryTransform
struct UKismetSystemLibrary_DrawDebugFloatHistoryTransform_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDebugFloatHistory                          FloatHistory;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FTransform                                  DrawTransform;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   DrawSize;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                DrawColor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.DrawDebugFloatHistoryLocation
struct UKismetSystemLibrary_DrawDebugFloatHistoryLocation_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDebugFloatHistory                          FloatHistory;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     DrawLocation;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   DrawSize;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                DrawColor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.DrawDebugCylinder
struct UKismetSystemLibrary_DrawDebugCylinder_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Start;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Segments;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                LineColor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.DrawDebugCoordinateSystem
struct UKismetSystemLibrary_DrawDebugCoordinateSystem_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AxisLoc;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    AxisRot;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.DrawDebugConeInDegrees
struct UKismetSystemLibrary_DrawDebugConeInDegrees_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Origin;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Length;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AngleWidth;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AngleHeight;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumSides;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                LineColor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.DrawDebugCone
struct UKismetSystemLibrary_DrawDebugCone_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Origin;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Length;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AngleWidth;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AngleHeight;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumSides;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                LineColor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.DrawDebugCapsule
struct UKismetSystemLibrary_DrawDebugCapsule_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Center;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              HalfHeight;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                LineColor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.DrawDebugCamera
struct UKismetSystemLibrary_DrawDebugCamera_Params
{
	class ACameraActor*                                CameraActor;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                CameraColor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.DrawDebugBox
struct UKismetSystemLibrary_DrawDebugBox_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Center;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Extent;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                LineColor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.DrawDebugArrow
struct UKismetSystemLibrary_DrawDebugArrow_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LineStart;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LineEnd;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ArrowSize;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                LineColor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.DoesImplementInterface
struct UKismetSystemLibrary_DoesImplementInterface_Params
{
	class UObject*                                     TestObject;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Interface;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.Delay
struct UKismetSystemLibrary_Delay_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
};

// Function Engine.KismetSystemLibrary.CreateCopyForUndoBuffer
struct UKismetSystemLibrary_CreateCopyForUndoBuffer_Params
{
	class UObject*                                     ObjectToModify;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.Conv_InterfaceToObject
struct UKismetSystemLibrary_Conv_InterfaceToObject_Params
{
	TScriptInterface<class UInterface>                 Interface;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.ControlScreensaver
struct UKismetSystemLibrary_ControlScreensaver_Params
{
	bool                                               bAllowScreenSaver;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.ComponentOverlapComponents_NEW
struct UKismetSystemLibrary_ComponentOverlapComponents_NEW_Params
{
	class UPrimitiveComponent*                         Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FTransform                                  ComponentTransform;                                       // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	TArray<TEnumAsByte<EObjectTypeQuery>>              ObjectTypes;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UClass*                                      ComponentClassFilter;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ActorsToIgnore;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UPrimitiveComponent*>                 OutComponents;                                            // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.ComponentOverlapComponents_DEPRECATED
struct UKismetSystemLibrary_ComponentOverlapComponents_DEPRECATED_Params
{
	class UPrimitiveComponent*                         Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FTransform                                  ComponentTransform;                                       // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	TEnumAsByte<EOverlapFilterOption>                  Filter;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ComponentClassFilter;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ActorsToIgnore;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UPrimitiveComponent*>                 OutComponents;                                            // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.ComponentOverlapActors_NEW
struct UKismetSystemLibrary_ComponentOverlapActors_NEW_Params
{
	class UPrimitiveComponent*                         Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FTransform                                  ComponentTransform;                                       // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	TArray<TEnumAsByte<EObjectTypeQuery>>              ObjectTypes;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UClass*                                      ActorClassFilter;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ActorsToIgnore;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class AActor*>                              OutActors;                                                // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.ComponentOverlapActors_DEPRECATED
struct UKismetSystemLibrary_ComponentOverlapActors_DEPRECATED_Params
{
	class UPrimitiveComponent*                         Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FTransform                                  ComponentTransform;                                       // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	TEnumAsByte<EOverlapFilterOption>                  Filter;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ActorClassFilter;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ActorsToIgnore;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class AActor*>                              OutActors;                                                // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.CollectGarbage
struct UKismetSystemLibrary_CollectGarbage_Params
{
};

// Function Engine.KismetSystemLibrary.CapsuleTraceSingleForObjects
struct UKismetSystemLibrary_CapsuleTraceSingleForObjects_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Start;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              HalfHeight;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<EObjectTypeQuery>>              ObjectTypes;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ActorsToIgnore;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<EDrawDebugTrace>                       DrawDebugType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  OutHit;                                                   // (Parm, OutParm)
	bool                                               bIgnoreSelf;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.CapsuleTraceSingleByObject_DEPRECATED
struct UKismetSystemLibrary_CapsuleTraceSingleByObject_DEPRECATED_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Start;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              HalfHeight;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<ECollisionChannel>>             ObjectsToTrace;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ActorsToIgnore;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<EDrawDebugTrace>                       DrawDebugType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  OutHit;                                                   // (Parm, OutParm)
	bool                                               bIgnoreSelf;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.CapsuleTraceSingle_NEW
struct UKismetSystemLibrary_CapsuleTraceSingle_NEW_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Start;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              HalfHeight;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETraceTypeQuery>                       TraceChannel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ActorsToIgnore;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<EDrawDebugTrace>                       DrawDebugType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  OutHit;                                                   // (Parm, OutParm)
	bool                                               bIgnoreSelf;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.CapsuleTraceSingle_DEPRECATED
struct UKismetSystemLibrary_CapsuleTraceSingle_DEPRECATED_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Start;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              HalfHeight;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     TraceChannel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ActorsToIgnore;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<EDrawDebugTrace>                       DrawDebugType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  OutHit;                                                   // (Parm, OutParm)
	bool                                               bIgnoreSelf;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.CapsuleTraceMultiForObjects
struct UKismetSystemLibrary_CapsuleTraceMultiForObjects_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Start;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              HalfHeight;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<EObjectTypeQuery>>              ObjectTypes;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ActorsToIgnore;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<EDrawDebugTrace>                       DrawDebugType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHitResult>                          OutHits;                                                  // (Parm, OutParm, ZeroConstructor)
	bool                                               bIgnoreSelf;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.CapsuleTraceMultiByObject_DEPRECATED
struct UKismetSystemLibrary_CapsuleTraceMultiByObject_DEPRECATED_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Start;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              HalfHeight;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<ECollisionChannel>>             ObjectsToTrace;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ActorsToIgnore;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<EDrawDebugTrace>                       DrawDebugType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHitResult>                          OutHits;                                                  // (Parm, OutParm, ZeroConstructor)
	bool                                               bIgnoreSelf;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.CapsuleTraceMulti_NEW
struct UKismetSystemLibrary_CapsuleTraceMulti_NEW_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Start;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              HalfHeight;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETraceTypeQuery>                       TraceChannel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ActorsToIgnore;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<EDrawDebugTrace>                       DrawDebugType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHitResult>                          OutHits;                                                  // (Parm, OutParm, ZeroConstructor)
	bool                                               bIgnoreSelf;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.CapsuleTraceMulti_DEPRECATED
struct UKismetSystemLibrary_CapsuleTraceMulti_DEPRECATED_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Start;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              HalfHeight;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     TraceChannel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ActorsToIgnore;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<EDrawDebugTrace>                       DrawDebugType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHitResult>                          OutHits;                                                  // (Parm, OutParm, ZeroConstructor)
	bool                                               bIgnoreSelf;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.CapsuleOverlapComponents_NEW
struct UKismetSystemLibrary_CapsuleOverlapComponents_NEW_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CapsulePos;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              HalfHeight;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<EObjectTypeQuery>>              ObjectTypes;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UClass*                                      ComponentClassFilter;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ActorsToIgnore;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UPrimitiveComponent*>                 OutComponents;                                            // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.CapsuleOverlapComponents_DEPRECATED
struct UKismetSystemLibrary_CapsuleOverlapComponents_DEPRECATED_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CapsulePos;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              HalfHeight;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EOverlapFilterOption>                  Filter;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ComponentClassFilter;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ActorsToIgnore;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UPrimitiveComponent*>                 OutComponents;                                            // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.CapsuleOverlapActors_NEW
struct UKismetSystemLibrary_CapsuleOverlapActors_NEW_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CapsulePos;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              HalfHeight;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<EObjectTypeQuery>>              ObjectTypes;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UClass*                                      ActorClassFilter;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ActorsToIgnore;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class AActor*>                              OutActors;                                                // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.CapsuleOverlapActors_DEPRECATED
struct UKismetSystemLibrary_CapsuleOverlapActors_DEPRECATED_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CapsulePos;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              HalfHeight;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EOverlapFilterOption>                  Filter;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ActorClassFilter;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ActorsToIgnore;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class AActor*>                              OutActors;                                                // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.BoxTraceSingleForObjects
struct UKismetSystemLibrary_BoxTraceSingleForObjects_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Start;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HalfSize;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Orientation;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<EObjectTypeQuery>>              ObjectTypes;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ActorsToIgnore;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<EDrawDebugTrace>                       DrawDebugType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  OutHit;                                                   // (Parm, OutParm)
	bool                                               bIgnoreSelf;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.BoxTraceSingle
struct UKismetSystemLibrary_BoxTraceSingle_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Start;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HalfSize;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Orientation;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETraceTypeQuery>                       TraceChannel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ActorsToIgnore;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<EDrawDebugTrace>                       DrawDebugType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  OutHit;                                                   // (Parm, OutParm)
	bool                                               bIgnoreSelf;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.BoxTraceMultiForObjects
struct UKismetSystemLibrary_BoxTraceMultiForObjects_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Start;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HalfSize;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Orientation;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<EObjectTypeQuery>>              ObjectTypes;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ActorsToIgnore;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<EDrawDebugTrace>                       DrawDebugType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHitResult>                          OutHits;                                                  // (Parm, OutParm, ZeroConstructor)
	bool                                               bIgnoreSelf;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.BoxTraceMulti
struct UKismetSystemLibrary_BoxTraceMulti_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Start;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HalfSize;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Orientation;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETraceTypeQuery>                       TraceChannel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ActorsToIgnore;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<EDrawDebugTrace>                       DrawDebugType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHitResult>                          OutHits;                                                  // (Parm, OutParm, ZeroConstructor)
	bool                                               bIgnoreSelf;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.BoxOverlapComponents_NEW
struct UKismetSystemLibrary_BoxOverlapComponents_NEW_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BoxPos;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Extent;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<EObjectTypeQuery>>              ObjectTypes;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UClass*                                      ComponentClassFilter;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ActorsToIgnore;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UPrimitiveComponent*>                 OutComponents;                                            // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.BoxOverlapComponents_DEPRECATED
struct UKismetSystemLibrary_BoxOverlapComponents_DEPRECATED_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BoxPos;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Extent;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EOverlapFilterOption>                  Filter;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ComponentClassFilter;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ActorsToIgnore;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UPrimitiveComponent*>                 OutComponents;                                            // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.BoxOverlapActors_NEW
struct UKismetSystemLibrary_BoxOverlapActors_NEW_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BoxPos;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BoxExtent;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<EObjectTypeQuery>>              ObjectTypes;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UClass*                                      ActorClassFilter;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ActorsToIgnore;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class AActor*>                              OutActors;                                                // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.BoxOverlapActors_DEPRECATED
struct UKismetSystemLibrary_BoxOverlapActors_DEPRECATED_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BoxPos;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BoxExtent;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EOverlapFilterOption>                  Filter;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ActorClassFilter;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ActorsToIgnore;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class AActor*>                              OutActors;                                                // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetSystemLibrary.BlueprintTimerDynamicDelegate__DelegateSignature
struct UKismetSystemLibrary_BlueprintTimerDynamicDelegate__DelegateSignature_Params
{
};

// Function Engine.KismetSystemLibrary.AddFloatHistorySample
struct UKismetSystemLibrary_AddFloatHistorySample_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDebugFloatHistory                          FloatHistory;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FDebugFloatHistory                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.KismetTextLibrary.TextTrimTrailing
struct UKismetTextLibrary_TextTrimTrailing_Params
{
	struct FText                                       InText;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.KismetTextLibrary.TextTrimPrecedingAndTrailing
struct UKismetTextLibrary_TextTrimPrecedingAndTrailing_Params
{
	struct FText                                       InText;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.KismetTextLibrary.TextTrimPreceding
struct UKismetTextLibrary_TextTrimPreceding_Params
{
	struct FText                                       InText;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.KismetTextLibrary.TextIsTransient
struct UKismetTextLibrary_TextIsTransient_Params
{
	struct FText                                       InText;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetTextLibrary.TextIsEmpty
struct UKismetTextLibrary_TextIsEmpty_Params
{
	struct FText                                       InText;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetTextLibrary.TextIsCultureInvariant
struct UKismetTextLibrary_TextIsCultureInvariant_Params
{
	struct FText                                       InText;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetTextLibrary.NotEqual_TextText
struct UKismetTextLibrary_NotEqual_TextText_Params
{
	struct FText                                       A;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FText                                       B;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetTextLibrary.NotEqual_IgnoreCase_TextText
struct UKismetTextLibrary_NotEqual_IgnoreCase_TextText_Params
{
	struct FText                                       A;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FText                                       B;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetTextLibrary.GetEmptyText
struct UKismetTextLibrary_GetEmptyText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.KismetTextLibrary.Format
struct UKismetTextLibrary_Format_Params
{
	struct FText                                       InPattern;                                                // (Parm)
	TArray<struct FFormatTextArgument>                 InArgs;                                                   // (Parm, ZeroConstructor)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.KismetTextLibrary.FindTextInLocalizationTable
struct UKismetTextLibrary_FindTextInLocalizationTable_Params
{
	struct FString                                     Namespace;                                                // (Parm, ZeroConstructor)
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	struct FText                                       OutText;                                                  // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetTextLibrary.EqualEqual_TextText
struct UKismetTextLibrary_EqualEqual_TextText_Params
{
	struct FText                                       A;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FText                                       B;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetTextLibrary.EqualEqual_IgnoreCase_TextText
struct UKismetTextLibrary_EqualEqual_IgnoreCase_TextText_Params
{
	struct FText                                       A;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FText                                       B;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.KismetTextLibrary.Conv_TextToString
struct UKismetTextLibrary_Conv_TextToString_Params
{
	struct FText                                       InText;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.KismetTextLibrary.Conv_StringToText
struct UKismetTextLibrary_Conv_StringToText_Params
{
	struct FString                                     InString;                                                 // (Parm, ZeroConstructor)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.KismetTextLibrary.Conv_NameToText
struct UKismetTextLibrary_Conv_NameToText_Params
{
	struct FName                                       InName;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.KismetTextLibrary.Conv_IntToText
struct UKismetTextLibrary_Conv_IntToText_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseGrouping;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MinimumIntegralDigits;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaximumIntegralDigits;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.KismetTextLibrary.Conv_FloatToText
struct UKismetTextLibrary_Conv_FloatToText_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERoundingMode>                         RoundingMode;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseGrouping;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MinimumIntegralDigits;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaximumIntegralDigits;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MinimumFractionalDigits;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaximumFractionalDigits;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.KismetTextLibrary.Conv_ByteToText
struct UKismetTextLibrary_Conv_ByteToText_Params
{
	unsigned char                                      Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.KismetTextLibrary.Conv_BoolToText
struct UKismetTextLibrary_Conv_BoolToText_Params
{
	bool                                               InBool;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.KismetTextLibrary.AsTimespan_Timespan
struct UKismetTextLibrary_AsTimespan_Timespan_Params
{
	struct FTimespan                                   InTimespan;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.KismetTextLibrary.AsTime_DateTime
struct UKismetTextLibrary_AsTime_DateTime_Params
{
	struct FDateTime                                   In;                                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.KismetTextLibrary.AsPercent_Float
struct UKismetTextLibrary_AsPercent_Float_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERoundingMode>                         RoundingMode;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseGrouping;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MinimumIntegralDigits;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaximumIntegralDigits;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MinimumFractionalDigits;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaximumFractionalDigits;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.KismetTextLibrary.AsDateTime_DateTime
struct UKismetTextLibrary_AsDateTime_DateTime_Params
{
	struct FDateTime                                   In;                                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.KismetTextLibrary.AsDate_DateTime
struct UKismetTextLibrary_AsDate_DateTime_Params
{
	struct FDateTime                                   InDateTime;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.KismetTextLibrary.AsCurrency_Integer
struct UKismetTextLibrary_AsCurrency_Integer_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERoundingMode>                         RoundingMode;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseGrouping;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MinimumIntegralDigits;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaximumIntegralDigits;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MinimumFractionalDigits;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaximumFractionalDigits;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     CurrencyCode;                                             // (Parm, ZeroConstructor)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.KismetTextLibrary.AsCurrency_Float
struct UKismetTextLibrary_AsCurrency_Float_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERoundingMode>                         RoundingMode;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseGrouping;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MinimumIntegralDigits;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaximumIntegralDigits;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MinimumFractionalDigits;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaximumFractionalDigits;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     CurrencyCode;                                             // (Parm, ZeroConstructor)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.CameraAnimInst.Stop
struct UCameraAnimInst_Stop_Params
{
	bool                                               bImmediate;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.CameraAnimInst.SetDuration
struct UCameraAnimInst_SetDuration_Params
{
	float                                              NewDuration;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Canvas.K2_TextSize
struct UCanvas_K2_TextSize_Params
{
	class UFont*                                       RenderFont;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     RenderText;                                               // (Parm, ZeroConstructor)
	struct FVector2D                                   Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Canvas.K2_StrLen
struct UCanvas_K2_StrLen_Params
{
	class UFont*                                       RenderFont;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     RenderText;                                               // (Parm, ZeroConstructor)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Canvas.K2_Project
struct UCanvas_K2_Project_Params
{
	struct FVector                                     WorldLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Canvas.K2_DrawTriangle
struct UCanvas_K2_DrawTriangle_Params
{
	class UTexture*                                    RenderTexture;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FCanvasUVTri>                        Triangles;                                                // (Parm, ZeroConstructor)
};

// Function Engine.Canvas.K2_DrawTexture
struct UCanvas_K2_DrawTexture_Params
{
	class UTexture*                                    RenderTexture;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ScreenPosition;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ScreenSize;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   CoordinatePosition;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   CoordinateSize;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                RenderColor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBlendMode>                            BlendMode;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   PivotPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Canvas.K2_DrawText
struct UCanvas_K2_DrawText_Params
{
	class UFont*                                       RenderFont;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     RenderText;                                               // (Parm, ZeroConstructor)
	struct FVector2D                                   ScreenPosition;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                RenderColor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Kerning;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ShadowColor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ShadowOffset;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCentreX;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCentreY;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOutlined;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                OutlineColor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Canvas.K2_DrawPolygon
struct UCanvas_K2_DrawPolygon_Params
{
	class UTexture*                                    RenderTexture;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ScreenPosition;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumberOfSides;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                RenderColor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Canvas.K2_DrawMaterial
struct UCanvas_K2_DrawMaterial_Params
{
	class UMaterialInterface*                          RenderMaterial;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ScreenPosition;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ScreenSize;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   CoordinatePosition;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   CoordinateSize;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   PivotPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Canvas.K2_DrawLine
struct UCanvas_K2_DrawLine_Params
{
	struct FVector2D                                   ScreenPositionA;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ScreenPositionB;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                RenderColor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Canvas.K2_DrawBox
struct UCanvas_K2_DrawBox_Params
{
	struct FVector2D                                   ScreenPosition;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ScreenSize;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Canvas.K2_DrawBorder
struct UCanvas_K2_DrawBorder_Params
{
	class UTexture*                                    BorderTexture;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    BackgroundTexture;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    LeftBorderTexture;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    RightBorderTexture;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    TopBorderTexture;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    BottomBorderTexture;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ScreenPosition;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ScreenSize;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   CoordinatePosition;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   CoordinateSize;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                RenderColor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   BorderScale;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   BackgroundScale;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   PivotPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   CornerSize;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Canvas.K2_Deproject
struct UCanvas_K2_Deproject_Params
{
	struct FVector2D                                   ScreenPosition;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WorldOrigin;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WorldDirection;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Canvas.BPDrawTextWrapped
struct UCanvas_BPDrawTextWrapped_Params
{
	class UFont*                                       InFont;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InText;                                                   // (Parm, ZeroConstructor)
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              XWidth;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              YWidth;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              XScale;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              YScale;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDoCenterX;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDoCenterY;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   SpacingAdjust;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Canvas.BPDrawTextCentered
struct UCanvas_BPDrawTextCentered_Params
{
	class UFont*                                       InFont;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InText;                                                   // (Parm, ZeroConstructor)
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              XScale;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              YScale;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDoCenterX;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDoCenterY;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.CurveLinearColor.GetLinearColorValue
struct UCurveLinearColor_GetLinearColorValue_Params
{
	float                                              InTime;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.CurveVector.GetVectorValue
struct UCurveVector_GetVectorValue_Params
{
	float                                              InTime;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PlayerInput.SetMouseSensitivityToDefault
struct UPlayerInput_SetMouseSensitivityToDefault_Params
{
};

// Function Engine.PlayerInput.SetMouseSensitivity
struct UPlayerInput_SetMouseSensitivity_Params
{
	float                                              Sensitivity;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerInput.SetBind
struct UPlayerInput_SetBind_Params
{
	struct FName                                       BindName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Command;                                                  // (Parm, ZeroConstructor)
};

// Function Engine.PlayerInput.InvertMouse
struct UPlayerInput_InvertMouse_Params
{
};

// Function Engine.PlayerInput.InvertAxisKey
struct UPlayerInput_InvertAxisKey_Params
{
	struct FKey                                        AxisKey;                                                  // (ConstParm, Parm)
};

// Function Engine.PlayerInput.InvertAxis
struct UPlayerInput_InvertAxis_Params
{
	struct FName                                       AxisName;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerInput.ClearSmoothing
struct UPlayerInput_ClearSmoothing_Params
{
};

// Function Engine.LevelStreaming.LevelStreamingVisibilityStatus__DelegateSignature
struct ULevelStreaming_LevelStreamingVisibilityStatus__DelegateSignature_Params
{
};

// Function Engine.LevelStreaming.LevelStreamingLoadedStatus__DelegateSignature
struct ULevelStreaming_LevelStreamingLoadedStatus__DelegateSignature_Params
{
};

// Function Engine.LevelStreaming.IsLevelVisible
struct ULevelStreaming_IsLevelVisible_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.LevelStreaming.IsLevelLoaded
struct ULevelStreaming_IsLevelLoaded_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.LevelStreaming.CreateInstance
struct ULevelStreaming_CreateInstance_Params
{
	struct FString                                     UniqueInstanceName;                                       // (Parm, ZeroConstructor)
	class ULevelStreaming*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.MaterialInstanceDynamic.SetVectorParameterValue
struct UMaterialInstanceDynamic_SetVectorParameterValue_Params
{
	struct FName                                       ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.MaterialInstanceDynamic.SetTextureParameterValue
struct UMaterialInstanceDynamic_SetTextureParameterValue_Params
{
	struct FName                                       ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.MaterialInstanceDynamic.SetScalarParameterValue
struct UMaterialInstanceDynamic_SetScalarParameterValue_Params
{
	struct FName                                       ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.MaterialInstanceDynamic.K2_InterpolateMaterialInstanceParams
struct UMaterialInstanceDynamic_K2_InterpolateMaterialInstanceParams_Params
{
	class UMaterialInstance*                           MaterialA;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           MaterialB;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Alpha;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.MaterialInstanceDynamic.K2_GetVectorParameterValue
struct UMaterialInstanceDynamic_K2_GetVectorParameterValue_Params
{
	struct FName                                       ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.MaterialInstanceDynamic.K2_GetTextureParameterValue
struct UMaterialInstanceDynamic_K2_GetTextureParameterValue_Params
{
	struct FName                                       ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.MaterialInstanceDynamic.K2_GetScalarParameterValue
struct UMaterialInstanceDynamic_K2_GetScalarParameterValue_Params
{
	struct FName                                       ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.MaterialInstanceDynamic.K2_CopyMaterialInstanceParameters
struct UMaterialInstanceDynamic_K2_CopyMaterialInstanceParameters_Params
{
	class UMaterialInterface*                          SourceMaterialToCopyFrom;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.MaterialInstanceDynamic.CopyParameterOverrides
struct UMaterialInstanceDynamic_CopyParameterOverrides_Params
{
	class UMaterialInstance*                           MaterialInstance;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.NavigationPath.OnNavigationPathUpdated__DelegateSignature
struct UNavigationPath_OnNavigationPathUpdated__DelegateSignature_Params
{
	class UNavigationPath*                             AffectedPath;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ENavPathEvent>                         PathEvent;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.NavigationPath.IsValid
struct UNavigationPath_IsValid_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.NavigationPath.IsStringPulled
struct UNavigationPath_IsStringPulled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.NavigationPath.IsPartial
struct UNavigationPath_IsPartial_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.NavigationPath.GetPathLength
struct UNavigationPath_GetPathLength_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.NavigationPath.GetPathCost
struct UNavigationPath_GetPathCost_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.NavigationPath.GetDebugString
struct UNavigationPath_GetDebugString_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.NavigationPath.EnableRecalculationOnInvalidation
struct UNavigationPath_EnableRecalculationOnInvalidation_Params
{
	TEnumAsByte<ENavigationOptionFlag>                 DoRecalculation;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.NavigationPath.EnableDebugDrawing
struct UNavigationPath_EnableDebugDrawing_Params
{
	bool                                               bShouldDrawDebugData;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                PathColor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlatformInterfaceBase.PlatformInterfaceDelegate__DelegateSignature
struct UPlatformInterfaceBase_PlatformInterfaceDelegate__DelegateSignature_Params
{
	struct FPlatformInterfaceDelegateResult            Result;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Engine.InGameAdManager.OnUserClosedAdvertisement__DelegateSignature
struct UInGameAdManager_OnUserClosedAdvertisement__DelegateSignature_Params
{
};

// Function Engine.InGameAdManager.OnUserClickedBanner__DelegateSignature
struct UInGameAdManager_OnUserClickedBanner__DelegateSignature_Params
{
};

// Function Engine.TwitterIntegrationBase.TwitterRequest
struct UTwitterIntegrationBase_TwitterRequest_Params
{
	struct FString                                     URL;                                                      // (Parm, ZeroConstructor)
	TArray<struct FString>                             ParamKeysAndValues;                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<ETwitterRequestMethod>                 RequestMethod;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                AccountIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.TwitterIntegrationBase.ShowTweetUI
struct UTwitterIntegrationBase_ShowTweetUI_Params
{
	struct FString                                     InitialMessage;                                           // (Parm, ZeroConstructor)
	struct FString                                     URL;                                                      // (Parm, ZeroConstructor)
	struct FString                                     Picture;                                                  // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.TwitterIntegrationBase.Init
struct UTwitterIntegrationBase_Init_Params
{
};

// Function Engine.TwitterIntegrationBase.GetNumAccounts
struct UTwitterIntegrationBase_GetNumAccounts_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.TwitterIntegrationBase.GetAccountName
struct UTwitterIntegrationBase_GetAccountName_Params
{
	int                                                AccountIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.TwitterIntegrationBase.CanShowTweetUI
struct UTwitterIntegrationBase_CanShowTweetUI_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.TwitterIntegrationBase.AuthorizeAccounts
struct UTwitterIntegrationBase_AuthorizeAccounts_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PlatformInterfaceWebResponse.GetNumHeaders
struct UPlatformInterfaceWebResponse_GetNumHeaders_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PlatformInterfaceWebResponse.GetHeaderValue
struct UPlatformInterfaceWebResponse_GetHeaderValue_Params
{
	struct FString                                     HeaderName;                                               // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.PlatformInterfaceWebResponse.GetHeader
struct UPlatformInterfaceWebResponse_GetHeader_Params
{
	int                                                HeaderIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Header;                                                   // (Parm, OutParm, ZeroConstructor)
	struct FString                                     Value;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function Engine.SkeletalMeshSocket.InitializeSocketFromLocation
struct USkeletalMeshSocket_InitializeSocketFromLocation_Params
{
	class USkeletalMeshComponent*                      SkelComp;                                                 // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     WorldLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WorldNormal;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SkeletalMeshSocket.GetSocketLocation
struct USkeletalMeshSocket_GetSocketLocation_Params
{
	class USkeletalMeshComponent*                      SkelComp;                                                 // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Texture2D.Blueprint_GetSizeY
struct UTexture2D_Blueprint_GetSizeY_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Texture2D.Blueprint_GetSizeX
struct UTexture2D_Blueprint_GetSizeX_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.CanvasRenderTarget2D.UpdateResource
struct UCanvasRenderTarget2D_UpdateResource_Params
{
};

// Function Engine.CanvasRenderTarget2D.ReceiveUpdate
struct UCanvasRenderTarget2D_ReceiveUpdate_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Width;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.CanvasRenderTarget2D.OnCanvasRenderTargetUpdate__DelegateSignature
struct UCanvasRenderTarget2D_OnCanvasRenderTargetUpdate__DelegateSignature_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Width;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.CanvasRenderTarget2D.GetSize
struct UCanvasRenderTarget2D_GetSize_Params
{
	int                                                Width;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.CanvasRenderTarget2D.CreateCanvasRenderTarget2D
struct UCanvasRenderTarget2D_CreateCanvasRenderTarget2D_Params
{
	class UClass*                                      CanvasRenderTarget2DClass;                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Width;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UCanvasRenderTarget2D*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.VehicleWheel.GetSuspensionOffset
struct UVehicleWheel_GetSuspensionOffset_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.VehicleWheel.GetSteerAngle
struct UVehicleWheel_GetSteerAngle_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.VehicleWheel.GetRotationAngle
struct UVehicleWheel_GetRotationAngle_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
