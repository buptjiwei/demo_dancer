#ifndef DRAWRECT_H_INCLUDED
#define DRAWRECT_H_INCLUDED

#include "cv.h"
#include "highgui.h"
int getMin( int *a, int x, int y);
int getMax( int *a, int x, int y);
int drawRect( IplImage *img, CvPoint &pntmin, CvPoint &pntmax);

#endif // DRAWRECT_H_INCLUDED
