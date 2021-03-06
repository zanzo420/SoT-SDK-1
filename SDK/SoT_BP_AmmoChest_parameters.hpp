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

// Function BP_AmmoChest.BP_AmmoChest_C.GetObjectDisplayName
struct ABP_AmmoChest_C_GetObjectDisplayName_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_AmmoChest.BP_AmmoChest_C.GetClosestInteractionPoint
struct ABP_AmmoChest_C_GetClosestInteractionPoint_Params
{
	struct FVector*                                    ReferencePosition;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              OutInteractionPointRadius;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_AmmoChest.BP_AmmoChest_C.UserConstructionScript
struct ABP_AmmoChest_C_UserConstructionScript_Params
{
};

// Function BP_AmmoChest.BP_AmmoChest_C.ReceiveBeginPlay
struct ABP_AmmoChest_C_ReceiveBeginPlay_Params
{
};

// Function BP_AmmoChest.BP_AmmoChest_C.Blueprint_OnInteract_Client
struct ABP_AmmoChest_C_Blueprint_OnInteract_Client_Params
{
	class AActor**                                     InInteractor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmmoChest.BP_AmmoChest_C.Blueprint_OnInteract_Server
struct ABP_AmmoChest_C_Blueprint_OnInteract_Server_Params
{
	class AActor**                                     InInteractor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmmoChest.BP_AmmoChest_C.ExecuteUbergraph_BP_AmmoChest
struct ABP_AmmoChest_C_ExecuteUbergraph_BP_AmmoChest_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
