// Fill out your copyright notice in the Description page of Project Settings.


#include "TextureToByteHelper.h"

// Sets default values for this component's properties
UTextureToByteHelper::UTextureToByteHelper()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UTextureToByteHelper::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UTextureToByteHelper::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UTextureToByteHelper::Convert(bool& Ok, FString& OutBoundary, TArray<uint8>& OutReqBody, FString FullFilePath)
{
	FString FileNameL = FPaths::GetCleanFilename(FullFilePath);
	FString BodyL;

	TArray<uint8> FileRawData;
	bool OkL = FFileHelper::LoadFileToArray(FileRawData, *FullFilePath);

	if (OkL)
	{
		BodyL += BoundaryBegin;
		BodyL += "Content-Disposition: form-data; name=\"image\"; filename=\"" + FPaths::GetCleanFilename(FullFilePath) + "\"\r\n";
		BodyL += "Content-Type: image/jpeg\r\n\r\n";

		TArray<uint8> BodyData;
		FTCHARToUTF8 Converter(*BodyL);
		BodyData.Append((const uint8*)&Converter.Get()[0], Converter.Length());
		BodyData.Append(FileRawData);

		FTCHARToUTF8 FinalBoundaryConverter(*BoundaryEnd);
		BodyData.Append((const uint8*)&FinalBoundaryConverter.Get()[0], FinalBoundaryConverter.Length());

		OutBoundary = BoundaryLabel;
		OutReqBody = BodyData;
	}

	Ok = OkL;

}

