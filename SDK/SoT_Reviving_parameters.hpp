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

// Function Reviving.ReviveComponent.OnRep_ReviveState
struct UReviveComponent_OnRep_ReviveState_Params
{
	TEnumAsByte<EReviveState>                          PreviousReviveState;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Reviving.ReviveComponent.HandleOwningCharacterEndPlay
struct UReviveComponent_HandleOwningCharacterEndPlay_Params
{
};

// Function Reviving.ReviveGhost.SetupGhostMaterials
struct AReviveGhost_SetupGhostMaterials_Params
{
	class USkeletalMeshComponent*                      MeshComponent;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      InReviveableOwner;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
