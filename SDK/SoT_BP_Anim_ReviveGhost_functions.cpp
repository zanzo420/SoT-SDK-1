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

// Function BP_Anim_ReviveGhost.BP_Anim_ReviveGhost_C.AnimNotify_OutOfComplete
// (BlueprintCallable, BlueprintEvent)

void UBP_Anim_ReviveGhost_C::AnimNotify_OutOfComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Anim_ReviveGhost.BP_Anim_ReviveGhost_C.AnimNotify_OutOfComplete");

	UBP_Anim_ReviveGhost_C_AnimNotify_OutOfComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Anim_ReviveGhost.BP_Anim_ReviveGhost_C.ExecuteUbergraph_BP_Anim_ReviveGhost
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Anim_ReviveGhost_C::ExecuteUbergraph_BP_Anim_ReviveGhost(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Anim_ReviveGhost.BP_Anim_ReviveGhost_C.ExecuteUbergraph_BP_Anim_ReviveGhost");

	UBP_Anim_ReviveGhost_C_ExecuteUbergraph_BP_Anim_ReviveGhost_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
