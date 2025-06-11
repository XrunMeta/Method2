// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TextureToByteHelper.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class AFTERLIFE_M2_API UTextureToByteHelper : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UTextureToByteHelper();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	/* Texture to be parsed as byte array */
	UPROPERTY()
	UTexture* Target;

	/*Boundary level for the header*/
	UPROPERTY(BlueprintReadOnly, Category = "Boundaries")
	FString BoundaryLabel = FString(TEXT("UnrealEngineBoundary-")) + FString::FromInt(FMath::Rand());

	/*Boundary level for begining of every payload*/
	UPROPERTY(BlueprintReadOnly, Category = "Boundaries")
	FString BoundaryBegin = FString(TEXT("--")) + BoundaryLabel + FString(TEXT("\r\n"));

	/*Boundary level for the end of payload*/
	UPROPERTY(BlueprintReadOnly, Category = "Boundaries")
	FString BoundaryEnd = FString(TEXT("\r\n--")) + BoundaryLabel + FString(TEXT("--\r\n"));



public:

	//Functions

	/* Conver the file in the path to bytes array*/
	UFUNCTION(BlueprintCallable, Category = "FileManagement")
	void Convert(bool& Ok, FString& OutBoundary, TArray<uint8>& OutReqBody, FString FullFilePath);
		
};
