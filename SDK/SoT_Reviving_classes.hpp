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
// 0x00E0 (0x04F0 - 0x0410)
class AReviveGhost : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0410(0x0010) MISSED OFFSET
	class USkeletalMeshComponent*                      MeshComponent;                                            // 0x0420(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UAnimationDataStoreComponent*                AnimationDataStoreComponent;                              // 0x0428(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UDitherComponent*                            DitherComponent;                                          // 0x0430(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UReviveGhostDataAsset*                       ReviveGhostDataAsset;                                     // 0x0438(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0xB0];                                      // 0x0440(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Reviving.ReviveGhost");
		return ptr;
	}


	void SetupGhostMaterials(class USkeletalMeshComponent* MeshComponent);
};


// Class Reviving.ReviveGhostDataAsset
// 0x0008 (0x0030 - 0x0028)
class UReviveGhostDataAsset : public UDataAsset
{
public:
	float                                              DespawnTime;                                              // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Reviving.ReviveGhostDataAsset");
		return ptr;
	}

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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
