// SeaOfThieves (1.6.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EmissaryLevel.EmissaryParticipantComponent.OnRep_EmissaryLevel
// (Final, RequiredAPI, Native, Private)

void UEmissaryParticipantComponent::OnRep_EmissaryLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function EmissaryLevel.EmissaryParticipantComponent.OnRep_EmissaryLevel");

	UEmissaryParticipantComponent_OnRep_EmissaryLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmissaryLevel.EmissaryVoyageInlineVoteConsumerBase.OnRep_Votes
// (Final, RequiredAPI, Native, Private)

void UEmissaryVoyageInlineVoteConsumerBase::OnRep_Votes()
{
	static auto fn = UObject::FindObject<UFunction>("Function EmissaryLevel.EmissaryVoyageInlineVoteConsumerBase.OnRep_Votes");

	UEmissaryVoyageInlineVoteConsumerBase_OnRep_Votes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
