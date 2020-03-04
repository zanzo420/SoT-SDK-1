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

// Class CrewOwnershipTracking.CrewOwnershipTrackingInterface
// 0x0000 (0x0028 - 0x0028)
class UCrewOwnershipTrackingInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CrewOwnershipTracking.CrewOwnershipTrackingInterface");
		return ptr;
	}

};


// Class CrewOwnershipTracking.CrewOwnershipTrackingComponent
// 0x0088 (0x0150 - 0x00C8)
class UCrewOwnershipTrackingComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
	struct FGuid                                       FirstOwnedByCrewId;                                       // 0x00D0(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       LastOwnedByCrewId;                                        // 0x00E0(0x0010) (ZeroConstructor, IsPlainOldData)
	TArray<struct FGuid>                               PreviousOwnerList;                                        // 0x00F0(0x0010) (ZeroConstructor)
	TMap<struct FName, struct FOwnerListEntry>         PreviousOwnerMap;                                         // 0x0100(0x0050) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CrewOwnershipTracking.CrewOwnershipTrackingComponent");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
