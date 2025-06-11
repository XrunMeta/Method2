#include "AndroidImagePickerModule.h"
#include "Modules/ModuleManager.h"

#define LOCTEXT_NAMESPACE "FAndroidImagePickerModule"

void FAndroidImagePickerModule::StartupModule()
{
    // Inisialisasi jika perlu
    UE_LOG(LogTemp, Log, TEXT("AndroidImagePicker module started"));
}

void FAndroidImagePickerModule::ShutdownModule()
{
    // Bersihkan jika perlu
    UE_LOG(LogTemp, Log, TEXT("AndroidImagePicker module shut down"));
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FAndroidImagePickerModule, AndroidImagePicker)
