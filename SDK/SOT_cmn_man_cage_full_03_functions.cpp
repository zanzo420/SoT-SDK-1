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

// Function cmn_man_cage_full_03.cmn_man_cage_full_03_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Acmn_man_cage_full_03_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function cmn_man_cage_full_03.cmn_man_cage_full_03_C.UserConstructionScript");

	Acmn_man_cage_full_03_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
