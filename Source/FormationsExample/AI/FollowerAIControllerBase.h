// Copyright 2020 M Leach. All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "FollowerAIControllerBase.generated.h"

class UFormationMemberComponent;

/**
 *	Default AIController with a FormationMemberCompent default subobject. Also replaces
 *	the PathFollowingComponent with a UCrowdFollowingComponent to allow for better pathing response
 *	in tight formations. Use in conjuction with RVO on a character.
 */
UCLASS()
class FORMATIONSEXAMPLE_API AFollowerAIControllerBase : public AAIController
{
	GENERATED_BODY()

	/** Formation Member Component */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Formation System", meta = (AllowPrivateAccess = "true"))
	UFormationMemberComponent* FormationMemberComponent;

public:
	AFollowerAIControllerBase(const class FObjectInitializer& ObjectInitializer);
};
