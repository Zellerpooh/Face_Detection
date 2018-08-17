package zeller.com.facedetection;

import android.graphics.Bitmap;

/**
 * Created by Administrator on 2018/8/17.
 */

public class FaceDetection {

    static {
        System.loadLibrary("native-lib");
    }

    /**
     *
     * @param mFaceBitmap
     */
    public native void faceDetectionSaveInfo(Bitmap mFaceBitmap);



}
