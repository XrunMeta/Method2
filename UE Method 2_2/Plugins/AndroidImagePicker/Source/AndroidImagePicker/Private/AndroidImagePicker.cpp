#include "AndroidImagePicker.h"

#if PLATFORM_ANDROID
#include "Android/AndroidApplication.h"
#include "Android/AndroidJNI.h"
#include <jni.h>
#endif

UAndroidImagePicker* UAndroidImagePicker::CurrentInstance = nullptr;

void UAndroidImagePicker::OpenImagePicker()
{
    CurrentInstance = NewObject<UAndroidImagePicker>();

#if PLATFORM_ANDROID
    if (JNIEnv* Env = FAndroidApplication::GetJavaEnv())
    {
        jclass Class = FAndroidApplication::FindJavaClass("com/mvi/imagepicker/ImagePicker");
        jmethodID Method = Env->GetStaticMethodID(Class, "OpenGallery", "()V");

        if (Method)
        {
            Env->CallStaticVoidMethod(Class, Method);
        }

        Env->DeleteLocalRef(Class);
    }
#endif
}

void UAndroidImagePicker::HandlePickedImage(const FString& ImagePath)
{
    if (CurrentInstance)
    {
        CurrentInstance->OnImagePicked.Broadcast(ImagePath);
        CurrentInstance = nullptr;
    }
}

#if PLATFORM_ANDROID
extern "C"
JNIEXPORT void JNICALL
Java_com_mvi_imagepicker_ImagePicker_nativeOnImagePicked(JNIEnv * Env, jclass, jstring JPath)
{
    const char* PathChars = Env->GetStringUTFChars(JPath, nullptr);
    FString ImagePath = UTF8_TO_TCHAR(PathChars);
    Env->ReleaseStringUTFChars(JPath, PathChars);

    // Panggil handler Unreal
    UAndroidImagePicker::HandlePickedImage(ImagePath);
}
#endif
