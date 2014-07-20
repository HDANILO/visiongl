/*********************************************************************
***                                                                ***
***  Header file vglDcmtkIo.h                                      ***
***                                                                ***
***                                                                ***
***                                                                ***
*********************************************************************/

#ifndef __VGLDCMTK_H__
#define __VGLDCMTK_H__

#ifdef __DCMTK__

#include <vglImage.h>
#include "dcmtk/dcmdata/dctk.h"

VglImage* vglDcmtkLoadDicom(char* opt_ifname, bool uploadGL = true);
int vglDcmtkSaveDicom(VglImage* imagevgl, char* opt_ofname);
int vglDcmtkSaveDicomCompressed(VglImage* imagevgl, char* opt_ofname);
int vglDcmtkConvertStackToDicom(char* stack_filename, char* opt_ofname, int fStart, int fEnd);

int convertDepthDcmtkToVgl(int dcmDepth);
int convertDepthVglToDcmtk(int vglDepth);

#endif

#endif
