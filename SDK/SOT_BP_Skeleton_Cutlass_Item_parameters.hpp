#pragma once

// SeaOfThieves (1.6.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Skeleton_Cutlass_Item.BP_Skeleton_Cutlass_Item_C.DoBlockEffect
struct ABP_Skeleton_Cutlass_Item_C_DoBlockEffect_Params
{
};

// Function BP_Skeleton_Cutlass_Item.BP_Skeleton_Cutlass_Item_C.UserConstructionScript
struct ABP_Skeleton_Cutlass_Item_C_UserConstructionScript_Params
{
};

// Function BP_Skeleton_Cutlass_Item.BP_Skeleton_Cutlass_Item_C.OnBlockedAttack
struct ABP_Skeleton_Cutlass_Item_C_OnBlockedAttack_Params
{
	struct FEventBlocked*                              Event;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function BP_Skeleton_Cutlass_Item.BP_Skeleton_Cutlass_Item_C.ExecuteUbergraph_BP_Skeleton_Cutlass_Item
struct ABP_Skeleton_Cutlass_Item_C_ExecuteUbergraph_BP_Skeleton_Cutlass_Item_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
