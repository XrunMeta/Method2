#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AndroidImagePicker.generated.h"

// Delegate yang bisa dibind dari Blueprint
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnImagePicked, const FString&, ImagePath);

UCLASS(Blueprintable)
class ANDROIDIMAGEPICKER_API UAndroidImagePicker : public UObject
{
    GENERATED_BODY()

public:

    // Fungsi yang dipanggil dari Blueprint
    UFUNCTION(BlueprintCallable, Category = "Android|Image Picker")
        void OpenImagePicker();

    // Delegate untuk kirim balik hasil path
    UPROPERTY(BlueprintAssignable, Category = "Android|Image Picker")
        FOnImagePicked OnImagePicked;

    // Dipanggil dari JNI saat image sudah dipilih
    static void HandlePickedImage(const FString& ImagePath);

private:
    static UAndroidImagePicker* CurrentInstance;
};
