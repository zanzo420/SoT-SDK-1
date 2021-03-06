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

// Class Interaction.InteractableComponent
// 0x0050 (0x0118 - 0x00C8)
class UInteractableComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
	struct FName                                       FeatureFlag;                                              // 0x00D0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BoxExtent;                                                // 0x00D8(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BoxOrigin;                                                // 0x00E4(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    BoxRotation;                                              // 0x00F0(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      MayBeGrouped : 1;                                         // 0x00FC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      ProxyForActorInteraction : 1;                             // 0x00FC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00FD(0x0003) MISSED OFFSET
	bool                                               RequiresFacingFront;                                      // 0x0100(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               RequiresNotAirborne;                                      // 0x0101(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               RequiresNotSwimming;                                      // 0x0102(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x0103(0x0005) MISSED OFFSET
	class UInteractableArea*                           InteractableArea;                                         // 0x0108(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TEnumAsByte<EInteractableState>                    CurrentInteractionState;                                  // 0x0110(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0111(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interaction.InteractableComponent");
		return ptr;
	}


	void SetBoxOrigin(const struct FVector& IntBoxOrigin);
	void SetBoxExtent(const struct FVector& InBoxExtent);
	class UInteractableArea* GetInteractableArea();
	struct FVector GetBoxWorldOrigin();
	float GetBoxSphereRadius();
	struct FVector GetBoxOrigin();
	struct FVector GetBoxExtent();
};


// Class Interaction.InteractionValidatorSetterInterface
// 0x0000 (0x0028 - 0x0028)
class UInteractionValidatorSetterInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interaction.InteractionValidatorSetterInterface");
		return ptr;
	}

};


// Class Interaction.CharacterInteractionComponent
// 0x00D0 (0x0670 - 0x05A0)
class UCharacterInteractionComponent : public UBoxComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x05A0(0x0008) MISSED OFFSET
	class UInteractableArea*                           CurrentOptimalInteractable;                               // 0x05A8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC0];                                      // 0x05B0(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interaction.CharacterInteractionComponent");
		return ptr;
	}


	bool IsInteractionValid(class UObject* InInteractable);
	void InvalidateOptimalObject();
	class UInteractableArea* GetOptimalFocusObject();
	void ClearAllPolicies();
};


// Class Interaction.GroupedInteractableAreaComponent
// 0x0000 (0x00C8 - 0x00C8)
class UGroupedInteractableAreaComponent : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interaction.GroupedInteractableAreaComponent");
		return ptr;
	}

};


// Class Interaction.InteractableArea
// 0x0038 (0x0060 - 0x0028)
class UInteractableArea : public UObject
{
public:
	struct FBoxSphereBounds                            Bounds;                                                   // 0x0028(0x001C) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Name;                                                     // 0x0044(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	class UObject*                                     Interactable;                                             // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      Parent;                                                   // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interaction.InteractableArea");
		return ptr;
	}


	void SetParent(class AActor* InParent);
	void SetInteractable(class UObject* InInteractable);
	void SetAreaName(const struct FName& InName);
	void SetAreaBounds(const struct FBoxSphereBounds& InBounds);
	class AActor* GetParent();
	class UObject* GetInteractable();
	struct FName GetAreaName();
	struct FVector GetAreaLocation();
	struct FBoxSphereBounds GetAreaBounds();
};


// Class Interaction.InteractableInterface
// 0x0000 (0x0028 - 0x0028)
class UInteractableInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interaction.InteractableInterface");
		return ptr;
	}


	bool ShouldDrawTooltipInWorldSpace(class AActor* InInteractor, struct FVector* DesiredTooltipWorldPosition);
	bool IsInteractableDisabled();
	void Interact(class AActor* InInteractor, class UClass* NotificationInputId);
	TEnumAsByte<EInteractableState> GetInteractionState();
	struct FVector GetFrontFacingVector();
	struct FVector GetClosestInteractionPoint(const struct FVector& ReferencePosition, float* OutInteractionPointRadius);
	void GetActorsToIgnoreDuringOcclusionChecker(TArray<class AActor*>* ActorsToIgnore);
	class UActionRulesComponent* GetActionRulesComponent();
	bool DoesRequireNotSwimming();
	bool DoesRequireNotBeingAirborne();
	bool DoesRequireFacingFront();
	bool CanInteractWithNotificationInputId(class AActor* InInteractor, class UClass* NotificationInputId);
	bool CanInteract(class AActor* InInteractor);
};


// Class Interaction.InteractableIdentifierInterface
// 0x0000 (0x0028 - 0x0028)
class UInteractableIdentifierInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interaction.InteractableIdentifierInterface");
		return ptr;
	}

};


// Class Interaction.InteractableServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UInteractableServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interaction.InteractableServiceInterface");
		return ptr;
	}

};


// Class Interaction.InteractableService
// 0x0048 (0x0070 - 0x0028)
class UInteractableService : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
	TArray<class UInteractableArea*>                   InteractableAreas;                                        // 0x0038(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0048(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interaction.InteractableService");
		return ptr;
	}

};


// Class Interaction.InteractionValidatorOwnerInterface
// 0x0000 (0x0028 - 0x0028)
class UInteractionValidatorOwnerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interaction.InteractionValidatorOwnerInterface");
		return ptr;
	}

};


// Class Interaction.InteractorInterface
// 0x0000 (0x0028 - 0x0028)
class UInteractorInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interaction.InteractorInterface");
		return ptr;
	}

};


// Class Interaction.MockActorWithCharacterInteractionComponent
// 0x00B0 (0x06C0 - 0x0610)
class AMockActorWithCharacterInteractionComponent : public ACharacter
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0610(0x0008) MISSED OFFSET
	class UCharacterInteractionComponent*              CharacterInteractionComponent;                            // 0x0618(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0xA0];                                      // 0x0620(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interaction.MockActorWithCharacterInteractionComponent");
		return ptr;
	}

};


// Class Interaction.MockInteractableService
// 0x0018 (0x0040 - 0x0028)
class UMockInteractableService : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interaction.MockInteractableService");
		return ptr;
	}

};


// Class Interaction.MockInteractorActor
// 0x0028 (0x0438 - 0x0410)
class AMockInteractorActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0410(0x0008) MISSED OFFSET
	class UObject*                                     FocusedInteractable;                                      // 0x0418(0x0008) (ZeroConstructor, IsPlainOldData)
	class UObject*                                     InteractedObject;                                         // 0x0420(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      InteractNotificationType;                                 // 0x0428(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0430(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interaction.MockInteractorActor");
		return ptr;
	}

};


// Class Interaction.SelfInteractionInterface
// 0x0000 (0x0028 - 0x0028)
class USelfInteractionInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interaction.SelfInteractionInterface");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
