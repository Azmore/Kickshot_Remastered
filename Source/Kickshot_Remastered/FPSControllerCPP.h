// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "FPSControllerCPP.generated.h"

//Delegates and events examples
//DECLARE_DYNAMIC_MULTICAST_DELEGATE(FRobotStartDelegate);
//DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRobotDeathDelegate, int, lives);

UCLASS()
class KICKSHOT_REMASTERED_API AFPSControllerCPP : public ACharacter
{
	GENERATED_BODY()


		//Components
private:
	class UCameraComponent* playerCamera;
	//class UCameraComponent* playerCamera;



	//below allows to be called from blueprint
	//UFUNCTION(BlueprintCallable)
	//void UpdateInventory();

	//UPROPERTY(BlueprintAssignable, Category = "Robot")
	//FRobotStartDelegate OnRobotStart;





public:
	// Sets default values for this character's properties
	AFPSControllerCPP();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


	//Dash
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DashStrength;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DashTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxDashesAllowed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DashResetTimeInAir;

	//Lets the player dash
	UFUNCTION(BlueprintCallable)
	void Dash();

	void onDashTimerEnd1();
	void onDashTimerEnd2();
	void onDashTimerEnd3();
	void IncreaseDashes();

private:
	bool CanDash;
	float DashCounter;
	int CanDashCounter;
	float LastCounterCallTime;
	float DodgeStrength;


	FTimerHandle _dashTimerHandle1;
	FTimerHandle _dashTimerHandle2;
	FTimerHandle _dashTimerHandle3;

	FVector priorCharacterLocation;

	//Jumping
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 MaxJumpsAllowed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 JumpStrength;


	//TODO: Make these private later
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool EnableJump;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 JumpCounter;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool CanJumpNow;


	//private:




};
