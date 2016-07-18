/*********************************************************************
***                                                                ***
***  Header file iplImage                                          ***
***                                                                ***
*********************************************************************/

#ifndef __IPLIMAGE_H__
#define __IPLIMAGE_H__

#ifdef __OPENCV__
  #include <opencv2/core/types_c.h>
#else
  #include <vglOpencv.h>
#endif


/*********************************************************************
***  Function prototypes                                           ***
*********************************************************************/

void iplReleaseImage(IplImage** p_ipl);
IplImage* iplCreateImage(CvSize size, int depth, int channels);
IplImage* iplCopy(IplImage* src, IplImage* dst);
void iplCvtColor(IplImage* src, IplImage* dst, int code);
IplImage* iplLoadImage(char* filename, int iscolor = CV_LOAD_IMAGE_UNCHANGED);
int iplSaveImage(char* filename, IplImage* image, int* params = 0);



#endif
