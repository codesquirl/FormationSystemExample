// Copyright 2020 M Leach. All Rights Reserved.

#include "FollowerAIControllerBase.h"
#include "Navigation/CrowdFollowingComponent.h"
#include "FS_FormationMemberComponent.h"

/**
 *	Constructor to replace the PathFollowingComponent with the CrowdFollowingComponent.
 *	See ADetourCrowdAIController
 */
AFollowerAIControllerBase::AFollowerAIControllerBase(const class FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer.SetDefaultSubobjectClass<UCrowdFollowingComponent>(TEXT("PathFollowingComponent")))
{
	FormationMemberComponent = CreateDefaultSubobject<UFormationMemberComponent>(FName("FormationMemberComponent"));
}


