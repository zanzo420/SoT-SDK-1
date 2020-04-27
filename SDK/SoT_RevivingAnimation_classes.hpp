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

// Class RevivingAnimation.ReviveGhostAnimationData
// 0x0008 (0x0030 - 0x0028)
class UReviveGhostAnimationData : public UAnimationData
{
public:
	class UReviveGhostAnimationDataAsset*              ReviveAnimationsDataAsset;                                // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class RevivingAnimation.ReviveGhostAnimationData");
		return ptr;
	}

};


// Class RevivingAnimation.ReviveGhostAnimationDataAsset
// 0x0020 (0x0048 - 0x0028)
class UReviveGhostAnimationDataAsset : public UDataAsset
{
public:
	struct FReviveGhostAnimations                      Animations;                                               // 0x0028(0x0020) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class RevivingAnimation.ReviveGhostAnimationDataAsset");
		return ptr;
	}

};


// Class RevivingAnimation.ReviveGhostAnimationInstance
// 0x0050 (0x0490 - 0x0440)
class UReviveGhostAnimationInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0440(0x0008) MISSED OFFSET
	struct FReviveGhostAnimations                      ReviveAnimations;                                         // 0x0448(0x0020) (BlueprintVisible, BlueprintReadOnly)
	bool                                               FullyInitialised;                                         // 0x0468(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               FullyRevived;                                             // 0x0469(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData01[0x26];                                      // 0x046A(0x0026) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class RevivingAnimation.ReviveGhostAnimationInstance");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
