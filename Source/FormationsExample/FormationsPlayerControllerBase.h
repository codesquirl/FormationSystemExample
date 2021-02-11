// Copyright 2020 M Leach. All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "FormationsPlayerControllerBase.generated.h"

class UFormationMemberComponent;

/**
 * Base class for Player Controllers that can lead formations.
 */
UCLASS()
class FORMATIONSEXAMPLE_API AFormationsPlayerControllerBase : public APlayerController
{
	GENERATED_BODY()

	/** Formation Member Component */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Formation System", meta = (AllowPrivateAccess = "true"))
	UFormationMemberComponent* FormationMemberComponent;

public:
	AFormationsPlayerControllerBase();
	virtual void BeginPlay() override;
};
