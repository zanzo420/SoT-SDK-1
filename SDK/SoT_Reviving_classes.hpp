#pragma once

// SeaOfThieves (1.6.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Reviving.DeathSelfInteractionComponent
// 0x0028 (0x0140 - 0x0118)
class UDeathSelfInteractionComponent : public UInteractableComponent
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0118(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Reviving.DeathSelfInteractionComponent");
		return ptr;
	}

};


// Class Reviving.ReviveableActionStateId
// 0x0000 (0x0028 - 0x0028)
class UReviveableActionStateId : public UActionStateId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Reviving.ReviveableActionStateId");
		return ptr;
	}

};


// Class Reviving.ReviveableCharacterInterface
// 0x0000 (0x0028 - 0x0028)
class UReviveableCharacterInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Reviving.ReviveableCharacterInterface");
		return ptr;
	}

};


// Class Reviving.ReviveableRepresentationInterface
// 0x0000 (0x0028 - 0x0028)
class UReviveableRepresentationInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Reviving.ReviveableRepresentationInterface");
		return ptr;
	}

};


// Class Reviving.ReviveInterface
// 0x0000 (0x0028 - 0x0028)
class UReviveInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Reviving.ReviveInterface");
		return ptr;
	}

};


// Class Reviving.ReviveComponent
// 0x00C8 (0x01E0 - 0x0118)
class UReviveComponent : public UInteractableComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0118(0x0010) MISSED OFFSET
	class ACharacter*                                  OwningCharacter;                                          // 0x0128(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReviveableRepresentationActor;                            // 0x0130(0x0008) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EReviveState>                          ReviveState;                                              // 0x0138(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInteractableState>                    InteractionState;                                         // 0x0139(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x013A(0x0006) MISSED OFFSET
	class UClass*                                      ReviveableRepresentationClass;                            // 0x0140(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ReviveTime;                                               // 0x0148(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaximumReviveDistance;                                    // 0x014C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x90];                                      // 0x0150(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Reviving.ReviveComponent");
		return ptr;
	}


	void OnRep_ReviveState(TEnumAsByte<EReviveState> PreviousReviveState);
	void HandleOwningCharacterEndPlay();
};


// Class Reviving.RevivedActionStateId
// 0x0000 (0x0028 - 0x0028)
class URevivedActionStateId : public UActionStateId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Reviving.RevivedActionStateId");
		return ptr;
	}

};


// Class Reviving.ReviveGhost
// 0x0120 (0x0530 - 0x0410)
class AReviveGhost : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0410(0x0010) MISSED OFFSET
	class USceneComponent*                             Root;                                                     // 0x0420(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      MeshComponent;                                            // 0x0428(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UAnimationDataStoreComponent*                AnimationDataStoreComponent;                              // 0x0430(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UDitherComponent*                            DitherComponent;                                          // 0x0438(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0440(0x0008) MISSED OFFSET
	class UGhostDataAsset*                             ReviveGhostDataAsset;                                     // 0x0448(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0xE0];                                      // 0x0450(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Reviving.ReviveGhost");
		return ptr;
	}


	void SetupGhostMaterials(class USkeletalMeshComponent* MeshComponent, class AActor* InReviveableOwner);
};


// Class Reviving.RevivePlayerActionStateId
// 0x0000 (0x0028 - 0x0028)
class URevivePlayerActionStateId : public UActionStateId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Reviving.RevivePlayerActionStateId");
		return ptr;
	}

};


// Class Reviving.ReviveSettings
// 0x0048 (0x0080 - 0x0038)
class UReviveSettings : public UDeveloperSettings
{
public:
	float                                              ReviveTime;                                               // 0x0038(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              RevivalGiveUpTime;                                        // 0x003C(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              ServerWaitTimeBeforeFullyReviving;                        // 0x0040(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                FadeColour;                                               // 0x0044(0x0010) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              AdventureDeathCameraBlackFadeDelay;                       // 0x0054(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              AdventureDeathCameraBlackFadeDuration;                    // 0x0058(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              AdventureDeathCameraBlackFadeEventClientTimeout;          // 0x005C(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              AdventureDeathCameraBlackFadeEventServerTimeout;          // 0x0060(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              AdventureDelayBeforeEvaporate;                            // 0x0064(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              ArenaDeathCameraBlackFadeDelay;                           // 0x0068(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              ArenaDeathCameraBlackFadeDuration;                        // 0x006C(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              ArenaDeathCameraBlackFadeEventClientTimeout;              // 0x0070(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              ArenaDeathCameraBlackFadeEventServerTimeout;              // 0x0074(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              ArenaDelayBeforeEvaporate;                                // 0x0078(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x007C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Reviving.ReviveSettings");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
