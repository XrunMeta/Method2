#include "FileHelperBPFunctionLibrary.h"
#include "Misc/FileHelper.h"
#include "HAL/PlatformFilemanager.h"

bool UFileHelperBPFunctionLibrary::LoadFileToByteArray(const FString& FilePath, TArray<uint8>& OutData)
{
    // Clear array sebelumnya
    OutData.Empty();

    // Cek apakah file ada
    if (!FPlatformFileManager::Get().GetPlatformFile().FileExists(*FilePath))
    {
        UE_LOG(LogTemp, Warning, TEXT("File not found: %s"), *FilePath);
        return false;
    }

    // Baca file ke array byte
    bool bSuccess = FFileHelper::LoadFileToArray(OutData, *FilePath);
    if (!bSuccess)
    {
        UE_LOG(LogTemp, Warning, TEXT("Failed to load file: %s"), *FilePath);
        return false;
    }

    return true;
}
