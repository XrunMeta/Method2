#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "FileHelperBPFunctionLibrary.generated.h"

UCLASS()
class AFTERLIFE_M2_API UFileHelperBPFunctionLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    // Fungsi baca file binary ke TArray<uint8> dan expose ke Blueprint
    UFUNCTION(BlueprintCallable, Category = "FileHelper")
        static bool LoadFileToByteArray(const FString& FilePath, TArray<uint8>& OutData);
};
