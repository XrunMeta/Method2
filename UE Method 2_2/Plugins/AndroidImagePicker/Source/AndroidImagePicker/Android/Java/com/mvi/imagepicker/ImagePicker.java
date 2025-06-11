package com.mvi.imagepicker;

import android.app.Activity;
import android.content.Intent;
import android.net.Uri;
import android.provider.MediaStore;
import android.database.Cursor;
import android.util.Log;

import com.epicgames.unreal.GameActivity;

public class ImagePicker {
    private static final int IMAGE_PICK_CODE = 9999;

    public static void OpenGallery() {
        Activity activity = GameActivity.Get();
        Intent intent = new Intent(Intent.ACTION_PICK, MediaStore.Images.Media.EXTERNAL_CONTENT_URI);
        activity.startActivityForResult(intent, IMAGE_PICK_CODE);
    }

    // Dipanggil dari Activity saat hasil diterima
    public static boolean onActivityResult(int requestCode, int resultCode, Intent data) {
        if (requestCode == IMAGE_PICK_CODE && resultCode == Activity.RESULT_OK && data != null) {
            Uri selectedImage = data.getData();
            String imagePath = getRealPathFromURI(selectedImage);
            Log.d("ImagePicker", "Selected image path: " + imagePath);

            if (imagePath != null) {
                nativeOnImageSelected(imagePath);
            }
            return true;
        }
        return false;
    }

    private static String getRealPathFromURI(Uri contentUri) {
        String[] proj = { MediaStore.Images.Media.DATA };
        Cursor cursor = GameActivity.Get().getContentResolver().query(contentUri, proj, null, null, null);
        if (cursor != null && cursor.moveToFirst()) {
            int column_index = cursor.getColumnIndexOrThrow(MediaStore.Images.Media.DATA);
            String path = cursor.getString(column_index);
            cursor.close();
            return path;
        }
        return null;
    }

    // Native function ke Unreal
    public static native void nativeOnImageSelected(String imagePath);
}
