#ifndef WRITE2VIDEO_H_INCLUDED
#define WRITE2VIDEO_H_INCLUDED
#include "cv.h"
#include "highgui.h"
#include <stdio.h>

int getVideoInfo( CvCapture *capture, double &fps, CvSize &vdsize);


#endif // WRITE2VIDEO_H_INCLUDED
