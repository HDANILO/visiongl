/*********************************************************************
***                                                                ***
***  Header file vglConst                                          ***
***                                                                ***
*********************************************************************/

#ifndef __VGLCONST_H__
#define __VGLCONST_H__


#define VGL_WIN_X0   -1.0
#define VGL_WIN_X1    1.0
#define VGL_WIN_DX    (VGL_WIN_X1 - VGL_WIN_X0)
#define VGL_WIN_Y0   -1.0
#define VGL_WIN_Y1    1.0
#define VGL_WIN_DY    (VGL_WIN_Y1 - VGL_WIN_Y0)

#define VGL_MIN_WINDOW_SPLIT 1
#define VGL_DEFAULT_WINDOW_SPLIT 2
#define VGL_MAX_WINDOW_SPLIT 4
#define VGL_MAX_WINDOWS      (VGL_MAX_WINDOW_SPLIT * VGL_MAX_WINDOW_SPLIT)

#define VGL_MAX_DIM 10
#define VGL_ARR_SHAPE_SIZE (VGL_MAX_DIM+1)
//#define VGL_WIDTH 0
//#define VGL_HEIGHT 1
//#define VGL_LENGTH 2
//#define VGL_4D 3

#define VGL_SHAPE_D0        0
#define VGL_SHAPE_D1        1
#define VGL_SHAPE_D2        2
#define VGL_SHAPE_D3        3
#define VGL_SHAPE_D4        4

#define VGL_SHAPE_NCHANNELS VGL_SHAPE_D0
#define VGL_SHAPE_WIDTH     VGL_SHAPE_D1
#define VGL_SHAPE_HEIGHT    VGL_SHAPE_D2
#define VGL_SHAPE_LENGTH    VGL_SHAPE_D3

//CL
//#ifdef __OPENCL__
  #define VGL_ARR_CLSTREL_SIZE 256
//#endif

#define VGL_PACK_32

#ifdef VGL_PACK_8
  #define VGL_PACK_SIZE_BITS 8
  #define VGL_PACK_SIZE_BYTES 1
  #define VGL_PACK_MAX_UINT 0xff
  #define VGL_PACK_CL_CONST_TYPE CL_UNSIGNED_INT8
  #define VGL_PACK_CL_SHADER_TYPE unsigned char
  #define VGL_PACK_OUTPUT_SWAP_MASK    VGL_PACK_CL_SHADER_TYPE \
                    outputSwapMask[32] = {0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01, };
#endif

#ifdef VGL_PACK_32
  #define VGL_PACK_SIZE_BITS 32
  #define VGL_PACK_SIZE_BYTES 4
  #define VGL_PACK_MAX_UINT 0xffffffff
  #define VGL_PACK_CL_CONST_TYPE CL_UNSIGNED_INT32
  #define VGL_PACK_CL_SHADER_TYPE uint
  #define VGL_PACK_OUTPUT_SWAP_MASK    VGL_PACK_CL_SHADER_TYPE \
                    outputSwapMask[32] = {0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01, \
                                          0x8000, 0x4000, 0x2000, 0x1000, 0x0800, 0x0400, 0x0200, 0x0100, \
                                          0x800000, 0x400000, 0x200000, 0x100000, 0x080000, 0x040000, 0x020000, 0x010000, \
                                          0x80000000, 0x40000000, 0x20000000, 0x10000000, 0x08000000, 0x04000000, 0x02000000, 0x01000000, };
#endif



#endif

