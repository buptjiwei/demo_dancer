#include "write2video.h"
int getVideoInfo( CvCapture *capture, double &fps, CvSize &vdsize)
{
    if ( capture == NULL)
    {return -1;}
    else
    {
        fps = cvGetCaptureProperty (
        capture,
        CV_CAP_PROP_FPS);

        printf("fps=%d\n",(int)fps);

        vdsize = cvSize(
        (int)cvGetCaptureProperty( capture, CV_CAP_PROP_FRAME_WIDTH),
        (int)cvGetCaptureProperty( capture, CV_CAP_PROP_FRAME_HEIGHT));

        printf("frame (w, h) = (%d, %d)\n",vdsize.width,vdsize.height);
    }
    return 1;
}
