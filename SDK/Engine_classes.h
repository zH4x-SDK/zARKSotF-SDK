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

// Class Engine.AnimNotify
// 0x0008 (0x0030 - 0x0028)
class UAnimNotify : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotify");
		return ptr;
	}


	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
	struct FString GetNotifyName();
};


// Class Engine.AnimNotifyState
// 0x0000 (0x0028 - 0x0028)
class UAnimNotifyState : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotifyState");
		return ptr;
	}


	bool Received_NotifyTick(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float FrameDeltaTime);
	bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration);
	struct FString GetNotifyName();
};


// Class Engine.EngineBaseTypes
// 0x0000 (0x0028 - 0x0028)
class UEngineBaseTypes : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EngineBaseTypes");
		return ptr;
	}

};


// Class Engine.EngineTypes
// 0x0000 (0x0028 - 0x0028)
class UEngineTypes : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EngineTypes");
		return ptr;
	}

};


// Class Engine.Actor
// 0x0400 (0x0428 - 0x0028)
class AActor : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10C0];                                    // 0x0028(0x10C0) MISSED OFFSET
	struct FRepAttachment                              AttachmentReplication;                                    // 0x10E8(0x0040) (Net)
	class APawn*                                       Instigator;                                               // 0x10E9(0x0008) (BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	struct FRepMovement                                ReplicatedMovement;                                       // 0x10EA(0x0034) (Net)
	int                                                TargetingTeam;                                            // 0x1101(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Actor");
		return ptr;
	}


	void UserConstructionScript();
	bool TryMultiUse(class APlayerController* ForPC, int UseIndex);
	void TargetingTeamChanged();
	void TakePointDamageSignature__DelegateSignature(float Damage, class AController* InstigatedBy, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& ShotFromDirection, class UDamageType* DamageType, class AActor* DamageCauser);
	void TakeAnyDamageSignature__DelegateSignature(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void SnapRootComponentTo(class AActor* InParentActor, const struct FName& InSocketName);
	void SetTickFunctionEnabled(bool bEnableTick);
	void SetTickableWhenPaused(bool bTickableWhenPaused);
	void SetReplicates(bool bInReplicates);
	void SetOwner(class AActor* NewOwner);
	void SetLifeSpan(float InLifespan);
	bool SetActorTransform(const struct FTransform& NewTransform, bool bSweep);
	void SetActorScale3D(const struct FVector& NewScale3D);
	bool SetActorRotation(const struct FRotator& NewRotation);
	void SetActorRelativeTransform(const struct FTransform& NewRelativeTransform, bool bSweep);
	void SetActorRelativeScale3D(const struct FVector& NewRelativeScale);
	void SetActorRelativeRotation(const struct FRotator& NewRelativeRotation, bool bSweep);
	void SetActorRelativeLocation(const struct FVector& NewRelativeLocation, bool bSweep);
	bool SetActorLocationAndRotation(const struct FVector& NewLocation, const struct FRotator& NewRotation, bool bSweep);
	void SetActorHiddenInGame(bool bNewHidden);
	void SetActorEnableCollision(bool bNewActorEnableCollision);
	void ServerSendExecCommandToPlayer(class APlayerController* ToPC, const struct FName& CommandName, const struct FBPNetExecParams& ExecParams, bool bIsReliable, bool bForceSendToLocalPlayer, bool bIgnoreRelevancy);
	void ServerSendExecCommandToEveryone(const struct FName& CommandName, const struct FBPNetExecParams& ExecParams, bool bIsReliable, bool bForceSendToLocalPlayer, bool bIgnoreRelevancy);
	void RemoveTickPrerequisiteComponent(class UActorComponent* PrerequisiteComponent);
	void RemoveTickPrerequisiteActor(class AActor* PrerequisiteActor);
	void RecieveMatineeUpdated();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveRadialDamage(float DamageReceived, class UDamageType* DamageType, const struct FVector& Origin, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser);
	void ReceivePointDamage(float Damage, class UDamageType* DamageType, const struct FVector& HitLocation, const struct FVector& HitNormal, class UPrimitiveComponent* HitComponent, const struct FName& BoneName, const struct FVector& ShotFromDirection, class AController* InstigatedBy, class AActor* DamageCauser);
	void ReceiveInput(const struct FString& InputName, float Value, const struct FVector& VectorValue, bool bStarted, bool bEnded);
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ReceiveDestroyed();
	void ReceiveBeginPlay();
	void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void ReceiveActorOnReleased();
	void ReceiveActorOnInputTouchLeave(TEnumAsByte<ETouchIndex> FingerIndex);
	void ReceiveActorOnInputTouchEnter(TEnumAsByte<ETouchIndex> FingerIndex);
	void ReceiveActorOnInputTouchEnd(TEnumAsByte<ETouchIndex> FingerIndex);
	void ReceiveActorOnInputTouchBegin(TEnumAsByte<ETouchIndex> FingerIndex);
	void ReceiveActorOnClicked();
	void ReceiveActorEndOverlap(class AActor* OtherActor);
	void ReceiveActorEndCursorOver();
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveActorBeginCursorOver();
	void PlaySoundOnActor(class USoundCue* InSoundCue, float VolumeMultiplier, float PitchMultiplier);
	void PlaySoundAtLocation(class USoundCue* InSoundCue, const struct FVector& SoundLocation, float VolumeMultiplier, float PitchMultiplier);
	void OnRep_ReplicatedMovement();
	void OnRep_Instigator();
	void OnRep_AttachmentReplication();
	void MakeNoise(float Loudness, class APawn* NoiseInstigator, const struct FVector& NoiseLocation);
	class UMaterialInstanceDynamic* MakeMIDForMaterial(class UMaterialInterface* Parent);
	bool K2_TeleportTo(const struct FVector& DestLocation, const struct FRotator& DestRotation);
	bool K2_SetActorLocation(const struct FVector& NewLocation, bool bSweep);
	void K2_OnEndViewTarget(class APlayerController* PC);
	void K2_OnBecomeViewTarget(class APlayerController* PC);
	class UWorld* K2_GetWorld();
	class USceneComponent* K2_GetRootComponent();
	struct FRotator K2_GetActorRotation();
	struct FVector K2_GetActorLocation();
	void K2_DestroyComponent(class UActorComponent* Component);
	void K2_DestroyActor();
	void K2_AttachRootComponentToActor(class AActor* InParentActor, const struct FName& InSocketName, TEnumAsByte<EAttachLocation> AttachLocationType, bool bWeldSimulatedBodies);
	void K2_AttachRootComponentTo(class USceneComponent* InParent, const struct FName& InSocketName, TEnumAsByte<EAttachLocation> AttachLocationType, bool bWeldSimulatedBodies);
	bool IsShooterCharacter();
	bool IsFirstPersonMeshVisible();
	bool IsDead();
	bool HasAuthority();
	float GetVerticalDistanceTo(class AActor* OtherActor);
	struct FVector GetVelocity(bool bIsForRagdoll);
	struct FTransform GetTransform();
	class APlayerController* GetOwnerController();
	class AActor* GetOwner();
	void GetOverlappingComponents(TArray<class UPrimitiveComponent*>* OverlappingComponents);
	void GetOverlappingActors(class UClass* ClassFilter, TArray<class AActor*>* OverlappingActors);
	float GetLifeSpan();
	struct FRotator GetInterpolatedRotation();
	struct FVector GetInterpolatedLocation();
	class AController* GetInstigatorController();
	class APawn* GetInstigator();
	struct FVector GetInputVectorAxisValue(const struct FKey& InputAxisKey);
	float GetInputAxisValue(const struct FName& InputAxisName);
	float GetInputAxisKeyValue(const struct FKey& InputAxisKey);
	float GetHorizontalDotProductTo(class AActor* OtherActor);
	float GetHorizontalDistanceTo(class AActor* OtherActor);
	float GetDotProductTo(class AActor* OtherActor);
	float GetDistanceTo(class AActor* OtherActor);
	TArray<class UActorComponent*> GetComponentsByCustomTag(const struct FName& TheTag);
	TArray<class UActorComponent*> GetComponentsByClass(class UClass* ComponentClass);
	class UActorComponent* GetComponentByCustomTag(const struct FName& TheTag);
	class UActorComponent* GetComponentByClass(class UClass* ComponentClass);
	float GetAttachedSoundVolumeMultiplier();
	float GetAttachedSoundPitchMultiplier();
	struct FVector GetActorUpVector();
	float GetActorTimeDilation();
	struct FVector GetActorScale3D();
	struct FVector GetActorRightVector();
	struct FVector GetActorRelativeScale3D();
	struct FVector GetActorForwardVector();
	bool GetActorEnableCollision();
	class UClass* GetActorClass();
	void GetActorBounds(bool bOnlyCollidingComponents, struct FVector* Origin, struct FVector* BoxExtent);
	void ForceReplicateNowWithChannel();
	void ForceReplicateNow(bool bForceCreateChannel, bool bForceCreateChannelIfRelevant);
	void ForceNetUpdate(bool bDormantDontReplicateProperties);
	void FlushNetDormancy();
	void EnableInput(class APlayerController* PlayerController);
	void DisableInput(class APlayerController* PlayerController);
	void DetachRootComponentFromParent(bool bMaintainWorldPosition);
	void ClientMultiUse(class APlayerController* ForPC, int UseIndex);
	bool BPTryMultiUse(class APlayerController* ForPC, int UseIndex);
	void BPTargetingTeamChanged();
	bool BPServerHandleNetExecCommand(class APlayerController* FromPC, const struct FName& CommandName, const struct FBPNetExecParams& ExecParams);
	void BPPreInitializeComponents();
	void BPPostInitializeComponents();
	TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry> MultiUseEntries);
	bool BPClientHandleNetExecCommand(const struct FName& CommandName, const struct FBPNetExecParams& ExecParams);
	void BPClientDoMultiUse(class APlayerController* ForPC, int ClientUseIndex);
	bool AllowGrappling();
	void AddTickPrerequisiteComponent(class UActorComponent* PrerequisiteComponent);
	void AddTickPrerequisiteActor(class AActor* PrerequisiteActor);
	class UActorComponent* AddComponent(const struct FName& TemplateName, bool bManualAttachment, const struct FTransform& RelativeTransform, class UObject* ComponentTemplateContext);
	void AddActorWorldTransform(const struct FTransform& DeltaTransform, bool bSweep);
	void AddActorWorldRotation(const struct FRotator& DeltaRotation, bool bSweep);
	void AddActorWorldOffset(const struct FVector& DeltaLocation, bool bSweep);
	void AddActorLocalTransform(const struct FTransform& NewTransform, bool bSweep);
	void AddActorLocalRotation(const struct FRotator& DeltaRotation, bool bSweep);
	void AddActorLocalOffset(const struct FVector& DeltaLocation, bool bSweep);
	void ActorOnReleasedSignature__DelegateSignature();
	void ActorOnInputTouchEndSignature__DelegateSignature(TEnumAsByte<ETouchIndex> FingerIndex);
	void ActorOnInputTouchBeginSignature__DelegateSignature(TEnumAsByte<ETouchIndex> FingerIndex);
	void ActorOnClickedSignature__DelegateSignature();
	void ActorMatineeUpdated__DelegateSignature();
	void ActorHitSignature__DelegateSignature(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	bool ActorHasTag(const struct FName& Tag);
	void ActorEndTouchOverSignature__DelegateSignature(TEnumAsByte<ETouchIndex> FingerIndex);
	void ActorEndPlaySignature__DelegateSignature(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ActorEndOverlapSignature__DelegateSignature(class AActor* OtherActor);
	void ActorEndCursorOverSignature__DelegateSignature();
	void ActorDestroyedSignature__DelegateSignature();
	void ActorCustomEventSignature__DelegateSignature(const struct FName& EventCustomName, const struct FString& EventCustomString, class AActor* InstigatorActor);
	void ActorBeginTouchOverSignature__DelegateSignature(TEnumAsByte<ETouchIndex> FingerIndex);
	void ActorBeginOverlapSignature__DelegateSignature(class AActor* OtherActor);
	void ActorBeginCursorOverSignature__DelegateSignature();
};


// Class Engine.Controller
// 0x0058 (0x0480 - 0x0428)
class AController : public AActor
{
public:
	unsigned char                                      UnknownData00[0xCE6];                                     // 0x0428(0x0CE6) MISSED OFFSET
	class APawn*                                       Pawn;                                                     // 0x110E(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	class APlayerState*                                PlayerState;                                              // 0x110F(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Controller");
		return ptr;
	}


	void UnPossess();
	void StopMovement();
	void SetInitialLocationAndRotation(const struct FVector& NewLocation, const struct FRotator& NewRotation);
	void SetControlRotation(const struct FRotator& NewRotation);
	void ReceiveInstigatedAnyDamage(float Damage, class UDamageType* DamageType, class AActor* DamagedActor, class AActor* DamageCauser);
	void Possess(class APawn* inPawn);
	void OnRep_PlayerState();
	void OnRep_Pawn();
	bool LineOfSightTo(class AActor* Other, const struct FVector& ViewPoint, bool bAlternateChecks);
	class APawn* K2_GetPawn();
	bool IsLocalPlayerController();
	bool IsLocalController();
	void InstigatedAnyDamageSignature__DelegateSignature(float Damage, class UDamageType* DamageType, class AActor* DamagedActor, class AActor* DamageCauser);
	class AActor* GetViewTarget();
	struct FRotator GetDesiredRotation();
	struct FRotator GetControlRotation();
	void ClientSetRotation(const struct FRotator& NewRotation, bool bResetCamera);
	void ClientSetLocation(const struct FVector& NewLocation, const struct FRotator& NewRotation);
	class APlayerController* CastToPlayerController();
};


// Class Engine.CurveBase
// 0x0018 (0x0040 - 0x0028)
class UCurveBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CurveBase");
		return ptr;
	}


	void GetValueRange(float* MinValue, float* MaxValue);
	void GetTimeRange(float* MinTime, float* MaxTime);
};


// Class Engine.CurveFloat
// 0x0080 (0x00C0 - 0x0040)
class UCurveFloat : public UCurveBase
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0040(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CurveFloat");
		return ptr;
	}


	float GetFloatValue(float InTime);
};


// Class Engine.ForceFeedbackEffect
// 0x0018 (0x0040 - 0x0028)
class UForceFeedbackEffect : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ForceFeedbackEffect");
		return ptr;
	}

};


// Class Engine.Scene
// 0x0000 (0x0028 - 0x0028)
class UScene : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Scene");
		return ptr;
	}

};


// Class Engine.PlayerCameraManager
// 0x12C8 (0x16F0 - 0x0428)
class APlayerCameraManager : public AActor
{
public:
	unsigned char                                      UnknownData00[0x12C8];                                    // 0x0428(0x12C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlayerCameraManager");
		return ptr;
	}


	void StopCameraAnimInst(class UCameraAnimInst* AnimInst, bool bImmediate);
	void StopAllInstancesOfCameraAnim(class UCameraAnim* Anim, bool bImmediate);
	void StopAllCameraAnims(bool bImmediate);
	void RemoveCameraLensEffect(class AEmitterCameraLensEffectBase* Emitter);
	class UCameraAnimInst* PlayCameraAnim(class UCameraAnim* Anim, float Rate, float Scale, float BlendInTime, float BlendOutTime, bool bLoop, bool bRandomStartTime, float Duration, TEnumAsByte<ECameraAnimPlaySpace> PlaySpace, const struct FRotator& UserPlaySpaceRot);
	class APlayerController* GetOwningPlayerController();
	struct FRotator GetCameraRotation();
	struct FVector GetCameraLocation();
	void ClearCameraLensEffects();
	bool BlueprintUpdateCamera(class AActor* CameraTarget, struct FVector* NewCameraLocation, struct FRotator* NewCameraRotation, float* NewCameraFOV);
	class AEmitterCameraLensEffectBase* AddCameraLensEffect(class UClass* LensEffectEmitterClass);
};


// Class Engine.PlayerController
// 0x0320 (0x07A0 - 0x0480)
class APlayerController : public AController
{
public:
	unsigned char                                      UnknownData00[0x320];                                     // 0x0480(0x0320) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlayerController");
		return ptr;
	}


	bool WasInputKeyJustReleased(const struct FKey& Key);
	bool WasInputKeyJustPressed(const struct FKey& Key);
	void ToggleSpeaking(bool bSpeaking);
	void SwitchLevel(const struct FString& URL);
	void StartFire(unsigned char FireModeNum);
	void SetVirtualJoystickVisibility(bool bVisible);
	void SetViewTargetWithBlend(class AActor* NewViewTarget, float BlendTime, TEnumAsByte<EViewTargetBlendFunction> BlendFunc, float BlendExp, bool bLockOutgoing);
	void SetName(const struct FString& S);
	void SetIgnoreMoveInput(bool bNewMoveInput);
	void SetIgnoreLookInput(bool bNewLookInput);
	void ServerViewSelf(const struct FViewTargetTransitionParams& TransitionParams);
	void ServerViewPrevPlayer();
	void ServerViewNextPlayer();
	void ServerVerifyViewTarget();
	void ServerUpdateLevelVisibility(const struct FName& PackageName, bool bIsVisible);
	void ServerUpdateCamera(const struct FVector_NetQuantize& CamLoc, int CamPitchAndYaw);
	void ServerUnmutePlayer(const struct FUniqueNetIdRepl& PlayerId);
	void ServerToggleAILogging();
	void ServerShortTimeout();
	void ServerSetSpectatorLocation(const struct FVector& NewLoc);
	void ServerRestartPlayer();
	void ServerReceivedPlayerControllerAck();
	void ServerProcessNetExecCommandUnreliable(class AActor* forActor, const struct FName& CommandName, const struct FBPNetExecParams& ExecParams);
	void ServerProcessNetExecCommand(class AActor* forActor, const struct FName& CommandName, const struct FBPNetExecParams& ExecParams);
	void ServerPause();
	void ServerNotifyLoadedWorld(const struct FName& WorldPackageName);
	void ServerMutePlayer(const struct FUniqueNetIdRepl& PlayerId);
	void ServerCheckClientPossession();
	void ServerChangeName(const struct FString& S);
	void ServerCamera(const struct FName& NewMode);
	void ServerAcknowledgePossession(class APawn* P);
	void SendToConsole(const struct FString& Command);
	void RestartLevel();
	void ResetIgnoreInputFlags();
	bool ProjectWorldLocationToScreen(const struct FVector& WorldLocation, struct FVector2D* ScreenLocation);
	void PlayDynamicForceFeedback(float Intensity, float Duration, bool bAffectsLeftLarge, bool bAffectsLeftSmall, bool bAffectsRightLarge, bool bAffectsRightSmall, TEnumAsByte<EDynamicForceFeedbackAction> Action, const struct FLatentActionInfo& LatentInfo);
	void Pause();
	void NetSpawnActorAtLocation(class UClass* AnActorClass, const struct FVector_NetQuantize& AtLocation, const struct FRotator_NetQuantize& AtRotation, class USceneComponent* attachToComponent, int dataIndex, const struct FName& attachSocketName);
	void LocalTravel(const struct FString& URL);
	bool IsMoveInputIgnored();
	bool IsLookInputIgnored();
	bool IsInputKeyDown(const struct FKey& Key);
	void GetViewportSize(int* SizeX, int* SizeY);
	bool GetMousePosition(float* LocationX, float* LocationY);
	struct FVector GetInputVectorKeyState(const struct FKey& Key);
	void GetInputTouchState(TEnumAsByte<ETouchIndex> FingerIndex, float* LocationX, float* LocationY, bool* bIsCurrentlyPressed);
	void GetInputMouseDelta(float* DeltaX, float* DeltaY);
	void GetInputMotionState(struct FVector* Tilt, struct FVector* RotationRate, struct FVector* Gravity, struct FVector* Acceleration);
	float GetInputKeyTimeDown(const struct FKey& Key);
	void GetInputAnalogStickState(TEnumAsByte<EControllerAnalogStick> WhichStick, float* StickX, float* StickY);
	float GetInputAnalogKeyState(const struct FKey& Key);
	class AHUD* GetHUD();
	bool GetHitResultUnderFingerForObjects(TEnumAsByte<ETouchIndex> FingerIndex, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, struct FHitResult* HitResult);
	bool GetHitResultUnderFingerByChannel(TEnumAsByte<ETouchIndex> FingerIndex, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, struct FHitResult* HitResult);
	bool GetHitResultUnderFinger(TEnumAsByte<ETouchIndex> FingerIndex, TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, struct FHitResult* HitResult);
	bool GetHitResultUnderCursorForObjects(TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, struct FHitResult* HitResult);
	bool GetHitResultUnderCursorByChannel(TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, struct FHitResult* HitResult);
	bool GetHitResultUnderCursor(TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, struct FHitResult* HitResult);
	void FOV(float NewFOV);
	void EnableCheats(const struct FString& pass);
	bool DeprojectScreenPositionToWorld(float ScreenX, float ScreenY, struct FVector* WorldLocation, struct FVector* WorldDirection);
	bool DeprojectMousePositionToWorld(struct FVector* WorldLocation, struct FVector* WorldDirection);
	void ConsoleKey(const struct FKey& Key);
	void ClientWasKicked(const struct FText& KickReason);
	void ClientVoiceHandshakeComplete();
	void ClientUpdateLevelStreamingStatus(const struct FName& PackageName, bool bNewShouldBeLoaded, bool bNewShouldBeVisible, bool bNewShouldBlockOnLoad, int LODIndex);
	void ClientUnmutePlayer(const struct FUniqueNetIdRepl& PlayerId);
	void ClientTravelInternal(const struct FString& URL, TEnumAsByte<ETravelType> TravelType, bool bSeamless, const struct FGuid& MapPackageGuid);
	void ClientTravel(const struct FString& URL, TEnumAsByte<ETravelType> TravelType, bool bSeamless, const struct FGuid& MapPackageGuid);
	void ClientTeamMessage(class APlayerState* SenderPlayerState, const struct FString& S, const struct FName& Type, float MsgLifeTime);
	void ClientStopForceFeedback(class UForceFeedbackEffect* ForceFeedbackEffect, const struct FName& Tag);
	void ClientStopCameraShake(class UClass* Shake);
	void ClientStopCameraAnim(class UCameraAnim* AnimToStop);
	void ClientSpawnCameraLensEffect(class UClass* LensEffectEmitterClass);
	void ClientSetViewTarget(class AActor* A, const struct FViewTargetTransitionParams& TransitionParams);
	void ClientSetHUD(class UClass* NewHUDClass);
	void ClientSetForceMipLevelsToBeResident(class UMaterialInterface* Material, float ForceDuration, int CinematicTextureGroups);
	void ClientSetCinematicMode(bool bInCinematicMode, bool bAffectsMovement, bool bAffectsTurning, bool bAffectsHUD);
	void ClientSetCameraMode(const struct FName& NewCamMode);
	void ClientSetCameraFade(bool bEnableFading, const struct FColor& FadeColor, const struct FVector2D& FadeAlpha, float FadeTime, bool bFadeAudio);
	void ClientSetBlockOnAsyncLoading();
	void ClientSendNetExecCommandToServer(class AActor* forActor, const struct FName& CommandName, const struct FBPNetExecParams& ExecParams, bool bIsReliable);
	void ClientReturnToMainMenu(const struct FString& ReturnReason);
	void ClientRetryClientRestart(class APawn* NewPawn);
	void ClientRestart(class APawn* NewPawn);
	void ClientReset();
	void ClientRepObjRef(class UObject* Object);
	void ClientReceiveLocalizedMessage(class UClass* Message, int Switch, class APlayerState* RelatedPlayerState_2, class APlayerState* RelatedPlayerState_3, class UObject* OptionalObject);
	void ClientProcessNetExecCommandUnreliableBP(class AActor* forActor, const struct FName& CommandName, const struct FBPNetExecParams& ExecParams);
	void ClientProcessNetExecCommandUnreliable(class AActor* forActor, const struct FName& CommandName, const struct FNetExecParams& ExecParams);
	void ClientProcessNetExecCommandBP(class AActor* forActor, const struct FName& CommandName, const struct FBPNetExecParams& ExecParams);
	void ClientProcessNetExecCommand(class AActor* forActor, const struct FName& CommandName, const struct FNetExecParams& ExecParams);
	void ClientPrestreamTextures(class AActor* ForcedActor, float ForceDuration, bool bEnableStreaming, int CinematicTextureGroups);
	void ClientPrepareMapChange(const struct FName& LevelName, bool bFirst, bool bLast);
	void ClientPlaySoundAtLocation(class USoundBase* Sound, const struct FVector& Location, float VolumeMultiplier, float PitchMultiplier);
	void ClientPlaySound(class USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier);
	void ClientPlayForceFeedback(class UForceFeedbackEffect* ForceFeedbackEffect, bool bLooping, const struct FName& Tag);
	void ClientPlayCameraShake(class UClass* Shake, float Scale, TEnumAsByte<ECameraAnimPlaySpace> PlaySpace, const struct FRotator& UserPlaySpaceRot, float Speed);
	void ClientPlayCameraAnim(class UCameraAnim* AnimToPlay, float Scale, float Rate, float BlendInTime, float BlendOutTime, bool bLoop, bool bRandomStartTime, TEnumAsByte<ECameraAnimPlaySpace> Space, const struct FRotator& CustomPlaySpace);
	void ClientNotifyRespawned(class APawn* NewPawn, bool IsFirstSpawn);
	void ClientMutePlayer(const struct FUniqueNetIdRepl& PlayerId);
	void ClientMessage(const struct FString& S, const struct FName& Type, float MsgLifeTime);
	void ClientIgnoreMoveInput(bool bIgnore);
	void ClientIgnoreLookInput(bool bIgnore);
	void ClientGotoState(const struct FName& NewState);
	void ClientGameEnded(class AActor* EndGameFocus, bool bIsWinner);
	void ClientForceGarbageCollection();
	void ClientFlushLevelStreaming();
	void ClientEnableNetworkVoice(bool bEnable);
	void ClientCommitMapChange();
	void ClientClearCameraLensEffects();
	void ClientCapBandwidth(int Cap);
	void ClientCancelPendingMapChange();
	void ClientAddTextureStreamingLoc(const struct FVector& InLoc, float Duration, bool bOverrideLocation);
	void Camera(const struct FName& NewMode);
	void AddYawInput(float Val);
	void AddRollInput(float Val);
	void AddPitchInput(float Val);
	void ActivateTouchInterface(class UTouchInterface* NewTouchInterface);
};


// Class Engine.HUD
// 0x00E8 (0x0510 - 0x0428)
class AHUD : public AActor
{
public:
	unsigned char                                      UnknownData00[0xE8];                                      // 0x0428(0x00E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.HUD");
		return ptr;
	}


	void ShowHUD();
	void ShowDebugToggleSubCategory(const struct FName& Category);
	void ShowDebug(const struct FName& DebugType);
	void RemoveDebugText(class AActor* SrcActor, bool bLeaveDurationText);
	void RemoveAllDebugStrings();
	void ReceiveHitBoxRelease(const struct FName& BoxName);
	void ReceiveHitBoxEndCursorOver(const struct FName& BoxName);
	void ReceiveHitBoxClick(const struct FName& BoxName);
	void ReceiveHitBoxBeginCursorOver(const struct FName& BoxName);
	void ReceiveDrawHUD(int SizeX, int SizeY);
	struct FVector Project(const struct FVector& Location);
	void GetTextSize(const struct FString& Text, class UFont* Font, float Scale, float* OutWidth, float* OutHeight);
	class APlayerController* GetOwningPlayerController();
	class APawn* GetOwningPawn();
	void GetActorsInSelectionRectangle(class UClass* ClassFilter, const struct FVector2D& FirstPoint, const struct FVector2D& SecondPoint, bool bIncludeNonCollidingComponents, bool bActorMustBeFullyEnclosed, TArray<class AActor*>* OutActors);
	void DrawTextureSimple(class UTexture* Texture, float ScreenX, float ScreenY, float Scale, bool bScalePosition);
	void DrawTexture(class UTexture* Texture, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float TextureU, float TextureV, float TextureUWidth, float TextureVHeight, const struct FLinearColor& TintColor, TEnumAsByte<EBlendMode> BlendMode, float Scale, bool bScalePosition, float Rotation, const struct FVector2D& RotPivot);
	void DrawText(const struct FString& Text, const struct FLinearColor& TextColor, float ScreenX, float ScreenY, class UFont* Font, float Scale, bool bScalePosition);
	void DrawRect(const struct FLinearColor& RectColor, float ScreenX, float ScreenY, float ScreenW, float ScreenH);
	void DrawMaterialSimple(class UMaterialInterface* Material, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float Scale, bool bScalePosition);
	void DrawMaterial(class UMaterialInterface* Material, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float MaterialU, float MaterialV, float MaterialUWidth, float MaterialVHeight, float Scale, bool bScalePosition, float Rotation, const struct FVector2D& RotPivot);
	void DrawLine(float StartScreenX, float StartScreenY, float EndScreenX, float EndScreenY, const struct FLinearColor& LineColor);
	void Deproject(float ScreenX, float ScreenY, struct FVector* WorldPosition, struct FVector* WorldDirection);
	void AddHitBox(const struct FVector2D& Position, const struct FVector2D& Size, const struct FName& Name, bool bConsumesInput, int Priority);
	void AddDebugText(const struct FString& DebugText, class AActor* SrcActor, float Duration, const struct FVector& Offset, const struct FVector& DesiredOffset, const struct FColor& TextColor, bool bSkipOverwriteCheck, bool bAbsoluteLocation, bool bKeepAttachedToActor, class UFont* InFont, float FontScale);
};


// Class Engine.ActorComponent
// 0x00E0 (0x0108 - 0x0028)
class UActorComponent : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1176];                                    // 0x0028(0x1176) MISSED OFFSET
	unsigned char                                      UnknownData01 : 2;                                        // 0x119E(0x0001)
	unsigned char                                      bIsActive : 1;                                            // 0x119E(0x0001) (Net, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorComponent");
		return ptr;
	}


	void ToggleActive();
	void SetIsReplicated(bool ShouldReplicate);
	void SetActive(bool bNewActive, bool bReset);
	void RemoveTickPrerequisiteComponent(class UActorComponent* PrerequisiteComponent);
	void RemoveTickPrerequisiteActor(class AActor* PrerequisiteActor);
	void OnRep_IsActive();
	void K2_DestroyComponent(class UObject* Object);
	bool IsActive();
	class UWorld* GetWorld();
	class AActor* GetOwner();
	void Deactivate();
	bool ComponentHasTag(const struct FName& Tag);
	void AddTickPrerequisiteComponent(class UActorComponent* PrerequisiteComponent);
	void AddTickPrerequisiteActor(class AActor* PrerequisiteActor);
	void Activate(bool bReset);
};


// Class Engine.Brush
// 0x0038 (0x0460 - 0x0428)
class ABrush : public AActor
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0428(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Brush");
		return ptr;
	}

};


// Class Engine.Volume
// 0x0000 (0x0460 - 0x0460)
class AVolume : public ABrush
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Volume");
		return ptr;
	}

};


// Class Engine.Info
// 0x0000 (0x0428 - 0x0428)
class AInfo : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Info");
		return ptr;
	}

};


// Class Engine.DestructibleActor
// 0x0020 (0x0448 - 0x0428)
class ADestructibleActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0428(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DestructibleActor");
		return ptr;
	}


	void ActorFractureSignature__DelegateSignature(const struct FVector& HitPoint, const struct FVector& HitDirection);
};


// Class Engine.SceneComponent
// 0x0108 (0x0210 - 0x0108)
class USceneComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x11BF];                                    // 0x0108(0x11BF) MISSED OFFSET
	unsigned char                                      UnknownData01 : 1;                                        // 0x12C7(0x0001)
	unsigned char                                      bAbsoluteLocation : 1;                                    // 0x12C7(0x0001) (Edit, BlueprintVisible, Net)
	unsigned char                                      UnknownData02 : 2;                                        // 0x12C7(0x0001)
	unsigned char                                      bAbsoluteRotation : 1;                                    // 0x12C7(0x0001) (Edit, BlueprintVisible, Net)
	unsigned char                                      bAbsoluteScale : 1;                                       // 0x12C7(0x0001) (Edit, BlueprintVisible, Net)
	struct FVector                                     RelativeLocation;                                         // 0x12C7(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    RelativeRotation;                                         // 0x12C7(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RelativeScale3D;                                          // 0x12C7(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03 : 6;                                        // 0x12C8(0x0001)
	unsigned char                                      bVisible : 1;                                             // 0x12C8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Net)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SceneComponent");
		return ptr;
	}


	void ToggleVisibility(bool bPropagateToChildren);
	void StopSound(class USoundBase* SoundToStop, float FadeOutTime);
	void SnapTo(class USceneComponent* InParent, const struct FName& InSocketName);
	void SetWorldTransform(const struct FTransform& NewTransform, bool bSweep);
	void SetWorldScale3D(const struct FVector& NewScale);
	void SetWorldRotation(const struct FRotator& NewRotation, bool bSweep);
	void SetWorldLocation(const struct FVector& NewLocation, bool bSweep);
	void SetVisibility(bool bNewVisibility, bool bPropagateToChildren);
	void SetRelativeTransform(const struct FTransform& NewTransform, bool bSweep);
	void SetRelativeScale3D(const struct FVector& NewScale3D);
	void SetRelativeRotation(const struct FRotator& NewRotation, bool bSweep);
	void SetRelativeLocation(const struct FVector& NewLocation, bool bSweep);
	void SetHiddenInGame(bool NewHidden, bool bPropagateToChildren);
	void SetAbsolute(bool bNewAbsoluteLocation, bool bNewAbsoluteRotation, bool bNewAbsoluteScale);
	void ResetRelativeTransform();
	void PhysicsVolumeChanged__DelegateSignature(class APhysicsVolume* NewVolume);
	void OnRep_Visibility(bool OldValue);
	void OnRep_Transform();
	struct FTransform K2_GetComponentToWorld();
	struct FVector K2_GetComponentScale();
	struct FRotator K2_GetComponentRotation();
	struct FVector K2_GetComponentLocation();
	void K2_AttachTo(class USceneComponent* InParent, const struct FName& InSocketName, TEnumAsByte<EAttachLocation> AttachType, bool bWeldSimulatedBodies);
	bool IsVisible();
	bool IsSimulatingPhysics(const struct FName& BoneName);
	bool IsAnySimulatingPhysics();
	struct FVector GetWorldLocation();
	struct FVector GetUpVector();
	struct FTransform GetSocketTransform(const struct FName& InSocketName, TEnumAsByte<ERelativeTransformSpace> TransformSpace);
	struct FRotator GetSocketRotation(const struct FName& InSocketName);
	struct FQuat GetSocketQuaternion(const struct FName& InSocketName);
	struct FVector GetSocketLocation(const struct FName& InSocketName);
	struct FVector GetRightVector();
	struct FTransform GetRelativeTransform();
	class APhysicsVolume* GetPhysicsVolume();
	void GetParentComponents(TArray<class USceneComponent*>* Parents);
	int GetNumChildrenComponents();
	struct FVector GetForwardVector();
	struct FVector GetComponentVelocity();
	void GetChildrenComponents(bool bIncludeAllDescendants, TArray<class USceneComponent*>* Children);
	class USceneComponent* GetChildComponent(int ChildIndex);
	class USceneComponent* GetAttachParent();
	TArray<struct FName> GetAllSocketNames();
	bool DoesSocketExist(const struct FName& InSocketName);
	void DetachFromParent(bool bMaintainWorldPosition);
	void AddWorldTransform(const struct FTransform& DeltaTransform, bool bSweep);
	void AddWorldRotation(const struct FRotator& DeltaRotation, bool bSweep);
	void AddWorldOffset(const struct FVector& DeltaLocation, bool bSweep);
	void AddRelativeRotation(const struct FRotator& DeltaRotation, bool bSweep);
	void AddRelativeLocation(const struct FVector& DeltaLocation, bool bSweep);
	void AddLocalTransform(const struct FTransform& DeltaTransform, bool bSweep);
	void AddLocalRotation(const struct FRotator& DeltaRotation, bool bSweep);
	void AddLocalOffset(const struct FVector& DeltaLocation, bool bSweep);
};


// Class Engine.PrimitiveComponent
// 0x03D0 (0x05E0 - 0x0210)
class UPrimitiveComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x3D0];                                     // 0x0210(0x03D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PrimitiveComponent");
		return ptr;
	}


	bool WasRecentlyVisible();
	void WakeRigidBody(const struct FName& BoneName);
	void WakeAllRigidBodies();
	void SetTranslucentSortPriority(int NewTranslucentSortPriority);
	void SetSimulatePhysics(bool bSimulate);
	void SetRenderCustomDepth(bool bValue);
	void SetPhysMaterialOverride(class UPhysicalMaterial* NewPhysMaterial);
	void SetPhysicsMaxAngularVelocity(float NewMaxAngVel, bool bAddToCurrent, const struct FName& BoneName);
	void SetPhysicsLinearVelocity(const struct FVector& NewVel, bool bAddToCurrent, const struct FName& BoneName);
	void SetPhysicsAngularVelocity(const struct FVector& NewAngVel, bool bAddToCurrent, const struct FName& BoneName);
	void SetOwnerNoSee(bool bNewOwnerNoSee);
	void SetOnlyOwnerSee(bool bNewOnlyOwnerSee);
	void SetNotifyRigidBodyCollision(bool bNewNotifyRigidBodyCollision);
	void SetMaterial(int ElementIndex, class UMaterialInterface* Material);
	void SetLinearDamping(float InDamping);
	void SetEnableGravity(bool bGravityEnabled);
	void SetCollisionResponseToChannel(TEnumAsByte<ECollisionChannel> Channel, TEnumAsByte<ECollisionResponse> NewResponse);
	void SetCollisionResponseToAllChannels(TEnumAsByte<ECollisionResponse> NewResponse);
	void SetCollisionProfileName(const struct FName& InCollisionProfileName);
	void SetCollisionObjectType(TEnumAsByte<ECollisionChannel> Channel);
	void SetCollisionEnabled(TEnumAsByte<ECollisionEnabled> NewType);
	void SetCastShadow(bool NewCastShadow);
	void SetAngularDamping(float InDamping);
	void SetAllPhysicsLinearVelocity(const struct FVector& NewVel, bool bAddToCurrent);
	void PutRigidBodyToSleep(const struct FName& BoneName);
	bool K2_LineTraceComponent(const struct FVector& TraceStart, const struct FVector& TraceEnd, bool bTraceComplex, bool bShowTrace, struct FVector* HitLocation, struct FVector* HitNormal, struct FName* BoneName);
	bool IsGravityEnabled();
	void IgnoreActorWhenMoving(class AActor* Actor, bool bShouldIgnore);
	struct FWalkableSlopeOverride GetWalkableSlopeOverride();
	struct FVector GetPhysicsLinearVelocity(const struct FName& BoneName);
	struct FVector GetPhysicsAngularVelocity(const struct FName& BoneName);
	void GetOverlappingComponents(TArray<class UPrimitiveComponent*>* OverlappingComponents);
	void GetOverlappingActors(class UClass* ClassFilter, TArray<class AActor*>* OverlappingActors);
	TArray<struct FOverlapInfo> GetOverlapInfos();
	int GetNumMaterials();
	TArray<TWeakObjectPtr<class AActor>> GetMoveIgnoreActors();
	class UMaterialInterface* GetMaterial(int ElementIndex);
	float GetMass();
	float GetLinearDamping();
	struct FName GetCollisionProfileName();
	float GetAngularDamping();
	class UMaterialInstanceDynamic* CreateDynamicMaterialInstance(int ElementIndex, class UMaterialInterface* SourceMaterial);
	class UMaterialInstanceDynamic* CreateAndSetMaterialInstanceDynamicFromMaterial(int ElementIndex, class UMaterialInterface* Parent);
	class UMaterialInstanceDynamic* CreateAndSetMaterialInstanceDynamic(int ElementIndex);
	void ComponentOnReleasedSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent);
	void ComponentOnInputTouchEndSignature__DelegateSignature(TEnumAsByte<ETouchIndex> FingerIndex, class UPrimitiveComponent* TouchedComponent);
	void ComponentOnInputTouchBeginSignature__DelegateSignature(TEnumAsByte<ETouchIndex> FingerIndex, class UPrimitiveComponent* TouchedComponent);
	void ComponentOnClickedSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent);
	void ComponentHitSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ComponentEndTouchOverSignature__DelegateSignature(TEnumAsByte<ETouchIndex> FingerIndex, class UPrimitiveComponent* TouchedComponent);
	void ComponentEndOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void ComponentEndCursorOverSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent);
	void ComponentBeginTouchOverSignature__DelegateSignature(TEnumAsByte<ETouchIndex> FingerIndex, class UPrimitiveComponent* TouchedComponent);
	void ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ComponentBeginCursorOverSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent);
	void ClearMoveIgnoreActors();
	void AddTorque(const struct FVector& Torque, const struct FName& BoneName);
	void AddRadialImpulse(const struct FVector& Origin, float Radius, float Strength, TEnumAsByte<ERadialImpulseFalloff> Falloff, bool bVelChange);
	void AddRadialForce(const struct FVector& Origin, float Radius, float Strength, TEnumAsByte<ERadialImpulseFalloff> Falloff);
	void AddImpulseAtLocation(const struct FVector& Impulse, const struct FVector& Location, const struct FName& BoneName);
	void AddImpulse(const struct FVector& Impulse, const struct FName& BoneName, bool bVelChange);
	void AddForceAtLocation(const struct FVector& Force, const struct FVector& Location, const struct FName& BoneName);
	void AddForce(const struct FVector& Force, const struct FName& BoneName);
};


// Class Engine.MeshComponent
// 0x0010 (0x05F0 - 0x05E0)
class UMeshComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x05E0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MeshComponent");
		return ptr;
	}

};


// Class Engine.Pawn
// 0x0070 (0x0498 - 0x0428)
class APawn : public AActor
{
public:
	unsigned char                                      UnknownData00[0xCE7];                                     // 0x0428(0x0CE7) MISSED OFFSET
	class APlayerState*                                PlayerState;                                              // 0x110F(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20C];                                     // 0x1117(0x020C) MISSED OFFSET
	class AController*                                 Controller;                                               // 0x1323(0x0008) (Net, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Pawn");
		return ptr;
	}


	void SpawnDefaultController();
	void SetCanAffectNavigationGeneration(bool bNewValue);
	void ReceiveUnpossessed(class AController* OldController);
	void ReceivePossessed(class AController* NewController);
	void PawnMakeNoise(float Loudness, const struct FVector& NoiseLocation, bool bUseNoiseMakerLocation, class AActor* NoiseMaker);
	void OnRep_PlayerState();
	void OnRep_Controller();
	void LaunchPawn(const struct FVector& LaunchVelocity, bool bXYOverride, bool bZOverride);
	struct FVector K2_GetMovementInputVector();
	bool IsWalking();
	bool IsMoveInputIgnored();
	bool IsLocallyControlled();
	bool IsFalling();
	bool IsCrouched();
	bool IsControlled();
	struct FVector GetPendingMovementInputVector();
	struct FVector GetNavAgentLocation();
	class UPawnMovementComponent* GetMovementComponent();
	class AActor* GetMovementBaseActor(class APawn* Pawn);
	struct FVector GetLastMovementInputVector();
	struct FRotator GetControlRotation();
	class AController* GetController();
	struct FRotator GetBaseAimRotation();
	void DetachFromControllerPendingDestroy();
	struct FVector ConsumeMovementInputVector();
	void AddMovementInput(const struct FVector& WorldDirection, float ScaleValue, bool bForce);
	void AddControllerYawInput(float Val);
	void AddControllerRollInput(float Val);
	void AddControllerPitchInput(float Val);
};


// Class Engine.AnimationAsset
// 0x0018 (0x0040 - 0x0028)
class UAnimationAsset : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimationAsset");
		return ptr;
	}

};


// Class Engine.Character
// 0x0178 (0x0610 - 0x0498)
class ACharacter : public APawn
{
public:
	unsigned char                                      UnknownData00[0xE96];                                     // 0x0498(0x0E96) MISSED OFFSET
	unsigned char                                      bIsCrouched : 1;                                          // 0x132E(0x0001) (BlueprintVisible, BlueprintReadOnly, Net)
	unsigned char                                      UnknownData01 : 7;                                        // 0x132E(0x0001)
	unsigned char                                      UnknownData02 : 1;                                        // 0x132F(0x0001)
	unsigned char                                      bIsProne : 1;                                             // 0x132F(0x0001) (BlueprintVisible, BlueprintReadOnly, Net)
	struct FBasedMovementInfo                          ReplicatedBasedMovement;                                  // 0x1330(0x0030) (Net)
	struct FRepRootMotionMontage                       RepRootMotion;                                            // 0x1331(0x0040) (Net)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Character");
		return ptr;
	}


	void UnProne(bool bClientSimulation);
	void UnCrouch(bool bClientSimulation);
	void StopJumping();
	void StopAnimMontage(class UAnimMontage* AnimMontage);
	void Prone(bool bClientSimulation);
	float PlayAnimMontage(class UAnimMontage* AnimMontage, float InPlayRate, const struct FName& StartSectionName, bool bForceTickPoseAndServerUpdateMesh, bool bForceTickPoseOnServer);
	void OnWalkingOffLedge();
	void OnRep_RootMotion();
	void OnRep_ReplicatedBasedMovement();
	void OnRep_IsProne();
	void OnRep_IsCrouched();
	void OnLaunched(const struct FVector& LaunchVelocity, bool bXYOverride, bool bZOverride);
	void OnLanded(const struct FHitResult& Hit);
	void OnJumped();
	void MovementModeChangedSignature__DelegateSignature(class ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, unsigned char PreviousCustomMode);
	void LaunchCharacter(const struct FVector& LaunchVelocity, bool bXYOverride, bool bZOverride);
	void K2_UpdateCustomMovement(float DeltaTime);
	void K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
	void K2_OnMovementModeChanged(TEnumAsByte<EMovementMode> PrevMovementMode, TEnumAsByte<EMovementMode> NewMovementMode, unsigned char PrevCustomMode, unsigned char NewCustomMode);
	void K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
	void Jump();
	bool IsPlayingRootMotion();
	bool IsJumpProvidingForce();
	class UAnimMontage* GetCurrentMontage();
	void Crouch(bool bClientSimulation);
	void ClientCheatWalk();
	void ClientCheatGhost();
	void ClientCheatFly();
	void CharacterMovementUpdatedSignature__DelegateSignature(float DeltaSeconds, const struct FVector& OldLocation, const struct FVector& OldVelocity);
	bool CanJumpInternal();
	bool CanJump();
};


// Class Engine.PlayerState
// 0x0088 (0x04B0 - 0x0428)
class APlayerState : public AInfo
{
public:
	unsigned char                                      UnknownData00[0xF99];                                     // 0x0428(0x0F99) MISSED OFFSET
	unsigned char                                      UnknownData01 : 4;                                        // 0x13C1(0x0001)
	unsigned char                                      bIsInactive : 1;                                          // 0x13C1(0x0001) (Net)
	struct FString                                     PlayerName;                                               // 0x13C2(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	float                                              Score;                                                    // 0x13C3(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	struct FUniqueNetIdRepl                            UniqueID;                                                 // 0x13C4(0x0010) (Net)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlayerState");
		return ptr;
	}


	void OnRep_UniqueId();
	void OnRep_Score();
	void OnRep_PlayerName();
	void OnRep_bIsInactive();
};


// Class Engine.Emitter
// 0x0050 (0x0478 - 0x0428)
class AEmitter : public AActor
{
public:
	unsigned char                                      UnknownData00[0xFFD];                                     // 0x0428(0x0FFD) MISSED OFFSET
	unsigned char                                      UnknownData01 : 4;                                        // 0x1425(0x0001)
	unsigned char                                      bCurrentlyActive : 1;                                     // 0x1425(0x0001) (Net)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Emitter");
		return ptr;
	}


	void ToggleActive();
	void SetVectorParameter(const struct FName& ParameterName, const struct FVector& Param);
	void SetTemplate(class UParticleSystem* NewTemplate);
	void SetMaterialParameter(const struct FName& ParameterName, class UMaterialInterface* Param);
	void SetFloatParameter(const struct FName& ParameterName, float Param);
	void SetColorParameter(const struct FName& ParameterName, const struct FLinearColor& Param);
	void SetActorParameter(const struct FName& ParameterName, class AActor* Param);
	void ParticleSpawnSignature__DelegateSignature(const struct FName& EventName, float EmitterTime, const struct FVector& Location, const struct FVector& Velocity);
	void ParticleDeathSignature__DelegateSignature(const struct FName& EventName, float EmitterTime, int ParticleTime, const struct FVector& Location, const struct FVector& Velocity, const struct FVector& Direction);
	void ParticleCollisionSignature__DelegateSignature(const struct FName& EventName, float EmitterTime, int ParticleTime, const struct FVector& Location, const struct FVector& Velocity, const struct FVector& Direction, const struct FVector& Normal, const struct FName& BoneName);
	void ParticleBurstSignature__DelegateSignature(const struct FName& EventName, float EmitterTime, int ParticleCount);
	void OnRep_bCurrentlyActive();
	void OnParticleSystemFinished(class UParticleSystemComponent* FinishedComponent);
	bool IsActive();
	void Deactivate();
	void Activate();
};


// Class Engine.DataAsset
// 0x0000 (0x0028 - 0x0028)
class UDataAsset : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DataAsset");
		return ptr;
	}

};


// Class Engine.ReverbVolume
// 0x0050 (0x04B0 - 0x0460)
class AReverbVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0460(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ReverbVolume");
		return ptr;
	}

};


// Class Engine.WorldSettings
// 0x03B8 (0x07E0 - 0x0428)
class AWorldSettings : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x3B8];                                     // 0x0428(0x03B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.WorldSettings");
		return ptr;
	}


	void PooledParticleSystemFinished(class UParticleSystemComponent* FinishedComponent);
};


// Class Engine.MovementComponent
// 0x0040 (0x0148 - 0x0108)
class UMovementComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0108(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MovementComponent");
		return ptr;
	}


	void StopMovementImmediately();
	void SnapUpdatedComponentToPlane();
	void SetUpdatedComponent(class UPrimitiveComponent* NewUpdatedComponent);
	void SetPlaneConstraintOrigin(const struct FVector& PlaneOrigin);
	void SetPlaneConstraintNormal(const struct FVector& PlaneNormal);
	void SetPlaneConstraintFromVectors(const struct FVector& Forward, const struct FVector& Up);
	void PhysicsVolumeChanged(class APhysicsVolume* NewVolume);
	bool K2_MoveUpdatedComponent(const struct FVector& Delta, const struct FRotator& NewRotation, bool bSweep, struct FHitResult* OutHit);
	float K2_GetModifiedMaxSpeed();
	float K2_GetMaxSpeedModifier();
	bool IsExceedingMaxSpeed(float MaxSpeed);
	struct FVector GetPlaneConstraintOrigin();
	struct FVector GetPlaneConstraintNormal();
	class APhysicsVolume* GetPhysicsVolume();
	float GetMaxSpeed();
	float GetGravityZ();
	struct FVector ConstrainLocationToPlane(const struct FVector& Location);
	struct FVector ConstrainDirectionToPlane(const struct FVector& Direction);
};


// Class Engine.NavigationTypes
// 0x0000 (0x0028 - 0x0028)
class UNavigationTypes : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavigationTypes");
		return ptr;
	}

};


// Class Engine.NavMovementComponent
// 0x0018 (0x0160 - 0x0148)
class UNavMovementComponent : public UMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0148(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavMovementComponent");
		return ptr;
	}


	void StopMovementKeepPathing();
	void StopActiveMovement();
	bool IsSwimming();
	bool IsMovingOnGround();
	bool IsFlying();
	bool IsFalling();
	bool IsCrouching();
};


// Class Engine.PawnMovementComponent
// 0x0008 (0x0168 - 0x0160)
class UPawnMovementComponent : public UNavMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0160(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PawnMovementComponent");
		return ptr;
	}


	struct FVector K2_GetInputVector();
	bool IsMoveInputIgnored();
	struct FVector GetPendingInputVector();
	class APawn* GetPawnOwner();
	struct FVector GetLastInputVector();
	struct FVector ConsumeInputVector();
	void AddInputVector(const struct FVector& WorldVector, bool bForce);
};


// Class Engine.CharacterMovementComponent
// 0x03B8 (0x0520 - 0x0168)
class UCharacterMovementComponent : public UPawnMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x3B8];                                     // 0x0168(0x03B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CharacterMovementComponent");
		return ptr;
	}


	void SetWalkableFloorZ(float InWalkableFloorZ);
	void SetWalkableFloorAngle(float InWalkableFloorAngle);
	void SetMovementMode(TEnumAsByte<EMovementMode> NewMovementMode, unsigned char NewCustomMode);
	void SetGroupsToIgnore(int GroupFlags);
	void SetGroupsToAvoid(int GroupFlags);
	void SetAvoidanceGroup(int GroupFlags);
	void SetAvoidanceEnabled(bool bEnable);
	void ServerMoveWithRotation(float TimeStamp, const struct FVector_NetQuantize100& InAccel, const struct FVector_NetQuantize100& ClientLoc, unsigned char CompressedMoveFlags, unsigned char ClientRoll, uint32_t View, class UPrimitiveComponent* ClientMovementBase, const struct FName& ClientBaseBoneName, unsigned char ClientMovementMode, const struct FRotator& ClientRotation);
	void ServerMoveOnlyRotation(float TimeStamp, unsigned char ClientRoll, uint32_t View);
	void ServerMoveOldWithRotation(float OldTimeStamp, const struct FVector_NetQuantize100& OldAccel, unsigned char OldMoveFlags, const struct FRotator& OldRotation);
	void ServerMoveOld(float OldTimeStamp, const struct FVector_NetQuantize100& OldAccel, unsigned char OldMoveFlags);
	void ServerMoveDualWithRotation(float TimeStamp0, const struct FVector_NetQuantize100& InAccel0, unsigned char PendingFlags, uint32_t View0, float TimeStamp, const struct FVector_NetQuantize100& InAccel, const struct FVector_NetQuantize100& ClientLoc, unsigned char NewFlags, unsigned char ClientRoll, uint32_t View, class UPrimitiveComponent* ClientMovementBase, const struct FName& ClientBaseBoneName, unsigned char ClientMovementMode, const struct FRotator& InRotation0, const struct FRotator& InRotation);
	void ServerMoveDualOnlyRotation(float TimeStamp0, uint32_t View0, float TimeStamp, unsigned char ClientRoll, uint32_t View);
	void ServerMoveDual(float TimeStamp0, const struct FVector_NetQuantize100& InAccel0, unsigned char PendingFlags, uint32_t View0, float TimeStamp, const struct FVector_NetQuantize100& InAccel, const struct FVector_NetQuantize100& ClientLoc, unsigned char NewFlags, unsigned char ClientRoll, uint32_t View, class UPrimitiveComponent* ClientMovementBase, const struct FName& ClientBaseBoneName, unsigned char ClientMovementMode);
	void ServerMove(float TimeStamp, const struct FVector_NetQuantize100& InAccel, const struct FVector_NetQuantize100& ClientLoc, unsigned char CompressedMoveFlags, unsigned char ClientRoll, uint32_t View, class UPrimitiveComponent* ClientMovementBase, const struct FName& ClientBaseBoneName, unsigned char ClientMovementMode);
	void ServerJumpOutOfWater(const struct FVector_NetQuantize100& WallNormal, unsigned char JumpFlag);
	float K2_GetWalkableFloorZ();
	float K2_GetWalkableFloorAngle();
	float K2_GetModifiedMaxAcceleration();
	bool IsWalking();
	bool IsWalkable(const struct FHitResult& Hit);
	bool IsOnWalkableFloor();
	float GetValidPerchRadius();
	float GetPerchRadiusThreshold();
	class UPrimitiveComponent* GetMovementBase();
	float GetMaxJumpHeight();
	float GetMaxAcceleration();
	struct FVector GetImpartedMovementBaseVelocity();
	struct FVector GetCurrentAcceleration();
	class ACharacter* GetCharacterOwner();
	float GetAnalogInputModifier();
	void ClientVeryShortAdjustPosition(float TimeStamp, const struct FVector& NewLoc, class UPrimitiveComponent* NewBase, const struct FName& NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode);
	void ClientDrawDebugSphere(const struct FVector& Location, float Radius, const struct FColor& SphereColor, float LifeSpan);
	void ClientAdjustRootMotionPosition(float TimeStamp, float ServerMontageTrackPosition, const struct FVector& ServerLoc, const struct FVector_NetQuantizeNormal& ServerRotation, float ServerVelZ, class UPrimitiveComponent* ServerBase, const struct FName& ServerBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode);
	void ClientAdjustPosition(float TimeStamp, const struct FVector& NewLoc, const struct FVector& NewVel, class UPrimitiveComponent* NewBase, const struct FName& NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode);
	void ClientAckGoodMove(float TimeStamp);
	void CapsuleTouched(class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void CalcVelocity(float DeltaTime, float Friction, bool bFluid, float BrakingDeceleration);
	void AddImpulse(const struct FVector& Impulse, bool bVelocityChange, float MassScaleImpulseExponent);
	void AddForce(const struct FVector& Force);
};


// Class Engine.CheatManager
// 0x0058 (0x0080 - 0x0028)
class UCheatManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0028(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CheatManager");
		return ptr;
	}


	void WidgetReflector();
	void Walk();
	void ViewSelf();
	void ViewPlayer(const struct FString& S);
	void ViewClass(class UClass* DesiredClass);
	void ViewActor(const struct FName& ActorName);
	void ToggleDebugCamera();
	void ToggleAILogging();
	void TestCollisionDistance();
	void Teleport();
	void Summon(const struct FString& ClassName);
	void StreamLevelOut(const struct FName& PackageName);
	void StreamLevelIn(const struct FName& PackageName);
	void Slomo(float T);
	void SetWorldOrigin();
	void SetNavDrawDistance(float DrawDistance);
	void ServerToggleAILogging();
	void RebuildNavigation();
	void PlayersOnly();
	void OnlyLoadLevel(const struct FName& PackageName);
	void LogLoc();
	void God();
	void Ghost();
	void FreezeFrame(float Delay);
	void Fly();
	void FlushLog();
	void DumpVoiceMutingState();
	void DumpOnlineSessionState();
	void DestroyTarget();
	void DestroyPawns(class UClass* aClass);
	void DestroyAll(class UClass* aClass);
	void DebugCapsuleSweepSize(float HalfHeight, float Radius);
	void DebugCapsuleSweepPawn();
	void DebugCapsuleSweepComplex(bool bTraceComplex);
	void DebugCapsuleSweepClear();
	void DebugCapsuleSweepChannel(TEnumAsByte<ECollisionChannel> Channel);
	void DebugCapsuleSweepCapture();
	void DebugCapsuleSweep();
	void DamageTarget(float DamageAmount);
	void ChangeSize(float F);
	void BugItStringCreator(const struct FVector& ViewLocation, const struct FRotator& ViewRotation, struct FString* GoString, struct FString* LocString);
	void BugItGo(float X, float Y, float Z, float Pitch, float Yaw, float Roll);
	void BugIt(const struct FString& ScreenShotDescription);
};


// Class Engine.DamageType
// 0x0028 (0x0050 - 0x0028)
class UDamageType : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DamageType");
		return ptr;
	}


	float HandleDamage(class AActor* Victim, float DamageAmount, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser);
};


// Class Engine.Engine
// 0x08F8 (0x0920 - 0x0028)
class UEngine : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8F8];                                     // 0x0028(0x08F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Engine");
		return ptr;
	}

};


// Class Engine.GameEngine
// 0x0040 (0x0960 - 0x0920)
class UGameEngine : public UEngine
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0920(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameEngine");
		return ptr;
	}

};


// Class Engine.GameMode
// 0x00D8 (0x0500 - 0x0428)
class AGameMode : public AInfo
{
public:
	unsigned char                                      UnknownData00[0xD8];                                      // 0x0428(0x00D8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameMode");
		return ptr;
	}


	bool ShouldSpawnAtStartSpot(class AController* Player);
	void SetBandwidthLimit(float AsyncIOBandwidthLimit);
	void K2_PostLogin(class APlayerController* NewPlayer);
	class UClass* GetDefaultPawnClassForController(class AController* InController);
	class AActor* ChoosePlayerStart(class AController* Player);
};


// Class Engine.GameInstance
// 0x0030 (0x0058 - 0x0028)
class UGameInstance : public UObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0028(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameInstance");
		return ptr;
	}


	void DebugRemovePlayer(int ControllerId);
	void DebugCreatePlayer(int ControllerId);
};


// Class Engine.GameSession
// 0x0018 (0x0440 - 0x0428)
class AGameSession : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0428(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameSession");
		return ptr;
	}

};


// Class Engine.GameState
// 0x0058 (0x0480 - 0x0428)
class AGameState : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x1200];                                    // 0x0428(0x1200) MISSED OFFSET
	class UClass*                                      GameModeClass;                                            // 0x1628(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	struct FName                                       MatchState;                                               // 0x1629(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	class UClass*                                      SpectatorClass;                                           // 0x162A(0x0008) (Net, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameState");
		return ptr;
	}


	void OnRep_SpectatorClass();
	void OnRep_MatchState();
	void OnRep_GameModeClass();
	void BPNetSpawnActorAtLocation(class UClass* AnActorClass, const struct FVector& AtLocation, const struct FRotator& AtRotation, class AActor* EffectOwnerToIgnore, float MaxRangeToReplicate, class USceneComponent* attachToComponent, int dataIndex, const struct FName& attachSocketName);
};


// Class Engine.GameUserSettings
// 0x00F8 (0x0120 - 0x0028)
class UGameUserSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0xF8];                                      // 0x0028(0x00F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameUserSettings");
		return ptr;
	}

};


// Class Engine.ScriptViewportClient
// 0x0008 (0x0030 - 0x0028)
class UScriptViewportClient : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ScriptViewportClient");
		return ptr;
	}

};


// Class Engine.GameViewportClient
// 0x00F8 (0x0128 - 0x0030)
class UGameViewportClient : public UScriptViewportClient
{
public:
	unsigned char                                      UnknownData00[0xF8];                                      // 0x0030(0x00F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameViewportClient");
		return ptr;
	}


	void SSSwapControllers();
	void ShowTitleSafeArea();
	void SetConsoleTarget(int PlayerIndex);
};


// Class Engine.MaterialInterface
// 0x0038 (0x0060 - 0x0028)
class UMaterialInterface : public UObject
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0028(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialInterface");
		return ptr;
	}


	class UPhysicalMaterial* GetPhysicalMaterial();
	class UMaterial* GetBaseMaterial();
};


// Class Engine.ParticleSystemComponent
// 0x01C0 (0x07A0 - 0x05E0)
class UParticleSystemComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x1C0];                                     // 0x05E0(0x01C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleSystemComponent");
		return ptr;
	}


	void SetVectorParameter(const struct FName& ParameterName, const struct FVector& Param);
	void SetTrailSourceData(const struct FName& InFirstSocketName, const struct FName& InSecondSocketName, TEnumAsByte<ETrailWidthMode> InWidthMode, float InWidth);
	void SetTemplate(class UParticleSystem* NewTemplate);
	void SetMaterialParameter(const struct FName& ParameterName, class UMaterialInterface* Param);
	void SetFloatParameter(const struct FName& ParameterName, float Param);
	void SetEmitterEnable(const struct FName& EmitterName, bool bNewEnableState);
	void SetColorParameter(const struct FName& ParameterName, const struct FLinearColor& Param);
	void SetBeamTargetTangent(int EmitterIndex, const struct FVector& NewTangentPoint, int TargetIndex);
	void SetBeamTargetStrength(int EmitterIndex, float NewTargetStrength, int TargetIndex);
	void SetBeamTargetPoint(int EmitterIndex, const struct FVector& NewTargetPoint, int TargetIndex);
	void SetBeamSourceTangent(int EmitterIndex, const struct FVector& NewTangentPoint, int SourceIndex);
	void SetBeamSourceStrength(int EmitterIndex, float NewSourceStrength, int SourceIndex);
	void SetBeamSourcePoint(int EmitterIndex, const struct FVector& NewSourcePoint, int SourceIndex);
	void SetBeamEndPoint(int EmitterIndex, const struct FVector& NewEndPoint);
	void SetActorParameter(const struct FName& ParameterName, class AActor* Param);
	void OnSystemFinished__DelegateSignature(class UParticleSystemComponent* PSystem);
	int GetNumActiveParticles();
	class UMaterialInterface* GetNamedMaterial(const struct FName& Name);
	void GenerateParticleEvent(const struct FName& InEventName, float InEmitterTime, const struct FVector& InLocation, const struct FVector& InDirection, const struct FVector& InVelocity);
	void EndTrails();
	class UMaterialInstanceDynamic* CreateNamedDynamicMaterialInstance(const struct FName& Name, class UMaterialInterface* SourceMaterial);
	void BeginTrails(const struct FName& InFirstSocketName, const struct FName& InSecondSocketName, TEnumAsByte<ETrailWidthMode> InWidthMode, float InWidth);
};


// Class Engine.SaveGame
// 0x0000 (0x0028 - 0x0028)
class USaveGame : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SaveGame");
		return ptr;
	}

};


// Class Engine.Player
// 0x0020 (0x0048 - 0x0028)
class UPlayer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Player");
		return ptr;
	}

};


// Class Engine.LocalPlayer
// 0x01F8 (0x0240 - 0x0048)
class ULocalPlayer : public UPlayer
{
public:
	unsigned char                                      UnknownData00[0x1F8];                                     // 0x0048(0x01F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LocalPlayer");
		return ptr;
	}

};


// Class Engine.OnlineSession
// 0x0000 (0x0028 - 0x0028)
class UOnlineSession : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.OnlineSession");
		return ptr;
	}

};


// Class Engine.DefaultPawn
// 0x0028 (0x04C0 - 0x0498)
class ADefaultPawn : public APawn
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0498(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DefaultPawn");
		return ptr;
	}


	void TurnAtRate(float Rate);
	void Turn(float Val);
	void MoveUp_World(float Val);
	void MoveRight(float Val);
	void MoveForward(float Val);
	void LookUpAtRate(float Rate);
	void LookUp(float Val);
};


// Class Engine.SpectatorPawn
// 0x0000 (0x04C0 - 0x04C0)
class ASpectatorPawn : public ADefaultPawn
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SpectatorPawn");
		return ptr;
	}

};


// Class Engine.SoundNode
// 0x0010 (0x0038 - 0x0028)
class USoundNode : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNode");
		return ptr;
	}

};


// Class Engine.BlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UBlueprintFunctionLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlueprintFunctionLibrary");
		return ptr;
	}

};


// Class Engine.AISystemBase
// 0x0018 (0x0040 - 0x0028)
class UAISystemBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AISystemBase");
		return ptr;
	}

};


// Class Engine.BlueprintGeneratedClass
// 0x0040 (0x01C8 - 0x0188)
class UBlueprintGeneratedClass : public UClass
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0188(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlueprintGeneratedClass");
		return ptr;
	}

};


// Class Engine.NetConnection
// 0x34230 (0x34278 - 0x0048)
class UNetConnection : public UPlayer
{
public:
	unsigned char                                      UnknownData00[0x34230];                                   // 0x0048(0x34230) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NetConnection");
		return ptr;
	}

};


// Class Engine.NetDriver
// 0x0350 (0x0378 - 0x0028)
class UNetDriver : public UObject
{
public:
	unsigned char                                      UnknownData00[0x350];                                     // 0x0028(0x0350) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NetDriver");
		return ptr;
	}

};


// Class Engine.Model
// 0x0578 (0x05A0 - 0x0028)
class UModel : public UObject
{
public:
	unsigned char                                      UnknownData00[0x578];                                     // 0x0028(0x0578) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Model");
		return ptr;
	}

};


// Class Engine.Interface_AssetUserData
// 0x0000 (0x0028 - 0x0028)
class UInterface_AssetUserData : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Interface_AssetUserData");
		return ptr;
	}

};


// Class Engine.AmbientSound
// 0x0018 (0x0440 - 0x0428)
class AAmbientSound : public AActor
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0428(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AmbientSound");
		return ptr;
	}


	void Stop();
	void Play(float StartTime);
	void FadeOut(float FadeOutDuration, float FadeVolumeLevel);
	void FadeIn(float FadeInDuration, float FadeVolumeLevel);
	void AdjustVolume(float AdjustVolumeDuration, float AdjustVolumeLevel);
};


// Class Engine.LevelBase
// 0x0088 (0x00B0 - 0x0028)
class ULevelBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0028(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelBase");
		return ptr;
	}

};


// Class Engine.PendingNetGame
// 0x00E8 (0x0110 - 0x0028)
class UPendingNetGame : public UObject
{
public:
	unsigned char                                      UnknownData00[0xE8];                                      // 0x0028(0x00E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PendingNetGame");
		return ptr;
	}

};


// Class Engine.World
// 0x09F8 (0x0A20 - 0x0028)
class UWorld : public UObject
{
public:
	unsigned char                                      UnknownData00[0x9F8];                                     // 0x0028(0x09F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.World");
		return ptr;
	}


	class AWorldSettings* GetWorldSettings(bool bCheckStreamingPesistent, bool bChecked);
};


// Class Engine.BrushShape
// 0x0000 (0x0460 - 0x0460)
class ABrushShape : public ABrush
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BrushShape");
		return ptr;
	}

};


// Class Engine.BlockingVolume
// 0x0000 (0x0460 - 0x0460)
class ABlockingVolume : public AVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlockingVolume");
		return ptr;
	}

};


// Class Engine.CameraBlockingVolume
// 0x0000 (0x0460 - 0x0460)
class ACameraBlockingVolume : public AVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CameraBlockingVolume");
		return ptr;
	}

};


// Class Engine.CullDistanceVolume
// 0x0018 (0x0478 - 0x0460)
class ACullDistanceVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0460(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CullDistanceVolume");
		return ptr;
	}

};


// Class Engine.Level
// 0x0250 (0x0300 - 0x00B0)
class ULevel : public ULevelBase
{
public:
	unsigned char                                      UnknownData00[0x250];                                     // 0x00B0(0x0250) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Level");
		return ptr;
	}

};


// Class Engine.LevelStreamingVolume
// 0x0018 (0x0478 - 0x0460)
class ALevelStreamingVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0460(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelStreamingVolume");
		return ptr;
	}

};


// Class Engine.LightmassCharacterIndirectDetailVolume
// 0x0000 (0x0460 - 0x0460)
class ALightmassCharacterIndirectDetailVolume : public AVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightmassCharacterIndirectDetailVolume");
		return ptr;
	}

};


// Class Engine.LightmassImportanceVolume
// 0x0000 (0x0460 - 0x0460)
class ALightmassImportanceVolume : public AVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightmassImportanceVolume");
		return ptr;
	}

};


// Class Engine.MergeMeshVolume
// 0x0010 (0x0470 - 0x0460)
class AMergeMeshVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0460(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MergeMeshVolume");
		return ptr;
	}

};


// Class Engine.NavMeshBoundsVolume
// 0x0000 (0x0460 - 0x0460)
class ANavMeshBoundsVolume : public AVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavMeshBoundsVolume");
		return ptr;
	}

};


// Class Engine.NavRelevantInterface
// 0x0000 (0x0028 - 0x0028)
class UNavRelevantInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavRelevantInterface");
		return ptr;
	}

};


// Class Engine.NavModifierVolume
// 0x0010 (0x0470 - 0x0460)
class ANavModifierVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0460(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavModifierVolume");
		return ptr;
	}

};


// Class Engine.PhysicsVolume
// 0x0020 (0x0480 - 0x0460)
class APhysicsVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0460(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsVolume");
		return ptr;
	}

};


// Class Engine.DefaultPhysicsVolume
// 0x0000 (0x0480 - 0x0480)
class ADefaultPhysicsVolume : public APhysicsVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DefaultPhysicsVolume");
		return ptr;
	}

};


// Class Engine.KillZVolume
// 0x0000 (0x0480 - 0x0480)
class AKillZVolume : public APhysicsVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KillZVolume");
		return ptr;
	}

};


// Class Engine.FoliageInclusionVolume
// 0x0000 (0x0460 - 0x0460)
class AFoliageInclusionVolume : public AVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FoliageInclusionVolume");
		return ptr;
	}

};


// Class Engine.PainCausingVolume
// 0x0048 (0x04C8 - 0x0480)
class APainCausingVolume : public APhysicsVolume
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0480(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PainCausingVolume");
		return ptr;
	}

};


// Class Engine.Interface_PostProcessVolume
// 0x0000 (0x0028 - 0x0028)
class UInterface_PostProcessVolume : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Interface_PostProcessVolume");
		return ptr;
	}

};


// Class Engine.PostProcessVolume
// 0x0368 (0x07C8 - 0x0460)
class APostProcessVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x368];                                     // 0x0460(0x0368) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PostProcessVolume");
		return ptr;
	}


	void PostprocessVolumeLeftSignature__DelegateSignature();
	void PostprocessVolumeEnteredSignature__DelegateSignature();
};


// Class Engine.PrecomputedVisibilityVolume
// 0x0000 (0x0460 - 0x0460)
class APrecomputedVisibilityVolume : public AVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PrecomputedVisibilityVolume");
		return ptr;
	}

};


// Class Engine.TileStreamingVolume
// 0x0018 (0x0478 - 0x0460)
class ATileStreamingVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0460(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TileStreamingVolume");
		return ptr;
	}

};


// Class Engine.TriggerVolume
// 0x0000 (0x0460 - 0x0460)
class ATriggerVolume : public AVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TriggerVolume");
		return ptr;
	}

};


// Class Engine.CameraActor
// 0x0350 (0x0778 - 0x0428)
class ACameraActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x350];                                     // 0x0428(0x0350) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CameraActor");
		return ptr;
	}


	int GetAutoActivatePlayerIndex();
};


// Class Engine.NavAgentInterface
// 0x0000 (0x0028 - 0x0028)
class UNavAgentInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavAgentInterface");
		return ptr;
	}

};


// Class Engine.InputComponent
// 0x0078 (0x0180 - 0x0108)
class UInputComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0108(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InputComponent");
		return ptr;
	}


	bool WasControllerKeyJustReleased(const struct FKey& Key);
	bool WasControllerKeyJustPressed(const struct FKey& Key);
	bool IsControllerKeyDown(const struct FKey& Key);
	void InputVectorAxisHandlerDynamicSignature__DelegateSignature(const struct FVector& AxisValue);
	void InputTouchHandlerDynamicSignature__DelegateSignature(TEnumAsByte<ETouchIndex> FingerIndex, const struct FVector& Location);
	void InputGestureHandlerDynamicSignature__DelegateSignature(float Value);
	void InputAxisHandlerDynamicSignature__DelegateSignature(float AxisValue);
	void InputActionHandlerDynamicSignature__DelegateSignature();
	void GetTouchState(int FingerIndex, float* LocationX, float* LocationY, bool* bIsCurrentlyPressed);
	struct FVector GetControllerVectorKeyState(const struct FKey& Key);
	void GetControllerMouseDelta(float* DeltaX, float* DeltaY);
	float GetControllerKeyTimeDown(const struct FKey& Key);
	void GetControllerAnalogStickState(TEnumAsByte<EControllerAnalogStick> WhichStick, float* StickX, float* StickY);
	float GetControllerAnalogKeyState(const struct FKey& Key);
};


// Class Engine.DebugCameraController
// 0x0048 (0x07E8 - 0x07A0)
class ADebugCameraController : public APlayerController
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x07A0(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DebugCameraController");
		return ptr;
	}


	void ShowDebugSelectedInfo();
};


// Class Engine.LogVisualizerCameraController
// 0x0018 (0x0800 - 0x07E8)
class ALogVisualizerCameraController : public ADebugCameraController
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x07E8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LogVisualizerCameraController");
		return ptr;
	}

};


// Class Engine.DecalActor
// 0x0008 (0x0430 - 0x0428)
class ADecalActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0428(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DecalActor");
		return ptr;
	}


	void SetDecalMaterial(class UMaterialInterface* NewDecalMaterial);
	class UMaterialInterface* GetDecalMaterial();
	class UMaterialInstanceDynamic* CreateDynamicMaterialInstance();
};


// Class Engine.DocumentationActor
// 0x0008 (0x0430 - 0x0428)
class ADocumentationActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0428(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DocumentationActor");
		return ptr;
	}

};


// Class Engine.PrecomputedVisibilityOverrideVolume
// 0x0030 (0x0490 - 0x0460)
class APrecomputedVisibilityOverrideVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0460(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PrecomputedVisibilityOverrideVolume");
		return ptr;
	}

};


// Class Engine.EmitterCameraLensEffectBase
// 0x0038 (0x04B0 - 0x0478)
class AEmitterCameraLensEffectBase : public AEmitter
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0478(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EmitterCameraLensEffectBase");
		return ptr;
	}

};


// Class Engine.GroundClutterLayerActor
// 0x0008 (0x0430 - 0x0428)
class AGroundClutterLayerActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0428(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GroundClutterLayerActor");
		return ptr;
	}

};


// Class Engine.DebugCameraHUD
// 0x0000 (0x0510 - 0x0510)
class ADebugCameraHUD : public AHUD
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DebugCameraHUD");
		return ptr;
	}

};


// Class Engine.LogVisualizerHUD
// 0x0030 (0x0540 - 0x0510)
class ALogVisualizerHUD : public ADebugCameraHUD
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0510(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LogVisualizerHUD");
		return ptr;
	}

};


// Class Engine.AtmosphericFog
// 0x0008 (0x0430 - 0x0428)
class AAtmosphericFog : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0428(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AtmosphericFog");
		return ptr;
	}

};


// Class Engine.ExponentialHeightFog
// 0x0010 (0x0438 - 0x0428)
class AExponentialHeightFog : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x15AC];                                    // 0x0428(0x15AC) MISSED OFFSET
	unsigned char                                      bEnabled : 1;                                             // 0x19D4(0x0001) (Net)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ExponentialHeightFog");
		return ptr;
	}


	void OnRep_bEnabled();
};


// Class Engine.GameNetworkManager
// 0x0050 (0x0478 - 0x0428)
class AGameNetworkManager : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0428(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameNetworkManager");
		return ptr;
	}

};


// Class Engine.MatineeActorManager
// 0x0018 (0x0440 - 0x0428)
class AMatineeActorManager : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0428(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MatineeActorManager");
		return ptr;
	}

};


// Class Engine.SkyLight
// 0x0010 (0x0438 - 0x0428)
class ASkyLight : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x15AC];                                    // 0x0428(0x15AC) MISSED OFFSET
	unsigned char                                      bEnabled : 1;                                             // 0x19D4(0x0001) (Net)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkyLight");
		return ptr;
	}


	void OnRep_bEnabled();
};


// Class Engine.WindDirectionalSource
// 0x0008 (0x0430 - 0x0428)
class AWindDirectionalSource : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0428(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.WindDirectionalSource");
		return ptr;
	}

};


// Class Engine.InstancedFoliageActor
// 0x00A0 (0x04C8 - 0x0428)
class AInstancedFoliageActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0428(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InstancedFoliageActor");
		return ptr;
	}

};


// Class Engine.LandscapeGizmoActor
// 0x0000 (0x0428 - 0x0428)
class ALandscapeGizmoActor : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LandscapeGizmoActor");
		return ptr;
	}

};


// Class Engine.LandscapeGizmoActiveActor
// 0x0050 (0x0478 - 0x0428)
class ALandscapeGizmoActiveActor : public ALandscapeGizmoActor
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0428(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LandscapeGizmoActiveActor");
		return ptr;
	}

};


// Class Engine.LandscapeProxy
// 0x02E0 (0x0708 - 0x0428)
class ALandscapeProxy : public AActor
{
public:
	unsigned char                                      UnknownData00[0x2E0];                                     // 0x0428(0x02E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LandscapeProxy");
		return ptr;
	}


	void ChangeLODDistanceFactor(float InLODDistanceFactor);
};


// Class Engine.Landscape
// 0x0000 (0x0708 - 0x0708)
class ALandscape : public ALandscapeProxy
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Landscape");
		return ptr;
	}

};


// Class Engine.LevelBounds
// 0x0008 (0x0430 - 0x0428)
class ALevelBounds : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0428(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelBounds");
		return ptr;
	}

};


// Class Engine.LevelScriptActor
// 0x0008 (0x0430 - 0x0428)
class ALevelScriptActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0428(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelScriptActor");
		return ptr;
	}


	void WorldOriginLocationChanged(const struct FIntVector& OldOriginLocation, const struct FIntVector& NewOriginLocation);
	void SetCinematicMode(bool bCinematicMode, bool bHidePlayer, bool bAffectsHUD, bool bAffectsMovement, bool bAffectsTurning);
	bool RemoteEvent(const struct FName& EventName);
	void LevelReset();
};


// Class Engine.Light
// 0x0010 (0x0438 - 0x0428)
class ALight : public AActor
{
public:
	unsigned char                                      UnknownData00[0x15AC];                                    // 0x0428(0x15AC) MISSED OFFSET
	unsigned char                                      bEnabled : 1;                                             // 0x19D4(0x0001) (Net)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Light");
		return ptr;
	}


	void ToggleEnabled();
	void SetLightFunctionScale(const struct FVector& NewLightFunctionScale);
	void SetLightFunctionMaterial(class UMaterialInterface* NewLightFunctionMaterial);
	void SetLightFunctionFadeDistance(float NewLightFunctionFadeDistance);
	void SetLightColor(const struct FLinearColor& NewLightColor);
	void SetEnabled(bool bSetEnabled);
	void SetCastShadows(bool bNewValue);
	void SetBrightness(float NewBrightness);
	void SetAffectTranslucentLighting(bool bNewValue);
	void OnRep_bEnabled();
	bool IsEnabled();
	struct FLinearColor GetLightColor();
	float GetBrightness();
};


// Class Engine.DirectionalLight
// 0x0000 (0x0438 - 0x0438)
class ADirectionalLight : public ALight
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DirectionalLight");
		return ptr;
	}

};


// Class Engine.PointLight
// 0x0008 (0x0440 - 0x0438)
class APointLight : public ALight
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0438(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PointLight");
		return ptr;
	}


	void SetRadius(float NewRadius);
	void SetLightFalloffExponent(float NewLightFalloffExponent);
};


// Class Engine.SpotLight
// 0x0008 (0x0440 - 0x0438)
class ASpotLight : public ALight
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0438(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SpotLight");
		return ptr;
	}


	void SetOuterConeAngle(float NewOuterConeAngle);
	void SetInnerConeAngle(float NewInnerConeAngle);
};


// Class Engine.GeneratedMeshAreaLight
// 0x0000 (0x0440 - 0x0440)
class AGeneratedMeshAreaLight : public ASpotLight
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GeneratedMeshAreaLight");
		return ptr;
	}

};


// Class Engine.MaterialInstanceActor
// 0x0010 (0x0438 - 0x0428)
class AMaterialInstanceActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0428(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialInstanceActor");
		return ptr;
	}

};


// Class Engine.MatineeActor
// 0x0088 (0x04B0 - 0x0428)
class AMatineeActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x15D8];                                    // 0x0428(0x15D8) MISSED OFFSET
	TArray<struct FInterpGroupActorInfo>               GroupActorInfos;                                          // 0x1A00(0x0010) (Net, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MatineeActor");
		return ptr;
	}


	void Stop();
	void SetPosition(float NewPosition, bool bJump);
	void SetLoopingState(bool bNewLooping);
	void Reverse();
	void Play();
	void Pause();
	void OnMatineeEvent__DelegateSignature();
	void InitClientMatinee();
	void ChangePlaybackDirection();
	void AddActorToGroup(const struct FName& GroupName, class AActor* TheGroupActor);
};


// Class Engine.MatineeActorCameraAnim
// 0x0008 (0x04B8 - 0x04B0)
class AMatineeActorCameraAnim : public AMatineeActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x04B0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MatineeActorCameraAnim");
		return ptr;
	}

};


// Class Engine.NavigationQueryFilter
// 0x0018 (0x0040 - 0x0028)
class UNavigationQueryFilter : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavigationQueryFilter");
		return ptr;
	}

};


// Class Engine.NavigationData
// 0x0178 (0x05A0 - 0x0428)
class ANavigationData : public AActor
{
public:
	unsigned char                                      UnknownData00[0x178];                                     // 0x0428(0x0178) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavigationData");
		return ptr;
	}

};


// Class Engine.NavigationGraph
// 0x0000 (0x05A0 - 0x05A0)
class ANavigationGraph : public ANavigationData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavigationGraph");
		return ptr;
	}

};


// Class Engine.RecastNavMesh
// 0x0118 (0x06B8 - 0x05A0)
class ARecastNavMesh : public ANavigationData
{
public:
	unsigned char                                      UnknownData00[0x118];                                     // 0x05A0(0x0118) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RecastNavMesh");
		return ptr;
	}

};


// Class Engine.NavigationGraphNode
// 0x0000 (0x0428 - 0x0428)
class ANavigationGraphNode : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavigationGraphNode");
		return ptr;
	}

};


// Class Engine.NavigationObjectBase
// 0x0028 (0x0450 - 0x0428)
class ANavigationObjectBase : public AActor
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0428(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavigationObjectBase");
		return ptr;
	}

};


// Class Engine.PlayerStart
// 0x0010 (0x0460 - 0x0450)
class APlayerStart : public ANavigationObjectBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0450(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlayerStart");
		return ptr;
	}

};


// Class Engine.PlayerStartPIE
// 0x0000 (0x0460 - 0x0460)
class APlayerStartPIE : public APlayerStart
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlayerStartPIE");
		return ptr;
	}

};


// Class Engine.NavPathObserverInterface
// 0x0000 (0x0028 - 0x0028)
class UNavPathObserverInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavPathObserverInterface");
		return ptr;
	}

};


// Class Engine.NavigationTestingActor
// 0x0098 (0x04C0 - 0x0428)
class ANavigationTestingActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x0428(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavigationTestingActor");
		return ptr;
	}

};


// Class Engine.NavLinkDefinition
// 0x0028 (0x0050 - 0x0028)
class UNavLinkDefinition : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavLinkDefinition");
		return ptr;
	}

};


// Class Engine.NavLinkHostInterface
// 0x0000 (0x0028 - 0x0028)
class UNavLinkHostInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavLinkHostInterface");
		return ptr;
	}

};


// Class Engine.NavLinkProxy
// 0x0050 (0x0478 - 0x0428)
class ANavLinkProxy : public AActor
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0428(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavLinkProxy");
		return ptr;
	}


	void SmartLinkReachedSignature__DelegateSignature(class AActor* MovingActor, const struct FVector& DestinationPoint);
	void SetSmartLinkEnabled(bool bEnabled);
	void ResumePathFollowing(class AActor* Agent);
	void ReceiveSmartLinkReached(class AActor* Agent, const struct FVector& Destination);
	bool IsSmartLinkEnabled();
	bool HasMovingAgents();
};


// Class Engine.NiagaraActor
// 0x0008 (0x0430 - 0x0428)
class ANiagaraActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0428(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NiagaraActor");
		return ptr;
	}

};


// Class Engine.DynamicCaptureManager
// 0x0200 (0x0628 - 0x0428)
class ADynamicCaptureManager : public AActor
{
public:
	unsigned char                                      UnknownData00[0x200];                                     // 0x0428(0x0200) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DynamicCaptureManager");
		return ptr;
	}

};


// Class Engine.Note
// 0x0000 (0x0428 - 0x0428)
class ANote : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Note");
		return ptr;
	}

};


// Class Engine.ParticleEventManager
// 0x0000 (0x0428 - 0x0428)
class AParticleEventManager : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleEventManager");
		return ptr;
	}

};


// Class Engine.Skeleton
// 0x0230 (0x0258 - 0x0028)
class USkeleton : public UObject
{
public:
	unsigned char                                      UnknownData00[0x230];                                     // 0x0028(0x0230) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Skeleton");
		return ptr;
	}

};


// Class Engine.SkeletalMesh
// 0x0208 (0x0230 - 0x0028)
class USkeletalMesh : public UObject
{
public:
	unsigned char                                      UnknownData00[0x208];                                     // 0x0028(0x0208) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkeletalMesh");
		return ptr;
	}

};


// Class Engine.WheeledVehicle
// 0x0010 (0x04A8 - 0x0498)
class AWheeledVehicle : public APawn
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0498(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.WheeledVehicle");
		return ptr;
	}

};


// Class Engine.ReflectionCapture
// 0x0008 (0x0430 - 0x0428)
class AReflectionCapture : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0428(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ReflectionCapture");
		return ptr;
	}

};


// Class Engine.PlaneReflectionCapture
// 0x0000 (0x0430 - 0x0430)
class APlaneReflectionCapture : public AReflectionCapture
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlaneReflectionCapture");
		return ptr;
	}

};


// Class Engine.SphereReflectionCapture
// 0x0008 (0x0438 - 0x0430)
class ASphereReflectionCapture : public AReflectionCapture
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0430(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SphereReflectionCapture");
		return ptr;
	}


	class USphereReflectionCaptureComponent* GetSphereCaptureComponent();
};


// Class Engine.RigidBodyBase
// 0x0000 (0x0428 - 0x0428)
class ARigidBodyBase : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RigidBodyBase");
		return ptr;
	}

};


// Class Engine.PhysicsConstraintActor
// 0x0020 (0x0448 - 0x0428)
class APhysicsConstraintActor : public ARigidBodyBase
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0428(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsConstraintActor");
		return ptr;
	}

};


// Class Engine.PhysicsThruster
// 0x0008 (0x0430 - 0x0428)
class APhysicsThruster : public ARigidBodyBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0428(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsThruster");
		return ptr;
	}

};


// Class Engine.RadialForceActor
// 0x0008 (0x0430 - 0x0428)
class ARadialForceActor : public ARigidBodyBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0428(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RadialForceActor");
		return ptr;
	}


	void ToggleForce();
	void FireImpulse();
	void EnableForce();
	void DisableForce();
};


// Class Engine.SceneCapture
// 0x0008 (0x0430 - 0x0428)
class ASceneCapture : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0428(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SceneCapture");
		return ptr;
	}

};


// Class Engine.BoxReflectionCapture
// 0x0000 (0x0430 - 0x0430)
class ABoxReflectionCapture : public AReflectionCapture
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BoxReflectionCapture");
		return ptr;
	}


	class UBoxReflectionCaptureComponent* GetBoxCaptureComponent();
};


// Class Engine.SceneCapture2D
// 0x0010 (0x0440 - 0x0430)
class ASceneCapture2D : public ASceneCapture
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0430(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SceneCapture2D");
		return ptr;
	}


	void OnInterpToggle(bool bEnable);
};


// Class Engine.SceneCaptureCube
// 0x0010 (0x0440 - 0x0430)
class ASceneCaptureCube : public ASceneCapture
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0430(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SceneCaptureCube");
		return ptr;
	}


	void OnInterpToggle(bool bEnable);
};


// Class Engine.SkinnedMeshComponent
// 0x0100 (0x06F0 - 0x05F0)
class USkinnedMeshComponent : public UMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x100];                                     // 0x05F0(0x0100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkinnedMeshComponent");
		return ptr;
	}


	void UnHideBoneByName(const struct FName& BoneName);
	void TransformToBoneSpace(const struct FName& BoneName, const struct FVector& InPosition, const struct FRotator& InRotation, struct FVector* OutPosition, struct FRotator* OutRotation);
	void TransformFromBoneSpace(const struct FName& BoneName, const struct FVector& InPosition, const struct FRotator& InRotation, struct FVector* OutPosition, struct FRotator* OutRotation);
	void SetSkeletalMesh(class USkeletalMesh* NewMesh);
	void SetPhysicsAsset(class UPhysicsAsset* NewPhysicsAsset, bool bForceReInit);
	void SetMasterPoseComponent(class USkinnedMeshComponent* NewMasterBoneComponent);
	bool IsBoneHiddenByName(const struct FName& BoneName);
	void HideBoneByName(const struct FName& BoneName, TEnumAsByte<EPhysBodyOp> PhysBodyOption);
	struct FName GetSocketBoneName(const struct FName& InSocketName);
	struct FName GetParentBone(const struct FName& BoneName);
	int GetNumBones();
	struct FName GetBoneName(int BoneIndex);
	int GetBoneIndex(const struct FName& BoneName);
};


// Class Engine.Interface_CollisionDataProvider
// 0x0000 (0x0028 - 0x0028)
class UInterface_CollisionDataProvider : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Interface_CollisionDataProvider");
		return ptr;
	}

};


// Class Engine.PhysicsConstraintComponent
// 0x01A0 (0x03B0 - 0x0210)
class UPhysicsConstraintComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x1A0];                                     // 0x0210(0x01A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsConstraintComponent");
		return ptr;
	}


	void SetLinearZLimit(TEnumAsByte<ELinearConstraintMotion> ConstraintType, float LimitSize);
	void SetLinearYLimit(TEnumAsByte<ELinearConstraintMotion> ConstraintType, float LimitSize);
	void SetLinearXLimit(TEnumAsByte<ELinearConstraintMotion> ConstraintType, float LimitSize);
	void SetLinearVelocityTarget(const struct FVector& InVelTarget);
	void SetLinearVelocityDrive(bool bEnableDriveX, bool bEnableDriveY, bool bEnableDriveZ);
	void SetLinearPositionTarget(const struct FVector& InPosTarget);
	void SetLinearPositionDrive(bool bEnableDriveX, bool bEnableDriveY, bool bEnableDriveZ);
	void SetLinearDriveParams(float InSpring, float InDamping, float InForceLimit);
	void SetDisableCollision(bool bDisableCollision);
	void SetConstraintReferencePosition(TEnumAsByte<EConstraintFrame> Frame, const struct FVector& RefPosition);
	void SetConstraintReferenceOrientation(TEnumAsByte<EConstraintFrame> Frame, const struct FVector& PriAxis, const struct FVector& SecAxis);
	void SetConstraintReferenceFrame(TEnumAsByte<EConstraintFrame> Frame, const struct FTransform& RefFrame);
	void SetConstrainedComponents(class UPrimitiveComponent* Component1, const struct FName& BoneName1, class UPrimitiveComponent* Component2, const struct FName& BoneName2);
	void SetAngularVelocityTarget(const struct FVector& InVelTarget);
	void SetAngularVelocityDrive(bool bEnableSwingDrive, bool bEnableTwistDrive);
	void SetAngularTwistLimit(TEnumAsByte<EAngularConstraintMotion> ConstraintType, float TwistLimitAngle);
	void SetAngularSwing2Limit(TEnumAsByte<EAngularConstraintMotion> MotionType, float Swing2LimitAngle);
	void SetAngularSwing1Limit(TEnumAsByte<EAngularConstraintMotion> MotionType, float Swing1LimitAngle);
	void SetAngularOrientationTarget(const struct FRotator& InPosTarget);
	void SetAngularOrientationDrive(bool bEnableSwingDrive, bool bEnableTwistDrive);
	void SetAngularDriveParams(float InSpring, float InDamping, float InForceLimit);
	void GetConstraintForce(struct FVector* OutLinearForce, struct FVector* OutAngularForce);
	void ConstraintBrokenSignature__DelegateSignature(int ConstraintIndex);
	void BreakConstraint();
};


// Class Engine.SkeletalMeshComponent
// 0x0430 (0x0B20 - 0x06F0)
class USkeletalMeshComponent : public USkinnedMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x430];                                     // 0x06F0(0x0430) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkeletalMeshComponent");
		return ptr;
	}


	void Stop();
	void SetupBetweenAnimationBlueprintBlending();
	void SetPosition(float InPos, bool bFireNotifies);
	void SetPlayRate(float Rate);
	void SetPhysicsBlendWeight(float PhysicsBlendWeight);
	void SetMorphTarget(const struct FName& MorphTargetName, float Value);
	void SetEnablePhysicsBlending(bool bNewBlendPhysics);
	void SetClothMaxDistanceScale(float Scale);
	void SetAnimInstanceClass(class UClass* NewClass);
	void SetAnimationMode(TEnumAsByte<EAnimationMode> InAnimationMode);
	void SetAnimation(class UAnimationAsset* NewAnimToPlay);
	void SetAllBodiesSimulatePhysics(bool bNewSimulate);
	void SetAllBodiesPhysicsBlendWeight(float PhysicsBlendWeight, bool bSkipCustomPhysicsType);
	void SetAllBodiesBelowSimulatePhysics(const struct FName& InBoneName, bool bNewSimulate);
	void SetAllBodiesBelowPhysicsBlendWeight(const struct FName& InBoneName, float PhysicsBlendWeight, bool bSkipCustomPhysicsType);
	void ResetClothTeleportMode();
	void ResetAllBodiesSimulatePhysics();
	void PlayAnimation(class UAnimationAsset* NewAnimToPlay, bool bLooping);
	void Play(bool bLooping);
	bool IsPlaying();
	float GetPosition();
	float GetPlayRate();
	float GetMorphTarget(const struct FName& MorphTargetName);
	float GetClothMaxDistanceScale();
	class UAnimInstance* GetAnimInstance();
	TEnumAsByte<EAnimationMode> GetAnimationMode();
	void ForceClothNextUpdateTeleportAndReset();
	void ForceClothNextUpdateTeleport();
	void ClearMorphTargets();
	void BPTickPose(float DeltaTime);
	void BPRefreshBoneTransforms();
	void AccumulateAllBodiesBelowPhysicsBlendWeight(const struct FName& InBoneName, float AddPhysicsBlendWeight, bool bSkipCustomPhysicsType);
};


// Class Engine.SkeletalMeshActor
// 0x0040 (0x0468 - 0x0428)
class ASkeletalMeshActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x167B];                                    // 0x0428(0x167B) MISSED OFFSET
	class UMaterialInterface*                          ReplicatedMaterial0;                                      // 0x1AA3(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          ReplicatedMaterial1;                                      // 0x1AA4(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               ReplicatedMesh;                                           // 0x1AA5(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	class UPhysicsAsset*                               ReplicatedPhysAsset;                                      // 0x1AA6(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkeletalMeshActor");
		return ptr;
	}


	void OnRep_ReplicatedPhysAsset();
	void OnRep_ReplicatedMesh();
	void OnRep_ReplicatedMaterial1();
	void OnRep_ReplicatedMaterial0();
};


// Class Engine.SplineActor
// 0x0008 (0x0430 - 0x0428)
class ASplineActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0428(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SplineActor");
		return ptr;
	}

};


// Class Engine.StaticMeshActor
// 0x0010 (0x0438 - 0x0428)
class AStaticMeshActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0428(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.StaticMeshActor");
		return ptr;
	}

};


// Class Engine.InteractiveFoliageActor
// 0x0060 (0x0498 - 0x0438)
class AInteractiveFoliageActor : public AStaticMeshActor
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0438(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InteractiveFoliageActor");
		return ptr;
	}


	void CapsuleTouched(class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& OverlapInfo);
};


// Class Engine.TargetPoint
// 0x0000 (0x0428 - 0x0428)
class ATargetPoint : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TargetPoint");
		return ptr;
	}

};


// Class Engine.TextRenderActor
// 0x0008 (0x0430 - 0x0428)
class ATextRenderActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0428(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TextRenderActor");
		return ptr;
	}

};


// Class Engine.TriggerBase
// 0x0010 (0x0438 - 0x0428)
class ATriggerBase : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0428(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TriggerBase");
		return ptr;
	}

};


// Class Engine.TriggerBox
// 0x0000 (0x0438 - 0x0438)
class ATriggerBox : public ATriggerBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TriggerBox");
		return ptr;
	}

};


// Class Engine.TriggerCapsule
// 0x0000 (0x0438 - 0x0438)
class ATriggerCapsule : public ATriggerBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TriggerCapsule");
		return ptr;
	}

};


// Class Engine.MatineeAnimInterface
// 0x0000 (0x0028 - 0x0028)
class UMatineeAnimInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MatineeAnimInterface");
		return ptr;
	}

};


// Class Engine.VectorFieldVolume
// 0x0008 (0x0430 - 0x0428)
class AVectorFieldVolume : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0428(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VectorFieldVolume");
		return ptr;
	}

};


// Class Engine.ApplicationLifecycleComponent
// 0x0050 (0x0158 - 0x0108)
class UApplicationLifecycleComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0108(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ApplicationLifecycleComponent");
		return ptr;
	}


	void ApplicationLifetimeDelegate__DelegateSignature();
};


// Class Engine.NavigationSystem
// 0x02C0 (0x02E8 - 0x0028)
class UNavigationSystem : public UBlueprintFunctionLibrary
{
public:
	unsigned char                                      UnknownData00[0x2C0];                                     // 0x0028(0x02C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavigationSystem");
		return ptr;
	}


	void SimpleMoveToLocation(class AController* Controller, const struct FVector& Goal);
	void SimpleMoveToActor(class AController* Controller, class AActor* Goal);
	struct FVector ProjectPointToNavigation(class UObject* WorldContext, const struct FVector& Point, class ANavigationData* NavData, class UClass* FilterClass);
	void OnNavDataRegistered__DelegateSignature(class ANavigationData* NavData);
	bool NavigationRaycast(class UObject* WorldContext, const struct FVector& RayStart, const struct FVector& RayEnd, class UClass* FilterClass, class AController* Querier, struct FVector* HitLocation);
	bool IsNavigationBeingBuilt(class UObject* WorldContext);
	struct FVector GetRandomPointInRadius(class UObject* WorldContext, const struct FVector& Origin, float Radius, class ANavigationData* NavData, class UClass* FilterClass);
	struct FVector GetRandomPoint(class UObject* WorldContext, class ANavigationData* NavData, class UClass* FilterClass);
	TEnumAsByte<ENavigationQueryResult> GetPathLength(class UObject* WorldContext, const struct FVector& PathStart, const struct FVector& PathEnd, class ANavigationData* NavData, class UClass* FilterClass, float* PathLength);
	TEnumAsByte<ENavigationQueryResult> GetPathCost(class UObject* WorldContext, const struct FVector& PathStart, const struct FVector& PathEnd, class ANavigationData* NavData, class UClass* FilterClass, float* PathCost);
	class UNavigationPath* FindPathToLocationSynchronously(class UObject* WorldContext, const struct FVector& PathStart, const struct FVector& PathEnd, class AActor* PathfindingContext, class UClass* FilterClass);
	class UNavigationPath* FindPathToActorSynchronously(class UObject* WorldContext, const struct FVector& PathStart, class AActor* GoalActor, float TetherDistance, class AActor* PathfindingContext, class UClass* FilterClass);
};


// Class Engine.NetworkPredictionInterface
// 0x0000 (0x0028 - 0x0028)
class UNetworkPredictionInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NetworkPredictionInterface");
		return ptr;
	}

};


// Class Engine.FloatingPawnMovement
// 0x0018 (0x0180 - 0x0168)
class UFloatingPawnMovement : public UPawnMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0168(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FloatingPawnMovement");
		return ptr;
	}

};


// Class Engine.SpectatorPawnMovement
// 0x0008 (0x0188 - 0x0180)
class USpectatorPawnMovement : public UFloatingPawnMovement
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0180(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SpectatorPawnMovement");
		return ptr;
	}

};


// Class Engine.WheeledVehicleMovementComponent
// 0x00E8 (0x0250 - 0x0168)
class UWheeledVehicleMovementComponent : public UPawnMovementComponent
{
public:
	unsigned char                                      UnknownData00[0xE8];                                      // 0x0168(0x00E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.WheeledVehicleMovementComponent");
		return ptr;
	}


	void SetUseAutoGears(bool bUseAuto);
	void SetThrottleInput(float Throttle);
	void SetTargetGear(int GearNum, bool bImmediate);
	void SetSteeringInput(float Steering);
	void SetHandbrakeInput(bool bNewHandbrake);
	void SetGearUp(bool bNewGearUp);
	void SetGearDown(bool bNewGearDown);
	void ServerUpdateState(float InSteeringInput, float InThrottleInput, float InBrakeInput, float InHandbrakeInput, int CurrentGear);
	bool GetUseAutoGears();
	float GetThrottleInput();
	int GetTargetGear();
	float GetForwardSpeed();
	float GetEngineRotationSpeed();
	float GetEngineMaxRotationSpeed();
	int GetCurrentGear();
};


// Class Engine.WheeledVehicleMovementComponent4W
// 0x0150 (0x03A0 - 0x0250)
class UWheeledVehicleMovementComponent4W : public UWheeledVehicleMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x150];                                     // 0x0250(0x0150) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.WheeledVehicleMovementComponent4W");
		return ptr;
	}

};


// Class Engine.ProjectileMovementComponent
// 0x0070 (0x01B8 - 0x0148)
class UProjectileMovementComponent : public UMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0148(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ProjectileMovementComponent");
		return ptr;
	}


	void StopSimulating(const struct FHitResult& HitResult);
	void SetVelocityInLocalSpace(const struct FVector& NewVelocity);
	void OnProjectileStopDelegate__DelegateSignature(const struct FHitResult& ImpactResult);
	void OnProjectileBounceDelegate__DelegateSignature(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity);
	struct FVector LimitVelocity(const struct FVector& NewVelocity);
};


// Class Engine.RotatingMovementComponent
// 0x0020 (0x0168 - 0x0148)
class URotatingMovementComponent : public UMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0148(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RotatingMovementComponent");
		return ptr;
	}

};


// Class Engine.NavRelevantComponent
// 0x0028 (0x0130 - 0x0108)
class UNavRelevantComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0108(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavRelevantComponent");
		return ptr;
	}


	void SetNavigationRelevancy(bool bRelevant);
};


// Class Engine.NavLinkCustomInterface
// 0x0000 (0x0028 - 0x0028)
class UNavLinkCustomInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavLinkCustomInterface");
		return ptr;
	}

};


// Class Engine.NavLinkCustomComponent
// 0x0090 (0x01C0 - 0x0130)
class UNavLinkCustomComponent : public UNavRelevantComponent
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0130(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavLinkCustomComponent");
		return ptr;
	}

};


// Class Engine.NavModifierComponent
// 0x0018 (0x0148 - 0x0130)
class UNavModifierComponent : public UNavRelevantComponent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0130(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavModifierComponent");
		return ptr;
	}

};


// Class Engine.PawnNoiseEmitterComponent
// 0x0020 (0x0128 - 0x0108)
class UPawnNoiseEmitterComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0108(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PawnNoiseEmitterComponent");
		return ptr;
	}


	void MakeNoise(class AActor* NoiseMaker, float Loudness, const struct FVector& NoiseLocation);
};


// Class Engine.PhysicsHandleComponent
// 0x00A8 (0x01B0 - 0x0108)
class UPhysicsHandleComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0108(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsHandleComponent");
		return ptr;
	}


	void SetTargetRotation(const struct FRotator& NewRotation);
	void SetTargetLocationAndRotation(const struct FVector& NewLocation, const struct FRotator& NewRotation);
	void SetTargetLocation(const struct FVector& NewLocation);
	void ReleaseComponent();
	void GrabComponent(class UPrimitiveComponent* Component, const struct FName& InBoneName, const struct FVector& GrabLocation, bool bConstrainRotation);
	void GetTargetLocationAndRotation(struct FVector* TargetLocation, struct FRotator* TargetRotation);
};


// Class Engine.TriggerSphere
// 0x0000 (0x0438 - 0x0438)
class ATriggerSphere : public ATriggerBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TriggerSphere");
		return ptr;
	}

};


// Class Engine.AtmosphericFogComponent
// 0x0170 (0x0380 - 0x0210)
class UAtmosphericFogComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x170];                                     // 0x0210(0x0170) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AtmosphericFogComponent");
		return ptr;
	}


	void StartPrecompute();
	void SetSunMultiplier(float NewSunMultiplier);
	void SetStartDistance(float NewStartDistance);
	void SetPrecomputeParams(float DensityHeight, int MaxScatteringOrder, int InscatterAltitudeSampleNum);
	void SetFogMultiplier(float NewFogMultiplier);
	void SetDistanceScale(float NewDistanceScale);
	void SetDistanceOffset(float NewDistanceOffset);
	void SetDensityOffset(float NewDensityOffset);
	void SetDensityMultiplier(float NewDensityMultiplier);
	void SetDefaultLightColor(const struct FLinearColor& NewLightColor);
	void SetDefaultBrightness(float NewBrightness);
	void SetAltitudeScale(float NewAltitudeScale);
	void DisableSunDisk(bool NewSunDisk);
	void DisableGroundScattering(bool NewGroundScattering);
};


// Class Engine.SoundAttenuation
// 0x0038 (0x0060 - 0x0028)
class USoundAttenuation : public UObject
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0028(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundAttenuation");
		return ptr;
	}

};


// Class Engine.AudioComponent
// 0x00C0 (0x02D0 - 0x0210)
class UAudioComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0210(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AudioComponent");
		return ptr;
	}


	void Stop();
	void SetWaveParameter(const struct FName& InName, class USoundWave* InWave);
	void SetVolumeMultiplier(float NewVolumeMultiplier);
	void SetUISound(bool bInUISound);
	void SetSound(class USoundBase* NewSound);
	void SetPitchMultiplier(float NewPitchMultiplier);
	void SetIntParameter(const struct FName& InName, int InInt);
	void SetFloatParameter(const struct FName& InName, float InFloat);
	void SetBoolParameter(const struct FName& InName, bool InBool);
	void Play(float StartTime);
	void OnQueueSubtitles__DelegateSignature(TArray<struct FSubtitleCue> Subtitles, float CueDuration);
	void OnAudioFinished__DelegateSignature();
	bool IsPlaying();
	void FadeOut(float FadeOutDuration, float FadeVolumeLevel);
	void FadeIn(float FadeInDuration, float FadeVolumeLevel, float StartTime);
	void AdjustVolume(float AdjustVolumeDuration, float AdjustVolumeLevel);
	void AdjustAttenuation(const struct FAttenuationSettings& InAttenuationSettings);
};


// Class Engine.CameraComponent
// 0x0340 (0x0550 - 0x0210)
class UCameraComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x340];                                     // 0x0210(0x0340) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CameraComponent");
		return ptr;
	}


	void GetCameraView(float DeltaTime, struct FMinimalViewInfo* DesiredView);
};


// Class Engine.ChildActorComponent
// 0x0020 (0x0230 - 0x0210)
class UChildActorComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0210(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ChildActorComponent");
		return ptr;
	}

};


// Class Engine.DecalComponent
// 0x0010 (0x0220 - 0x0210)
class UDecalComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0210(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DecalComponent");
		return ptr;
	}


	void SetSortOrder(int Value);
	void SetDecalMaterial(class UMaterialInterface* NewDecalMaterial);
	class UMaterialInterface* GetDecalMaterial();
	class UMaterialInstanceDynamic* CreateDynamicMaterialInstance();
	void CheckDestructionFirst();
	void CheckDestruction();
};


// Class Engine.ExponentialHeightFogComponent
// 0x0040 (0x0250 - 0x0210)
class UExponentialHeightFogComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0210(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ExponentialHeightFogComponent");
		return ptr;
	}


	void SetStartDistance(float Value);
	void SetFogMaxOpacity(float Value);
	void SetFogInscatteringColor(const struct FLinearColor& Value);
	void SetFogHeightFalloff(float Value);
	void SetFogDensity(float Value);
	void SetDirectionalInscatteringStartDistance(float Value);
	void SetDirectionalInscatteringExponent(float Value);
	void SetDirectionalInscatteringColor(const struct FLinearColor& Value);
};


// Class Engine.LightComponentBase
// 0x0020 (0x0230 - 0x0210)
class ULightComponentBase : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0210(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightComponentBase");
		return ptr;
	}

};


// Class Engine.LightComponent
// 0x0150 (0x0380 - 0x0230)
class ULightComponent : public ULightComponentBase
{
public:
	unsigned char                                      UnknownData00[0x150];                                     // 0x0230(0x0150) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightComponent");
		return ptr;
	}


	void SetLightFunctionScale(const struct FVector& NewLightFunctionScale);
	void SetLightFunctionMaterial(class UMaterialInterface* NewLightFunctionMaterial);
	void SetLightFunctionFadeDistance(float NewLightFunctionFadeDistance);
	void SetLightColor(const struct FLinearColor& NewLightColor);
	void SetIntensity(float NewIntensity);
	void SetIESTexture(class UTextureLightProfile* newValue);
	void SetEnableLightShaftBloom(bool bNewValue);
	void SetCastShadows(bool bNewValue);
	void SetBloomTint(const struct FColor& newValue);
	void SetBloomThreshold(float newValue);
	void SetBloomScale(float newValue);
	void SetAffectTranslucentLighting(bool bNewValue);
	void SetAffectDynamicIndirectLighting(bool bNewValue);
};


// Class Engine.DirectionalLightComponent
// 0x0060 (0x03E0 - 0x0380)
class UDirectionalLightComponent : public ULightComponent
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0380(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DirectionalLightComponent");
		return ptr;
	}


	void SetShadowDistanceFadeoutFraction(float newValue);
	void SetOcclusionMaskDarkness(float newValue);
	void SetLightShaftOverrideDirection(const struct FVector& newValue);
	void SetEnableLightShaftOcclusion(bool bNewValue);
	void SetDynamicShadowDistanceStationaryLight(float newValue);
	void SetDynamicShadowDistanceMovableLight(float newValue);
	void SetDynamicShadowCascades(int newValue);
	void SetCascadeTransitionFraction(float newValue);
	void SetCascadeDistributionExponent(float newValue);
};


// Class Engine.PointLightComponent
// 0x0020 (0x03A0 - 0x0380)
class UPointLightComponent : public ULightComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0380(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PointLightComponent");
		return ptr;
	}


	void SetSourceRadius(float bNewValue);
	void SetLightFalloffExponent(float NewLightFalloffExponent);
	void SetAttenuationRadius(float NewRadius);
};


// Class Engine.SpotLightComponent
// 0x0010 (0x03B0 - 0x03A0)
class USpotLightComponent : public UPointLightComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x03A0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SpotLightComponent");
		return ptr;
	}


	void SetOuterConeAngle(float NewOuterConeAngle);
	void SetInnerConeAngle(float NewInnerConeAngle);
};


// Class Engine.SkyLightComponent
// 0x01A0 (0x03D0 - 0x0230)
class USkyLightComponent : public ULightComponentBase
{
public:
	unsigned char                                      UnknownData00[0x1A0];                                     // 0x0230(0x01A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkyLightComponent");
		return ptr;
	}


	void SetOcclusionTint(const struct FColor& InTint);
	void SetMinOcclusion(float InMinOcclusion);
	void SetLightColor(const struct FLinearColor& NewLightColor);
	void SetIntensity(float NewIntensity);
	void SetCubemap(class UTextureCube* NewCubemap);
	void RecaptureSky();
};


// Class Engine.NavigationGraphNodeComponent
// 0x0020 (0x0230 - 0x0210)
class UNavigationGraphNodeComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0210(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavigationGraphNodeComponent");
		return ptr;
	}

};


// Class Engine.PhysicsThrusterComponent
// 0x0000 (0x0210 - 0x0210)
class UPhysicsThrusterComponent : public USceneComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsThrusterComponent");
		return ptr;
	}

};


// Class Engine.PostProcessComponent
// 0x0340 (0x0550 - 0x0210)
class UPostProcessComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x340];                                     // 0x0210(0x0340) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PostProcessComponent");
		return ptr;
	}

};


// Class Engine.ArrowComponent
// 0x0010 (0x05F0 - 0x05E0)
class UArrowComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x05E0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ArrowComponent");
		return ptr;
	}


	void SetArrowColor_New(const struct FLinearColor& NewColor);
	void SetArrowColor_DEPRECATED(const struct FColor& NewColor);
};


// Class Engine.BillboardComponent
// 0x0020 (0x0600 - 0x05E0)
class UBillboardComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x05E0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BillboardComponent");
		return ptr;
	}


	void SetUV(int NewU, int NewUL, int NewV, int NewVL);
	void SetSpriteAndUV(class UTexture2D* NewSprite, int NewU, int NewUL, int NewV, int NewVL);
	void SetSprite(class UTexture2D* NewSprite);
};


// Class Engine.BrushComponent
// 0x0020 (0x0600 - 0x05E0)
class UBrushComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x05E0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BrushComponent");
		return ptr;
	}

};


// Class Engine.DrawFrustumComponent
// 0x0020 (0x0600 - 0x05E0)
class UDrawFrustumComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x05E0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DrawFrustumComponent");
		return ptr;
	}

};


// Class Engine.LandscapeComponent
// 0x0150 (0x0730 - 0x05E0)
class ULandscapeComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x150];                                     // 0x05E0(0x0150) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LandscapeComponent");
		return ptr;
	}

};


// Class Engine.LandscapeGizmoRenderComponent
// 0x0000 (0x05E0 - 0x05E0)
class ULandscapeGizmoRenderComponent : public UPrimitiveComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LandscapeGizmoRenderComponent");
		return ptr;
	}

};


// Class Engine.LandscapeHeightfieldCollisionComponent
// 0x0160 (0x0740 - 0x05E0)
class ULandscapeHeightfieldCollisionComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x160];                                     // 0x05E0(0x0160) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LandscapeHeightfieldCollisionComponent");
		return ptr;
	}

};


// Class Engine.LandscapeMeshCollisionComponent
// 0x0060 (0x07A0 - 0x0740)
class ULandscapeMeshCollisionComponent : public ULandscapeHeightfieldCollisionComponent
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0740(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LandscapeMeshCollisionComponent");
		return ptr;
	}

};


// Class Engine.LandscapeSplinesComponent
// 0x0020 (0x0600 - 0x05E0)
class ULandscapeSplinesComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x05E0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LandscapeSplinesComponent");
		return ptr;
	}

};


// Class Engine.LineBatchComponent
// 0x0030 (0x0610 - 0x05E0)
class ULineBatchComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x05E0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LineBatchComponent");
		return ptr;
	}

};


// Class Engine.MaterialBillboardComponent
// 0x0010 (0x05F0 - 0x05E0)
class UMaterialBillboardComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x05E0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialBillboardComponent");
		return ptr;
	}


	void AddElement(class UMaterialInterface* Material, class UCurveFloat* DistanceToOpacityCurve, bool bSizeIsInScreenSpace, float BaseSizeX, float BaseSizeY, class UCurveFloat* DistanceToSizeCurve);
};


// Class Engine.DestructibleComponent
// 0x00D0 (0x07C0 - 0x06F0)
class UDestructibleComponent : public USkinnedMeshComponent
{
public:
	unsigned char                                      UnknownData00[0xD0];                                      // 0x06F0(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DestructibleComponent");
		return ptr;
	}


	void SetDestructibleMesh(class UDestructibleMesh* NewMesh);
	class UDestructibleMesh* GetDestructibleMesh();
	void ComponentFractureSignature__DelegateSignature(const struct FVector& HitPoint, const struct FVector& HitDirection);
	void ApplyRadiusDamage(float BaseDamage, const struct FVector& HurtOrigin, float DamageRadius, float ImpulseStrength, bool bFullDamage);
	void ApplyDamage(float DamageAmount, const struct FVector& HitLocation, const struct FVector& ImpulseDir, float ImpulseStrength);
};


// Class Engine.PoseableMeshComponent
// 0x0090 (0x0780 - 0x06F0)
class UPoseableMeshComponent : public USkinnedMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x06F0(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PoseableMeshComponent");
		return ptr;
	}


	void SetBoneTransformByName(const struct FName& BoneName, const struct FTransform& InTransform, TEnumAsByte<EBoneSpaces> BoneSpace);
	void SetBoneScaleByName(const struct FName& BoneName, const struct FVector& InScale3D, TEnumAsByte<EBoneSpaces> BoneSpace);
	void SetBoneRotationByName(const struct FName& BoneName, const struct FRotator& InRotation, TEnumAsByte<EBoneSpaces> BoneSpace);
	void SetBoneLocationByName(const struct FName& BoneName, const struct FVector& InLocation, TEnumAsByte<EBoneSpaces> BoneSpace);
	void ResetBoneTransformByName(const struct FName& BoneName);
	struct FTransform GetBoneTransformByName(const struct FName& BoneName, TEnumAsByte<EBoneSpaces> BoneSpace);
	struct FVector GetBoneScaleByName(const struct FName& BoneName, TEnumAsByte<EBoneSpaces> BoneSpace);
	struct FRotator GetBoneRotationByName(const struct FName& BoneName, TEnumAsByte<EBoneSpaces> BoneSpace);
	struct FVector GetBoneLocationByName(const struct FName& BoneName, TEnumAsByte<EBoneSpaces> BoneSpace);
};


// Class Engine.StaticMeshComponent
// 0x0060 (0x0650 - 0x05F0)
class UStaticMeshComponent : public UMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x1569];                                    // 0x05F0(0x1569) MISSED OFFSET
	class UStaticMesh*                                 StaticMesh;                                               // 0x1B59(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.StaticMeshComponent");
		return ptr;
	}


	bool SetStaticMesh(class UStaticMesh* NewMesh);
	void OnRep_StaticMesh(class UStaticMesh* OldStaticMesh);
	void GetLocalBounds(struct FVector* Min, struct FVector* Max);
};


// Class Engine.ControlPointMeshComponent
// 0x0000 (0x0650 - 0x0650)
class UControlPointMeshComponent : public UStaticMeshComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ControlPointMeshComponent");
		return ptr;
	}

};


// Class Engine.GroundClutterComponent
// 0x0020 (0x0670 - 0x0650)
class UGroundClutterComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0650(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GroundClutterComponent");
		return ptr;
	}

};


// Class Engine.InstancedStaticMeshComponent
// 0x0110 (0x0760 - 0x0650)
class UInstancedStaticMeshComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x110];                                     // 0x0650(0x0110) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InstancedStaticMeshComponent");
		return ptr;
	}


	bool UpdateInstanceTransform(int InstanceIndex, const struct FTransform& NewInstanceTransform, bool bWorldSpace);
	void ShowInstance(int originalIndex);
	void SetCullDistances(int StartCullDistance, int EndCullDistance);
	bool RemoveInstance(int InstanceIndex, const struct FVector& HitDirection);
	void MulticastShowInstance(int originalIndex);
	void MulticastHideInstance(int originalIndex, const struct FVector& HitDirection);
	bool GetInstanceTransform(int InstanceIndex, bool bWorldSpace, struct FTransform* OutInstanceTransform);
	int GetInstanceCount();
	void ClearInstances();
	int AddInstanceWorldSpace(const struct FTransform& WorldTransform);
	int AddInstance(const struct FTransform& InstanceTransform);
};


// Class Engine.HierarchicalInstancedStaticMeshComponent
// 0x0060 (0x07C0 - 0x0760)
class UHierarchicalInstancedStaticMeshComponent : public UInstancedStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0760(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.HierarchicalInstancedStaticMeshComponent");
		return ptr;
	}

};


// Class Engine.InteractiveFoliageComponent
// 0x0010 (0x0660 - 0x0650)
class UInteractiveFoliageComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0650(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InteractiveFoliageComponent");
		return ptr;
	}

};


// Class Engine.SplineMeshComponent
// 0x0080 (0x06D0 - 0x0650)
class USplineMeshComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0650(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SplineMeshComponent");
		return ptr;
	}


	void SetStartTangent(const struct FVector& StartTangent);
	void SetStartScale(const struct FVector2D& StartScale);
	void SetStartRoll(float StartRoll);
	void SetStartPosition(const struct FVector& StartPos);
	void SetStartOffset(const struct FVector2D& StartOffset);
	void SetStartAndEnd(const struct FVector& StartPos, const struct FVector& StartTangent, const struct FVector& EndPos, const struct FVector& EndTangent);
	void SetEndTangent(const struct FVector& EndTangent);
	void SetEndScale(const struct FVector2D& EndScale);
	void SetEndRoll(float EndRoll);
	void SetEndPosition(const struct FVector& EndPos);
	void SetEndOffset(const struct FVector2D& EndOffset);
	struct FVector GetStartTangent();
	struct FVector2D GetStartScale();
	float GetStartRoll();
	struct FVector GetStartPosition();
	struct FVector2D GetStartOffset();
	struct FVector GetEndTangent();
	struct FVector2D GetEndScale();
	float GetEndRoll();
	struct FVector GetEndPosition();
	struct FVector2D GetEndOffset();
};


// Class Engine.ModelComponent
// 0x0040 (0x0620 - 0x05E0)
class UModelComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x05E0(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ModelComponent");
		return ptr;
	}

};


// Class Engine.NavLinkRenderingComponent
// 0x0000 (0x05E0 - 0x05E0)
class UNavLinkRenderingComponent : public UPrimitiveComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavLinkRenderingComponent");
		return ptr;
	}

};


// Class Engine.NavMeshRenderingComponent
// 0x0000 (0x05E0 - 0x05E0)
class UNavMeshRenderingComponent : public UPrimitiveComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavMeshRenderingComponent");
		return ptr;
	}

};


// Class Engine.NavTestRenderingComponent
// 0x0000 (0x05E0 - 0x05E0)
class UNavTestRenderingComponent : public UPrimitiveComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavTestRenderingComponent");
		return ptr;
	}

};


// Class Engine.NiagaraComponent
// 0x0030 (0x0610 - 0x05E0)
class UNiagaraComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x05E0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NiagaraComponent");
		return ptr;
	}

};


// Class Engine.BlendableInterface
// 0x0000 (0x0028 - 0x0028)
class UBlendableInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlendableInterface");
		return ptr;
	}

};


// Class Engine.ParticleSystem
// 0x0100 (0x0128 - 0x0028)
class UParticleSystem : public UObject
{
public:
	unsigned char                                      UnknownData00[0x100];                                     // 0x0028(0x0100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleSystem");
		return ptr;
	}


	bool ContainsEmitterType(class UClass* TypeData);
};


// Class Engine.ShapeComponent
// 0x0020 (0x0600 - 0x05E0)
class UShapeComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x05E0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ShapeComponent");
		return ptr;
	}

};


// Class Engine.BoxComponent
// 0x0010 (0x0610 - 0x0600)
class UBoxComponent : public UShapeComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0600(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BoxComponent");
		return ptr;
	}


	void SetBoxExtent(const struct FVector& InBoxExtent, bool bUpdateOverlaps);
	struct FVector GetUnscaledBoxExtent();
	struct FVector GetScaledBoxExtent();
};


// Class Engine.CapsuleComponent
// 0x0010 (0x0610 - 0x0600)
class UCapsuleComponent : public UShapeComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0600(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CapsuleComponent");
		return ptr;
	}


	void SetCapsuleSize(float InRadius, float InHalfHeight, bool bUpdateOverlaps);
	void SetCapsuleRadius(float Radius, bool bUpdateOverlaps);
	void SetCapsuleHalfHeight(float HalfHeight, bool bUpdateOverlaps);
	void GetUnscaledCapsuleSize(float* OutRadius, float* OutHalfHeight);
	float GetUnscaledCapsuleRadius();
	float GetUnscaledCapsuleHalfHeight();
	float GetShapeScale();
	void GetScaledCapsuleSize(float* OutRadius, float* OutHalfHeight);
	float GetScaledCapsuleRadius();
	float GetScaledCapsuleHalfHeight();
};


// Class Engine.SphereComponent
// 0x0000 (0x0600 - 0x0600)
class USphereComponent : public UShapeComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SphereComponent");
		return ptr;
	}


	void SetSphereRadius(float InSphereRadius, bool bUpdateOverlaps);
	float GetUnscaledSphereRadius();
	float GetShapeScale();
	float GetScaledSphereRadius();
};


// Class Engine.DrawSphereComponent
// 0x0000 (0x0600 - 0x0600)
class UDrawSphereComponent : public USphereComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DrawSphereComponent");
		return ptr;
	}

};


// Class Engine.TextRenderComponent
// 0x0040 (0x0620 - 0x05E0)
class UTextRenderComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x05E0(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TextRenderComponent");
		return ptr;
	}


	void SetYScale(float Value);
	void SetXScale(float Value);
	void SetWorldSize(float Value);
	void SetTextRenderColor(const struct FColor& Value);
	void SetTextMaterial(class UMaterialInterface* Material);
	void SetText(const struct FString& Value);
	void SetHorizSpacingAdjust(float Value);
	void SetHorizontalAlignment(TEnumAsByte<EHorizTextAligment> Value);
	void SetFont(class UFont* Value);
	struct FVector GetTextWorldSize();
	struct FVector GetTextLocalSize();
};


// Class Engine.VectorFieldComponent
// 0x0020 (0x0600 - 0x05E0)
class UVectorFieldComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x05E0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VectorFieldComponent");
		return ptr;
	}


	void SetIntensity(float NewIntensity);
};


// Class Engine.RadialForceComponent
// 0x0030 (0x0240 - 0x0210)
class URadialForceComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0210(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RadialForceComponent");
		return ptr;
	}


	void RemoveObjectTypeToAffect(TEnumAsByte<EObjectTypeQuery> ObjectType);
	void FireImpulse();
	void AddObjectTypeToAffect(TEnumAsByte<EObjectTypeQuery> ObjectType);
};


// Class Engine.ReflectionCaptureComponent
// 0x0160 (0x0370 - 0x0210)
class UReflectionCaptureComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x160];                                     // 0x0210(0x0160) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ReflectionCaptureComponent");
		return ptr;
	}


	void ForceUpdateReflectionCapture();
};


// Class Engine.BoxReflectionCaptureComponent
// 0x0020 (0x0390 - 0x0370)
class UBoxReflectionCaptureComponent : public UReflectionCaptureComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0370(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BoxReflectionCaptureComponent");
		return ptr;
	}

};


// Class Engine.PlaneReflectionCaptureComponent
// 0x0020 (0x0390 - 0x0370)
class UPlaneReflectionCaptureComponent : public UReflectionCaptureComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0370(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlaneReflectionCaptureComponent");
		return ptr;
	}

};


// Class Engine.SphereReflectionCaptureComponent
// 0x0020 (0x0390 - 0x0370)
class USphereReflectionCaptureComponent : public UReflectionCaptureComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0370(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SphereReflectionCaptureComponent");
		return ptr;
	}

};


// Class Engine.SceneCaptureComponent
// 0x0010 (0x0220 - 0x0210)
class USceneCaptureComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0210(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SceneCaptureComponent");
		return ptr;
	}


	void HideComponent(class UPrimitiveComponent* InComponent);
	void HideActorComponents(class AActor* InActor);
};


// Class Engine.SceneCaptureComponentCube
// 0x0010 (0x0230 - 0x0220)
class USceneCaptureComponentCube : public USceneCaptureComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0220(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SceneCaptureComponentCube");
		return ptr;
	}

};


// Class Engine.SceneCaptureComponent2D
// 0x0350 (0x0570 - 0x0220)
class USceneCaptureComponent2D : public USceneCaptureComponent
{
public:
	unsigned char                                      UnknownData00[0x350];                                     // 0x0220(0x0350) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SceneCaptureComponent2D");
		return ptr;
	}

};


// Class Engine.SplineComponent
// 0x0030 (0x0240 - 0x0210)
class USplineComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0210(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SplineComponent");
		return ptr;
	}


	void SetWorldLocationAtSplinePoint(int PointIndex, const struct FVector& InLocation);
	void SetSplineWorldPoints(TArray<struct FVector> Points);
	void SetSplineLocalPoints(TArray<struct FVector> Points);
	struct FVector GetWorldTangentAtDistanceAlongSpline(float Distance);
	struct FRotator GetWorldRotationAtTime(float Time, bool bUseConstantVelocity);
	struct FRotator GetWorldRotationAtDistanceAlongSpline(float Distance);
	struct FVector GetWorldLocationAtTime(float Time, bool bUseConstantVelocity);
	struct FVector GetWorldLocationAtSplinePoint(int PointIndex);
	struct FVector GetWorldLocationAtDistanceAlongSpline(float Distance);
	struct FVector GetWorldDirectionAtTime(float Time, bool bUseConstantVelocity);
	struct FVector GetWorldDirectionAtDistanceAlongSpline(float Distance);
	float GetSplineLength();
	int GetNumSplinePoints();
	void GetLocalLocationAndTangentAtSplinePoint(int PointIndex, struct FVector* LocalLocation, struct FVector* LocalTangent);
	float GetInputKeyAtDistanceAlongSpline(float Distance);
	float GetDistanceAlongSplineAtSplinePoint(int PointIndex);
	void ClearSplinePoints();
	void AddSplineWorldPoint(const struct FVector& Position);
	void AddSplineLocalPoint(const struct FVector& Position);
};


// Class Engine.SpringArmComponent
// 0x0070 (0x0280 - 0x0210)
class USpringArmComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0210(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SpringArmComponent");
		return ptr;
	}

};


// Class Engine.WindDirectionalSourceComponent
// 0x0010 (0x0220 - 0x0210)
class UWindDirectionalSourceComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0210(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.WindDirectionalSourceComponent");
		return ptr;
	}

};


// Class Engine.TimelineComponent
// 0x0098 (0x01A0 - 0x0108)
class UTimelineComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x1AD7];                                    // 0x0108(0x1AD7) MISSED OFFSET
	struct FTimeline                                   TheTimeline;                                              // 0x1BDF(0x0098) (Net)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TimelineComponent");
		return ptr;
	}


	void Stop();
	void SetTimelineLengthMode(TEnumAsByte<ETimelineLengthMode> NewLengthMode);
	void SetTimelineLength(float NewLength);
	void SetPlayRate(float NewRate);
	void SetPlaybackPosition(float NewPosition, bool bFireEvents);
	void SetNewTime(float NewTime);
	void SetLooping(bool bNewLooping);
	void ReverseFromEnd();
	void Reverse();
	void PlayFromStart();
	void Play();
	void OnTimelineVector__DelegateSignature(const struct FVector& Output);
	void OnTimelineLinearColor__DelegateSignature(const struct FLinearColor& Output);
	void OnTimelineFloat__DelegateSignature(float Output);
	void OnTimelineEvent__DelegateSignature();
	void OnRep_Timeline();
	bool IsReversing();
	bool IsPlaying();
	bool IsLooping();
	float GetTimelineLength();
	float GetPlayRate();
	float GetPlaybackPosition();
};


// Class Engine.AnimSequenceBase
// 0x0028 (0x0068 - 0x0040)
class UAnimSequenceBase : public UAnimationAsset
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0040(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimSequenceBase");
		return ptr;
	}

};


// Class Engine.AnimCompositeBase
// 0x0000 (0x0068 - 0x0068)
class UAnimCompositeBase : public UAnimSequenceBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimCompositeBase");
		return ptr;
	}

};


// Class Engine.AnimComposite
// 0x0010 (0x0078 - 0x0068)
class UAnimComposite : public UAnimCompositeBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0068(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimComposite");
		return ptr;
	}

};


// Class Engine.AnimSequence
// 0x00E8 (0x0150 - 0x0068)
class UAnimSequence : public UAnimSequenceBase
{
public:
	unsigned char                                      UnknownData00[0xE8];                                      // 0x0068(0x00E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimSequence");
		return ptr;
	}

};


// Class Engine.AnimInstance
// 0x0318 (0x0340 - 0x0028)
class UAnimInstance : public UObject
{
public:
	unsigned char                                      UnknownData00[0x318];                                     // 0x0028(0x0318) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimInstance");
		return ptr;
	}


	void UnlockAIResources(bool bUnlockMovement, bool UnlockAILogic);
	class APawn* TryGetPawnOwner();
	void StopSlotAnimation(float InBlendOutTime);
	void SetMorphTarget(const struct FName& MorphTargetName, float Value);
	float PlaySlotAnimation(class UAnimSequenceBase* Asset, const struct FName& SlotNodeName, float BlendInTime, float BlendOutTime, float InPlayRate);
	void OnMontageEndedMCDelegate__DelegateSignature(class UAnimMontage* Montage, bool bInterrupted);
	void OnMontageBlendingOutStartedMCDelegate__DelegateSignature(class UAnimMontage* Montage, bool bInterrupted);
	void Montage_Stop(float InBlendOutTime, class UAnimMontage* Montage);
	void Montage_SetPlayRate(class UAnimMontage* Montage, float NewPlayRate);
	void Montage_SetNextSection(const struct FName& SectionNameToChange, const struct FName& NextSection, class UAnimMontage* Montage);
	float Montage_Play_WithBlending(class UAnimMontage* MontageToPlay, float BlendInTime, float BlendOutTime, float InPlayRate, bool bPauseOnFinish);
	float Montage_Play(class UAnimMontage* MontageToPlay, float InPlayRate, bool bPauseOnFinish);
	void Montage_JumpToSectionsEnd(const struct FName& SectionName, class UAnimMontage* Montage);
	void Montage_JumpToSection(const struct FName& SectionName, class UAnimMontage* Montage);
	bool Montage_IsPlaying(class UAnimMontage* Montage, float TimeFromEndToConsiderFinished);
	bool Montage_IsActive(class UAnimMontage* Montage);
	struct FName Montage_GetCurrentSection(class UAnimMontage* Montage);
	void LockAIResources(bool bLockMovement, bool LockAILogic);
	bool IsPlayingSlotAnimation(class UAnimSequenceBase* Asset, const struct FName& SlotNodeName);
	float GetStateWeight(int MachineIndex, int StateIndex);
	class USkeletalMeshComponent* GetOwningComponent();
	class AActor* GetOwningActor();
	float GetCurveValue(const struct FName& CurveName);
	float GetCurrentStateElapsedTime(int MachineIndex);
	float GetAnimAssetPlayerTimeFromEndFraction(class UAnimationAsset* AnimAsset, float CurrentTime);
	float GetAnimAssetPlayerTimeFromEnd(class UAnimationAsset* AnimAsset, float CurrentTime);
	float GetAnimAssetPlayerTimeFraction(class UAnimationAsset* AnimAsset, float CurrentTime);
	float GetAnimAssetPlayerLength(class UAnimationAsset* AnimAsset);
	void ClearMorphTargets();
	float CalculateDirection(const struct FVector& Velocity, const struct FRotator& BaseRotation);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintTriggerAnimationEvent(const struct FName& AnimationEventName, float* playedAnimLength);
	void BlueprintPlayAnimationEvent(class UAnimMontage* AnimationMontage, float PlayRate, float* playedAnimLength);
	void BlueprintInitializeAnimation();
	void AnimNotify_Sound(class UAnimNotify* Notify);
};


// Class Engine.AnimMontage
// 0x0048 (0x00B0 - 0x0068)
class UAnimMontage : public UAnimCompositeBase
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0068(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimMontage");
		return ptr;
	}

};


// Class Engine.BlendSpaceBase
// 0x00B8 (0x00F8 - 0x0040)
class UBlendSpaceBase : public UAnimationAsset
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0040(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlendSpaceBase");
		return ptr;
	}

};


// Class Engine.BlendSpace
// 0x0008 (0x0100 - 0x00F8)
class UBlendSpace : public UBlendSpaceBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlendSpace");
		return ptr;
	}

};


// Class Engine.AimOffsetBlendSpace
// 0x0000 (0x0100 - 0x0100)
class UAimOffsetBlendSpace : public UBlendSpace
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AimOffsetBlendSpace");
		return ptr;
	}

};


// Class Engine.BlendSpace1D
// 0x0008 (0x0100 - 0x00F8)
class UBlendSpace1D : public UBlendSpaceBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlendSpace1D");
		return ptr;
	}

};


// Class Engine.AimOffsetBlendSpace1D
// 0x0000 (0x0100 - 0x0100)
class UAimOffsetBlendSpace1D : public UBlendSpace1D
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AimOffsetBlendSpace1D");
		return ptr;
	}

};


// Class Engine.AnimCompress
// 0x0018 (0x0040 - 0x0028)
class UAnimCompress : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimCompress");
		return ptr;
	}

};


// Class Engine.AnimCompress_Automatic
// 0x0008 (0x0048 - 0x0040)
class UAnimCompress_Automatic : public UAnimCompress
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimCompress_Automatic");
		return ptr;
	}

};


// Class Engine.AnimCompress_BitwiseCompressOnly
// 0x0000 (0x0040 - 0x0040)
class UAnimCompress_BitwiseCompressOnly : public UAnimCompress
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimCompress_BitwiseCompressOnly");
		return ptr;
	}

};


// Class Engine.AnimCompress_LeastDestructive
// 0x0000 (0x0040 - 0x0040)
class UAnimCompress_LeastDestructive : public UAnimCompress
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimCompress_LeastDestructive");
		return ptr;
	}

};


// Class Engine.AnimCompress_RemoveEverySecondKey
// 0x0008 (0x0048 - 0x0040)
class UAnimCompress_RemoveEverySecondKey : public UAnimCompress
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimCompress_RemoveEverySecondKey");
		return ptr;
	}

};


// Class Engine.AnimCompress_RemoveLinearKeys
// 0x0020 (0x0060 - 0x0040)
class UAnimCompress_RemoveLinearKeys : public UAnimCompress
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0040(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimCompress_RemoveLinearKeys");
		return ptr;
	}

};


// Class Engine.AnimCompress_PerTrackCompression
// 0x0080 (0x00E0 - 0x0060)
class UAnimCompress_PerTrackCompression : public UAnimCompress_RemoveLinearKeys
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0060(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimCompress_PerTrackCompression");
		return ptr;
	}

};


// Class Engine.AnimCompress_RevertToRaw
// 0x0000 (0x0040 - 0x0040)
class UAnimCompress_RevertToRaw : public UAnimCompress
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimCompress_RevertToRaw");
		return ptr;
	}

};


// Class Engine.AnimCompress_RemoveTrivialKeys
// 0x0010 (0x0050 - 0x0040)
class UAnimCompress_RemoveTrivialKeys : public UAnimCompress
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0040(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimCompress_RemoveTrivialKeys");
		return ptr;
	}

};


// Class Engine.AnimSingleNodeInstance
// 0x00E0 (0x0420 - 0x0340)
class UAnimSingleNodeInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0340(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimSingleNodeInstance");
		return ptr;
	}


	void StopAnim();
	void SetVertexAnimation(class UVertexAnimation* NewVertexAnim, bool bIsLooping, float InPlayRate);
	void SetReverse(bool bInReverse);
	void SetPosition(float InPosition, bool bFireNotifies);
	void SetPlayRate(float InPlayRate);
	void SetPlaying(bool bIsPlaying);
	void SetLooping(bool bIsLooping);
	void SetBlendSpaceInput(const struct FVector& InBlendInput);
	void SetAnimationAsset(class UAnimationAsset* NewAsset, bool bIsLooping, float InPlayRate);
	void PostEvaluateAnimEvent__DelegateSignature();
	void PlayAnim(bool bIsLooping, float InPlayRate, float InStartPosition);
	float GetLength();
};


// Class Engine.VehicleAnimInstance
// 0x0000 (0x0340 - 0x0340)
class UVehicleAnimInstance : public UAnimInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VehicleAnimInstance");
		return ptr;
	}


	class AWheeledVehicle* GetVehicle();
};


// Class Engine.AnimNotifyState_TimedParticleEffect
// 0x0030 (0x0058 - 0x0028)
class UAnimNotifyState_TimedParticleEffect : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0028(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotifyState_TimedParticleEffect");
		return ptr;
	}

};


// Class Engine.AnimStateMachineTypes
// 0x0000 (0x0028 - 0x0028)
class UAnimStateMachineTypes : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimStateMachineTypes");
		return ptr;
	}

};


// Class Engine.AssetImportData
// 0x0028 (0x0050 - 0x0028)
class UAssetImportData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AssetImportData");
		return ptr;
	}

};


// Class Engine.AssetUserData
// 0x0000 (0x0028 - 0x0028)
class UAssetUserData : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AssetUserData");
		return ptr;
	}

};


// Class Engine.AudioSettings
// 0x0038 (0x0060 - 0x0028)
class UAudioSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0028(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AudioSettings");
		return ptr;
	}

};


// Class Engine.AutomationTestSettings
// 0x0290 (0x02B8 - 0x0028)
class UAutomationTestSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x290];                                     // 0x0028(0x0290) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AutomationTestSettings");
		return ptr;
	}

};


// Class Engine.AvoidanceManager
// 0x00A0 (0x00C8 - 0x0028)
class UAvoidanceManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0028(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AvoidanceManager");
		return ptr;
	}


	bool RegisterMovementComponent(class UCharacterMovementComponent* MovementComp, float AvoidanceWeight);
	int GetObjectCount();
	int GetNewAvoidanceUID();
	struct FVector GetAvoidanceVelocityIgnoringUID(const struct FNavAvoidanceData& AvoidanceData, float DeltaTime, int IgnoreThisUID);
	struct FVector GetAvoidanceVelocity(const struct FNavAvoidanceData& AvoidanceData, float DeltaTime);
};


// Class Engine.BadObject
// 0x0000 (0x0028 - 0x0028)
class UBadObject : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BadObject");
		return ptr;
	}

};


// Class Engine.BlueprintCore
// 0x0028 (0x0050 - 0x0028)
class UBlueprintCore : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlueprintCore");
		return ptr;
	}

};


// Class Engine.EdGraphNode
// 0x0068 (0x0090 - 0x0028)
class UEdGraphNode : public UObject
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0028(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EdGraphNode");
		return ptr;
	}

};


// Class Engine.AnimSet
// 0x00C8 (0x00F0 - 0x0028)
class UAnimSet : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0028(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimSet");
		return ptr;
	}

};


// Class Engine.Blueprint
// 0x0070 (0x00C0 - 0x0050)
class UBlueprint : public UBlueprintCore
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0050(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Blueprint");
		return ptr;
	}

};


// Class Engine.AnimBlueprint
// 0x0018 (0x00D8 - 0x00C0)
class UAnimBlueprint : public UBlueprint
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x00C0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimBlueprint");
		return ptr;
	}

};


// Class Engine.LevelScriptBlueprint
// 0x0000 (0x00C0 - 0x00C0)
class ULevelScriptBlueprint : public UBlueprint
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelScriptBlueprint");
		return ptr;
	}

};


// Class Engine.DataTable
// 0x0068 (0x0090 - 0x0028)
class UDataTable : public UObject
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0028(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DataTable");
		return ptr;
	}

};


// Class Engine.DataTableFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UDataTableFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DataTableFunctionLibrary");
		return ptr;
	}


	bool GetDataTableRowFromName(class UDataTable* Table, const struct FName& RowName, struct FTableRowBase* OutRow);
	void EvaluateCurveTableRow(class UCurveTable* CurveTable, const struct FName& RowName, float InXY, TEnumAsByte<EEvaluateCurveTableResult>* OutResult, float* OutXY);
};


// Class Engine.DebugDrawService
// 0x0000 (0x0028 - 0x0028)
class UDebugDrawService : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DebugDrawService");
		return ptr;
	}

};


// Class Engine.DialogueTypes
// 0x0000 (0x0028 - 0x0028)
class UDialogueTypes : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DialogueTypes");
		return ptr;
	}

};


// Class Engine.GameplayStatics
// 0x0000 (0x0028 - 0x0028)
class UGameplayStatics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameplayStatics");
		return ptr;
	}


	void UnloadStreamLevel(class UObject* WorldContextObject, const struct FName& LevelName, const struct FLatentActionInfo& LatentInfo);
	class UParticleSystemComponent* SpawnEmitterAttached(class UParticleSystem* EmitterTemplate, class USceneComponent* attachToComponent, const struct FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, TEnumAsByte<EAttachLocation> LocationType, bool bAutoDestroy, bool bDontSpawnOutOfView, bool bAllowSpawnLoopingFX, float OverrideSecondsBeforeInactive);
	class UParticleSystemComponent* SpawnEmitterAtLocation(class UObject* WorldContextObject, class UParticleSystem* EmitterTemplate, const struct FVector& Location, const struct FRotator& Rotation, bool bAutoDestroy, bool bDontSpawnOutOfView, float DontSpawnOutOfViewCheckRadius, bool bAllowSpawnLoopingFX, float OverrideSecondsBeforeInactive);
	class UDecalComponent* SpawnDecalAttached(class UMaterialInterface* DecalMaterial, const struct FVector& DecalSize, class USceneComponent* attachToComponent, const struct FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, TEnumAsByte<EAttachLocation> LocationType, float LifeSpan);
	class UDecalComponent* SpawnDecalAtLocation(class UObject* WorldContextObject, class UMaterialInterface* DecalMaterial, const struct FVector& DecalSize, const struct FVector& Location, const struct FRotator& Rotation, float LifeSpan);
	void SetWorldOriginLocation(class UObject* WorldContextObject, const struct FIntVector& NewLocation);
	void SetSoundMode(const struct FName& SoundModeName);
	void SetGlobalTimeDilation(class UObject* WorldContextObject, float TimeDilation);
	bool SetGamePaused(class UObject* WorldContextObject, bool bPaused);
	void SetBaseSoundMix(class USoundMix* InSoundMix);
	bool SaveGameToSlot(class USaveGame* SaveGameObject, const struct FString& SlotName, int UserIndex);
	void PushSoundMixModifier(class USoundMix* InSoundMixModifier);
	void PopSoundMixModifier(class USoundMix* InSoundMixModifier);
	void PlayWorldCameraShake(class UObject* WorldContextObject, class UClass* Shake, const struct FVector& Epicenter, float InnerRadius, float OuterRadius, float Falloff, bool bOrientShakeTowardsEpicenter, float ScaleMultiplier);
	class UAudioComponent* PlaySoundAttached(class USoundBase* Sound, class USceneComponent* attachToComponent, const struct FName& AttachPointName, const struct FVector& Location, TEnumAsByte<EAttachLocation> LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings);
	void PlaySoundAtLocation(class UObject* WorldContextObject, class USoundBase* Sound, const struct FVector& Location, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, bool bAlwaysPlay);
	void PlaySound(class UObject* WorldContextObject, class USoundCue* InSoundCue, class USceneComponent* AttachComponent, const struct FName& AttachName, bool bFollow, float VolumeMultiplier, float PitchMultiplier);
	class UAudioComponent* PlayDialogueAttached(class UDialogueWave* Dialogue, const struct FDialogueContext& Context, class USceneComponent* attachToComponent, const struct FName& AttachPointName, const struct FVector& Location, TEnumAsByte<EAttachLocation> LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings);
	void PlayDialogueAtLocation(class UObject* WorldContextObject, class UDialogueWave* Dialogue, const struct FDialogueContext& Context, const struct FVector& Location, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings);
	void OpenLevel(class UObject* WorldContextObject, const struct FName& LevelName, bool bAbsolute, const struct FString& Options);
	void LoadStreamLevel(class UObject* WorldContextObject, const struct FName& LevelName, bool bMakeVisibleAfterLoad, bool bShouldBlockOnLoad, const struct FLatentActionInfo& LatentInfo);
	class USaveGame* LoadGameFromSlot(const struct FString& SlotName, int UserIndex);
	bool IsGameWorld(class UObject* WorldContextObject);
	bool IsGamePaused(class UObject* WorldContextObject);
	struct FIntVector GetWorldOriginLocation(class UObject* WorldContextObject);
	float GetWorldDeltaSeconds(class UObject* WorldContextObject);
	TEnumAsByte<EPhysicalSurface> GetSurfaceType(const struct FHitResult& Hit);
	class ULevelStreaming* GetStreamingLevel(class UObject* WorldContextObject, const struct FName& PackageName);
	float GetRealTimeSeconds(class UObject* WorldContextObject);
	class APawn* GetPlayerPawn(class UObject* WorldContextObject, int PlayerIndex);
	class APlayerController* GetPlayerController(class UObject* WorldContextObject, int PlayerIndex);
	class ACharacter* GetPlayerCharacter(class UObject* WorldContextObject, int PlayerIndex);
	class APlayerCameraManager* GetPlayerCameraManager(class UObject* WorldContextObject, int PlayerIndex);
	struct FString GetPlatformName();
	class UClass* GetObjectClass(class UObject* Object);
	float GetGlobalTimeDilation(class UObject* WorldContextObject);
	class AGameState* GetGameState(class UObject* WorldContextObject);
	class AGameMode* GetGameMode(class UObject* WorldContextObject);
	class UGameInstance* GetGameInstance(class UObject* WorldContextObject);
	float GetAudioTimeSeconds(class UObject* WorldContextObject);
	void GetAllActorsWithInterface(class UObject* WorldContextObject, class UClass* Interface, TArray<class AActor*>* OutActors);
	void GetAllActorsOfClass(class UObject* WorldContextObject, class UClass* ActorClass, TArray<class AActor*>* OutActors);
	void GetActorArrayBounds(TArray<class AActor*> actors, bool bOnlyCollidingComponents, struct FVector* Center, struct FVector* BoxExtent);
	struct FVector GetActorArrayAverageLocation(TArray<class AActor*> actors);
	void GetAccurateRealTime(class UObject* WorldContextObject, int* Seconds, float* PartialSeconds);
	class AActor* FinishSpawningActor(class AActor* Actor, const struct FTransform& SpawnTransform);
	void EnableLiveStreaming(bool Enable);
	bool DoesSaveGameExist(const struct FString& SlotName, int UserIndex);
	bool DeleteGameInSlot(const struct FString& SlotName, int UserIndex);
	void DeactivateReverbEffect(const struct FName& TagName);
	class USaveGame* CreateSaveGameObjectFromBlueprint(class UBlueprint* SaveGameBlueprint);
	class USaveGame* CreateSaveGameObject(class UClass* SaveGameClass);
	class APlayerController* CreatePlayer(class UObject* WorldContextObject, int ControllerId, bool bSpawnPawn);
	void ClearSoundMixModifiers();
	void BreakHitResult(const struct FHitResult& Hit, struct FVector* Location, struct FVector* Normal, struct FVector* ImpactPoint, struct FVector* ImpactNormal, class UPhysicalMaterial** PhysMat, class AActor** HitActor, class UPrimitiveComponent** HitComponent, struct FName* HitBoneName, int* HitItem);
	bool BlueprintSuggestProjectileVelocity(class UObject* WorldContextObject, const struct FVector& StartLocation, const struct FVector& EndLocation, float LaunchSpeed, float OverrideGravityZ, TEnumAsByte<ESuggestProjVelocityTraceOption> TraceOption, float CollisionRadius, bool bFavorHighArc, bool bDrawDebug, struct FVector* TossVelocity);
	class AActor* BeginSpawningActorFromClass(class UObject* WorldContextObject, class UClass* ActorClass, const struct FTransform& SpawnTransform, bool bNoCollisionFail);
	class AActor* BeginSpawningActorFromBlueprint(class UObject* WorldContextObject, class UBlueprint* Blueprint, const struct FTransform& SpawnTransform, bool bNoCollisionFail);
	bool AreAnyListenersWithinRange(const struct FVector& Location, float MaximumRange);
	bool ApplyRadialDamage(class UObject* WorldContextObject, float BaseDamage, const struct FVector& Origin, float DamageRadius, class UClass* DamageTypeClass, TArray<class AActor*> IgnoreActors, class AActor* DamageCauser, class AController* InstigatedByController, bool bDoFullDamage, TEnumAsByte<ECollisionChannel> DamagePreventionChannel, float Impulse, int OnlyDamageTargetingTeam, int IgnoreDamageTargetingTeam);
	void ApplyPointDamage(class AActor* DamagedActor, float BaseDamage, const struct FVector& HitFromDirection, const struct FHitResult& HitInfo, class AController* EventInstigator, class AActor* DamageCauser, class UClass* DamageTypeClass, float Impulse, bool bForceCollisionCheck, TEnumAsByte<ECollisionChannel> ForceCollisionCheckTraceChannel);
	void ApplyDamage(class AActor* DamagedActor, float BaseDamage, class AController* EventInstigator, class AActor* DamageCauser, class UClass* DamageTypeClass, float Impulse);
	void ActivateReverbEffect(class UReverbEffect* ReverbEffect, const struct FName& TagName, float Priority, float Volume, float FadeTime);
};


// Class Engine.HeadMountedDisplayFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UHeadMountedDisplayFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.HeadMountedDisplayFunctionLibrary");
		return ptr;
	}


	void ResetOrientationAndPosition(float Yaw);
	bool IsInLowPersistenceMode();
	bool IsHeadMountedDisplayEnabled();
	bool HasValidTrackingPosition();
	float GetScreenPercentage();
	void GetPositionalTrackingCameraParameters(struct FVector* CameraOrigin, struct FRotator* CameraRotation, float* HFOV, float* VFOV, float* CameraDistance, float* NearPlane, float* FarPlane);
	void GetOrientationAndPosition(struct FRotator* DeviceRotation, struct FVector* DevicePosition);
	void EnableLowPersistenceMode(bool bEnable);
};


// Class Engine.KismetArrayLibrary
// 0x0000 (0x0028 - 0x0028)
class UKismetArrayLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KismetArrayLibrary");
		return ptr;
	}


	void SetArrayPropertyByName(class UObject* Object, const struct FName& PropertyName, TArray<int> Value);
	void FilterArray(TArray<class AActor*> TargetArray, class UClass* FilterClass, TArray<class AActor*>* FilteredArray);
	void Array_Shuffle(TArray<int> TargetArray, class UArrayProperty* ArrayProperty);
	void Array_Set(TArray<int> TargetArray, class UArrayProperty* ArrayProperty, int Index, int Item, bool bSizeToFit);
	void Array_Resize(TArray<int> TargetArray, class UArrayProperty* ArrayProperty, int Size);
	bool Array_RemoveItem(TArray<int> TargetArray, class UArrayProperty* ArrayProperty, int Item);
	void Array_Remove(TArray<int> TargetArray, class UArrayProperty* ArrayProperty, int IndexToRemove);
	int Array_Length(TArray<int> TargetArray, class UArrayProperty* ArrayProperty);
	int Array_LastIndex(TArray<int> TargetArray, class UArrayProperty* ArrayProperty);
	void Array_Insert(TArray<int> TargetArray, class UArrayProperty* ArrayProperty, int NewItem, int Index);
	void Array_Get(TArray<int> TargetArray, class UArrayProperty* ArrayProperty, int Index, int* Item);
	int Array_Find(TArray<int> TargetArray, class UArrayProperty* ArrayProperty, int ItemToFind);
	bool Array_Contains(TArray<int> TargetArray, class UArrayProperty* ArrayProperty, int ItemToFind);
	void Array_Clear(TArray<int> TargetArray, class UArrayProperty* ArrayProperty);
	void Array_Append(TArray<int> TargetArray, class UArrayProperty* TargetArrayProperty, TArray<int> SourceArray, class UArrayProperty* SourceArrayProperty);
	int Array_Add(TArray<int> TargetArray, class UArrayProperty* ArrayProperty, int NewItem);
};


// Class Engine.KismetInputLibrary
// 0x0000 (0x0028 - 0x0028)
class UKismetInputLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KismetInputLibrary");
		return ptr;
	}


	bool PointerEvent_IsTouchEvent(const struct FPointerEvent& Input);
	bool PointerEvent_IsMouseButtonDown(const struct FPointerEvent& Input, const struct FKey& MouseButton);
	float PointerEvent_GetWheelDelta(const struct FPointerEvent& Input);
	int PointerEvent_GetUserIndex(const struct FPointerEvent& Input);
	int PointerEvent_GetTouchpadIndex(const struct FPointerEvent& Input);
	struct FVector2D PointerEvent_GetScreenSpacePosition(const struct FPointerEvent& Input);
	int PointerEvent_GetPointerIndex(const struct FPointerEvent& Input);
	struct FVector2D PointerEvent_GetLastScreenSpacePosition(const struct FPointerEvent& Input);
	struct FVector2D PointerEvent_GetGestureDelta(const struct FPointerEvent& Input);
	struct FKey PointerEvent_GetEffectingButton(const struct FPointerEvent& Input);
	struct FVector2D PointerEvent_GetCursorDelta(const struct FPointerEvent& Input);
	bool InputEvent_IsShiftDown(const struct FInputEvent& Input);
	bool InputEvent_IsRightShiftDown(const struct FInputEvent& Input);
	bool InputEvent_IsRightControlDown(const struct FInputEvent& Input);
	bool InputEvent_IsRightCommandDown(const struct FInputEvent& Input);
	bool InputEvent_IsRightAltDown(const struct FInputEvent& Input);
	bool InputEvent_IsRepeat(const struct FInputEvent& Input);
	bool InputEvent_IsLeftShiftDown(const struct FInputEvent& Input);
	bool InputEvent_IsLeftControlDown(const struct FInputEvent& Input);
	bool InputEvent_IsLeftCommandDown(const struct FInputEvent& Input);
	bool InputEvent_IsLeftAltDown(const struct FInputEvent& Input);
	bool InputEvent_IsControlDown(const struct FInputEvent& Input);
	bool InputEvent_IsCommandDown(const struct FInputEvent& Input);
	bool InputEvent_IsAltDown(const struct FInputEvent& Input);
	struct FKey GetKey(const struct FKeyboardEvent& Input);
	bool EqualEqual_KeyKey(const struct FKey& A, const struct FKey& B);
	int ControllerEvent_GetUserIndex(const struct FControllerEvent& Input);
	struct FKey ControllerEvent_GetEffectingButton(const struct FControllerEvent& Input);
	float ControllerEvent_GetAnalogValue(const struct FControllerEvent& Input);
	void CalibrateTilt();
};


// Class Engine.KismetMaterialLibrary
// 0x0000 (0x0028 - 0x0028)
class UKismetMaterialLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KismetMaterialLibrary");
		return ptr;
	}


	void SetVectorParameterValue(class UObject* WorldContextObject, class UMaterialParameterCollection* Collection, const struct FName& ParameterName, const struct FLinearColor& ParameterValue);
	void SetScalarParameterValue(class UObject* WorldContextObject, class UMaterialParameterCollection* Collection, const struct FName& ParameterName, float ParameterValue);
	struct FLinearColor GetVectorParameterValue(class UObject* WorldContextObject, class UMaterialParameterCollection* Collection, const struct FName& ParameterName);
	float GetScalarParameterValue(class UObject* WorldContextObject, class UMaterialParameterCollection* Collection, const struct FName& ParameterName);
	class UMaterialInstanceDynamic* CreateDynamicMaterialInstance(class UObject* WorldContextObject, class UMaterialInterface* Parent);
};


// Class Engine.KismetMathLibrary
// 0x0000 (0x0028 - 0x0028)
class UKismetMathLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KismetMathLibrary");
		return ptr;
	}


	int Xor_IntInt(int A, int B);
	float VSize2D(const struct FVector2D& A);
	float VSize(const struct FVector& A);
	struct FVector VLerp(const struct FVector& A, const struct FVector& B, float Alpha);
	struct FVector VInterpTo_Constant(const struct FVector& Current, const struct FVector& Target, float DeltaTime, float InterpSpeed);
	struct FVector VInterpTo(const struct FVector& Current, const struct FVector& Target, float DeltaTime, float InterpSpeed);
	struct FVector VEase(const struct FVector& A, const struct FVector& B, float Alpha, TEnumAsByte<EEasingFunc> EasingFunc, float BlendExp, int Steps);
	struct FDateTime UtcNow();
	struct FVector TransformLocation(const struct FTransform& T, const struct FVector& Location);
	struct FVector TransformDirection(const struct FTransform& T, const struct FVector& Direction);
	struct FDateTime Today();
	struct FTransform TLerp(const struct FTransform& A, const struct FTransform& B, float Alpha);
	struct FTransform TInterpTo(const struct FTransform& Current, const struct FTransform& Target, float DeltaTime, float InterpSpeed);
	struct FTimespan TimespanZeroValue();
	float TimespanRatio(const struct FTimespan& A, const struct FTimespan& B);
	struct FTimespan TimespanMinValue();
	struct FTimespan TimespanMaxValue();
	struct FTransform TEase(const struct FTransform& A, const struct FTransform& B, float Alpha, TEnumAsByte<EEasingFunc> EasingFunc, float BlendExp, int Steps);
	float Tan(float A);
	struct FVector Subtract_VectorVector(const struct FVector& A, const struct FVector& B);
	struct FVector Subtract_VectorFloat(const struct FVector& A, float B);
	struct FVector2D Subtract_Vector2DVector2D(const struct FVector2D& A, const struct FVector2D& B);
	struct FVector2D Subtract_Vector2DFloat(const struct FVector2D& A, float B);
	struct FTimespan Subtract_TimespanTimespan(const struct FTimespan& A, const struct FTimespan& B);
	int Subtract_IntInt(int A, int B);
	float Subtract_FloatFloat(float A, float B);
	double Subtract_DoubleDouble(double A, double B);
	struct FDateTime Subtract_DateTimeTimespan(const struct FDateTime& A, const struct FTimespan& B);
	unsigned char Subtract_ByteByte(unsigned char A, unsigned char B);
	float Square(float A);
	float Sqrt(float A);
	float Sin(float A);
	int SignOfInteger(int A);
	float SignOfFloat(float A);
	void SetRandomStreamSeed(int NewSeed, struct FRandomStream* Stream);
	struct FVector SelectVector(const struct FVector& A, const struct FVector& B, bool bPickA);
	struct FTransform SelectTransform(const struct FTransform& A, const struct FTransform& B, bool bPickA);
	struct FString SelectString(const struct FString& A, const struct FString& B, bool bPickA);
	struct FRotator SelectRotator(const struct FRotator& A, const struct FRotator& B, bool bPickA);
	class UObject* SelectObject(class UObject* A, class UObject* B, bool bSelectA);
	int SelectInt(int A, int B, bool bPickA);
	float SelectFloat(float A, float B, bool bPickA);
	struct FLinearColor SelectColor(const struct FLinearColor& A, const struct FLinearColor& B, bool bPickA);
	void SeedRandomStream(struct FRandomStream* Stream);
	int Round(float A);
	struct FRotator RotatorFromAxisAndAngle(const struct FVector& Axis, float Angle);
	struct FVector RotateAngleAxis(const struct FVector& InVect, float AngleDeg, const struct FVector& Axis);
	struct FRotator RLerp(const struct FRotator& A, const struct FRotator& B, float Alpha, bool bShortestPath);
	struct FRotator RInterpTo_Constant(const struct FRotator& Current, const struct FRotator& Target, float DeltaTime, float InterpSpeed);
	struct FRotator RInterpTo(const struct FRotator& Current, const struct FRotator& Target, float DeltaTime, float InterpSpeed);
	void RGBToHSV_Vector(const struct FLinearColor& RGB, struct FLinearColor* HSV);
	void RGBToHSV(const struct FLinearColor& InColor, float* H, float* S, float* V, float* A);
	void ResetRandomStream(const struct FRandomStream& Stream);
	struct FRotator REase(const struct FRotator& A, const struct FRotator& B, float Alpha, bool bShortestPath, TEnumAsByte<EEasingFunc> EasingFunc, float BlendExp, int Steps);
	struct FVector RandomUnitVectorInCone(const struct FVector& ConeDir, float ConeHalfAngle);
	struct FVector RandomUnitVectorFromStream(const struct FRandomStream& Stream);
	struct FVector RandomUnitVector();
	struct FRotator RandomRotatorFromStream(bool bRoll, const struct FRandomStream& Stream);
	struct FRotator RandomRotator(bool bRoll);
	struct FVector RandomPointInBoundingBox(const struct FVector& Origin, const struct FVector& BoxExtent);
	int RandomIntegerInRangeFromStream(int Min, int Max, const struct FRandomStream& Stream);
	int RandomIntegerInRange(int Min, int Max);
	int RandomIntegerFromStream(int Max, const struct FRandomStream& Stream);
	int RandomInteger(int Max);
	float RandomFloatInRangeFromStream(float Min, float Max, const struct FRandomStream& Stream);
	float RandomFloatInRange(float Min, float Max);
	float RandomFloatFromStream(const struct FRandomStream& Stream);
	float RandomFloat();
	bool RandomBoolFromStream(const struct FRandomStream& Stream);
	bool RandomBool();
	float RadiansToDegrees(float A);
	struct FVector ProjectOnTo(const struct FVector& X, const struct FVector& Y);
	bool PointsAreCoplanar(TArray<struct FVector> Points, float Tolerance);
	int Percent_IntInt(int A, int B);
	float Percent_FloatFloat(float A, float B);
	unsigned char Percent_ByteByte(unsigned char A, unsigned char B);
	int Or_IntInt(int A, int B);
	struct FDateTime Now();
	bool NotEqual_VectorVector(const struct FVector& A, const struct FVector& B);
	bool NotEqual_TimespanTimespan(const struct FTimespan& A, const struct FTimespan& B);
	bool NotEqual_RotatorRotator(const struct FRotator& A, const struct FRotator& B);
	bool NotEqual_ObjectObject(class UObject* A, class UObject* B);
	bool NotEqual_NameName(const struct FName& A, const struct FName& B);
	bool NotEqual_IntInt(int A, int B);
	bool NotEqual_FloatFloat(float A, float B);
	bool NotEqual_DateTimeDateTime(const struct FDateTime& A, const struct FDateTime& B);
	bool NotEqual_ClassClass(class UClass* A, class UClass* B);
	bool NotEqual_ByteByte(unsigned char A, unsigned char B);
	bool NotEqual_BoolBool(bool A, bool B);
	bool Not_PreBool(bool A);
	float NormalizeToRange(float Value, float RangeMin, float RangeMax);
	struct FRotator NormalizedDeltaRotator(const struct FRotator& A, const struct FRotator& B);
	struct FVector2D Normal2D(const struct FVector2D& A);
	struct FVector Normal(const struct FVector& A);
	struct FVector NegateVector(const struct FVector& A);
	struct FRotator NegateRotator(const struct FRotator& A);
	bool NearlyEqual_FloatFloat(float A, float B, float ErrorTolerance);
	float MultiplyMultiply_FloatFloat(float Base, float Exp);
	float MultiplyByPi(float Value);
	struct FVector Multiply_VectorVector(const struct FVector& A, const struct FVector& B);
	struct FVector Multiply_VectorFloat(const struct FVector& A, float B);
	struct FVector2D Multiply_Vector2DFloat(const struct FVector2D& A, float B);
	struct FTimespan Multiply_TimespanFloat(const struct FTimespan& A, float Scalar);
	struct FRotator Multiply_RotatorFloat(const struct FRotator& A, float B);
	struct FLinearColor Multiply_LinearColorLinearColor(const struct FLinearColor& A, const struct FLinearColor& B);
	struct FLinearColor Multiply_LinearColorFloat(const struct FLinearColor& A, float B);
	int Multiply_IntInt(int A, int B);
	float Multiply_IntFloat(int A, float B);
	float Multiply_FloatFloat(float A, float B);
	unsigned char Multiply_ByteByte(unsigned char A, unsigned char B);
	struct FVector MirrorVectorByNormal(const struct FVector& InVect, const struct FVector& InNormal);
	void MinOfIntArray(TArray<int> IntArray, int* IndexOfMinValue, int* MinValue);
	void MinOfFloatArray(TArray<float> FloatArray, int* IndexOfMinValue, float* MinValue);
	void MinOfByteArray(TArray<unsigned char> ByteArray, int* IndexOfMinValue, unsigned char* MinValue);
	void MinimumAreaRectangle(class UObject* WorldContextObject, TArray<struct FVector> InVerts, const struct FVector& SampleSurfaceNormal, bool bDebugDraw, struct FVector* OutRectCenter, struct FRotator* OutRectRotation, float* OutSideLengthX, float* OutSideLengthY);
	int Min(int A, int B);
	void MaxOfIntArray(TArray<int> IntArray, int* IndexOfMaxValue, int* MaxValue);
	void MaxOfFloatArray(TArray<float> FloatArray, int* IndexOfMaxValue, float* MaxValue);
	void MaxOfByteArray(TArray<unsigned char> ByteArray, int* IndexOfMaxValue, unsigned char* MaxValue);
	int Max(int A, int B);
	float MapRange(float Value, float InRangeA, float InRangeB, float OutRangeA, float OutRangeB);
	struct FVector2D MakeVector2D(float X, float Y);
	struct FVector MakeVector(float X, float Y, float Z);
	struct FTransform MakeTransform(const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale);
	struct FRotator MakeRotFromZY(const struct FVector& Z, const struct FVector& Y);
	struct FRotator MakeRotFromZX(const struct FVector& Z, const struct FVector& X);
	struct FRotator MakeRotFromZ(const struct FVector& Z);
	struct FRotator MakeRotFromYZ(const struct FVector& Y, const struct FVector& Z);
	struct FRotator MakeRotFromYX(const struct FVector& Y, const struct FVector& X);
	struct FRotator MakeRotFromY(const struct FVector& Y);
	struct FRotator MakeRotFromXZ(const struct FVector& X, const struct FVector& Z);
	struct FRotator MakeRotFromXY(const struct FVector& X, const struct FVector& Y);
	struct FRotator MakeRotFromX(const struct FVector& X);
	struct FRotator MakeRotationFromAxes(const struct FVector& Forward, const struct FVector& Right, const struct FVector& Up);
	struct FRotator MakeRot(float Pitch, float Yaw, float Roll);
	struct FLinearColor MakeColor(float R, float G, float B, float A);
	float Loge(float A);
	bool LinePlaneIntersection_OriginNormal(const struct FVector& LineStart, const struct FVector& LineEnd, const struct FVector& PlaneOrigin, const struct FVector& PlaneNormal, float* T, struct FVector* Intersection);
	bool LinePlaneIntersection(const struct FVector& LineStart, const struct FVector& LineEnd, const struct FPlane& APlane, float* T, struct FVector* Intersection);
	struct FLinearColor LinearColorLerp(const struct FLinearColor& A, const struct FLinearColor& B, float Alpha);
	struct FVector LessLess_VectorRotator(const struct FVector& A, const struct FRotator& B);
	bool LessEqual_TimespanTimespan(const struct FTimespan& A, const struct FTimespan& B);
	bool LessEqual_IntInt(int A, int B);
	bool LessEqual_FloatFloat(float A, float B);
	bool LessEqual_DateTimeDateTime(const struct FDateTime& A, const struct FDateTime& B);
	bool LessEqual_ByteByte(unsigned char A, unsigned char B);
	bool Less_TimespanTimespan(const struct FTimespan& A, const struct FTimespan& B);
	bool Less_IntInt(int A, int B);
	bool Less_FloatFloat(float A, float B);
	bool Less_DateTimeDateTime(const struct FDateTime& A, const struct FDateTime& B);
	bool Less_ByteByte(unsigned char A, unsigned char B);
	float Lerp(float A, float B, float Alpha);
	bool IsMorning(const struct FDateTime& A);
	bool IsLeapYear(int Year);
	bool IsAfternoon(const struct FDateTime& A);
	struct FVector InverseTransformLocation(const struct FTransform& T, const struct FVector& Location);
	struct FVector InverseTransformDirection(const struct FTransform& T, const struct FVector& Direction);
	bool InRange_FloatFloat(float Value, float Min, float Max, bool InclusiveMin, bool InclusiveMax);
	void HSVToRGB_Vector(const struct FLinearColor& HSV, struct FLinearColor* RGB);
	struct FLinearColor HSVToRGB(float H, float S, float V, float A);
	struct FVector GreaterGreater_VectorRotator(const struct FVector& A, const struct FRotator& B);
	bool GreaterEqual_TimespanTimespan(const struct FTimespan& A, const struct FTimespan& B);
	bool GreaterEqual_IntInt(int A, int B);
	bool GreaterEqual_FloatFloat(float A, float B);
	bool GreaterEqual_DateTimeDateTime(const struct FDateTime& A, const struct FDateTime& B);
	bool GreaterEqual_ByteByte(unsigned char A, unsigned char B);
	bool Greater_TimespanTimespan(const struct FTimespan& A, const struct FTimespan& B);
	bool Greater_IntInt(int A, int B);
	bool Greater_FloatFloat(float A, float B);
	bool Greater_DateTimeDateTime(const struct FDateTime& A, const struct FDateTime& B);
	bool Greater_ByteByte(unsigned char A, unsigned char B);
	int GetYear(const struct FDateTime& A);
	struct FVector GetVectorArrayAverage(TArray<struct FVector> Vectors);
	struct FVector GetUpVector(const struct FRotator& InRot);
	float GetTotalSeconds(const struct FTimespan& A);
	float GetTotalMinutes(const struct FTimespan& A);
	float GetTotalMilliseconds(const struct FTimespan& A);
	float GetTotalHours(const struct FTimespan& A);
	float GetTotalDays(const struct FTimespan& A);
	struct FTimespan GetTimeOfDay(const struct FDateTime& A);
	int GetSeconds(const struct FTimespan& A);
	int GetSecond(const struct FDateTime& A);
	struct FVector GetRightVector(const struct FRotator& InRot);
	float GetPI();
	int GetMonth(const struct FDateTime& A);
	int GetMinutes(const struct FTimespan& A);
	int GetMinute(const struct FDateTime& A);
	float GetMinElement(const struct FVector& A);
	int GetMilliseconds(const struct FTimespan& A);
	int GetMillisecond(const struct FDateTime& A);
	float GetMaxElement(const struct FVector& A);
	int GetHours(const struct FTimespan& A);
	int GetHour12(const struct FDateTime& A);
	int GetHour(const struct FDateTime& A);
	struct FVector GetForwardVector(const struct FRotator& InRot);
	struct FTimespan GetDuration(const struct FTimespan& A);
	struct FVector GetDirectionVector(const struct FVector& From, const struct FVector& To);
	int GetDays(const struct FTimespan& A);
	int GetDayOfYear(const struct FDateTime& A);
	int GetDay(const struct FDateTime& A);
	struct FDateTime GetDate(const struct FDateTime& A);
	void GetAxes(const struct FRotator& A, struct FVector* X, struct FVector* Y, struct FVector* Z);
	struct FTimespan FromSeconds(float Seconds);
	struct FTimespan FromMinutes(float Minutes);
	struct FTimespan FromMilliseconds(float Milliseconds);
	struct FTimespan FromHours(float Hours);
	struct FTimespan FromDays(float Days);
	float Fraction(float A);
	int FMod(float Dividend, float Divisor, float* Remainder);
	float FMin(float A, float B);
	float FMax(float A, float B);
	float FInterpTo_Constant(float Current, float Target, float DeltaTime, float InterpSpeed);
	float FInterpTo(float Current, float Target, float DeltaTime, float InterpSpeed);
	float FInterpEaseInOut(float A, float B, float Alpha, float Exponent);
	struct FRotator FindLookAtRotation(const struct FVector& Start, const struct FVector& Target);
	int FFloor(float A);
	float FClamp(float Value, float Min, float Max);
	int FCeil(float A);
	float Exp(float A);
	bool EqualEqual_VectorVector(const struct FVector& A, const struct FVector& B);
	bool EqualEqual_TimespanTimespan(const struct FTimespan& A, const struct FTimespan& B);
	bool EqualEqual_RotatorRotator(const struct FRotator& A, const struct FRotator& B);
	bool EqualEqual_ObjectObject(class UObject* A, class UObject* B);
	bool EqualEqual_NameName(const struct FName& A, const struct FName& B);
	bool EqualEqual_IntInt(int A, int B);
	bool EqualEqual_FloatFloat(float A, float B);
	bool EqualEqual_DateTimeDateTime(const struct FDateTime& A, const struct FDateTime& B);
	bool EqualEqual_ClassClass(class UClass* A, class UClass* B);
	bool EqualEqual_ByteByte(unsigned char A, unsigned char B);
	bool EqualEqual_BoolBool(bool A, bool B);
	float Ease(float A, float B, float Alpha, TEnumAsByte<EEasingFunc> EasingFunc, float BlendExp, int Steps);
	float Dot_VectorVector(const struct FVector& A, const struct FVector& B);
	struct FVector Divide_VectorVector(const struct FVector& A, const struct FVector& B);
	struct FVector Divide_VectorFloat(const struct FVector& A, float B);
	struct FVector2D Divide_Vector2DFloat(const struct FVector2D& A, float B);
	int Divide_IntInt(int A, int B);
	float Divide_FloatFloat(float A, float B);
	unsigned char Divide_ByteByte(unsigned char A, unsigned char B);
	float DegTan(float A);
	float DegSin(float A);
	float DegreesToRadians(float A);
	float DegCos(float A);
	float DegAtan2(float A, float B);
	float DegAsin(float A);
	float DegAcos(float A);
	int DaysInYear(int Year);
	int DaysInMonth(int Year, int Month);
	struct FDateTime DateTimeMinValue();
	struct FDateTime DateTimeMaxValue();
	struct FVector Cross_VectorVector(const struct FVector& A, const struct FVector& B);
	float Cos(float A);
	struct FTransform ConvertTransformToRelative(const struct FTransform& WorldTransform, const struct FTransform& LocalTransform);
	struct FVector2D Conv_VectorToVector2D(const struct FVector& InVector);
	struct FTransform Conv_VectorToTransform(const struct FVector& InLocation);
	struct FRotator Conv_VectorToRotator(const struct FVector& inVec);
	struct FLinearColor Conv_VectorToLinearColor(const struct FVector& inVec);
	struct FVector Conv_Vector2DToVector(const struct FVector2D& InVector2D, float Z);
	struct FVector Conv_RotatorToVector(const struct FRotator& InRot);
	struct FVector Conv_LinearColorToVector(const struct FLinearColor& InLinearColor);
	struct FColor Conv_LinearColorToColor(const struct FLinearColor& InLinearColor);
	float Conv_IntToFloat(int InInt);
	unsigned char Conv_IntToByte(int InInt);
	bool Conv_IntToBool(int InInt);
	struct FVector Conv_FloatToVector(float InFloat);
	struct FLinearColor Conv_FloatToLinearColor(float InFloat);
	double Conv_FloatToDouble(float InFloat);
	float Conv_DoubleToFloat(double InDouble);
	struct FLinearColor Conv_ColorToLinearColor(const struct FColor& InColor);
	int Conv_ByteToInt(unsigned char InByte);
	float Conv_ByteToFloat(unsigned char InByte);
	int Conv_BoolToInt(bool InBool);
	float Conv_BoolToFloat(bool InBool);
	unsigned char Conv_BoolToByte(bool InBool);
	struct FTransform ComposeTransforms(const struct FTransform& A, const struct FTransform& B);
	struct FRotator ComposeRotators(const struct FRotator& A, const struct FRotator& B);
	bool ClassIsChildOf(class UClass* TestClass, class UClass* ParentClass);
	struct FVector ClampVectorSize(const struct FVector& A, float Min, float Max);
	float ClampAngle(float AngleDegrees, float MinAngleDegrees, float MaxAngleDegrees);
	int Clamp(int Value, int Min, int Max);
	struct FLinearColor CInterpTo(const struct FLinearColor& Current, const struct FLinearColor& Target, float DeltaTime, float InterpSpeed);
	void BreakVector2D(const struct FVector2D& inVec, float* X, float* Y);
	void BreakVector(const struct FVector& inVec, float* X, float* Y, float* Z);
	void BreakTransform(const struct FTransform& InTransform, struct FVector* Location, struct FRotator* Rotation, struct FVector* Scale);
	void BreakRotIntoAxes(const struct FRotator& InRot, struct FVector* X, struct FVector* Y, struct FVector* Z);
	void BreakRot(const struct FRotator& InRot, float* Pitch, float* Yaw, float* Roll);
	void BreakColor(const struct FLinearColor& InColor, float* R, float* G, float* B, float* A);
	bool BooleanXOR(bool A, bool B);
	bool BooleanOR(bool A, bool B);
	bool BooleanAND(bool A, bool B);
	float Atan2(float A, float B);
	float Asin(float A);
	int And_IntInt(int A, int B);
	struct FVector Add_VectorVector(const struct FVector& A, const struct FVector& B);
	struct FVector Add_VectorFloat(const struct FVector& A, float B);
	struct FVector2D Add_Vector2DVector2D(const struct FVector2D& A, const struct FVector2D& B);
	struct FVector2D Add_Vector2DFloat(const struct FVector2D& A, float B);
	struct FTimespan Add_TimespanTimespan(const struct FTimespan& A, const struct FTimespan& B);
	int Add_IntInt(int A, int B);
	float Add_FloatFloat(float A, float B);
	struct FDateTime Add_DateTimeTimespan(const struct FDateTime& A, const struct FTimespan& B);
	unsigned char Add_ByteByte(unsigned char A, unsigned char B);
	float Acos(float A);
	int Abs_Int(int A);
	float Abs(float A);
};


// Class Engine.EdGraphPin
// 0x0118 (0x0140 - 0x0028)
class UEdGraphPin : public UObject
{
public:
	unsigned char                                      UnknownData00[0x118];                                     // 0x0028(0x0118) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EdGraphPin");
		return ptr;
	}

};


// Class Engine.KismetNodeHelperLibrary
// 0x0000 (0x0028 - 0x0028)
class UKismetNodeHelperLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KismetNodeHelperLibrary");
		return ptr;
	}


	void MarkBit(int Index, int* Data);
	bool HasUnmarkedBit(int Data, int NumBits);
	bool HasMarkedBit(int Data, int NumBits);
	unsigned char GetValidIndex(class UEnum* Enum, unsigned char EnumeratorIndex);
	int GetUnmarkedBit(int Data, int StartIdx, int NumBits, bool bRandom);
	int GetRandomUnmarkedBit(int Data, int StartIdx, int NumBits);
	int GetFirstUnmarkedBit(int Data, int StartIdx, int NumBits);
	struct FString GetEnumeratorUserFriendlyName(class UEnum* Enum, unsigned char EnumeratorIndex);
	struct FName GetEnumeratorName(class UEnum* Enum, unsigned char EnumeratorIndex);
	void ClearBit(int Index, int* Data);
	void ClearAllBits(int* Data);
	bool BitIsMarked(int Data, int Index);
};


// Class Engine.KismetStringLibrary
// 0x0000 (0x0028 - 0x0028)
class UKismetStringLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KismetStringLibrary");
		return ptr;
	}


	struct FString TrimTrailing(const struct FString& SourceString);
	struct FString Trim(const struct FString& SourceString);
	struct FString ToUpper(const struct FString& SourceString);
	struct FString ToLower(const struct FString& SourceString);
	bool StartsWith(const struct FString& SourceString, const struct FString& InPrefix, TEnumAsByte<ESearchCase> SearchCase);
	bool Split(const struct FString& SourceString, const struct FString& InStr, TEnumAsByte<ESearchCase> SearchCase, TEnumAsByte<ESearchDir> SearchDir, struct FString* LeftS, struct FString* RightS);
	struct FString RightPad(const struct FString& SourceString, int ChCount);
	struct FString RightChop(const struct FString& SourceString, int Count);
	struct FString Right(const struct FString& SourceString, int Count);
	struct FString Reverse(const struct FString& SourceString);
	int ReplaceInline(const struct FString& SearchText, const struct FString& ReplacementText, TEnumAsByte<ESearchCase> SearchCase, struct FString* SourceString);
	struct FString Replace(const struct FString& SourceString, const struct FString& From, const struct FString& To, TEnumAsByte<ESearchCase> SearchCase);
	TArray<struct FString> ParseIntoArray(const struct FString& SourceString, const struct FString& Delimiter, bool CullEmptyStrings);
	bool NotEqual_StrStr(const struct FString& A, const struct FString& B);
	bool NotEqual_StriStri(const struct FString& A, const struct FString& B);
	struct FString Mid(const struct FString& SourceString, int Start, int Count);
	bool MatchesWildcard(const struct FString& SourceString, const struct FString& Wildcard, TEnumAsByte<ESearchCase> SearchCase);
	int Len(const struct FString& S);
	struct FString LeftPad(const struct FString& SourceString, int ChCount);
	struct FString LeftChop(const struct FString& SourceString, int Count);
	struct FString Left(const struct FString& SourceString, int Count);
	bool IsNumeric(const struct FString& SourceString);
	struct FString GetSubstring(const struct FString& SourceString, int StartIndex, int Length);
	int GetCharacterAsNumber(const struct FString& SourceString, int Index);
	TArray<struct FString> GetCharacterArrayFromString(const struct FString& SourceString);
	int FindSubstring(const struct FString& SearchIn, const struct FString& Substring, bool bUseCase, bool bSearchFromEnd, int StartPosition);
	bool EqualEqual_StrStr(const struct FString& A, const struct FString& B);
	bool EqualEqual_StriStri(const struct FString& A, const struct FString& B);
	bool EndsWith(const struct FString& SourceString, const struct FString& InSuffix, TEnumAsByte<ESearchCase> SearchCase);
	int CullArray(const struct FString& SourceString, TArray<struct FString>* InArray);
	struct FString Conv_VectorToString(const struct FVector& inVec);
	struct FString Conv_Vector2dToString(const struct FVector2D& inVec);
	struct FString Conv_TransformToString(const struct FTransform& InTrans);
	struct FName Conv_StringToName(const struct FString& InString);
	int Conv_StringToInt(const struct FString& InString);
	float Conv_StringToFloat(const struct FString& InString);
	struct FString Conv_RotatorToString(const struct FRotator& InRot);
	struct FString Conv_ObjectToString(class UObject* InObj);
	struct FString Conv_NameToString(const struct FName& InName);
	struct FString Conv_IntToString(int InInt);
	struct FString Conv_FloatToString(float InFloat);
	struct FString Conv_ColorToString(const struct FLinearColor& InColor);
	struct FString Conv_ByteToString(unsigned char InByte);
	struct FString Conv_BoolToString(bool InBool);
	struct FString Concat_StrStr(const struct FString& A, const struct FString& B);
	struct FString BuildString_Vector2d(const struct FString& AppendTo, const struct FString& Prefix, const struct FVector2D& InVector2D, const struct FString& Suffix);
	struct FString BuildString_Vector(const struct FString& AppendTo, const struct FString& Prefix, const struct FVector& InVector, const struct FString& Suffix);
	struct FString BuildString_Rotator(const struct FString& AppendTo, const struct FString& Prefix, const struct FRotator& InRot, const struct FString& Suffix);
	struct FString BuildString_Object(const struct FString& AppendTo, const struct FString& Prefix, class UObject* InObj, const struct FString& Suffix);
	struct FString BuildString_Name(const struct FString& AppendTo, const struct FString& Prefix, const struct FName& InName, const struct FString& Suffix);
	struct FString BuildString_Int(const struct FString& AppendTo, const struct FString& Prefix, int InInt, const struct FString& Suffix);
	struct FString BuildString_Float(const struct FString& AppendTo, const struct FString& Prefix, float InFloat, const struct FString& Suffix);
	struct FString BuildString_Color(const struct FString& AppendTo, const struct FString& Prefix, const struct FLinearColor& InColor, const struct FString& Suffix);
	struct FString BuildString_Bool(const struct FString& AppendTo, const struct FString& Prefix, bool InBool, const struct FString& Suffix);
};


// Class Engine.KismetSystemLibrary
// 0x0000 (0x0028 - 0x0028)
class UKismetSystemLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KismetSystemLibrary");
		return ptr;
	}


	void StackTrace();
	bool SphereTraceSingleForObjects(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, struct FHitResult* OutHit);
	bool SphereTraceSingleByObject_DEPRECATED(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, TArray<TEnumAsByte<ECollisionChannel>> ObjectsToTrace, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, struct FHitResult* OutHit);
	bool SphereTraceSingle_NEW(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, struct FHitResult* OutHit);
	bool SphereTraceSingle_DEPRECATED(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, struct FHitResult* OutHit);
	bool SphereTraceMultiForObjects(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, TArray<struct FHitResult>* OutHits);
	bool SphereTraceMultiByObject_DEPRECATED(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, TArray<TEnumAsByte<ECollisionChannel>> ObjectsToTrace, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, TArray<struct FHitResult>* OutHits);
	bool SphereTraceMulti_NEW(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, TArray<struct FHitResult>* OutHits);
	bool SphereTraceMulti_DEPRECATED(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, TArray<struct FHitResult>* OutHits);
	bool SphereOverlapComponents_NEW(class UObject* WorldContextObject, const struct FVector& SpherePos, float SphereRadius, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, class UClass* ComponentClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class UPrimitiveComponent*>* OutComponents);
	bool SphereOverlapComponents_DEPRECATED(class UObject* WorldContextObject, const struct FVector& SpherePos, float SphereRadius, TEnumAsByte<EOverlapFilterOption> Filter, class UClass* ComponentClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class UPrimitiveComponent*>* OutComponents);
	bool SphereOverlapActorsSimple(class UObject* WorldContextObject, const struct FVector& SpherePos, float SphereRadius, TEnumAsByte<EObjectTypeQuery> ObjectType, class UClass* ActorClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class AActor*>* OutActors);
	bool SphereOverlapActors_NEW(class UObject* WorldContextObject, const struct FVector& SpherePos, float SphereRadius, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, class UClass* ActorClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class AActor*>* OutActors);
	bool SphereOverlapActors_DEPRECATED(class UObject* WorldContextObject, const struct FVector& SpherePos, float SphereRadius, TEnumAsByte<EOverlapFilterOption> Filter, class UClass* ActorClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class AActor*>* OutActors);
	void ShowPlatformSpecificLeaderboardScreen(const struct FString& CategoryName);
	void ShowPlatformSpecificAchievementsScreen(class APlayerController* SpecificPlayer);
	void ShowAdBanner(bool bShowOnBottomOfScreen);
	void SetVectorPropertyByName(class UObject* Object, const struct FName& PropertyName, const struct FVector& Value);
	void SetTransformPropertyByName(class UObject* Object, const struct FName& PropertyName, const struct FTransform& Value);
	void SetTextPropertyByName(class UObject* Object, const struct FName& PropertyName, const struct FText& Value);
	void SetSupressViewportTransitionMessage(class UObject* WorldContextObject, bool bState);
	void SetStructurePropertyByName(class UObject* Object, const struct FName& PropertyName, const struct FGenericStruct& Value);
	void SetStringPropertyByName(class UObject* Object, const struct FName& PropertyName, const struct FString& Value);
	void SetRotatorPropertyByName(class UObject* Object, const struct FName& PropertyName, const struct FRotator& Value);
	void SetObjectPropertyByName(class UObject* Object, const struct FName& PropertyName, class UObject* Value);
	void SetNamePropertyByName(class UObject* Object, const struct FName& PropertyName, const struct FName& Value);
	void SetLinearColorPropertyByName(class UObject* Object, const struct FName& PropertyName, const struct FLinearColor& Value);
	void SetIntPropertyByName(class UObject* Object, const struct FName& PropertyName, int Value);
	void SetFloatPropertyByName(class UObject* Object, const struct FName& PropertyName, float Value);
	void SetDoublePropertyByName(class UObject* Object, const struct FName& PropertyName, double Value);
	void SetClassPropertyByName(class UObject* Object, const struct FName& PropertyName, class UClass* Value);
	void SetBytePropertyByName(class UObject* Object, const struct FName& PropertyName, unsigned char Value);
	void SetBoolPropertyByName(class UObject* Object, const struct FName& PropertyName, bool Value);
	void RetriggerableDelay(class UObject* WorldContextObject, float Duration, const struct FLatentActionInfo& LatentInfo);
	void QuitGame(class UObject* WorldContextObject, class APlayerController* SpecificPlayer, TEnumAsByte<EQuitPreference> QuitPreference);
	void PrintWarning(const struct FString& InString);
	void PrintString(class UObject* WorldContextObject, const struct FString& InString, bool bPrintToScreen, bool bPrintToLog, const struct FLinearColor& TextColor);
	void MoveComponentTo(class USceneComponent* Component, const struct FVector& TargetRelativeLocation, const struct FRotator& TargetRelativeRotation, bool bEaseOut, bool bEaseIn, float OverTime, TEnumAsByte<EMoveComponentAction> MoveAction, const struct FLatentActionInfo& LatentInfo);
	struct FText MakeLiteralText(const struct FText& Value);
	struct FString MakeLiteralString(const struct FString& Value);
	struct FName MakeLiteralName(const struct FName& Value);
	int MakeLiteralInt(int Value);
	float MakeLiteralFloat(float Value);
	unsigned char MakeLiteralByte(unsigned char Value);
	bool MakeLiteralBool(bool Value);
	bool LineTraceSingleForObjects(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, struct FHitResult* OutHit);
	bool LineTraceSingleByObject_DEPRECATED(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, TArray<TEnumAsByte<ECollisionChannel>> ObjectsToTrace, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, struct FHitResult* OutHit);
	bool LineTraceSingle_NEW(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, struct FHitResult* OutHit);
	bool LineTraceSingle_DEPRECATED(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, struct FHitResult* OutHit);
	bool LineTraceMultiForObjects(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, TArray<struct FHitResult>* OutHits);
	bool LineTraceMultiByObject_DEPRECATED(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, TArray<TEnumAsByte<ECollisionChannel>> ObjectsToTrace, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, TArray<struct FHitResult>* OutHits);
	bool LineTraceMulti_NEW(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, TArray<struct FHitResult>* OutHits);
	bool LineTraceMulti_DEPRECATED(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, TArray<struct FHitResult>* OutHits);
	void LaunchURL(const struct FString& URL);
	void K2_UnPauseTimer(class UObject* Object, const struct FString& FunctionName);
	bool K2_TimerExists(class UObject* Object, const struct FString& FunctionName);
	void K2_SetTimerDelegate(const struct FScriptDelegate& Delegate, float Time, bool bLooping);
	void K2_SetTimer(class UObject* Object, const struct FString& FunctionName, float Time, bool bLooping);
	void K2_PauseTimer(class UObject* Object, const struct FString& FunctionName);
	bool K2_IsTimerPaused(class UObject* Object, const struct FString& FunctionName);
	bool K2_IsTimerActive(class UObject* Object, const struct FString& FunctionName);
	float K2_GetTimerRemainingTime(class UObject* Object, const struct FString& FunctionName);
	float K2_GetTimerElapsedTime(class UObject* Object, const struct FString& FunctionName);
	void K2_ClearTimer(class UObject* Object, const struct FString& FunctionName);
	bool IsValid(class UObject* Object);
	bool IsServer(class UObject* WorldContextObject);
	bool IsPackagedForDistribution();
	bool IsDedicatedServer(class UObject* WorldContextObject);
	void HideAdBanner();
	struct FString GetUniqueDeviceId();
	int GetRenderingMaterialQualityLevel();
	int GetRenderingDetailMode();
	struct FString GetPlatformUserName();
	double GetGameTimeInSeconds(class UObject* WorldContextObject);
	struct FString GetGameName();
	struct FString GetEngineVersion();
	struct FString GetDisplayName(class UObject* Object);
	void GetComponentBounds(class USceneComponent* Component, struct FVector* Origin, struct FVector* BoxExtent, float* SphereRadius);
	struct FString GetClassDisplayName(class UClass* Class);
	void GetActorListFromComponentList(TArray<class UPrimitiveComponent*> ComponentList, class UClass* ActorClassFilter, TArray<class AActor*>* OutActorList);
	void GetActorBounds(class AActor* Actor, struct FVector* Origin, struct FVector* BoxExtent);
	void ForceCloseAdBanner();
	void FlushPersistentDebugLines(class UObject* WorldContextObject);
	void FlushDebugStrings(class UObject* WorldContextObject);
	void ExecuteConsoleCommand(class UObject* WorldContextObject, const struct FString& Command, class APlayerController* SpecificPlayer);
	void DrawDebugString(class UObject* WorldContextObject, const struct FVector& TextLocation, const struct FString& Text, class AActor* TestBaseActor, const struct FLinearColor& TextColor, float Duration);
	void DrawDebugSphere(class UObject* WorldContextObject, const struct FVector& Center, float Radius, int Segments, const struct FLinearColor& LineColor, float Duration);
	void DrawDebugPoint(class UObject* WorldContextObject, const struct FVector& Position, float Size, const struct FLinearColor& PointColor, float Duration);
	void DrawDebugPlane(class UObject* WorldContextObject, const struct FPlane& PlaneCoordinates, const struct FVector& Location, float Size, const struct FLinearColor& PlaneColor, float Duration);
	void DrawDebugLine(class UObject* WorldContextObject, const struct FVector& LineStart, const struct FVector& LineEnd, const struct FLinearColor& LineColor, float Duration, float Thickness);
	void DrawDebugFrustum(class UObject* WorldContextObject, const struct FTransform& FrustumTransform, const struct FLinearColor& FrustumColor, float Duration);
	void DrawDebugFloatHistoryTransform(class UObject* WorldContextObject, const struct FDebugFloatHistory& FloatHistory, const struct FTransform& DrawTransform, const struct FVector2D& DrawSize, const struct FLinearColor& DrawColor, float Duration);
	void DrawDebugFloatHistoryLocation(class UObject* WorldContextObject, const struct FDebugFloatHistory& FloatHistory, const struct FVector& DrawLocation, const struct FVector2D& DrawSize, const struct FLinearColor& DrawColor, float Duration);
	void DrawDebugCylinder(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, int Segments, const struct FLinearColor& LineColor, float Duration);
	void DrawDebugCoordinateSystem(class UObject* WorldContextObject, const struct FVector& AxisLoc, const struct FRotator& AxisRot, float Scale, float Duration);
	void DrawDebugConeInDegrees(class UObject* WorldContextObject, const struct FVector& Origin, const struct FVector& Direction, float Length, float AngleWidth, float AngleHeight, int NumSides, const struct FLinearColor& LineColor, float Duration);
	void DrawDebugCone(class UObject* WorldContextObject, const struct FVector& Origin, const struct FVector& Direction, float Length, float AngleWidth, float AngleHeight, int NumSides, const struct FLinearColor& LineColor);
	void DrawDebugCapsule(class UObject* WorldContextObject, const struct FVector& Center, float HalfHeight, float Radius, const struct FRotator& Rotation, const struct FLinearColor& LineColor, float Duration);
	void DrawDebugCamera(class ACameraActor* CameraActor, const struct FLinearColor& CameraColor, float Duration);
	void DrawDebugBox(class UObject* WorldContextObject, const struct FVector& Center, const struct FVector& Extent, const struct FLinearColor& LineColor, const struct FRotator& Rotation, float Duration);
	void DrawDebugArrow(class UObject* WorldContextObject, const struct FVector& LineStart, const struct FVector& LineEnd, float ArrowSize, const struct FLinearColor& LineColor, float Duration);
	bool DoesImplementInterface(class UObject* TestObject, class UClass* Interface);
	void Delay(class UObject* WorldContextObject, float Duration, const struct FLatentActionInfo& LatentInfo);
	void CreateCopyForUndoBuffer(class UObject* ObjectToModify);
	class UObject* Conv_InterfaceToObject(const TScriptInterface<class UInterface>& Interface);
	void ControlScreensaver(bool bAllowScreenSaver);
	bool ComponentOverlapComponents_NEW(class UPrimitiveComponent* Component, const struct FTransform& ComponentTransform, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, class UClass* ComponentClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class UPrimitiveComponent*>* OutComponents);
	bool ComponentOverlapComponents_DEPRECATED(class UPrimitiveComponent* Component, const struct FTransform& ComponentTransform, TEnumAsByte<EOverlapFilterOption> Filter, class UClass* ComponentClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class UPrimitiveComponent*>* OutComponents);
	bool ComponentOverlapActors_NEW(class UPrimitiveComponent* Component, const struct FTransform& ComponentTransform, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, class UClass* ActorClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class AActor*>* OutActors);
	bool ComponentOverlapActors_DEPRECATED(class UPrimitiveComponent* Component, const struct FTransform& ComponentTransform, TEnumAsByte<EOverlapFilterOption> Filter, class UClass* ActorClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class AActor*>* OutActors);
	void CollectGarbage();
	bool CapsuleTraceSingleForObjects(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, struct FHitResult* OutHit);
	bool CapsuleTraceSingleByObject_DEPRECATED(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, TArray<TEnumAsByte<ECollisionChannel>> ObjectsToTrace, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, struct FHitResult* OutHit);
	bool CapsuleTraceSingle_NEW(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, struct FHitResult* OutHit);
	bool CapsuleTraceSingle_DEPRECATED(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, struct FHitResult* OutHit);
	bool CapsuleTraceMultiForObjects(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, TArray<struct FHitResult>* OutHits);
	bool CapsuleTraceMultiByObject_DEPRECATED(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, TArray<TEnumAsByte<ECollisionChannel>> ObjectsToTrace, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, TArray<struct FHitResult>* OutHits);
	bool CapsuleTraceMulti_NEW(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, TArray<struct FHitResult>* OutHits);
	bool CapsuleTraceMulti_DEPRECATED(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, TArray<struct FHitResult>* OutHits);
	bool CapsuleOverlapComponents_NEW(class UObject* WorldContextObject, const struct FVector& CapsulePos, float Radius, float HalfHeight, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, class UClass* ComponentClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class UPrimitiveComponent*>* OutComponents);
	bool CapsuleOverlapComponents_DEPRECATED(class UObject* WorldContextObject, const struct FVector& CapsulePos, float Radius, float HalfHeight, TEnumAsByte<EOverlapFilterOption> Filter, class UClass* ComponentClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class UPrimitiveComponent*>* OutComponents);
	bool CapsuleOverlapActors_NEW(class UObject* WorldContextObject, const struct FVector& CapsulePos, float Radius, float HalfHeight, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, class UClass* ActorClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class AActor*>* OutActors);
	bool CapsuleOverlapActors_DEPRECATED(class UObject* WorldContextObject, const struct FVector& CapsulePos, float Radius, float HalfHeight, TEnumAsByte<EOverlapFilterOption> Filter, class UClass* ActorClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class AActor*>* OutActors);
	bool BoxTraceSingleForObjects(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, const struct FVector& HalfSize, const struct FRotator& Orientation, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, struct FHitResult* OutHit);
	bool BoxTraceSingle(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, const struct FVector& HalfSize, const struct FRotator& Orientation, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, struct FHitResult* OutHit);
	bool BoxTraceMultiForObjects(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, const struct FVector& HalfSize, const struct FRotator& Orientation, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, TArray<struct FHitResult>* OutHits);
	bool BoxTraceMulti(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, const struct FVector& HalfSize, const struct FRotator& Orientation, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, TArray<struct FHitResult>* OutHits);
	bool BoxOverlapComponents_NEW(class UObject* WorldContextObject, const struct FVector& BoxPos, const struct FVector& Extent, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, class UClass* ComponentClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class UPrimitiveComponent*>* OutComponents);
	bool BoxOverlapComponents_DEPRECATED(class UObject* WorldContextObject, const struct FVector& BoxPos, const struct FVector& Extent, TEnumAsByte<EOverlapFilterOption> Filter, class UClass* ComponentClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class UPrimitiveComponent*>* OutComponents);
	bool BoxOverlapActors_NEW(class UObject* WorldContextObject, const struct FVector& BoxPos, const struct FVector& BoxExtent, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, class UClass* ActorClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class AActor*>* OutActors);
	bool BoxOverlapActors_DEPRECATED(class UObject* WorldContextObject, const struct FVector& BoxPos, const struct FVector& BoxExtent, TEnumAsByte<EOverlapFilterOption> Filter, class UClass* ActorClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class AActor*>* OutActors);
	void BlueprintTimerDynamicDelegate__DelegateSignature();
	struct FDebugFloatHistory AddFloatHistorySample(float Value, const struct FDebugFloatHistory& FloatHistory);
};


// Class Engine.KismetTextLibrary
// 0x0000 (0x0028 - 0x0028)
class UKismetTextLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KismetTextLibrary");
		return ptr;
	}


	struct FText TextTrimTrailing(const struct FText& InText);
	struct FText TextTrimPrecedingAndTrailing(const struct FText& InText);
	struct FText TextTrimPreceding(const struct FText& InText);
	bool TextIsTransient(const struct FText& InText);
	bool TextIsEmpty(const struct FText& InText);
	bool TextIsCultureInvariant(const struct FText& InText);
	bool NotEqual_TextText(const struct FText& A, const struct FText& B);
	bool NotEqual_IgnoreCase_TextText(const struct FText& A, const struct FText& B);
	struct FText GetEmptyText();
	struct FText Format(const struct FText& InPattern, TArray<struct FFormatTextArgument> InArgs);
	bool FindTextInLocalizationTable(const struct FString& Namespace, const struct FString& Key, struct FText* OutText);
	bool EqualEqual_TextText(const struct FText& A, const struct FText& B);
	bool EqualEqual_IgnoreCase_TextText(const struct FText& A, const struct FText& B);
	struct FString Conv_TextToString(const struct FText& InText);
	struct FText Conv_StringToText(const struct FString& InString);
	struct FText Conv_NameToText(const struct FName& InName);
	struct FText Conv_IntToText(int Value, bool bUseGrouping, int MinimumIntegralDigits, int MaximumIntegralDigits);
	struct FText Conv_FloatToText(float Value, TEnumAsByte<ERoundingMode> RoundingMode, bool bUseGrouping, int MinimumIntegralDigits, int MaximumIntegralDigits, int MinimumFractionalDigits, int MaximumFractionalDigits);
	struct FText Conv_ByteToText(unsigned char Value);
	struct FText Conv_BoolToText(bool InBool);
	struct FText AsTimespan_Timespan(const struct FTimespan& InTimespan);
	struct FText AsTime_DateTime(const struct FDateTime& In);
	struct FText AsPercent_Float(float Value, TEnumAsByte<ERoundingMode> RoundingMode, bool bUseGrouping, int MinimumIntegralDigits, int MaximumIntegralDigits, int MinimumFractionalDigits, int MaximumFractionalDigits);
	struct FText AsDateTime_DateTime(const struct FDateTime& In);
	struct FText AsDate_DateTime(const struct FDateTime& InDateTime);
	struct FText AsCurrency_Integer(int Value, TEnumAsByte<ERoundingMode> RoundingMode, bool bUseGrouping, int MinimumIntegralDigits, int MaximumIntegralDigits, int MinimumFractionalDigits, int MaximumFractionalDigits, const struct FString& CurrencyCode);
	struct FText AsCurrency_Float(float Value, TEnumAsByte<ERoundingMode> RoundingMode, bool bUseGrouping, int MinimumIntegralDigits, int MaximumIntegralDigits, int MinimumFractionalDigits, int MaximumFractionalDigits, const struct FString& CurrencyCode);
};


// Class Engine.AnimBlueprintGeneratedClass
// 0x0048 (0x0210 - 0x01C8)
class UAnimBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x01C8(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimBlueprintGeneratedClass");
		return ptr;
	}

};


// Class Engine.BodySetup
// 0x0260 (0x0288 - 0x0028)
class UBodySetup : public UObject
{
public:
	unsigned char                                      UnknownData00[0x260];                                     // 0x0028(0x0260) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BodySetup");
		return ptr;
	}

};


// Class Engine.BodySetup2D
// 0x0030 (0x02B8 - 0x0288)
class UBodySetup2D : public UBodySetup
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0288(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BodySetup2D");
		return ptr;
	}

};


// Class Engine.BoneMaskFilter
// 0x0010 (0x0038 - 0x0028)
class UBoneMaskFilter : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BoneMaskFilter");
		return ptr;
	}

};


// Class Engine.BookMark
// 0x0028 (0x0050 - 0x0028)
class UBookMark : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BookMark");
		return ptr;
	}

};


// Class Engine.BookMark2D
// 0x0010 (0x0038 - 0x0028)
class UBookMark2D : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BookMark2D");
		return ptr;
	}

};


// Class Engine.Breakpoint
// 0x0018 (0x0040 - 0x0028)
class UBreakpoint : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Breakpoint");
		return ptr;
	}

};


// Class Engine.BrushBuilder
// 0x0058 (0x0080 - 0x0028)
class UBrushBuilder : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0028(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BrushBuilder");
		return ptr;
	}

};


// Class Engine.ButtonStyleAsset
// 0x0248 (0x0270 - 0x0028)
class UButtonStyleAsset : public UObject
{
public:
	unsigned char                                      UnknownData00[0x248];                                     // 0x0028(0x0248) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ButtonStyleAsset");
		return ptr;
	}

};


// Class Engine.CameraAnim
// 0x0360 (0x0388 - 0x0028)
class UCameraAnim : public UObject
{
public:
	unsigned char                                      UnknownData00[0x360];                                     // 0x0028(0x0360) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CameraAnim");
		return ptr;
	}

};


// Class Engine.CameraAnimInst
// 0x00E8 (0x0110 - 0x0028)
class UCameraAnimInst : public UObject
{
public:
	unsigned char                                      UnknownData00[0xE8];                                      // 0x0028(0x00E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CameraAnimInst");
		return ptr;
	}


	void Stop(bool bImmediate);
	void SetDuration(float NewDuration);
};


// Class Engine.CameraModifier
// 0x0030 (0x0058 - 0x0028)
class UCameraModifier : public UObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0028(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CameraModifier");
		return ptr;
	}

};


// Class Engine.CameraModifier_CameraShake
// 0x0018 (0x0070 - 0x0058)
class UCameraModifier_CameraShake : public UCameraModifier
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0058(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CameraModifier_CameraShake");
		return ptr;
	}

};


// Class Engine.CameraShake
// 0x0088 (0x00B0 - 0x0028)
class UCameraShake : public UObject
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0028(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CameraShake");
		return ptr;
	}

};


// Class Engine.Canvas
// 0x00D8 (0x0100 - 0x0028)
class UCanvas : public UObject
{
public:
	unsigned char                                      UnknownData00[0xD8];                                      // 0x0028(0x00D8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Canvas");
		return ptr;
	}


	struct FVector2D K2_TextSize(class UFont* RenderFont, const struct FString& RenderText, const struct FVector2D& Scale);
	struct FVector2D K2_StrLen(class UFont* RenderFont, const struct FString& RenderText);
	struct FVector K2_Project(const struct FVector& WorldLocation);
	void K2_DrawTriangle(class UTexture* RenderTexture, TArray<struct FCanvasUVTri> Triangles);
	void K2_DrawTexture(class UTexture* RenderTexture, const struct FVector2D& ScreenPosition, const struct FVector2D& ScreenSize, const struct FVector2D& CoordinatePosition, const struct FVector2D& CoordinateSize, const struct FLinearColor& RenderColor, TEnumAsByte<EBlendMode> BlendMode, float Rotation, const struct FVector2D& PivotPoint);
	void K2_DrawText(class UFont* RenderFont, const struct FString& RenderText, const struct FVector2D& ScreenPosition, const struct FLinearColor& RenderColor, float Kerning, const struct FLinearColor& ShadowColor, const struct FVector2D& ShadowOffset, bool bCentreX, bool bCentreY, bool bOutlined, const struct FLinearColor& OutlineColor);
	void K2_DrawPolygon(class UTexture* RenderTexture, const struct FVector2D& ScreenPosition, const struct FVector2D& Radius, int NumberOfSides, const struct FLinearColor& RenderColor);
	void K2_DrawMaterial(class UMaterialInterface* RenderMaterial, const struct FVector2D& ScreenPosition, const struct FVector2D& ScreenSize, const struct FVector2D& CoordinatePosition, const struct FVector2D& CoordinateSize, float Rotation, const struct FVector2D& PivotPoint);
	void K2_DrawLine(const struct FVector2D& ScreenPositionA, const struct FVector2D& ScreenPositionB, float Thickness, const struct FLinearColor& RenderColor);
	void K2_DrawBox(const struct FVector2D& ScreenPosition, const struct FVector2D& ScreenSize, float Thickness);
	void K2_DrawBorder(class UTexture* BorderTexture, class UTexture* BackgroundTexture, class UTexture* LeftBorderTexture, class UTexture* RightBorderTexture, class UTexture* TopBorderTexture, class UTexture* BottomBorderTexture, const struct FVector2D& ScreenPosition, const struct FVector2D& ScreenSize, const struct FVector2D& CoordinatePosition, const struct FVector2D& CoordinateSize, const struct FLinearColor& RenderColor, const struct FVector2D& BorderScale, const struct FVector2D& BackgroundScale, float Rotation, const struct FVector2D& PivotPoint, const struct FVector2D& CornerSize);
	void K2_Deproject(const struct FVector2D& ScreenPosition, struct FVector* WorldOrigin, struct FVector* WorldDirection);
	float BPDrawTextWrapped(class UFont* InFont, const struct FString& InText, float X, float Y, float XWidth, float YWidth, float XScale, float YScale, bool bDoCenterX, bool bDoCenterY, const struct FVector2D& SpacingAdjust);
	float BPDrawTextCentered(class UFont* InFont, const struct FString& InText, float X, float Y, float XScale, float YScale, bool bDoCenterX, bool bDoCenterY);
};


// Class Engine.Channel
// 0x0050 (0x0078 - 0x0028)
class UChannel : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0028(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Channel");
		return ptr;
	}

};


// Class Engine.ActorChannel
// 0x01D0 (0x0248 - 0x0078)
class UActorChannel : public UChannel
{
public:
	unsigned char                                      UnknownData00[0x1D0];                                     // 0x0078(0x01D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorChannel");
		return ptr;
	}

};


// Class Engine.BattlEyeChannel
// 0x0018 (0x0090 - 0x0078)
class UBattlEyeChannel : public UChannel
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0078(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BattlEyeChannel");
		return ptr;
	}

};


// Class Engine.ClassInfoChannel
// 0x0080 (0x00F8 - 0x0078)
class UClassInfoChannel : public UChannel
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0078(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ClassInfoChannel");
		return ptr;
	}

};


// Class Engine.ControlChannel
// 0x0018 (0x0090 - 0x0078)
class UControlChannel : public UChannel
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0078(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ControlChannel");
		return ptr;
	}

};


// Class Engine.VoiceChannel
// 0x0010 (0x0088 - 0x0078)
class UVoiceChannel : public UChannel
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0078(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VoiceChannel");
		return ptr;
	}

};


// Class Engine.CheckBoxStyleAsset
// 0x0508 (0x0530 - 0x0028)
class UCheckBoxStyleAsset : public UObject
{
public:
	unsigned char                                      UnknownData00[0x508];                                     // 0x0028(0x0508) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CheckBoxStyleAsset");
		return ptr;
	}

};


// Class Engine.ClipPadEntry
// 0x0020 (0x0048 - 0x0028)
class UClipPadEntry : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ClipPadEntry");
		return ptr;
	}

};


// Class Engine.CollisionProfile
// 0x0120 (0x0148 - 0x0028)
class UCollisionProfile : public UObject
{
public:
	unsigned char                                      UnknownData00[0x120];                                     // 0x0028(0x0120) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CollisionProfile");
		return ptr;
	}

};


// Class Engine.Commandlet
// 0x0058 (0x0080 - 0x0028)
class UCommandlet : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0028(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Commandlet");
		return ptr;
	}

};


// Class Engine.SmokeTestCommandlet
// 0x0000 (0x0080 - 0x0080)
class USmokeTestCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SmokeTestCommandlet");
		return ptr;
	}

};


// Class Engine.Console
// 0x00C8 (0x00F0 - 0x0028)
class UConsole : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0028(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Console");
		return ptr;
	}

};


// Class Engine.CurveLinearColor
// 0x01A0 (0x01E0 - 0x0040)
class UCurveLinearColor : public UCurveBase
{
public:
	unsigned char                                      UnknownData00[0x1A0];                                     // 0x0040(0x01A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CurveLinearColor");
		return ptr;
	}


	struct FLinearColor GetLinearColorValue(float InTime);
};


// Class Engine.CurveVector
// 0x0148 (0x0188 - 0x0040)
class UCurveVector : public UCurveBase
{
public:
	unsigned char                                      UnknownData00[0x148];                                     // 0x0040(0x0148) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CurveVector");
		return ptr;
	}


	struct FVector GetVectorValue(float InTime);
};


// Class Engine.CurveEdPresetCurve
// 0x0000 (0x0028 - 0x0028)
class UCurveEdPresetCurve : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CurveEdPresetCurve");
		return ptr;
	}

};


// Class Engine.CurveTable
// 0x0060 (0x0088 - 0x0028)
class UCurveTable : public UObject
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0028(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CurveTable");
		return ptr;
	}

};


// Class Engine.TireType
// 0x0008 (0x0030 - 0x0028)
class UTireType : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TireType");
		return ptr;
	}

};


// Class Engine.DestructibleFractureSettings
// 0x0090 (0x00B8 - 0x0028)
class UDestructibleFractureSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0028(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DestructibleFractureSettings");
		return ptr;
	}

};


// Class Engine.DeviceProfile
// 0x0048 (0x0070 - 0x0028)
class UDeviceProfile : public UObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0028(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DeviceProfile");
		return ptr;
	}

};


// Class Engine.DeviceProfileManager
// 0x0040 (0x0068 - 0x0028)
class UDeviceProfileManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0028(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DeviceProfileManager");
		return ptr;
	}

};


// Class Engine.DialogueVoice
// 0x0018 (0x0040 - 0x0028)
class UDialogueVoice : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DialogueVoice");
		return ptr;
	}

};


// Class Engine.DialogueWave
// 0x0038 (0x0060 - 0x0028)
class UDialogueWave : public UObject
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0028(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DialogueWave");
		return ptr;
	}

};


// Class Engine.Distribution
// 0x0008 (0x0030 - 0x0028)
class UDistribution : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Distribution");
		return ptr;
	}

};


// Class Engine.DistributionFloat
// 0x0008 (0x0038 - 0x0030)
class UDistributionFloat : public UDistribution
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionFloat");
		return ptr;
	}

};


// Class Engine.DistributionFloatConstant
// 0x0008 (0x0040 - 0x0038)
class UDistributionFloatConstant : public UDistributionFloat
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionFloatConstant");
		return ptr;
	}

};


// Class Engine.DistributionFloatParameterBase
// 0x0020 (0x0060 - 0x0040)
class UDistributionFloatParameterBase : public UDistributionFloatConstant
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0040(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionFloatParameterBase");
		return ptr;
	}

};


// Class Engine.DistributionFloatParticleParameter
// 0x0000 (0x0060 - 0x0060)
class UDistributionFloatParticleParameter : public UDistributionFloatParameterBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionFloatParticleParameter");
		return ptr;
	}

};


// Class Engine.DistributionFloatSoundParameter
// 0x0000 (0x0060 - 0x0060)
class UDistributionFloatSoundParameter : public UDistributionFloatParameterBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionFloatSoundParameter");
		return ptr;
	}

};


// Class Engine.DistributionFloatConstantCurve
// 0x0010 (0x0048 - 0x0038)
class UDistributionFloatConstantCurve : public UDistributionFloat
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionFloatConstantCurve");
		return ptr;
	}

};


// Class Engine.DistributionFloatUniform
// 0x0008 (0x0040 - 0x0038)
class UDistributionFloatUniform : public UDistributionFloat
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionFloatUniform");
		return ptr;
	}

};


// Class Engine.DistributionFloatUniformCurve
// 0x0010 (0x0048 - 0x0038)
class UDistributionFloatUniformCurve : public UDistributionFloat
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionFloatUniformCurve");
		return ptr;
	}

};


// Class Engine.DistributionVector
// 0x0008 (0x0038 - 0x0030)
class UDistributionVector : public UDistribution
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionVector");
		return ptr;
	}

};


// Class Engine.DistributionVectorConstant
// 0x0018 (0x0050 - 0x0038)
class UDistributionVectorConstant : public UDistributionVector
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionVectorConstant");
		return ptr;
	}

};


// Class Engine.DistributionVectorParameterBase
// 0x0040 (0x0090 - 0x0050)
class UDistributionVectorParameterBase : public UDistributionVectorConstant
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0050(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionVectorParameterBase");
		return ptr;
	}

};


// Class Engine.DistributionVectorParticleParameter
// 0x0000 (0x0090 - 0x0090)
class UDistributionVectorParticleParameter : public UDistributionVectorParameterBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionVectorParticleParameter");
		return ptr;
	}

};


// Class Engine.DistributionVectorConstantCurve
// 0x0018 (0x0050 - 0x0038)
class UDistributionVectorConstantCurve : public UDistributionVector
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionVectorConstantCurve");
		return ptr;
	}

};


// Class Engine.DistributionVectorUniform
// 0x0028 (0x0060 - 0x0038)
class UDistributionVectorUniform : public UDistributionVector
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0038(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionVectorUniform");
		return ptr;
	}

};


// Class Engine.DistributionVectorUniformCurve
// 0x0020 (0x0058 - 0x0038)
class UDistributionVectorUniformCurve : public UDistributionVector
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0038(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionVectorUniformCurve");
		return ptr;
	}

};


// Class Engine.DynamicBlueprintBinding
// 0x0000 (0x0028 - 0x0028)
class UDynamicBlueprintBinding : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DynamicBlueprintBinding");
		return ptr;
	}

};


// Class Engine.ComponentDelegateBinding
// 0x0010 (0x0038 - 0x0028)
class UComponentDelegateBinding : public UDynamicBlueprintBinding
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ComponentDelegateBinding");
		return ptr;
	}

};


// Class Engine.InputDelegateBinding
// 0x0000 (0x0028 - 0x0028)
class UInputDelegateBinding : public UDynamicBlueprintBinding
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InputDelegateBinding");
		return ptr;
	}

};


// Class Engine.InputActionDelegateBinding
// 0x0010 (0x0038 - 0x0028)
class UInputActionDelegateBinding : public UInputDelegateBinding
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InputActionDelegateBinding");
		return ptr;
	}

};


// Class Engine.InputAxisDelegateBinding
// 0x0010 (0x0038 - 0x0028)
class UInputAxisDelegateBinding : public UInputDelegateBinding
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InputAxisDelegateBinding");
		return ptr;
	}

};


// Class Engine.InputAxisKeyDelegateBinding
// 0x0010 (0x0038 - 0x0028)
class UInputAxisKeyDelegateBinding : public UInputDelegateBinding
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InputAxisKeyDelegateBinding");
		return ptr;
	}

};


// Class Engine.InputVectorAxisDelegateBinding
// 0x0000 (0x0038 - 0x0038)
class UInputVectorAxisDelegateBinding : public UInputAxisKeyDelegateBinding
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InputVectorAxisDelegateBinding");
		return ptr;
	}

};


// Class Engine.InputKeyDelegateBinding
// 0x0010 (0x0038 - 0x0028)
class UInputKeyDelegateBinding : public UInputDelegateBinding
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InputKeyDelegateBinding");
		return ptr;
	}

};


// Class Engine.InputTouchDelegateBinding
// 0x0010 (0x0038 - 0x0028)
class UInputTouchDelegateBinding : public UInputDelegateBinding
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InputTouchDelegateBinding");
		return ptr;
	}

};


// Class Engine.DynamicCaptureData
// 0x0020 (0x0048 - 0x0028)
class UDynamicCaptureData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DynamicCaptureData");
		return ptr;
	}

};


// Class Engine.EdGraph
// 0x0040 (0x0068 - 0x0028)
class UEdGraph : public UObject
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0028(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EdGraph");
		return ptr;
	}

};


// Class Engine.EdGraphNode_Comment
// 0x0018 (0x00A8 - 0x0090)
class UEdGraphNode_Comment : public UEdGraphNode
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0090(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EdGraphNode_Comment");
		return ptr;
	}

};


// Class Engine.EdGraphNode_Documentation
// 0x0020 (0x00B0 - 0x0090)
class UEdGraphNode_Documentation : public UEdGraphNode
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0090(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EdGraphNode_Documentation");
		return ptr;
	}

};


// Class Engine.EdGraphSchema
// 0x0000 (0x0028 - 0x0028)
class UEdGraphSchema : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EdGraphSchema");
		return ptr;
	}

};


// Class Engine.Exporter
// 0x0040 (0x0068 - 0x0028)
class UExporter : public UObject
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0028(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Exporter");
		return ptr;
	}

};


// Class Engine.FoliageAttachedComponentInterface
// 0x0000 (0x0028 - 0x0028)
class UFoliageAttachedComponentInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FoliageAttachedComponentInterface");
		return ptr;
	}

};


// Class Engine.FoliageType
// 0x0270 (0x0298 - 0x0028)
class UFoliageType : public UObject
{
public:
	unsigned char                                      UnknownData00[0x270];                                     // 0x0028(0x0270) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FoliageType");
		return ptr;
	}

};


// Class Engine.FoliageType_InstancedStaticMesh
// 0x0008 (0x02A0 - 0x0298)
class UFoliageType_InstancedStaticMesh : public UFoliageType
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0298(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FoliageType_InstancedStaticMesh");
		return ptr;
	}

};


// Class Engine.FontImportOptions
// 0x00B0 (0x00D8 - 0x0028)
class UFontImportOptions : public UObject
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0028(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FontImportOptions");
		return ptr;
	}

};


// Class Engine.Font
// 0x0168 (0x0190 - 0x0028)
class UFont : public UObject
{
public:
	unsigned char                                      UnknownData00[0x168];                                     // 0x0028(0x0168) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Font");
		return ptr;
	}

};


// Class Engine.PlayerInput
// 0x0300 (0x0328 - 0x0028)
class UPlayerInput : public UObject
{
public:
	unsigned char                                      UnknownData00[0x300];                                     // 0x0028(0x0300) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlayerInput");
		return ptr;
	}


	void SetMouseSensitivityToDefault();
	void SetMouseSensitivity(float Sensitivity);
	void SetBind(const struct FName& BindName, const struct FString& Command);
	void InvertMouse();
	void InvertAxisKey(const struct FKey& AxisKey);
	void InvertAxis(const struct FName& AxisName);
	void ClearSmoothing();
};


// Class Engine.InputSettings
// 0x0080 (0x00A8 - 0x0028)
class UInputSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0028(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InputSettings");
		return ptr;
	}

};


// Class Engine.InterpCurveEdSetup
// 0x0018 (0x0040 - 0x0028)
class UInterpCurveEdSetup : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpCurveEdSetup");
		return ptr;
	}

};


// Class Engine.InterpData
// 0x0058 (0x0080 - 0x0028)
class UInterpData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0028(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpData");
		return ptr;
	}

};


// Class Engine.InterpFilter
// 0x0010 (0x0038 - 0x0028)
class UInterpFilter : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpFilter");
		return ptr;
	}

};


// Class Engine.InterpFilter_Classes
// 0x0000 (0x0038 - 0x0038)
class UInterpFilter_Classes : public UInterpFilter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpFilter_Classes");
		return ptr;
	}

};


// Class Engine.InterpFilter_Custom
// 0x0000 (0x0038 - 0x0038)
class UInterpFilter_Custom : public UInterpFilter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpFilter_Custom");
		return ptr;
	}

};


// Class Engine.InterpGroup
// 0x0028 (0x0050 - 0x0028)
class UInterpGroup : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpGroup");
		return ptr;
	}

};


// Class Engine.InterpGroupCamera
// 0x0010 (0x0060 - 0x0050)
class UInterpGroupCamera : public UInterpGroup
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0050(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpGroupCamera");
		return ptr;
	}

};


// Class Engine.InterpGroupDirector
// 0x0000 (0x0050 - 0x0050)
class UInterpGroupDirector : public UInterpGroup
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpGroupDirector");
		return ptr;
	}

};


// Class Engine.InterpGroupInst
// 0x0020 (0x0048 - 0x0028)
class UInterpGroupInst : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpGroupInst");
		return ptr;
	}

};


// Class Engine.InterpGroupInstCamera
// 0x0000 (0x0048 - 0x0048)
class UInterpGroupInstCamera : public UInterpGroupInst
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpGroupInstCamera");
		return ptr;
	}

};


// Class Engine.InterpGroupInstDirector
// 0x0000 (0x0048 - 0x0048)
class UInterpGroupInstDirector : public UInterpGroupInst
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpGroupInstDirector");
		return ptr;
	}

};


// Class Engine.InterpTrack
// 0x0058 (0x0080 - 0x0028)
class UInterpTrack : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0028(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrack");
		return ptr;
	}

};


// Class Engine.InterpTrackBoolProp
// 0x0018 (0x0098 - 0x0080)
class UInterpTrackBoolProp : public UInterpTrack
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0080(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackBoolProp");
		return ptr;
	}

};


// Class Engine.InterpTrackDirector
// 0x0018 (0x0098 - 0x0080)
class UInterpTrackDirector : public UInterpTrack
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0080(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackDirector");
		return ptr;
	}

};


// Class Engine.InterpTrackEvent
// 0x0018 (0x0098 - 0x0080)
class UInterpTrackEvent : public UInterpTrack
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0080(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackEvent");
		return ptr;
	}

};


// Class Engine.InterpTrackFloatBase
// 0x0018 (0x0098 - 0x0080)
class UInterpTrackFloatBase : public UInterpTrack
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0080(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackFloatBase");
		return ptr;
	}

};


// Class Engine.InterpTrackAnimControl
// 0x0020 (0x00B8 - 0x0098)
class UInterpTrackAnimControl : public UInterpTrackFloatBase
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0098(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackAnimControl");
		return ptr;
	}

};


// Class Engine.InterpTrackFade
// 0x0008 (0x00A0 - 0x0098)
class UInterpTrackFade : public UInterpTrackFloatBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0098(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackFade");
		return ptr;
	}

};


// Class Engine.InterpTrackFloatMaterialParam
// 0x0018 (0x00B0 - 0x0098)
class UInterpTrackFloatMaterialParam : public UInterpTrackFloatBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0098(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackFloatMaterialParam");
		return ptr;
	}

};


// Class Engine.InterpTrackFloatParticleParam
// 0x0008 (0x00A0 - 0x0098)
class UInterpTrackFloatParticleParam : public UInterpTrackFloatBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0098(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackFloatParticleParam");
		return ptr;
	}

};


// Class Engine.InterpTrackFloatProp
// 0x0010 (0x00A8 - 0x0098)
class UInterpTrackFloatProp : public UInterpTrackFloatBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0098(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackFloatProp");
		return ptr;
	}

};


// Class Engine.InterpTrackMove
// 0x0048 (0x00C8 - 0x0080)
class UInterpTrackMove : public UInterpTrack
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0080(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackMove");
		return ptr;
	}

};


// Class Engine.InterpTrackMoveAxis
// 0x0018 (0x00B0 - 0x0098)
class UInterpTrackMoveAxis : public UInterpTrackFloatBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0098(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackMoveAxis");
		return ptr;
	}

};


// Class Engine.InterpTrackSlomo
// 0x0000 (0x0098 - 0x0098)
class UInterpTrackSlomo : public UInterpTrackFloatBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackSlomo");
		return ptr;
	}

};


// Class Engine.InterpTrackLinearColorBase
// 0x0018 (0x0098 - 0x0080)
class UInterpTrackLinearColorBase : public UInterpTrack
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0080(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackLinearColorBase");
		return ptr;
	}

};


// Class Engine.InterpTrackLinearColorProp
// 0x0010 (0x00A8 - 0x0098)
class UInterpTrackLinearColorProp : public UInterpTrackLinearColorBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0098(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackLinearColorProp");
		return ptr;
	}

};


// Class Engine.InterpTrackParticleReplay
// 0x0010 (0x0090 - 0x0080)
class UInterpTrackParticleReplay : public UInterpTrack
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0080(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackParticleReplay");
		return ptr;
	}

};


// Class Engine.InterpTrackToggle
// 0x0018 (0x0098 - 0x0080)
class UInterpTrackToggle : public UInterpTrack
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0080(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackToggle");
		return ptr;
	}

};


// Class Engine.InterpTrackVectorBase
// 0x0018 (0x0098 - 0x0080)
class UInterpTrackVectorBase : public UInterpTrack
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0080(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackVectorBase");
		return ptr;
	}

};


// Class Engine.InterpTrackAudioMaster
// 0x0000 (0x0098 - 0x0098)
class UInterpTrackAudioMaster : public UInterpTrackVectorBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackAudioMaster");
		return ptr;
	}

};


// Class Engine.InterpTrackColorProp
// 0x0008 (0x00A0 - 0x0098)
class UInterpTrackColorProp : public UInterpTrackVectorBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0098(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackColorProp");
		return ptr;
	}

};


// Class Engine.InterpTrackColorScale
// 0x0000 (0x0098 - 0x0098)
class UInterpTrackColorScale : public UInterpTrackVectorBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackColorScale");
		return ptr;
	}

};


// Class Engine.InterpTrackSound
// 0x0018 (0x00B0 - 0x0098)
class UInterpTrackSound : public UInterpTrackVectorBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0098(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackSound");
		return ptr;
	}

};


// Class Engine.InterpTrackVectorMaterialParam
// 0x0018 (0x00B0 - 0x0098)
class UInterpTrackVectorMaterialParam : public UInterpTrackVectorBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0098(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackVectorMaterialParam");
		return ptr;
	}

};


// Class Engine.InterpTrackVectorProp
// 0x0010 (0x00A8 - 0x0098)
class UInterpTrackVectorProp : public UInterpTrackVectorBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0098(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackVectorProp");
		return ptr;
	}

};


// Class Engine.InterpTrackVisibility
// 0x0018 (0x0098 - 0x0080)
class UInterpTrackVisibility : public UInterpTrack
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0080(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackVisibility");
		return ptr;
	}

};


// Class Engine.InterpTrackInst
// 0x0000 (0x0028 - 0x0028)
class UInterpTrackInst : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInst");
		return ptr;
	}

};


// Class Engine.InterpTrackInstAnimControl
// 0x0008 (0x0030 - 0x0028)
class UInterpTrackInstAnimControl : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstAnimControl");
		return ptr;
	}

};


// Class Engine.InterpTrackInstAudioMaster
// 0x0000 (0x0028 - 0x0028)
class UInterpTrackInstAudioMaster : public UInterpTrackInst
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstAudioMaster");
		return ptr;
	}

};


// Class Engine.InterpTrackInstColorScale
// 0x0000 (0x0028 - 0x0028)
class UInterpTrackInstColorScale : public UInterpTrackInst
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstColorScale");
		return ptr;
	}

};


// Class Engine.InterpTrackInstDirector
// 0x0008 (0x0030 - 0x0028)
class UInterpTrackInstDirector : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstDirector");
		return ptr;
	}

};


// Class Engine.InterpTrackInstEvent
// 0x0008 (0x0030 - 0x0028)
class UInterpTrackInstEvent : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstEvent");
		return ptr;
	}

};


// Class Engine.InterpTrackInstFade
// 0x0000 (0x0028 - 0x0028)
class UInterpTrackInstFade : public UInterpTrackInst
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstFade");
		return ptr;
	}

};


// Class Engine.InterpTrackInstFloatParticleParam
// 0x0008 (0x0030 - 0x0028)
class UInterpTrackInstFloatParticleParam : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstFloatParticleParam");
		return ptr;
	}

};


// Class Engine.InterpTrackInstMove
// 0x0018 (0x0040 - 0x0028)
class UInterpTrackInstMove : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstMove");
		return ptr;
	}

};


// Class Engine.InterpTrackInstParticleReplay
// 0x0008 (0x0030 - 0x0028)
class UInterpTrackInstParticleReplay : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstParticleReplay");
		return ptr;
	}

};


// Class Engine.InterpTrackInstProperty
// 0x0010 (0x0038 - 0x0028)
class UInterpTrackInstProperty : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstProperty");
		return ptr;
	}

};


// Class Engine.InterpTrackInstBoolProp
// 0x0018 (0x0050 - 0x0038)
class UInterpTrackInstBoolProp : public UInterpTrackInstProperty
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstBoolProp");
		return ptr;
	}

};


// Class Engine.InterpTrackInstColorProp
// 0x0010 (0x0048 - 0x0038)
class UInterpTrackInstColorProp : public UInterpTrackInstProperty
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstColorProp");
		return ptr;
	}

};


// Class Engine.InterpTrackInstFloatProp
// 0x0010 (0x0048 - 0x0038)
class UInterpTrackInstFloatProp : public UInterpTrackInstProperty
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstFloatProp");
		return ptr;
	}

};


// Class Engine.InterpTrackInstLinearColorProp
// 0x0018 (0x0050 - 0x0038)
class UInterpTrackInstLinearColorProp : public UInterpTrackInstProperty
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstLinearColorProp");
		return ptr;
	}

};


// Class Engine.InterpTrackInstVectorProp
// 0x0018 (0x0050 - 0x0038)
class UInterpTrackInstVectorProp : public UInterpTrackInstProperty
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstVectorProp");
		return ptr;
	}

};


// Class Engine.InterpTrackInstSlomo
// 0x0008 (0x0030 - 0x0028)
class UInterpTrackInstSlomo : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstSlomo");
		return ptr;
	}

};


// Class Engine.InterpTrackInstSound
// 0x0010 (0x0038 - 0x0028)
class UInterpTrackInstSound : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstSound");
		return ptr;
	}

};


// Class Engine.InterpTrackInstToggle
// 0x0010 (0x0038 - 0x0028)
class UInterpTrackInstToggle : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstToggle");
		return ptr;
	}

};


// Class Engine.InterpTrackInstVectorMaterialParam
// 0x0038 (0x0060 - 0x0028)
class UInterpTrackInstVectorMaterialParam : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0028(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstVectorMaterialParam");
		return ptr;
	}

};


// Class Engine.InterpTrackInstVisibility
// 0x0008 (0x0030 - 0x0028)
class UInterpTrackInstVisibility : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstVisibility");
		return ptr;
	}

};


// Class Engine.IntSerialization
// 0x0028 (0x0050 - 0x0028)
class UIntSerialization : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.IntSerialization");
		return ptr;
	}

};


// Class Engine.LandscapeInfo
// 0x0238 (0x0260 - 0x0028)
class ULandscapeInfo : public UObject
{
public:
	unsigned char                                      UnknownData00[0x238];                                     // 0x0028(0x0238) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LandscapeInfo");
		return ptr;
	}

};


// Class Engine.LandscapeLayerInfoObject
// 0x0020 (0x0048 - 0x0028)
class ULandscapeLayerInfoObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LandscapeLayerInfoObject");
		return ptr;
	}

};


// Class Engine.InterpTrackInstFloatMaterialParam
// 0x0038 (0x0060 - 0x0028)
class UInterpTrackInstFloatMaterialParam : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0028(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstFloatMaterialParam");
		return ptr;
	}

};


// Class Engine.LandscapeSplineSegment
// 0x0080 (0x00A8 - 0x0028)
class ULandscapeSplineSegment : public UObject
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0028(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LandscapeSplineSegment");
		return ptr;
	}

};


// Class Engine.LandscapeSplineControlPoint
// 0x0070 (0x0098 - 0x0028)
class ULandscapeSplineControlPoint : public UObject
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0028(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LandscapeSplineControlPoint");
		return ptr;
	}

};


// Class Engine.Layer
// 0x0020 (0x0048 - 0x0028)
class ULayer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Layer");
		return ptr;
	}

};


// Class Engine.LevelStreaming
// 0x0128 (0x0150 - 0x0028)
class ULevelStreaming : public UObject
{
public:
	unsigned char                                      UnknownData00[0x128];                                     // 0x0028(0x0128) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelStreaming");
		return ptr;
	}


	void LevelStreamingVisibilityStatus__DelegateSignature();
	void LevelStreamingLoadedStatus__DelegateSignature();
	bool IsLevelVisible();
	bool IsLevelLoaded();
	class ULevelStreaming* CreateInstance(const struct FString& UniqueInstanceName);
};


// Class Engine.LevelStreamingAlwaysLoaded
// 0x0000 (0x0150 - 0x0150)
class ULevelStreamingAlwaysLoaded : public ULevelStreaming
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelStreamingAlwaysLoaded");
		return ptr;
	}

};


// Class Engine.LevelStreamingBounds
// 0x0000 (0x0150 - 0x0150)
class ULevelStreamingBounds : public ULevelStreaming
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelStreamingBounds");
		return ptr;
	}

};


// Class Engine.LevelStreamingKismet
// 0x0000 (0x0150 - 0x0150)
class ULevelStreamingKismet : public ULevelStreaming
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelStreamingKismet");
		return ptr;
	}

};


// Class Engine.LevelStreamingPersistent
// 0x0000 (0x0150 - 0x0150)
class ULevelStreamingPersistent : public ULevelStreaming
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelStreamingPersistent");
		return ptr;
	}

};


// Class Engine.LightmappedSurfaceCollection
// 0x0018 (0x0040 - 0x0028)
class ULightmappedSurfaceCollection : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightmappedSurfaceCollection");
		return ptr;
	}

};


// Class Engine.LightmassPrimitiveSettingsObject
// 0x0018 (0x0040 - 0x0028)
class ULightmassPrimitiveSettingsObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightmassPrimitiveSettingsObject");
		return ptr;
	}

};


// Class Engine.LocalMessage
// 0x0000 (0x0028 - 0x0028)
class ULocalMessage : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LocalMessage");
		return ptr;
	}

};


// Class Engine.EngineMessage
// 0x0080 (0x00A8 - 0x0028)
class UEngineMessage : public ULocalMessage
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0028(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EngineMessage");
		return ptr;
	}

};


// Class Engine.MaterialExpression
// 0x0050 (0x0078 - 0x0028)
class UMaterialExpression : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0028(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpression");
		return ptr;
	}

};


// Class Engine.MaterialExpressionAbs
// 0x0038 (0x00B0 - 0x0078)
class UMaterialExpressionAbs : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0078(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionAbs");
		return ptr;
	}

};


// Class Engine.MaterialExpressionActorPositionWS
// 0x0000 (0x0078 - 0x0078)
class UMaterialExpressionActorPositionWS : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionActorPositionWS");
		return ptr;
	}

};


// Class Engine.MaterialExpressionAdd
// 0x0078 (0x00F0 - 0x0078)
class UMaterialExpressionAdd : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0078(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionAdd");
		return ptr;
	}

};


// Class Engine.MaterialExpressionAppendVector
// 0x0070 (0x00E8 - 0x0078)
class UMaterialExpressionAppendVector : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0078(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionAppendVector");
		return ptr;
	}

};


// Class Engine.MaterialExpressionAtmosphericFogColor
// 0x0038 (0x00B0 - 0x0078)
class UMaterialExpressionAtmosphericFogColor : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0078(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionAtmosphericFogColor");
		return ptr;
	}

};


// Class Engine.MaterialExpressionBlackBody
// 0x0038 (0x00B0 - 0x0078)
class UMaterialExpressionBlackBody : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0078(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionBlackBody");
		return ptr;
	}

};


// Class Engine.MaterialExpressionBreakMaterialAttributes
// 0x0078 (0x00F0 - 0x0078)
class UMaterialExpressionBreakMaterialAttributes : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0078(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionBreakMaterialAttributes");
		return ptr;
	}

};


// Class Engine.MaterialExpressionBumpOffset
// 0x00B8 (0x0130 - 0x0078)
class UMaterialExpressionBumpOffset : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0078(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionBumpOffset");
		return ptr;
	}

};


// Class Engine.MaterialExpressionCameraPositionWS
// 0x0000 (0x0078 - 0x0078)
class UMaterialExpressionCameraPositionWS : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCameraPositionWS");
		return ptr;
	}

};


// Class Engine.MaterialExpressionCameraVectorWS
// 0x0000 (0x0078 - 0x0078)
class UMaterialExpressionCameraVectorWS : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCameraVectorWS");
		return ptr;
	}

};


// Class Engine.MaterialExpressionCeil
// 0x0038 (0x00B0 - 0x0078)
class UMaterialExpressionCeil : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0078(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCeil");
		return ptr;
	}

};


// Class Engine.MaterialExpressionClamp
// 0x00B8 (0x0130 - 0x0078)
class UMaterialExpressionClamp : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0078(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionClamp");
		return ptr;
	}

};


// Class Engine.MaterialExpressionCollectionParameter
// 0x0020 (0x0098 - 0x0078)
class UMaterialExpressionCollectionParameter : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0078(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCollectionParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionComment
// 0x0028 (0x00A0 - 0x0078)
class UMaterialExpressionComment : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0078(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionComment");
		return ptr;
	}

};


// Class Engine.MaterialExpressionComponentMask
// 0x0040 (0x00B8 - 0x0078)
class UMaterialExpressionComponentMask : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0078(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionComponentMask");
		return ptr;
	}

};


// Class Engine.MaterialExpressionConstant
// 0x0008 (0x0080 - 0x0078)
class UMaterialExpressionConstant : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionConstant");
		return ptr;
	}

};


// Class Engine.MaterialExpressionConstant2Vector
// 0x0008 (0x0080 - 0x0078)
class UMaterialExpressionConstant2Vector : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionConstant2Vector");
		return ptr;
	}

};


// Class Engine.MaterialExpressionConstant3Vector
// 0x0020 (0x0098 - 0x0078)
class UMaterialExpressionConstant3Vector : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0078(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionConstant3Vector");
		return ptr;
	}

};


// Class Engine.MaterialExpressionConstant4Vector
// 0x0020 (0x0098 - 0x0078)
class UMaterialExpressionConstant4Vector : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0078(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionConstant4Vector");
		return ptr;
	}

};


// Class Engine.MaterialExpressionConstantBiasScale
// 0x0040 (0x00B8 - 0x0078)
class UMaterialExpressionConstantBiasScale : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0078(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionConstantBiasScale");
		return ptr;
	}

};


// Class Engine.MaterialExpressionCosine
// 0x0040 (0x00B8 - 0x0078)
class UMaterialExpressionCosine : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0078(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCosine");
		return ptr;
	}

};


// Class Engine.MaterialExpressionCrossProduct
// 0x0070 (0x00E8 - 0x0078)
class UMaterialExpressionCrossProduct : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0078(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCrossProduct");
		return ptr;
	}

};


// Class Engine.MaterialExpressionCustom
// 0x0038 (0x00B0 - 0x0078)
class UMaterialExpressionCustom : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0078(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCustom");
		return ptr;
	}

};


// Class Engine.MaterialExpressionCustomTexture
// 0x0008 (0x0080 - 0x0078)
class UMaterialExpressionCustomTexture : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCustomTexture");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDDX
// 0x0038 (0x00B0 - 0x0078)
class UMaterialExpressionDDX : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0078(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDDX");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDDY
// 0x0038 (0x00B0 - 0x0078)
class UMaterialExpressionDDY : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0078(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDDY");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDepthFade
// 0x0078 (0x00F0 - 0x0078)
class UMaterialExpressionDepthFade : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0078(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDepthFade");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDepthOfFieldFunction
// 0x0040 (0x00B8 - 0x0078)
class UMaterialExpressionDepthOfFieldFunction : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0078(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDepthOfFieldFunction");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDeriveNormalZ
// 0x0038 (0x00B0 - 0x0078)
class UMaterialExpressionDeriveNormalZ : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0078(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDeriveNormalZ");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDesaturation
// 0x0080 (0x00F8 - 0x0078)
class UMaterialExpressionDesaturation : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0078(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDesaturation");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDistance
// 0x0070 (0x00E8 - 0x0078)
class UMaterialExpressionDistance : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0078(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDistance");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDistanceCullFade
// 0x0000 (0x0078 - 0x0078)
class UMaterialExpressionDistanceCullFade : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDistanceCullFade");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDivide
// 0x0078 (0x00F0 - 0x0078)
class UMaterialExpressionDivide : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0078(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDivide");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDotProduct
// 0x0070 (0x00E8 - 0x0078)
class UMaterialExpressionDotProduct : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0078(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDotProduct");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDynamicParameter
// 0x0010 (0x0088 - 0x0078)
class UMaterialExpressionDynamicParameter : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0078(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDynamicParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionEyeAdaptation
// 0x0000 (0x0078 - 0x0078)
class UMaterialExpressionEyeAdaptation : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionEyeAdaptation");
		return ptr;
	}

};


// Class Engine.MaterialExpressionFeatureLevelSwitch
// 0x0118 (0x0190 - 0x0078)
class UMaterialExpressionFeatureLevelSwitch : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x118];                                     // 0x0078(0x0118) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFeatureLevelSwitch");
		return ptr;
	}

};


// Class Engine.MaterialExpressionFloor
// 0x0038 (0x00B0 - 0x0078)
class UMaterialExpressionFloor : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0078(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFloor");
		return ptr;
	}

};


// Class Engine.MaterialExpressionFmod
// 0x0070 (0x00E8 - 0x0078)
class UMaterialExpressionFmod : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0078(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFmod");
		return ptr;
	}

};


// Class Engine.MaterialExpressionFontSample
// 0x0010 (0x0088 - 0x0078)
class UMaterialExpressionFontSample : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0078(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFontSample");
		return ptr;
	}

};


// Class Engine.MaterialExpressionFontSampleParameter
// 0x0020 (0x00A8 - 0x0088)
class UMaterialExpressionFontSampleParameter : public UMaterialExpressionFontSample
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0088(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFontSampleParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionFrac
// 0x0038 (0x00B0 - 0x0078)
class UMaterialExpressionFrac : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0078(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFrac");
		return ptr;
	}

};


// Class Engine.MaterialExpressionFresnel
// 0x00B8 (0x0130 - 0x0078)
class UMaterialExpressionFresnel : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0078(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFresnel");
		return ptr;
	}

};


// Class Engine.MaterialExpressionFunctionOutput
// 0x0078 (0x00F0 - 0x0078)
class UMaterialExpressionFunctionOutput : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0078(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFunctionOutput");
		return ptr;
	}

};


// Class Engine.MaterialExpressionGIReplace
// 0x00A8 (0x0120 - 0x0078)
class UMaterialExpressionGIReplace : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0078(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionGIReplace");
		return ptr;
	}

};


// Class Engine.MaterialExpressionIf
// 0x0128 (0x01A0 - 0x0078)
class UMaterialExpressionIf : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x128];                                     // 0x0078(0x0128) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionIf");
		return ptr;
	}

};


// Class Engine.MaterialExpressionFunctionInput
// 0x0098 (0x0110 - 0x0078)
class UMaterialExpressionFunctionInput : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x0078(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFunctionInput");
		return ptr;
	}

};


// Class Engine.MaterialExpressionLandscapeLayerBlend
// 0x0020 (0x0098 - 0x0078)
class UMaterialExpressionLandscapeLayerBlend : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0078(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionLandscapeLayerBlend");
		return ptr;
	}

};


// Class Engine.MaterialExpressionLandscapeLayerCoords
// 0x0018 (0x0090 - 0x0078)
class UMaterialExpressionLandscapeLayerCoords : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0078(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionLandscapeLayerCoords");
		return ptr;
	}

};


// Class Engine.MaterialExpressionLandscapeLayerSample
// 0x0020 (0x0098 - 0x0078)
class UMaterialExpressionLandscapeLayerSample : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0078(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionLandscapeLayerSample");
		return ptr;
	}

};


// Class Engine.MaterialExpressionLandscapeLayerSwitch
// 0x0090 (0x0108 - 0x0078)
class UMaterialExpressionLandscapeLayerSwitch : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0078(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionLandscapeLayerSwitch");
		return ptr;
	}

};


// Class Engine.MaterialExpressionLandscapeVisibilityMask
// 0x0010 (0x0088 - 0x0078)
class UMaterialExpressionLandscapeVisibilityMask : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0078(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionLandscapeVisibilityMask");
		return ptr;
	}

};


// Class Engine.MaterialExpressionLightmapUVs
// 0x0000 (0x0078 - 0x0078)
class UMaterialExpressionLightmapUVs : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionLightmapUVs");
		return ptr;
	}

};


// Class Engine.MaterialExpressionLightmassReplace
// 0x0070 (0x00E8 - 0x0078)
class UMaterialExpressionLightmassReplace : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0078(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionLightmassReplace");
		return ptr;
	}

};


// Class Engine.MaterialExpressionLightVector
// 0x0000 (0x0078 - 0x0078)
class UMaterialExpressionLightVector : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionLightVector");
		return ptr;
	}

};


// Class Engine.MaterialExpressionLinearInterpolate
// 0x00B8 (0x0130 - 0x0078)
class UMaterialExpressionLinearInterpolate : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0078(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionLinearInterpolate");
		return ptr;
	}

};


// Class Engine.MaterialExpressionMakeMaterialAttributes
// 0x05E8 (0x0660 - 0x0078)
class UMaterialExpressionMakeMaterialAttributes : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x5E8];                                     // 0x0078(0x05E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionMakeMaterialAttributes");
		return ptr;
	}

};


// Class Engine.MaterialExpressionMaterialFunctionCall
// 0x0028 (0x00A0 - 0x0078)
class UMaterialExpressionMaterialFunctionCall : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0078(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionMaterialFunctionCall");
		return ptr;
	}

};


// Class Engine.MaterialExpressionMax
// 0x0078 (0x00F0 - 0x0078)
class UMaterialExpressionMax : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0078(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionMax");
		return ptr;
	}

};


// Class Engine.MaterialExpressionMin
// 0x0078 (0x00F0 - 0x0078)
class UMaterialExpressionMin : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0078(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionMin");
		return ptr;
	}

};


// Class Engine.MaterialExpressionMultiply
// 0x0078 (0x00F0 - 0x0078)
class UMaterialExpressionMultiply : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0078(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionMultiply");
		return ptr;
	}

};


// Class Engine.MaterialExpressionNoise
// 0x0090 (0x0108 - 0x0078)
class UMaterialExpressionNoise : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0078(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionNoise");
		return ptr;
	}

};


// Class Engine.MaterialExpressionNormalize
// 0x0038 (0x00B0 - 0x0078)
class UMaterialExpressionNormalize : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0078(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionNormalize");
		return ptr;
	}

};


// Class Engine.MaterialExpressionObjectBounds
// 0x0000 (0x0078 - 0x0078)
class UMaterialExpressionObjectBounds : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionObjectBounds");
		return ptr;
	}

};


// Class Engine.MaterialExpressionObjectOrientation
// 0x0000 (0x0078 - 0x0078)
class UMaterialExpressionObjectOrientation : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionObjectOrientation");
		return ptr;
	}

};


// Class Engine.MaterialExpressionObjectPositionWS
// 0x0000 (0x0078 - 0x0078)
class UMaterialExpressionObjectPositionWS : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionObjectPositionWS");
		return ptr;
	}

};


// Class Engine.MaterialExpressionObjectRadius
// 0x0000 (0x0078 - 0x0078)
class UMaterialExpressionObjectRadius : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionObjectRadius");
		return ptr;
	}

};


// Class Engine.MaterialExpressionOneMinus
// 0x0038 (0x00B0 - 0x0078)
class UMaterialExpressionOneMinus : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0078(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionOneMinus");
		return ptr;
	}

};


// Class Engine.MaterialExpressionPanner
// 0x0080 (0x00F8 - 0x0078)
class UMaterialExpressionPanner : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0078(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionPanner");
		return ptr;
	}

};


// Class Engine.MaterialExpressionParameter
// 0x0020 (0x0098 - 0x0078)
class UMaterialExpressionParameter : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0078(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionScalarParameter
// 0x0008 (0x00A0 - 0x0098)
class UMaterialExpressionScalarParameter : public UMaterialExpressionParameter
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0098(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionScalarParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionStaticBoolParameter
// 0x0008 (0x00A0 - 0x0098)
class UMaterialExpressionStaticBoolParameter : public UMaterialExpressionParameter
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0098(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionStaticBoolParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionStaticSwitchParameter
// 0x0070 (0x0110 - 0x00A0)
class UMaterialExpressionStaticSwitchParameter : public UMaterialExpressionStaticBoolParameter
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x00A0(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionStaticSwitchParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionStaticComponentMaskParameter
// 0x0040 (0x00D8 - 0x0098)
class UMaterialExpressionStaticComponentMaskParameter : public UMaterialExpressionParameter
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0098(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionStaticComponentMaskParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionVectorParameter
// 0x0010 (0x00A8 - 0x0098)
class UMaterialExpressionVectorParameter : public UMaterialExpressionParameter
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0098(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionVectorParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionParticleColor
// 0x0000 (0x0078 - 0x0078)
class UMaterialExpressionParticleColor : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParticleColor");
		return ptr;
	}

};


// Class Engine.MaterialExpressionParticleDirection
// 0x0000 (0x0078 - 0x0078)
class UMaterialExpressionParticleDirection : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParticleDirection");
		return ptr;
	}

};


// Class Engine.MaterialExpressionParticleMacroUV
// 0x0000 (0x0078 - 0x0078)
class UMaterialExpressionParticleMacroUV : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParticleMacroUV");
		return ptr;
	}

};


// Class Engine.MaterialExpressionParticleMotionBlurFade
// 0x0000 (0x0078 - 0x0078)
class UMaterialExpressionParticleMotionBlurFade : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParticleMotionBlurFade");
		return ptr;
	}

};


// Class Engine.MaterialExpressionParticlePositionWS
// 0x0000 (0x0078 - 0x0078)
class UMaterialExpressionParticlePositionWS : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParticlePositionWS");
		return ptr;
	}

};


// Class Engine.MaterialExpressionParticleRadius
// 0x0000 (0x0078 - 0x0078)
class UMaterialExpressionParticleRadius : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParticleRadius");
		return ptr;
	}

};


// Class Engine.MaterialExpressionParticleRelativeTime
// 0x0000 (0x0078 - 0x0078)
class UMaterialExpressionParticleRelativeTime : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParticleRelativeTime");
		return ptr;
	}

};


// Class Engine.MaterialExpressionParticleSize
// 0x0000 (0x0078 - 0x0078)
class UMaterialExpressionParticleSize : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParticleSize");
		return ptr;
	}

};


// Class Engine.MaterialExpressionParticleSpeed
// 0x0000 (0x0078 - 0x0078)
class UMaterialExpressionParticleSpeed : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParticleSpeed");
		return ptr;
	}

};


// Class Engine.MaterialExpressionPerInstanceFadeAmount
// 0x0000 (0x0078 - 0x0078)
class UMaterialExpressionPerInstanceFadeAmount : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionPerInstanceFadeAmount");
		return ptr;
	}

};


// Class Engine.MaterialExpressionPerInstanceRandom
// 0x0000 (0x0078 - 0x0078)
class UMaterialExpressionPerInstanceRandom : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionPerInstanceRandom");
		return ptr;
	}

};


// Class Engine.MaterialExpressionPixelDepth
// 0x0000 (0x0078 - 0x0078)
class UMaterialExpressionPixelDepth : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionPixelDepth");
		return ptr;
	}

};


// Class Engine.MaterialExpressionPixelNormalWS
// 0x0000 (0x0078 - 0x0078)
class UMaterialExpressionPixelNormalWS : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionPixelNormalWS");
		return ptr;
	}

};


// Class Engine.MaterialExpressionPlatformSwitch
// 0x0348 (0x03C0 - 0x0078)
class UMaterialExpressionPlatformSwitch : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x348];                                     // 0x0078(0x0348) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionPlatformSwitch");
		return ptr;
	}

};


// Class Engine.MaterialExpressionPower
// 0x0078 (0x00F0 - 0x0078)
class UMaterialExpressionPower : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0078(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionPower");
		return ptr;
	}

};


// Class Engine.MaterialExpressionQualitySwitch
// 0x00A8 (0x0120 - 0x0078)
class UMaterialExpressionQualitySwitch : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0078(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionQualitySwitch");
		return ptr;
	}

};


// Class Engine.MaterialExpressionReflectionVectorWS
// 0x0040 (0x00B8 - 0x0078)
class UMaterialExpressionReflectionVectorWS : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0078(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionReflectionVectorWS");
		return ptr;
	}

};


// Class Engine.MaterialExpressionRotateAboutAxis
// 0x00E8 (0x0160 - 0x0078)
class UMaterialExpressionRotateAboutAxis : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0xE8];                                      // 0x0078(0x00E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionRotateAboutAxis");
		return ptr;
	}

};


// Class Engine.MaterialExpressionRotator
// 0x0080 (0x00F8 - 0x0078)
class UMaterialExpressionRotator : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0078(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionRotator");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSceneColor
// 0x0080 (0x00F8 - 0x0078)
class UMaterialExpressionSceneColor : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0078(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSceneColor");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSceneDepth
// 0x0080 (0x00F8 - 0x0078)
class UMaterialExpressionSceneDepth : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0078(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSceneDepth");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSceneTexelSize
// 0x0000 (0x0078 - 0x0078)
class UMaterialExpressionSceneTexelSize : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSceneTexelSize");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSceneTexture
// 0x0040 (0x00B8 - 0x0078)
class UMaterialExpressionSceneTexture : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0078(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSceneTexture");
		return ptr;
	}

};


// Class Engine.MaterialExpressionScreenPosition
// 0x0000 (0x0078 - 0x0078)
class UMaterialExpressionScreenPosition : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionScreenPosition");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSine
// 0x0040 (0x00B8 - 0x0078)
class UMaterialExpressionSine : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0078(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSine");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSpeedTree
// 0x0008 (0x0080 - 0x0078)
class UMaterialExpressionSpeedTree : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSpeedTree");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSphereMask
// 0x00E8 (0x0160 - 0x0078)
class UMaterialExpressionSphereMask : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0xE8];                                      // 0x0078(0x00E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSphereMask");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSphericalParticleOpacity
// 0x0040 (0x00B8 - 0x0078)
class UMaterialExpressionSphericalParticleOpacity : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0078(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSphericalParticleOpacity");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSquareRoot
// 0x0038 (0x00B0 - 0x0078)
class UMaterialExpressionSquareRoot : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0078(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSquareRoot");
		return ptr;
	}

};


// Class Engine.MaterialExpressionStaticBool
// 0x0008 (0x0080 - 0x0078)
class UMaterialExpressionStaticBool : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionStaticBool");
		return ptr;
	}

};


// Class Engine.MaterialExpressionStaticSwitch
// 0x00B0 (0x0128 - 0x0078)
class UMaterialExpressionStaticSwitch : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0078(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionStaticSwitch");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSubtract
// 0x0078 (0x00F0 - 0x0078)
class UMaterialExpressionSubtract : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0078(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSubtract");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureBase
// 0x0010 (0x0088 - 0x0078)
class UMaterialExpressionTextureBase : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0078(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureBase");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureObject
// 0x0000 (0x0088 - 0x0088)
class UMaterialExpressionTextureObject : public UMaterialExpressionTextureBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureObject");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureSample
// 0x00B8 (0x0140 - 0x0088)
class UMaterialExpressionTextureSample : public UMaterialExpressionTextureBase
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0088(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureSample");
		return ptr;
	}

};


// Class Engine.MaterialExpressionParticleSubUV
// 0x0008 (0x0148 - 0x0140)
class UMaterialExpressionParticleSubUV : public UMaterialExpressionTextureSample
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0140(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParticleSubUV");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureSampleParameter
// 0x0020 (0x0160 - 0x0140)
class UMaterialExpressionTextureSampleParameter : public UMaterialExpressionTextureSample
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0140(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureSampleParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureObjectParameter
// 0x0000 (0x0160 - 0x0160)
class UMaterialExpressionTextureObjectParameter : public UMaterialExpressionTextureSampleParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureObjectParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureSampleParameter2D
// 0x0000 (0x0160 - 0x0160)
class UMaterialExpressionTextureSampleParameter2D : public UMaterialExpressionTextureSampleParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureSampleParameter2D");
		return ptr;
	}

};


// Class Engine.MaterialExpressionAntialiasedTextureMask
// 0x0008 (0x0168 - 0x0160)
class UMaterialExpressionAntialiasedTextureMask : public UMaterialExpressionTextureSampleParameter2D
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0160(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionAntialiasedTextureMask");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureSampleParameterSubUV
// 0x0008 (0x0168 - 0x0160)
class UMaterialExpressionTextureSampleParameterSubUV : public UMaterialExpressionTextureSampleParameter2D
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0160(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureSampleParameterSubUV");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureSampleParameterCube
// 0x0000 (0x0160 - 0x0160)
class UMaterialExpressionTextureSampleParameterCube : public UMaterialExpressionTextureSampleParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureSampleParameterCube");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureCoordinate
// 0x0010 (0x0088 - 0x0078)
class UMaterialExpressionTextureCoordinate : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0078(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureCoordinate");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTime
// 0x0008 (0x0080 - 0x0078)
class UMaterialExpressionTime : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTime");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTransform
// 0x0040 (0x00B8 - 0x0078)
class UMaterialExpressionTransform : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0078(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTransform");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTransformPosition
// 0x0040 (0x00B8 - 0x0078)
class UMaterialExpressionTransformPosition : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0078(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTransformPosition");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTwoSidedSign
// 0x0000 (0x0078 - 0x0078)
class UMaterialExpressionTwoSidedSign : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTwoSidedSign");
		return ptr;
	}

};


// Class Engine.MaterialExpressionVertexColor
// 0x0000 (0x0078 - 0x0078)
class UMaterialExpressionVertexColor : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionVertexColor");
		return ptr;
	}

};


// Class Engine.MaterialExpressionVertexNormalWS
// 0x0000 (0x0078 - 0x0078)
class UMaterialExpressionVertexNormalWS : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionVertexNormalWS");
		return ptr;
	}

};


// Class Engine.MaterialExpressionViewSize
// 0x0000 (0x0078 - 0x0078)
class UMaterialExpressionViewSize : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionViewSize");
		return ptr;
	}

};


// Class Engine.MaterialExpressionWorldPosition
// 0x0008 (0x0080 - 0x0078)
class UMaterialExpressionWorldPosition : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionWorldPosition");
		return ptr;
	}

};


// Class Engine.MaterialFunction
// 0x0050 (0x0078 - 0x0028)
class UMaterialFunction : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0028(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialFunction");
		return ptr;
	}

};


// Class Engine.Material
// 0x0A30 (0x0A90 - 0x0060)
class UMaterial : public UMaterialInterface
{
public:
	unsigned char                                      UnknownData00[0xA30];                                     // 0x0060(0x0A30) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Material");
		return ptr;
	}

};


// Class Engine.MaterialInstance
// 0x01A0 (0x0200 - 0x0060)
class UMaterialInstance : public UMaterialInterface
{
public:
	unsigned char                                      UnknownData00[0x1A0];                                     // 0x0060(0x01A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialInstance");
		return ptr;
	}

};


// Class Engine.MaterialInstanceConstant
// 0x0000 (0x0200 - 0x0200)
class UMaterialInstanceConstant : public UMaterialInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialInstanceConstant");
		return ptr;
	}

};


// Class Engine.LandscapeMaterialInstanceConstant
// 0x0010 (0x0210 - 0x0200)
class ULandscapeMaterialInstanceConstant : public UMaterialInstanceConstant
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0200(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LandscapeMaterialInstanceConstant");
		return ptr;
	}

};


// Class Engine.MaterialInstanceDynamic
// 0x0000 (0x0200 - 0x0200)
class UMaterialInstanceDynamic : public UMaterialInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialInstanceDynamic");
		return ptr;
	}


	void SetVectorParameterValue(const struct FName& ParameterName, const struct FLinearColor& Value);
	void SetTextureParameterValue(const struct FName& ParameterName, class UTexture* Value);
	void SetScalarParameterValue(const struct FName& ParameterName, float Value);
	void K2_InterpolateMaterialInstanceParams(class UMaterialInstance* MaterialA, class UMaterialInstance* MaterialB, float Alpha);
	struct FLinearColor K2_GetVectorParameterValue(const struct FName& ParameterName);
	class UTexture* K2_GetTextureParameterValue(const struct FName& ParameterName);
	float K2_GetScalarParameterValue(const struct FName& ParameterName);
	void K2_CopyMaterialInstanceParameters(class UMaterialInterface* SourceMaterialToCopyFrom);
	void CopyParameterOverrides(class UMaterialInstance* MaterialInstance);
};


// Class Engine.MaterialParameterCollection
// 0x0038 (0x0060 - 0x0028)
class UMaterialParameterCollection : public UObject
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0028(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialParameterCollection");
		return ptr;
	}

};


// Class Engine.MaterialParameterCollectionInstance
// 0x00C0 (0x00E8 - 0x0028)
class UMaterialParameterCollectionInstance : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0028(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialParameterCollectionInstance");
		return ptr;
	}

};


// Class Engine.MatineeInterface
// 0x0000 (0x0028 - 0x0028)
class UMatineeInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MatineeInterface");
		return ptr;
	}

};


// Class Engine.NavArea
// 0x0018 (0x0040 - 0x0028)
class UNavArea : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavArea");
		return ptr;
	}

};


// Class Engine.NavArea_Default
// 0x0000 (0x0040 - 0x0040)
class UNavArea_Default : public UNavArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavArea_Default");
		return ptr;
	}

};


// Class Engine.NavArea_Null
// 0x0000 (0x0040 - 0x0040)
class UNavArea_Null : public UNavArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavArea_Null");
		return ptr;
	}

};


// Class Engine.NavAreaMeta
// 0x0000 (0x0040 - 0x0040)
class UNavAreaMeta : public UNavArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavAreaMeta");
		return ptr;
	}

};


// Class Engine.NavAreaMeta_SwitchByAgent
// 0x0080 (0x00C0 - 0x0040)
class UNavAreaMeta_SwitchByAgent : public UNavAreaMeta
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0040(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavAreaMeta_SwitchByAgent");
		return ptr;
	}

};


// Class Engine.NavCollision
// 0x00E0 (0x0108 - 0x0028)
class UNavCollision : public UObject
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0028(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavCollision");
		return ptr;
	}

};


// Class Engine.NavigationPath
// 0x0048 (0x0070 - 0x0028)
class UNavigationPath : public UObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0028(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavigationPath");
		return ptr;
	}


	void OnNavigationPathUpdated__DelegateSignature(class UNavigationPath* AffectedPath, TEnumAsByte<ENavPathEvent> PathEvent);
	bool IsValid();
	bool IsStringPulled();
	bool IsPartial();
	float GetPathLength();
	float GetPathCost();
	struct FString GetDebugString();
	void EnableRecalculationOnInvalidation(TEnumAsByte<ENavigationOptionFlag> DoRecalculation);
	void EnableDebugDrawing(bool bShouldDrawDebugData, const struct FLinearColor& PathColor);
};


// Class Engine.NavigationPathGenerator
// 0x0000 (0x0028 - 0x0028)
class UNavigationPathGenerator : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavigationPathGenerator");
		return ptr;
	}

};


// Class Engine.RecastFilter_UseDefaultArea
// 0x0000 (0x0040 - 0x0040)
class URecastFilter_UseDefaultArea : public UNavigationQueryFilter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RecastFilter_UseDefaultArea");
		return ptr;
	}

};


// Class Engine.NavLinkTrivial
// 0x0000 (0x0050 - 0x0050)
class UNavLinkTrivial : public UNavLinkDefinition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavLinkTrivial");
		return ptr;
	}

};


// Class Engine.NavNodeInterface
// 0x0000 (0x0028 - 0x0028)
class UNavNodeInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavNodeInterface");
		return ptr;
	}

};


// Class Engine.NetworkSettings
// 0x0008 (0x0030 - 0x0028)
class UNetworkSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NetworkSettings");
		return ptr;
	}

};


// Class Engine.NiagaraEffect
// 0x0010 (0x0038 - 0x0028)
class UNiagaraEffect : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NiagaraEffect");
		return ptr;
	}

};


// Class Engine.NiagaraScript
// 0x0030 (0x0058 - 0x0028)
class UNiagaraScript : public UObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0028(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NiagaraScript");
		return ptr;
	}

};


// Class Engine.NiagaraScriptSourceBase
// 0x0000 (0x0028 - 0x0028)
class UNiagaraScriptSourceBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NiagaraScriptSourceBase");
		return ptr;
	}

};


// Class Engine.ObjectLibrary
// 0x0048 (0x0070 - 0x0028)
class UObjectLibrary : public UObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0028(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ObjectLibrary");
		return ptr;
	}

};


// Class Engine.ObjectReferencer
// 0x0010 (0x0038 - 0x0028)
class UObjectReferencer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ObjectReferencer");
		return ptr;
	}

};


// Class Engine.PackageMapClient
// 0x0148 (0x0188 - 0x0040)
class UPackageMapClient : public UPackageMap
{
public:
	unsigned char                                      UnknownData00[0x148];                                     // 0x0040(0x0148) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PackageMapClient");
		return ptr;
	}

};


// Class Engine.ParticleEmitter
// 0x0040 (0x0068 - 0x0028)
class UParticleEmitter : public UObject
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0028(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleEmitter");
		return ptr;
	}

};


// Class Engine.ParticleSpriteEmitter
// 0x0000 (0x0068 - 0x0068)
class UParticleSpriteEmitter : public UParticleEmitter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleSpriteEmitter");
		return ptr;
	}

};


// Class Engine.ParticleLODLevel
// 0x0090 (0x00B8 - 0x0028)
class UParticleLODLevel : public UObject
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0028(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleLODLevel");
		return ptr;
	}

};


// Class Engine.ParticleModule
// 0x0008 (0x0030 - 0x0028)
class UParticleModule : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModule");
		return ptr;
	}

};


// Class Engine.ParticleModuleAccelerationBase
// 0x0008 (0x0038 - 0x0030)
class UParticleModuleAccelerationBase : public UParticleModule
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAccelerationBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleAcceleration
// 0x0040 (0x0078 - 0x0038)
class UParticleModuleAcceleration : public UParticleModuleAccelerationBase
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0038(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAcceleration");
		return ptr;
	}

};


// Class Engine.ParticleModuleAccelerationConstant
// 0x0010 (0x0048 - 0x0038)
class UParticleModuleAccelerationConstant : public UParticleModuleAccelerationBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAccelerationConstant");
		return ptr;
	}

};


// Class Engine.ParticleModuleAccelerationDrag
// 0x0008 (0x0040 - 0x0038)
class UParticleModuleAccelerationDrag : public UParticleModuleAccelerationBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAccelerationDrag");
		return ptr;
	}

};


// Class Engine.MaterialExpressionLandscapeLayerWeight
// 0x0098 (0x0110 - 0x0078)
class UMaterialExpressionLandscapeLayerWeight : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x0078(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionLandscapeLayerWeight");
		return ptr;
	}

};


// Class Engine.ParticleModuleAccelerationOverLifetime
// 0x0038 (0x0070 - 0x0038)
class UParticleModuleAccelerationOverLifetime : public UParticleModuleAccelerationBase
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0038(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAccelerationOverLifetime");
		return ptr;
	}

};


// Class Engine.ParticleModuleAttractorBase
// 0x0000 (0x0030 - 0x0030)
class UParticleModuleAttractorBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAttractorBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleAttractorLine
// 0x0088 (0x00B8 - 0x0030)
class UParticleModuleAttractorLine : public UParticleModuleAttractorBase
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0030(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAttractorLine");
		return ptr;
	}

};


// Class Engine.ParticleModuleAttractorParticle
// 0x0090 (0x00C0 - 0x0030)
class UParticleModuleAttractorParticle : public UParticleModuleAttractorBase
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0030(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAttractorParticle");
		return ptr;
	}

};


// Class Engine.ParticleModuleAttractorPoint
// 0x00B0 (0x00E0 - 0x0030)
class UParticleModuleAttractorPoint : public UParticleModuleAttractorBase
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0030(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAttractorPoint");
		return ptr;
	}

};


// Class Engine.ParticleModuleAttractorPointGravity
// 0x0018 (0x0048 - 0x0030)
class UParticleModuleAttractorPointGravity : public UParticleModuleAttractorBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAttractorPointGravity");
		return ptr;
	}

};


// Class Engine.ParticleModuleBeamBase
// 0x0000 (0x0030 - 0x0030)
class UParticleModuleBeamBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleBeamBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleBeamModifier
// 0x00C0 (0x00F0 - 0x0030)
class UParticleModuleBeamModifier : public UParticleModuleBeamBase
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0030(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleBeamModifier");
		return ptr;
	}

};


// Class Engine.ParticleModuleBeamNoise
// 0x0158 (0x0188 - 0x0030)
class UParticleModuleBeamNoise : public UParticleModuleBeamBase
{
public:
	unsigned char                                      UnknownData00[0x158];                                     // 0x0030(0x0158) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleBeamNoise");
		return ptr;
	}

};


// Class Engine.ParticleModuleBeamSource
// 0x00D0 (0x0100 - 0x0030)
class UParticleModuleBeamSource : public UParticleModuleBeamBase
{
public:
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0030(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleBeamSource");
		return ptr;
	}

};


// Class Engine.ParticleModuleBeamTarget
// 0x00D0 (0x0100 - 0x0030)
class UParticleModuleBeamTarget : public UParticleModuleBeamBase
{
public:
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0030(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleBeamTarget");
		return ptr;
	}

};


// Class Engine.ParticleModuleCameraBase
// 0x0000 (0x0030 - 0x0030)
class UParticleModuleCameraBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleCameraBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleCameraOffset
// 0x0040 (0x0070 - 0x0030)
class UParticleModuleCameraOffset : public UParticleModuleCameraBase
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0030(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleCameraOffset");
		return ptr;
	}

};


// Class Engine.ParticleModuleCollisionBase
// 0x0000 (0x0030 - 0x0030)
class UParticleModuleCollisionBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleCollisionBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleCollision
// 0x0150 (0x0180 - 0x0030)
class UParticleModuleCollision : public UParticleModuleCollisionBase
{
public:
	unsigned char                                      UnknownData00[0x150];                                     // 0x0030(0x0150) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleCollision");
		return ptr;
	}

};


// Class Engine.ParticleModuleCollisionGPU
// 0x0080 (0x00B0 - 0x0030)
class UParticleModuleCollisionGPU : public UParticleModuleCollisionBase
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0030(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleCollisionGPU");
		return ptr;
	}

};


// Class Engine.ParticleModuleColorBase
// 0x0000 (0x0030 - 0x0030)
class UParticleModuleColorBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleColorBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleColor
// 0x0078 (0x00A8 - 0x0030)
class UParticleModuleColor : public UParticleModuleColorBase
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0030(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleColor");
		return ptr;
	}

};


// Class Engine.ParticleModuleColor_Seeded
// 0x0020 (0x00C8 - 0x00A8)
class UParticleModuleColor_Seeded : public UParticleModuleColor
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x00A8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleColor_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleColorOverLife
// 0x0078 (0x00A8 - 0x0030)
class UParticleModuleColorOverLife : public UParticleModuleColorBase
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0030(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleColorOverLife");
		return ptr;
	}

};


// Class Engine.ParticleModuleColorScaleOverLife
// 0x0078 (0x00A8 - 0x0030)
class UParticleModuleColorScaleOverLife : public UParticleModuleColorBase
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0030(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleColorScaleOverLife");
		return ptr;
	}

};


// Class Engine.ParticleModuleEventBase
// 0x0000 (0x0030 - 0x0030)
class UParticleModuleEventBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleEventBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleEventGenerator
// 0x0010 (0x0040 - 0x0030)
class UParticleModuleEventGenerator : public UParticleModuleEventBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleEventGenerator");
		return ptr;
	}

};


// Class Engine.ParticleModuleEventReceiverBase
// 0x0010 (0x0040 - 0x0030)
class UParticleModuleEventReceiverBase : public UParticleModuleEventBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleEventReceiverBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleEventReceiverKillParticles
// 0x0008 (0x0048 - 0x0040)
class UParticleModuleEventReceiverKillParticles : public UParticleModuleEventReceiverBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleEventReceiverKillParticles");
		return ptr;
	}

};


// Class Engine.ParticleModuleEventReceiverSpawn
// 0x0078 (0x00B8 - 0x0040)
class UParticleModuleEventReceiverSpawn : public UParticleModuleEventReceiverBase
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0040(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleEventReceiverSpawn");
		return ptr;
	}

};


// Class Engine.ParticleModuleKillBase
// 0x0000 (0x0030 - 0x0030)
class UParticleModuleKillBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleKillBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleKillBox
// 0x0078 (0x00A8 - 0x0030)
class UParticleModuleKillBox : public UParticleModuleKillBase
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0030(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleKillBox");
		return ptr;
	}

};


// Class Engine.ParticleModuleKillHeight
// 0x0040 (0x0070 - 0x0030)
class UParticleModuleKillHeight : public UParticleModuleKillBase
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0030(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleKillHeight");
		return ptr;
	}

};


// Class Engine.ParticleModuleLifetimeBase
// 0x0000 (0x0030 - 0x0030)
class UParticleModuleLifetimeBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLifetimeBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleLifetime
// 0x0038 (0x0068 - 0x0030)
class UParticleModuleLifetime : public UParticleModuleLifetimeBase
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0030(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLifetime");
		return ptr;
	}

};


// Class Engine.ParticleModuleLifetime_Seeded
// 0x0020 (0x0088 - 0x0068)
class UParticleModuleLifetime_Seeded : public UParticleModuleLifetime
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0068(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLifetime_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleLightBase
// 0x0000 (0x0030 - 0x0030)
class UParticleModuleLightBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLightBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleLight
// 0x00E8 (0x0118 - 0x0030)
class UParticleModuleLight : public UParticleModuleLightBase
{
public:
	unsigned char                                      UnknownData00[0xE8];                                      // 0x0030(0x00E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLight");
		return ptr;
	}

};


// Class Engine.ParticleModuleLight_Seeded
// 0x0020 (0x0138 - 0x0118)
class UParticleModuleLight_Seeded : public UParticleModuleLight
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0118(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLight_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationBase
// 0x0000 (0x0030 - 0x0030)
class UParticleModuleLocationBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocation
// 0x0040 (0x0070 - 0x0030)
class UParticleModuleLocation : public UParticleModuleLocationBase
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0030(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocation");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocation_Seeded
// 0x0020 (0x0090 - 0x0070)
class UParticleModuleLocation_Seeded : public UParticleModuleLocation
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0070(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocation_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationWorldOffset
// 0x0000 (0x0070 - 0x0070)
class UParticleModuleLocationWorldOffset : public UParticleModuleLocation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationWorldOffset");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationWorldOffset_Seeded
// 0x0020 (0x0090 - 0x0070)
class UParticleModuleLocationWorldOffset_Seeded : public UParticleModuleLocationWorldOffset
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0070(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationWorldOffset_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationBoneSocket
// 0x0030 (0x0060 - 0x0030)
class UParticleModuleLocationBoneSocket : public UParticleModuleLocationBase
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0030(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationBoneSocket");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationDirect
// 0x00E0 (0x0110 - 0x0030)
class UParticleModuleLocationDirect : public UParticleModuleLocationBase
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0030(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationDirect");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationEmitter
// 0x0020 (0x0050 - 0x0030)
class UParticleModuleLocationEmitter : public UParticleModuleLocationBase
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0030(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationEmitter");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationEmitterDirect
// 0x0008 (0x0038 - 0x0030)
class UParticleModuleLocationEmitterDirect : public UParticleModuleLocationBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationEmitterDirect");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationPrimitiveBase
// 0x0078 (0x00A8 - 0x0030)
class UParticleModuleLocationPrimitiveBase : public UParticleModuleLocationBase
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0030(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationPrimitiveBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleAccelerationDragScaleOverLife
// 0x0008 (0x0040 - 0x0038)
class UParticleModuleAccelerationDragScaleOverLife : public UParticleModuleAccelerationBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAccelerationDragScaleOverLife");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationPrimitiveCylinder
// 0x0080 (0x0128 - 0x00A8)
class UParticleModuleLocationPrimitiveCylinder : public UParticleModuleLocationPrimitiveBase
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x00A8(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationPrimitiveCylinder");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationPrimitiveCylinder_Seeded
// 0x0020 (0x0148 - 0x0128)
class UParticleModuleLocationPrimitiveCylinder_Seeded : public UParticleModuleLocationPrimitiveCylinder
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0128(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationPrimitiveCylinder_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationPrimitiveSphere
// 0x0038 (0x00E0 - 0x00A8)
class UParticleModuleLocationPrimitiveSphere : public UParticleModuleLocationPrimitiveBase
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x00A8(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationPrimitiveSphere");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationPrimitiveSphere_Seeded
// 0x0020 (0x0100 - 0x00E0)
class UParticleModuleLocationPrimitiveSphere_Seeded : public UParticleModuleLocationPrimitiveSphere
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x00E0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationPrimitiveSphere_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationPrimitiveTriangle
// 0x00E0 (0x0110 - 0x0030)
class UParticleModuleLocationPrimitiveTriangle : public UParticleModuleLocationBase
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0030(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationPrimitiveTriangle");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationSkelVertSurface
// 0x0060 (0x0090 - 0x0030)
class UParticleModuleLocationSkelVertSurface : public UParticleModuleLocationBase
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0030(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationSkelVertSurface");
		return ptr;
	}

};


// Class Engine.ParticleModulePivotOffset
// 0x0008 (0x0038 - 0x0030)
class UParticleModulePivotOffset : public UParticleModuleLocationBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModulePivotOffset");
		return ptr;
	}

};


// Class Engine.ParticleModuleSourceMovement
// 0x0038 (0x0068 - 0x0030)
class UParticleModuleSourceMovement : public UParticleModuleLocationBase
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0030(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSourceMovement");
		return ptr;
	}

};


// Class Engine.ParticleModuleMaterialBase
// 0x0000 (0x0030 - 0x0030)
class UParticleModuleMaterialBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleMaterialBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleMeshMaterial
// 0x0010 (0x0040 - 0x0030)
class UParticleModuleMeshMaterial : public UParticleModuleMaterialBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleMeshMaterial");
		return ptr;
	}

};


// Class Engine.ParticleModuleOrbitBase
// 0x0008 (0x0038 - 0x0030)
class UParticleModuleOrbitBase : public UParticleModule
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleOrbitBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleOrientationBase
// 0x0000 (0x0030 - 0x0030)
class UParticleModuleOrientationBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleOrientationBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleOrientationAxisLock
// 0x0008 (0x0038 - 0x0030)
class UParticleModuleOrientationAxisLock : public UParticleModuleOrientationBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleOrientationAxisLock");
		return ptr;
	}

};


// Class Engine.ParticleModuleParameterBase
// 0x0000 (0x0030 - 0x0030)
class UParticleModuleParameterBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleParameterBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleParameterDynamic
// 0x0018 (0x0048 - 0x0030)
class UParticleModuleParameterDynamic : public UParticleModuleParameterBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleParameterDynamic");
		return ptr;
	}

};


// Class Engine.ParticleModuleParameterDynamic_Seeded
// 0x0020 (0x0068 - 0x0048)
class UParticleModuleParameterDynamic_Seeded : public UParticleModuleParameterDynamic
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0048(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleParameterDynamic_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleRequired
// 0x0100 (0x0130 - 0x0030)
class UParticleModuleRequired : public UParticleModule
{
public:
	unsigned char                                      UnknownData00[0x100];                                     // 0x0030(0x0100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleRequired");
		return ptr;
	}

};


// Class Engine.ParticleModuleRotationBase
// 0x0000 (0x0030 - 0x0030)
class UParticleModuleRotationBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleRotationBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleMeshRotation
// 0x0040 (0x0070 - 0x0030)
class UParticleModuleMeshRotation : public UParticleModuleRotationBase
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0030(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleMeshRotation");
		return ptr;
	}

};


// Class Engine.ParticleModuleMeshRotation_Seeded
// 0x0020 (0x0090 - 0x0070)
class UParticleModuleMeshRotation_Seeded : public UParticleModuleMeshRotation
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0070(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleMeshRotation_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleRotation
// 0x0038 (0x0068 - 0x0030)
class UParticleModuleRotation : public UParticleModuleRotationBase
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0030(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleRotation");
		return ptr;
	}

};


// Class Engine.ParticleModuleRotation_Seeded
// 0x0020 (0x0088 - 0x0068)
class UParticleModuleRotation_Seeded : public UParticleModuleRotation
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0068(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleRotation_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleRotationOverLifetime
// 0x0040 (0x0070 - 0x0030)
class UParticleModuleRotationOverLifetime : public UParticleModuleRotationBase
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0030(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleRotationOverLifetime");
		return ptr;
	}

};


// Class Engine.ParticleModuleRotationRateBase
// 0x0000 (0x0030 - 0x0030)
class UParticleModuleRotationRateBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleRotationRateBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleMeshRotationRate
// 0x0038 (0x0068 - 0x0030)
class UParticleModuleMeshRotationRate : public UParticleModuleRotationRateBase
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0030(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleMeshRotationRate");
		return ptr;
	}

};


// Class Engine.ParticleModuleRotationRate
// 0x0038 (0x0068 - 0x0030)
class UParticleModuleRotationRate : public UParticleModuleRotationRateBase
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0030(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleRotationRate");
		return ptr;
	}

};


// Class Engine.ParticleModuleMeshRotationRate_Seeded
// 0x0020 (0x0088 - 0x0068)
class UParticleModuleMeshRotationRate_Seeded : public UParticleModuleMeshRotationRate
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0068(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleMeshRotationRate_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleMeshRotationRateMultiplyLife
// 0x0038 (0x0068 - 0x0030)
class UParticleModuleMeshRotationRateMultiplyLife : public UParticleModuleRotationRateBase
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0030(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleMeshRotationRateMultiplyLife");
		return ptr;
	}

};


// Class Engine.ParticleModuleMeshRotationRateOverLife
// 0x0040 (0x0070 - 0x0030)
class UParticleModuleMeshRotationRateOverLife : public UParticleModuleRotationRateBase
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0030(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleMeshRotationRateOverLife");
		return ptr;
	}

};


// Class Engine.ParticleModuleRotationRate_Seeded
// 0x0020 (0x0088 - 0x0068)
class UParticleModuleRotationRate_Seeded : public UParticleModuleRotationRate
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0068(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleRotationRate_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleRotationRateMultiplyLife
// 0x0038 (0x0068 - 0x0030)
class UParticleModuleRotationRateMultiplyLife : public UParticleModuleRotationRateBase
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0030(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleRotationRateMultiplyLife");
		return ptr;
	}

};


// Class Engine.ParticleModuleSizeBase
// 0x0000 (0x0030 - 0x0030)
class UParticleModuleSizeBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSizeBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleSize
// 0x0038 (0x0068 - 0x0030)
class UParticleModuleSize : public UParticleModuleSizeBase
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0030(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSize");
		return ptr;
	}

};


// Class Engine.ParticleModuleSize_Seeded
// 0x0020 (0x0088 - 0x0068)
class UParticleModuleSize_Seeded : public UParticleModuleSize
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0068(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSize_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleSizeMultiplyLife
// 0x0040 (0x0070 - 0x0030)
class UParticleModuleSizeMultiplyLife : public UParticleModuleSizeBase
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0030(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSizeMultiplyLife");
		return ptr;
	}

};


// Class Engine.ParticleModuleSizeScale
// 0x0040 (0x0070 - 0x0030)
class UParticleModuleSizeScale : public UParticleModuleSizeBase
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0030(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSizeScale");
		return ptr;
	}

};


// Class Engine.ParticleModuleSizeScaleBySpeed
// 0x0010 (0x0040 - 0x0030)
class UParticleModuleSizeScaleBySpeed : public UParticleModuleSizeBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSizeScaleBySpeed");
		return ptr;
	}

};


// Class Engine.ParticleModuleSpawnBase
// 0x0008 (0x0038 - 0x0030)
class UParticleModuleSpawnBase : public UParticleModule
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSpawnBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleSpawn
// 0x00C0 (0x00F8 - 0x0038)
class UParticleModuleSpawn : public UParticleModuleSpawnBase
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0038(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSpawn");
		return ptr;
	}

};


// Class Engine.ParticleModuleSpawnPerUnit
// 0x0050 (0x0088 - 0x0038)
class UParticleModuleSpawnPerUnit : public UParticleModuleSpawnBase
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0038(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSpawnPerUnit");
		return ptr;
	}

};


// Class Engine.ParticleModuleSubUVBase
// 0x0000 (0x0030 - 0x0030)
class UParticleModuleSubUVBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSubUVBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleSubUV
// 0x0040 (0x0070 - 0x0030)
class UParticleModuleSubUV : public UParticleModuleSubUVBase
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0030(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSubUV");
		return ptr;
	}

};


// Class Engine.ParticleModuleSubUVMovie
// 0x0048 (0x00B8 - 0x0070)
class UParticleModuleSubUVMovie : public UParticleModuleSubUV
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0070(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSubUVMovie");
		return ptr;
	}

};


// Class Engine.ParticleModuleTrailBase
// 0x0000 (0x0030 - 0x0030)
class UParticleModuleTrailBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTrailBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleTrailSource
// 0x0068 (0x0098 - 0x0030)
class UParticleModuleTrailSource : public UParticleModuleTrailBase
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0030(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTrailSource");
		return ptr;
	}

};


// Class Engine.ParticleModuleTypeDataBase
// 0x0000 (0x0030 - 0x0030)
class UParticleModuleTypeDataBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTypeDataBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleTypeDataAnimTrail
// 0x0018 (0x0048 - 0x0030)
class UParticleModuleTypeDataAnimTrail : public UParticleModuleTypeDataBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTypeDataAnimTrail");
		return ptr;
	}

};


// Class Engine.ParticleModuleTypeDataBeam2
// 0x00E8 (0x0118 - 0x0030)
class UParticleModuleTypeDataBeam2 : public UParticleModuleTypeDataBase
{
public:
	unsigned char                                      UnknownData00[0xE8];                                      // 0x0030(0x00E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTypeDataBeam2");
		return ptr;
	}

};


// Class Engine.ParticleModuleTypeDataGpu
// 0x03E0 (0x0410 - 0x0030)
class UParticleModuleTypeDataGpu : public UParticleModuleTypeDataBase
{
public:
	unsigned char                                      UnknownData00[0x3E0];                                     // 0x0030(0x03E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTypeDataGpu");
		return ptr;
	}

};


// Class Engine.ParticleModuleTypeDataMesh
// 0x0070 (0x00A0 - 0x0030)
class UParticleModuleTypeDataMesh : public UParticleModuleTypeDataBase
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0030(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTypeDataMesh");
		return ptr;
	}

};


// Class Engine.ParticleModuleTypeDataRibbon
// 0x0030 (0x0060 - 0x0030)
class UParticleModuleTypeDataRibbon : public UParticleModuleTypeDataBase
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0030(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTypeDataRibbon");
		return ptr;
	}

};


// Class Engine.ParticleModuleVectorFieldBase
// 0x0000 (0x0030 - 0x0030)
class UParticleModuleVectorFieldBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVectorFieldBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleVectorFieldGlobal
// 0x0010 (0x0040 - 0x0030)
class UParticleModuleVectorFieldGlobal : public UParticleModuleVectorFieldBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVectorFieldGlobal");
		return ptr;
	}

};


// Class Engine.ParticleModuleVectorFieldLocal
// 0x0038 (0x0068 - 0x0030)
class UParticleModuleVectorFieldLocal : public UParticleModuleVectorFieldBase
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0030(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVectorFieldLocal");
		return ptr;
	}

};


// Class Engine.ParticleModuleVectorFieldRotation
// 0x0018 (0x0048 - 0x0030)
class UParticleModuleVectorFieldRotation : public UParticleModuleVectorFieldBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVectorFieldRotation");
		return ptr;
	}

};


// Class Engine.ParticleModuleVectorFieldRotationRate
// 0x0010 (0x0040 - 0x0030)
class UParticleModuleVectorFieldRotationRate : public UParticleModuleVectorFieldBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVectorFieldRotationRate");
		return ptr;
	}

};


// Class Engine.ParticleModuleVectorFieldScale
// 0x0008 (0x0038 - 0x0030)
class UParticleModuleVectorFieldScale : public UParticleModuleVectorFieldBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVectorFieldScale");
		return ptr;
	}

};


// Class Engine.ParticleModuleVectorFieldScaleOverLife
// 0x0008 (0x0038 - 0x0030)
class UParticleModuleVectorFieldScaleOverLife : public UParticleModuleVectorFieldBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVectorFieldScaleOverLife");
		return ptr;
	}

};


// Class Engine.ParticleModuleVelocityBase
// 0x0008 (0x0038 - 0x0030)
class UParticleModuleVelocityBase : public UParticleModule
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVelocityBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleVelocity
// 0x0070 (0x00A8 - 0x0038)
class UParticleModuleVelocity : public UParticleModuleVelocityBase
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0038(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVelocity");
		return ptr;
	}

};


// Class Engine.ParticleModuleVelocity_Seeded
// 0x0020 (0x00C8 - 0x00A8)
class UParticleModuleVelocity_Seeded : public UParticleModuleVelocity
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x00A8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVelocity_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleVelocityCone
// 0x0080 (0x00B8 - 0x0038)
class UParticleModuleVelocityCone : public UParticleModuleVelocityBase
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0038(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVelocityCone");
		return ptr;
	}

};


// Class Engine.ParticleModuleVelocityInheritParent
// 0x0038 (0x0070 - 0x0038)
class UParticleModuleVelocityInheritParent : public UParticleModuleVelocityBase
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0038(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVelocityInheritParent");
		return ptr;
	}

};


// Class Engine.ParticleModuleVelocityOverLifetime
// 0x0040 (0x0078 - 0x0038)
class UParticleModuleVelocityOverLifetime : public UParticleModuleVelocityBase
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0038(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVelocityOverLifetime");
		return ptr;
	}

};


// Class Engine.ParticleModuleEventSendToGame
// 0x0000 (0x0028 - 0x0028)
class UParticleModuleEventSendToGame : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleEventSendToGame");
		return ptr;
	}

};


// Class Engine.ParticleSystemReplay
// 0x0018 (0x0040 - 0x0028)
class UParticleSystemReplay : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleSystemReplay");
		return ptr;
	}

};


// Class Engine.PhysicsSettings
// 0x0048 (0x0070 - 0x0028)
class UPhysicsSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0028(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsSettings");
		return ptr;
	}

};


// Class Engine.PhysicalMaterial
// 0x0050 (0x0078 - 0x0028)
class UPhysicalMaterial : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0028(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicalMaterial");
		return ptr;
	}

};


// Class Engine.PhysicalMaterialPropertyBase
// 0x0000 (0x0028 - 0x0028)
class UPhysicalMaterialPropertyBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicalMaterialPropertyBase");
		return ptr;
	}

};


// Class Engine.PhysicsAsset
// 0x00D0 (0x00F8 - 0x0028)
class UPhysicsAsset : public UObject
{
public:
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0028(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsAsset");
		return ptr;
	}

};


// Class Engine.PhysicsCollisionHandler
// 0x0018 (0x0040 - 0x0028)
class UPhysicsCollisionHandler : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsCollisionHandler");
		return ptr;
	}

};


// Class Engine.PhysicsConstraintTemplate
// 0x0218 (0x0240 - 0x0028)
class UPhysicsConstraintTemplate : public UObject
{
public:
	unsigned char                                      UnknownData00[0x218];                                     // 0x0028(0x0218) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsConstraintTemplate");
		return ptr;
	}

};


// Class Engine.PlatformInterfaceBase
// 0x0010 (0x0038 - 0x0028)
class UPlatformInterfaceBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlatformInterfaceBase");
		return ptr;
	}


	void PlatformInterfaceDelegate__DelegateSignature(const struct FPlatformInterfaceDelegateResult& Result);
};


// Class Engine.CloudStorageBase
// 0x0018 (0x0050 - 0x0038)
class UCloudStorageBase : public UPlatformInterfaceBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CloudStorageBase");
		return ptr;
	}

};


// Class Engine.InGameAdManager
// 0x0028 (0x0060 - 0x0038)
class UInGameAdManager : public UPlatformInterfaceBase
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0038(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InGameAdManager");
		return ptr;
	}


	void OnUserClosedAdvertisement__DelegateSignature();
	void OnUserClickedBanner__DelegateSignature();
};


// Class Engine.MicroTransactionBase
// 0x0030 (0x0068 - 0x0038)
class UMicroTransactionBase : public UPlatformInterfaceBase
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0038(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MicroTransactionBase");
		return ptr;
	}

};


// Class Engine.TwitterIntegrationBase
// 0x0000 (0x0038 - 0x0038)
class UTwitterIntegrationBase : public UPlatformInterfaceBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TwitterIntegrationBase");
		return ptr;
	}


	bool TwitterRequest(const struct FString& URL, TArray<struct FString> ParamKeysAndValues, TEnumAsByte<ETwitterRequestMethod> RequestMethod, int AccountIndex);
	bool ShowTweetUI(const struct FString& InitialMessage, const struct FString& URL, const struct FString& Picture);
	void Init();
	int GetNumAccounts();
	struct FString GetAccountName(int AccountIndex);
	bool CanShowTweetUI();
	bool AuthorizeAccounts();
};


// Class Engine.PlatformInterfaceWebResponse
// 0x0088 (0x00B0 - 0x0028)
class UPlatformInterfaceWebResponse : public UObject
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0028(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlatformInterfaceWebResponse");
		return ptr;
	}


	int GetNumHeaders();
	struct FString GetHeaderValue(const struct FString& HeaderName);
	void GetHeader(int HeaderIndex, struct FString* Header, struct FString* Value);
};


// Class Engine.ChildConnection
// 0x0008 (0x34280 - 0x34278)
class UChildConnection : public UNetConnection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x34278(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ChildConnection");
		return ptr;
	}

};


// Class Engine.Polys
// 0x0018 (0x0040 - 0x0028)
class UPolys : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Polys");
		return ptr;
	}

};


// Class Engine.ReflectionCaptureData
// 0x0058 (0x0080 - 0x0028)
class UReflectionCaptureData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0028(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ReflectionCaptureData");
		return ptr;
	}

};


// Class Engine.RendererSettings
// 0x0120 (0x0148 - 0x0028)
class URendererSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x120];                                     // 0x0028(0x0120) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RendererSettings");
		return ptr;
	}

};


// Class Engine.ReporterBase
// 0x0008 (0x0030 - 0x0028)
class UReporterBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ReporterBase");
		return ptr;
	}

};


// Class Engine.ReporterGraph
// 0x0070 (0x00A0 - 0x0030)
class UReporterGraph : public UReporterBase
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0030(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ReporterGraph");
		return ptr;
	}

};


// Class Engine.ReverbEffect
// 0x0030 (0x0058 - 0x0028)
class UReverbEffect : public UObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0028(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ReverbEffect");
		return ptr;
	}

};


// Class Engine.Rig
// 0x0020 (0x0048 - 0x0028)
class URig : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Rig");
		return ptr;
	}

};


// Class Engine.RuntimeMovieScenePlayerInterface
// 0x0000 (0x0028 - 0x0028)
class URuntimeMovieScenePlayerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RuntimeMovieScenePlayerInterface");
		return ptr;
	}

};


// Class Engine.SaveGameSummary
// 0x0018 (0x0040 - 0x0028)
class USaveGameSummary : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SaveGameSummary");
		return ptr;
	}

};


// Class Engine.SCS_Node
// 0x0070 (0x0098 - 0x0028)
class USCS_Node : public UObject
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0028(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SCS_Node");
		return ptr;
	}

};


// Class Engine.Selection
// 0x0030 (0x0058 - 0x0028)
class USelection : public UObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0028(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Selection");
		return ptr;
	}

};


// Class Engine.SimpleConstructionScript
// 0x0030 (0x0058 - 0x0028)
class USimpleConstructionScript : public UObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0028(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SimpleConstructionScript");
		return ptr;
	}

};


// Class Engine.DestructibleMesh
// 0x00A8 (0x02D8 - 0x0230)
class UDestructibleMesh : public USkeletalMesh
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0230(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DestructibleMesh");
		return ptr;
	}

};


// Class Engine.SkeletalMeshSocket
// 0x0038 (0x0060 - 0x0028)
class USkeletalMeshSocket : public UObject
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0028(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkeletalMeshSocket");
		return ptr;
	}


	void InitializeSocketFromLocation(class USkeletalMeshComponent* SkelComp, const struct FVector& WorldLocation, const struct FVector& WorldNormal);
	struct FVector GetSocketLocation(class USkeletalMeshComponent* SkelComp);
};


// Class Engine.SkyLightData
// 0x00A0 (0x00C8 - 0x0028)
class USkyLightData : public UObject
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0028(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkyLightData");
		return ptr;
	}

};


// Class Engine.SlateBrushAsset
// 0x0078 (0x00A0 - 0x0028)
class USlateBrushAsset : public UObject
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0028(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SlateBrushAsset");
		return ptr;
	}

};


// Class Engine.SoundBase
// 0x0030 (0x0058 - 0x0028)
class USoundBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0028(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundBase");
		return ptr;
	}

};


// Class Engine.DialogueSoundWaveProxy
// 0x0018 (0x0070 - 0x0058)
class UDialogueSoundWaveProxy : public USoundBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0058(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DialogueSoundWaveProxy");
		return ptr;
	}

};


// Class Engine.SoundCue
// 0x0050 (0x00A8 - 0x0058)
class USoundCue : public USoundBase
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0058(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundCue");
		return ptr;
	}

};


// Class Engine.SoundGroups
// 0x0060 (0x0088 - 0x0028)
class USoundGroups : public UObject
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0028(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundGroups");
		return ptr;
	}

};


// Class Engine.SoundWave
// 0x0198 (0x01F0 - 0x0058)
class USoundWave : public USoundBase
{
public:
	unsigned char                                      UnknownData00[0x198];                                     // 0x0058(0x0198) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundWave");
		return ptr;
	}

};


// Class Engine.SoundWaveStreaming
// 0x0018 (0x0208 - 0x01F0)
class USoundWaveStreaming : public USoundWave
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x01F0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundWaveStreaming");
		return ptr;
	}

};


// Class Engine.SoundClass
// 0x0060 (0x0088 - 0x0028)
class USoundClass : public UObject
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0028(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundClass");
		return ptr;
	}

};


// Class Engine.SoundMix
// 0x0050 (0x0078 - 0x0028)
class USoundMix : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0028(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundMix");
		return ptr;
	}

};


// Class Engine.SoundNodeAttenuation
// 0x0060 (0x0098 - 0x0038)
class USoundNodeAttenuation : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0038(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeAttenuation");
		return ptr;
	}

};


// Class Engine.SoundNodeBranch
// 0x0008 (0x0040 - 0x0038)
class USoundNodeBranch : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeBranch");
		return ptr;
	}

};


// Class Engine.SoundNodeConcatenator
// 0x0010 (0x0048 - 0x0038)
class USoundNodeConcatenator : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeConcatenator");
		return ptr;
	}

};


// Class Engine.SoundNodeDelay
// 0x0008 (0x0040 - 0x0038)
class USoundNodeDelay : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeDelay");
		return ptr;
	}

};


// Class Engine.SoundNodeDeprecated
// 0x0000 (0x0038 - 0x0038)
class USoundNodeDeprecated : public USoundNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeDeprecated");
		return ptr;
	}

};


// Class Engine.SoundNodeAmbient
// 0x0040 (0x0078 - 0x0038)
class USoundNodeAmbient : public USoundNodeDeprecated
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0038(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeAmbient");
		return ptr;
	}

};


// Class Engine.SoundNodeAmbientNonLoop
// 0x0008 (0x0080 - 0x0078)
class USoundNodeAmbientNonLoop : public USoundNodeAmbient
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeAmbientNonLoop");
		return ptr;
	}

};


// Class Engine.SoundNodeAmbientNonLoopToggle
// 0x0000 (0x0080 - 0x0080)
class USoundNodeAmbientNonLoopToggle : public USoundNodeAmbientNonLoop
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeAmbientNonLoopToggle");
		return ptr;
	}

};


// Class Engine.SoundNodeConcatenatorRadio
// 0x0000 (0x0038 - 0x0038)
class USoundNodeConcatenatorRadio : public USoundNodeDeprecated
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeConcatenatorRadio");
		return ptr;
	}

};


// Class Engine.SoundNodeWave
// 0x00A0 (0x00D8 - 0x0038)
class USoundNodeWave : public USoundNodeDeprecated
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0038(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeWave");
		return ptr;
	}

};


// Class Engine.SoundNodeDialoguePlayer
// 0x0028 (0x0060 - 0x0038)
class USoundNodeDialoguePlayer : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0038(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeDialoguePlayer");
		return ptr;
	}

};


// Class Engine.SoundNodeDistanceCrossFade
// 0x0010 (0x0048 - 0x0038)
class USoundNodeDistanceCrossFade : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeDistanceCrossFade");
		return ptr;
	}

};


// Class Engine.SoundNodeParamCrossFade
// 0x0008 (0x0050 - 0x0048)
class USoundNodeParamCrossFade : public USoundNodeDistanceCrossFade
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeParamCrossFade");
		return ptr;
	}

};


// Class Engine.SoundNodeDoppler
// 0x0008 (0x0040 - 0x0038)
class USoundNodeDoppler : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeDoppler");
		return ptr;
	}

};


// Class Engine.SoundNodeEnveloper
// 0x0118 (0x0150 - 0x0038)
class USoundNodeEnveloper : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x118];                                     // 0x0038(0x0118) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeEnveloper");
		return ptr;
	}

};


// Class Engine.SoundNodeGroupControl
// 0x0010 (0x0048 - 0x0038)
class USoundNodeGroupControl : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeGroupControl");
		return ptr;
	}

};


// Class Engine.SoundNodeLooping
// 0x0000 (0x0038 - 0x0038)
class USoundNodeLooping : public USoundNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeLooping");
		return ptr;
	}

};


// Class Engine.SoundNodeMature
// 0x0000 (0x0038 - 0x0038)
class USoundNodeMature : public USoundNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeMature");
		return ptr;
	}

};


// Class Engine.SoundNodeMixer
// 0x0010 (0x0048 - 0x0038)
class USoundNodeMixer : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeMixer");
		return ptr;
	}

};


// Class Engine.SoundNodeModulator
// 0x0010 (0x0048 - 0x0038)
class USoundNodeModulator : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeModulator");
		return ptr;
	}

};


// Class Engine.SoundNodeModulatorContinuous
// 0x00B0 (0x00E8 - 0x0038)
class USoundNodeModulatorContinuous : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0038(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeModulatorContinuous");
		return ptr;
	}

};


// Class Engine.SoundNodeOscillator
// 0x0028 (0x0060 - 0x0038)
class USoundNodeOscillator : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0038(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeOscillator");
		return ptr;
	}

};


// Class Engine.SoundNodeRandom
// 0x0030 (0x0068 - 0x0038)
class USoundNodeRandom : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0038(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeRandom");
		return ptr;
	}

};


// Class Engine.SoundNodeSoundClass
// 0x0008 (0x0040 - 0x0038)
class USoundNodeSoundClass : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeSoundClass");
		return ptr;
	}

};


// Class Engine.ParticleModuleOrbit
// 0x00C8 (0x0100 - 0x0038)
class UParticleModuleOrbit : public UParticleModuleOrbitBase
{
public:
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0038(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleOrbit");
		return ptr;
	}

};


// Class Engine.SoundNodeSwitch
// 0x0008 (0x0040 - 0x0038)
class USoundNodeSwitch : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeSwitch");
		return ptr;
	}

};


// Class Engine.SoundNodeWaveParam
// 0x0008 (0x0040 - 0x0038)
class USoundNodeWaveParam : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeWaveParam");
		return ptr;
	}

};


// Class Engine.SoundNodeWavePlayer
// 0x0010 (0x0048 - 0x0038)
class USoundNodeWavePlayer : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeWavePlayer");
		return ptr;
	}

};


// Class Engine.StaticMesh
// 0x00C8 (0x00F0 - 0x0028)
class UStaticMesh : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0028(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.StaticMesh");
		return ptr;
	}

};


// Class Engine.StaticMeshSocket
// 0x0030 (0x0058 - 0x0028)
class UStaticMeshSocket : public UObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0028(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.StaticMeshSocket");
		return ptr;
	}

};


// Class Engine.SubsurfaceProfile
// 0x0028 (0x0050 - 0x0028)
class USubsurfaceProfile : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SubsurfaceProfile");
		return ptr;
	}

};


// Class Engine.TextPropertyTestObject
// 0x0078 (0x00A0 - 0x0028)
class UTextPropertyTestObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0028(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TextPropertyTestObject");
		return ptr;
	}

};


// Class Engine.Texture
// 0x0080 (0x00A8 - 0x0028)
class UTexture : public UObject
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0028(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Texture");
		return ptr;
	}

};


// Class Engine.Texture2D
// 0x00B0 (0x0158 - 0x00A8)
class UTexture2D : public UTexture
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x00A8(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Texture2D");
		return ptr;
	}


	int Blueprint_GetSizeY();
	int Blueprint_GetSizeX();
};


// Class Engine.LightMapTexture2D
// 0x0008 (0x0160 - 0x0158)
class ULightMapTexture2D : public UTexture2D
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0158(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightMapTexture2D");
		return ptr;
	}

};


// Class Engine.ShadowMapTexture2D
// 0x0008 (0x0160 - 0x0158)
class UShadowMapTexture2D : public UTexture2D
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0158(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ShadowMapTexture2D");
		return ptr;
	}

};


// Class Engine.TextureLightProfile
// 0x0008 (0x0160 - 0x0158)
class UTextureLightProfile : public UTexture2D
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0158(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TextureLightProfile");
		return ptr;
	}

};


// Class Engine.Texture2DDynamic
// 0x0018 (0x00C0 - 0x00A8)
class UTexture2DDynamic : public UTexture
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x00A8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Texture2DDynamic");
		return ptr;
	}

};


// Class Engine.TextureCube
// 0x0058 (0x0100 - 0x00A8)
class UTextureCube : public UTexture
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x00A8(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TextureCube");
		return ptr;
	}

};


// Class Engine.TextureRenderTarget
// 0x0008 (0x00B0 - 0x00A8)
class UTextureRenderTarget : public UTexture
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00A8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TextureRenderTarget");
		return ptr;
	}

};


// Class Engine.TextureRenderTarget2D
// 0x0028 (0x00D8 - 0x00B0)
class UTextureRenderTarget2D : public UTextureRenderTarget
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x00B0(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TextureRenderTarget2D");
		return ptr;
	}

};


// Class Engine.CanvasRenderTarget2D
// 0x0010 (0x00E8 - 0x00D8)
class UCanvasRenderTarget2D : public UTextureRenderTarget2D
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00D8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CanvasRenderTarget2D");
		return ptr;
	}


	void UpdateResource();
	void ReceiveUpdate(class UCanvas* Canvas, int Width, int Height);
	void OnCanvasRenderTargetUpdate__DelegateSignature(class UCanvas* Canvas, int Width, int Height);
	void GetSize(int* Width, int* Height);
	class UCanvasRenderTarget2D* CreateCanvasRenderTarget2D(class UClass* CanvasRenderTarget2DClass, int Width, int Height);
};


// Class Engine.TextureRenderTargetCube
// 0x0020 (0x00D0 - 0x00B0)
class UTextureRenderTargetCube : public UTextureRenderTarget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x00B0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TextureRenderTargetCube");
		return ptr;
	}

};


// Class Engine.ThumbnailInfo
// 0x0000 (0x0028 - 0x0028)
class UThumbnailInfo : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ThumbnailInfo");
		return ptr;
	}

};


// Class Engine.TimelineTemplate
// 0x0070 (0x0098 - 0x0028)
class UTimelineTemplate : public UObject
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0028(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TimelineTemplate");
		return ptr;
	}

};


// Class Engine.UserDefinedEnum
// 0x0010 (0x0068 - 0x0058)
class UUserDefinedEnum : public UEnum
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0058(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UserDefinedEnum");
		return ptr;
	}

};


// Class Engine.UserDefinedStruct
// 0x0000 (0x00A8 - 0x00A8)
class UUserDefinedStruct : public UScriptStruct
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UserDefinedStruct");
		return ptr;
	}

};


// Class Engine.VectorField
// 0x0020 (0x0048 - 0x0028)
class UVectorField : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VectorField");
		return ptr;
	}

};


// Class Engine.VectorFieldAnimated
// 0x0040 (0x0088 - 0x0048)
class UVectorFieldAnimated : public UVectorField
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0048(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VectorFieldAnimated");
		return ptr;
	}

};


// Class Engine.VectorFieldStatic
// 0x0060 (0x00A8 - 0x0048)
class UVectorFieldStatic : public UVectorField
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0048(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VectorFieldStatic");
		return ptr;
	}

};


// Class Engine.TouchInterface
// 0x0030 (0x0058 - 0x0028)
class UTouchInterface : public UObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0028(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TouchInterface");
		return ptr;
	}

};


// Class Engine.VehicleWheel
// 0x00B8 (0x00E0 - 0x0028)
class UVehicleWheel : public UObject
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0028(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VehicleWheel");
		return ptr;
	}


	float GetSuspensionOffset();
	float GetSteerAngle();
	float GetRotationAngle();
};


// Class Engine.VertexAnimBase
// 0x0008 (0x0030 - 0x0028)
class UVertexAnimBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VertexAnimBase");
		return ptr;
	}

};


// Class Engine.MorphTarget
// 0x0010 (0x0040 - 0x0030)
class UMorphTarget : public UVertexAnimBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MorphTarget");
		return ptr;
	}

};


// Class Engine.VertexAnimation
// 0x0018 (0x0048 - 0x0030)
class UVertexAnimation : public UVertexAnimBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VertexAnimation");
		return ptr;
	}

};


// Class Engine.WorldComposition
// 0x0068 (0x0090 - 0x0028)
class UWorldComposition : public UObject
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0028(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.WorldComposition");
		return ptr;
	}

};


// Class Engine.AnimNotifyState_Trail
// 0x0028 (0x0050 - 0x0028)
class UAnimNotifyState_Trail : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotifyState_Trail");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
