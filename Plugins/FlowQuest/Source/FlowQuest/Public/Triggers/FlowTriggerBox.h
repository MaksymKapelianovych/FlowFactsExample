#pragma once

#include "Triggers/FlowTriggerBase.h"
#include "FlowTriggerBox.generated.h"

/** A box shaped trigger, used to generate overlap events in the level */
UCLASS()
class FLOWQUEST_API AFlowTriggerBox : public AFlowTriggerBase
{
	GENERATED_UCLASS_BODY()

#if WITH_EDITOR
	//~ Begin AActor Interface.
	virtual void EditorApplyScale(const FVector& DeltaScale, const FVector* PivotLocation, bool bAltDown, bool bShiftDown, bool bCtrlDown) override;
	//~ End AActor Interface.
#endif
};
