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

// Function wsp_beach_rocks_01.wsp_beach_rocks_01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Awsp_beach_rocks_01_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function wsp_beach_rocks_01.wsp_beach_rocks_01_C.UserConstructionScript");

	Awsp_beach_rocks_01_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
