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

// Class VoiceGameChat.PlayfabPartyVoiceChannel
// 0x0000 (0x0090 - 0x0090)
class UPlayfabPartyVoiceChannel : public UVoiceChannel
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VoiceGameChat.PlayfabPartyVoiceChannel");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
