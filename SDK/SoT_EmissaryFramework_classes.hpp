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

// Class EmissaryFramework.EmissaryLevelServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UEmissaryLevelServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EmissaryFramework.EmissaryLevelServiceInterface");
		return ptr;
	}

};


// Class EmissaryFramework.EmissaryParticipantInterface
// 0x0000 (0x0028 - 0x0028)
class UEmissaryParticipantInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EmissaryFramework.EmissaryParticipantInterface");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
