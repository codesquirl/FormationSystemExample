// Copyright 2020 M Leach. All Rights Reserved.

#include "FormationsPlayerControllerBase.h"
#include "FS_FormationMemberComponent.h"


AFormationsPlayerControllerBase::AFormationsPlayerControllerBase() : Super()
{
	FormationMemberComponent = CreateDefaultSubobject<UFormationMemberComponent>(FName("FormationMemberComponent"));
}

void AFormationsPlayerControllerBase::BeginPlay()
{
	Super::BeginPlay();
}
