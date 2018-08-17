package zeller.com.facedetection;

import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.ImageView;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {


    private FaceDetection mFaceDetection;
    private ImageView mIvFace;
    private Bitmap mFaceBitmap;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        mFaceDetection = new FaceDetection();
        mIvFace=findViewById(R.id.iv_face);

        mFaceBitmap = BitmapFactory.decodeResource(getResources(), R.drawable.face);
        mIvFace.setImageBitmap(mFaceBitmap);

    }

    public void facedetection(View view){
        mFaceDetection.faceDetectionSaveInfo(mFaceBitmap);
    }

}
