// Project:         Advanced Locomotion System V4 on C++
// Copyright:       Copyright (C) 2020 Doğa Can Yanıkoğlu
// License:         MIT License (http://www.opensource.org/licenses/mit-license.php)
// Source Code:     https://github.com/dyanikoglu/ALSV4_CPP
// Original Author: Doğa Can Yanıkoğlu
// Contributors:    


#pragma once

#include "CoreMinimal.h"
#include "ALSCharacterEnumLibrary.generated.h"

/* Returns the enumeration index. */
template <typename Enumeration>
static FORCEINLINE int32 GetEnumerationIndex(const Enumeration InValue)
{
	return StaticEnum<Enumeration>()->GetIndexByValue(static_cast<int64>(InValue));
}

/* Returns the enumeration value as string. */
template <typename Enumeration>
static FORCEINLINE FString GetEnumerationToString(const Enumeration InValue)
{
	return StaticEnum<Enumeration>()->GetNameStringByValue(static_cast<int64>(InValue));
}


UENUM(BlueprintType)
enum class EALSGait : uint8
{
	GaitSlow UMETA(DisplayName = "Slow"),
	GaitNormal UMETA(DisplayName = "Normal"),
	GaitFast UMETA(DisplayName = "Fast")
};

UENUM(BlueprintType)
enum class EALSMovementAction : uint8
{
	None,
	LowMantle,
	HighMantle,
	Rolling,
	GettingUp
};

UENUM(BlueprintType)
enum class EALSMovementState : uint8
{
	None,
    Grounded,
    Freefall,
    Flight,
    Swimming,
    Mantling,
    Ragdoll
};

UENUM(BlueprintType)
enum class EALSOverlayState : uint8
{
	Default,
	Masculine,
	Feminine,
	Injured,
	HandsTied,
	Rifle,
	PistolOneHanded,
	PistolTwoHanded,
	Bow,
	Torch,
	Binoculars,
	Box,
	Barrel
};

UENUM(BlueprintType)
enum class EALSRotationMode : uint8
{
	VelocityDirection,
	LookingDirection,
	Aiming
};

UENUM(BlueprintType)
enum class EALSFlightMode : uint8
{
	None,
    Neutral,
    Raising,
    Lowering,
    Hovering
};

UENUM(BlueprintType)
enum class EALSFlightCancelCondition : uint8
{
	Disabled UMETA(ToolTip = "Disable any automatic flight cancellation"),
	AnyHit UMETA(ToolTip = "Any event hit will trigger flight cancellation"),
	VelocityThreshold UMETA(ToolTip = "Hits on the player must be higher than a threshold to trigger flight cancellation"),
	Custom UMETA(Tooltip = "CheckFlightInteruption is called to determine if the hit triggers flight cancellation"),
	CustomOrThreshold UMETA(DisplayName = "Custom or Threshold", Tooltip = "CheckFlightInteruption is called in addition to velocity threshold check. Either will trigger flight cancellation"),
	CustomAndThreshold UMETA(DisplayName = "Custom and Threshold", Tooltip = "CheckFlightInteruption is called in addition to velocity threshold check. Both returning true will trigger flight cancellation")
};

UENUM(BlueprintType)
enum class EALSStance : uint8
{
	Standing,
	Crouching,
	Riding
};

UENUM(BlueprintType)
enum class EALSViewMode : uint8
{
	ThirdPerson,
	FirstPerson
};

UENUM(BlueprintType)
enum class EALSAnimFeatureExample : uint8
{
	StrideBlending,
	AdditiveBlending,
	SprintImpulse
};

UENUM(BlueprintType)
enum class EALSFootstepType : uint8
{
	Step,
	WalkRun,
	Jump,
	Land
};

UENUM(BlueprintType)
enum class EALSGroundedEntryState : uint8
{
	None,
	Roll
};

UENUM(BlueprintType)
enum class EALSHipsDirection : uint8
{
	F,
	B,
	RF,
	RB,
	LF,
	LB
};

UENUM(BlueprintType)
enum class EALSMantleType : uint8
{
	HighMantle,
	LowMantle,
	FallingCatch
};

UENUM(BlueprintType)
enum class EALSMovementDirection : uint8
{
	Forward,
	Right,
	Left,
	Backward
};
