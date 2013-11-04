/*********************************************************************
***                                                                ***
***  Header file vglContext.h                                      ***
***                                                                ***
***  ddantas 4/2/2009                                              ***
***                                                                ***
*********************************************************************/

#ifndef __VGLCONTEXT_H__
#define __VGLCONTEXT_H__

#include "vglImage.h"

#define VGL_BLANK_CONTEXT 0
#define VGL_RAM_CONTEXT 1
#define VGL_GL_CONTEXT 2
#define VGL_CUDA_CONTEXT 4

#define vglIsContextValid(x) ( (x>=1) and (x<=7) )
#define vglIsContextUnique(x) ( (x>=0) and (x<=4) and (x!=3) )
#define vglIsInContext(img, x) ( (img)->inContext & (x) or ((img)->inContext==0 and x==0))

int vglAddContext(VglImage* img, int context);
int vglSetContext(VglImage* img, int context);
int vglCheckContext(VglImage* img, int context);
int vglCheckContextForOutput(VglImage* img, int context);
void vglPrintContext(int context, char* msg = "");
void vglPrintContext(VglImage* img, char* msg = "");

#endif
