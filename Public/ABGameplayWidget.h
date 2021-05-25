// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ArenaBattle.h"
#include "Blueprint/UserWidget.h"
#include "ABGameplayWidget.generated.h"

/**
 * 
 */
UCLASS()
class ARENABATTLE_API UABGameplayWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	virtual void NativeConstruct() override;

	UFUNCTION()
	void OnResumeClicked();

	UFUNCTION()
	void OnReturnToTitleClicked();

	UFUNCTION()
	void OnRetryGameClicked();

protected:
	UPROPERTY()
	class UButton* ResumButton;

	UPROPERTY()
	class UButton* ReturnToTitleButton;

	UPROPERTY()
	class UButton* RetryGameButton;
	
};
