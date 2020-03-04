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

// Class EmissaryLevel.EmissaryEntitlementCategory
// 0x0000 (0x0080 - 0x0080)
class UEmissaryEntitlementCategory : public UItemCategory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EmissaryLevel.EmissaryEntitlementCategory");
		return ptr;
	}

};


// Class EmissaryLevel.EmissaryEntitlementDesc
// 0x0000 (0x00D8 - 0x00D8)
class UEmissaryEntitlementDesc : public UEntitlementDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EmissaryLevel.EmissaryEntitlementDesc");
		return ptr;
	}

};


// Class EmissaryLevel.EmissaryFlotsamItemSpawnComponent
// 0x0080 (0x04A0 - 0x0420)
class UEmissaryFlotsamItemSpawnComponent : public UItemSpawnComponent
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0420(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EmissaryLevel.EmissaryFlotsamItemSpawnComponent");
		return ptr;
	}

};


// Class EmissaryLevel.EmissaryLevelServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UEmissaryLevelServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EmissaryLevel.EmissaryLevelServiceInterface");
		return ptr;
	}

};


// Class EmissaryLevel.EmissaryLevelSettingsAsset
// 0x0020 (0x0048 - 0x0028)
class UEmissaryLevelSettingsAsset : public UDataAsset
{
public:
	TArray<struct FEmissaryLevelEntry>                 EmissaryLevelData;                                        // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FStringAssetReference                       DefaultEmissaryFlagAssetReference;                        // 0x0038(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EmissaryLevel.EmissaryLevelSettingsAsset");
		return ptr;
	}

};


// Class EmissaryLevel.EmissaryRewardSettingsAsset
// 0x0010 (0x0038 - 0x0028)
class UEmissaryRewardSettingsAsset : public UDataAsset
{
public:
	TArray<struct FEmissaryRewardEntry>                EmissaryRewardData;                                       // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EmissaryLevel.EmissaryRewardSettingsAsset");
		return ptr;
	}

};


// Class EmissaryLevel.EmissaryLevelService
// 0x0108 (0x0518 - 0x0410)
class AEmissaryLevelService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0410(0x0068) MISSED OFFSET
	class UEmissaryLevelSettingsAsset*                 Settings;                                                 // 0x0478(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEmissaryRewardSettingsAsset*                RewardSettings;                                           // 0x0480(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x90];                                      // 0x0488(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EmissaryLevel.EmissaryLevelService");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
