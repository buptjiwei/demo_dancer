#include "drawRect.h"
#include <stdio.h>
int getMin( int *a, int x, int y)
{
    /*if ( a[0]>y || a[1]>x)
    {
        a[0]=y;
        a[1]=x;
    }*/
    if  (a[0]>y) a[0] = y;
    if ( a[1]>x) a[1] = x;
    return 1;
}
int getMax( int *a, int x, int y)
{
   /* if ( a[0]<y || a[1]<x)
    {
        a[0]=y;
        a[1]=x;
    }*/
    if  (a[0]<y) a[0] = y;
    if ( a[1]<x) a[1] = x;
    return 1;
}

int drawRect( IplImage *img, CvPoint &pntmin, CvPoint &pntmax)
{
    const int wid = img->width;
    const int hei = img->height;
    int i, j;
    const int c_wid = 2;
    const int c_hei = 2;
   // int rect_w = 0;
    //int rect_h = 0;
    CvScalar pix;
    double pix_mean;
    int loc_max[2]={0,0};
    int loc_min[2]={wid, hei};

    for ( j=10; j<hei; j+= c_hei)
    {
        for ( i=10; i<wid; i+= c_wid)
        {
            pix = cvGet2D( img, j, i);
            pix_mean = (pix.val[0]+pix.val[1]+pix.val[2])/3.0;
            if ( pix_mean > 150.0)
            {
                /* mannally modified _2012.3.3*/
                if ( (i>114 && i<130) || (j>67 && j<107)) continue;


                /*end of mannaly modified*/
                getMin( loc_min, j, i);
                getMax( loc_max, j, i);
                //printf("%f %f-%f-%f %d %d\n", pix_mean, pix.val[0],pix.val[1],pix.val[2], j,i);
            }

        }
    }
    //rect_w = (loc_max[1] - loc_min[1])/2;
    //rect_h = (loc_max[0] - loc_min[0])/2;
    //printf("%d-%d %d-%d\n", loc_min[1], loc_min[0], loc_max[1], loc_max[0]);
    const double ratio = 0;
   /* pntmin = cvPoint( loc_min[1]+ ratio*(loc_max[1]-loc_min[1]),
                      loc_min[0]+ ratio*(loc_max[0]-loc_min[0]));

    pntmax = cvPoint( loc_min[1]+ (1-ratio)*(loc_max[1]-loc_min[1]),
                      loc_min[0]+ (1-ratio)*(loc_max[0]-loc_min[0]));
    */
    pntmin = cvPoint( loc_min[0]+ ratio*(loc_max[0]-loc_min[0]),
                      loc_min[1]+ ratio*(loc_max[1]-loc_min[1]));

    pntmax = cvPoint( loc_min[0]+ (1-ratio)*(loc_max[0]-loc_min[0]),
                      loc_min[1]+ (1-ratio)*(loc_max[1]-loc_min[1]));
    return 1;
}
