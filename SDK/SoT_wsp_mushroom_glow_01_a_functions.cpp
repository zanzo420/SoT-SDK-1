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

// Function wsp_mushroom_glow_01_a.wsp_mushroom_glow_01_a_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Awsp_mushroom_glow_01_a_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function wsp_mushroom_glow_01_a.wsp_mushroom_glow_01_a_C.UserConstructionScript");

	Awsp_mushroom_glow_01_a_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
