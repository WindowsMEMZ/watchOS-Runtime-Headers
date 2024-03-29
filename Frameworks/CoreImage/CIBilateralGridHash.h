//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1420.3.0.0.0
//
#ifndef CIBilateralGridHash_h
#define CIBilateralGridHash_h
@import Foundation;

@interface CIBilateralGridHash : NSObject {
  /* instance variables */
  int _n_dims;
  int _width;
  int _height;
  int _sigma_s;
  int _sigma_r_luma;
  int _sigma_r_chroma;
  unsigned long long _max_hash_table_size;
  unsigned int _hash_table_size;
  struct BGHashMapContext * _hash_map;
  struct { union { unsigned long long x0; unsigned char x1[8] } x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; } * _hash_table;
  unsigned int * _hash_matrix_data;
  unsigned int * _blur_indices;
  unsigned int * _coord_indices;
  unsigned int * _coord_table;
  unsigned int * _coord_indices_off;
  unsigned int * _interp_indices;
  unsigned int * _interp_table;
  char * _interp_pad;
}

/* instance methods */
- (int)countVertices;
- (int)countDims;
- (int)width;
- (int)height;
- (int)sigma_s;
- (int)sigma_r_luma;
- (int)sigma_r_chroma;
- (id)initWithWidth:(int)width height:(int)height maxHashTableSize:(unsigned long long)size;
- (void)dealloc;
- (void)clear;
- (int)_createWithSurface:(struct __IOSurface *)surface region:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })region cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect sigma_s:(int)sigma_s sigma_r_luma:(int)sigma_r_luma sigma_r_chroma:(int)sigma_r_chroma;
- (int)createWithSurface:(struct __IOSurface *)surface region:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })region cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect sigma_s:(int)sigma_s sigma_r_luma:(int)sigma_r_luma sigma_r_chroma:(int)sigma_r_chroma;
- (void)splat:(struct __CVBuffer *)splat pout:(float *)pout;
- (void)splat_w_mul_x:(struct __CVBuffer *)splat_w_mul_x inPixelBuffer:(struct __CVBuffer *)buffer pout:(float *)pout;
- (void)slice:(const float *)slice outPixelBuffer:(struct __CVBuffer *)buffer;
- (void)slice_trilinear:(struct __IOSurface *)slice_trilinear pin:(const float *)pin pout:(struct __CVBuffer *)pout;
- (void)blur:(const float *)blur pout:(float *)pout;
- (void)normalize:(const float *)normalize pout:(float *)pout;
- (void)normalize_blur:(const float *)normalize_blur pout:(float *)pout;
- (void)splat_ones:(float *)splat_ones;
- (void)blur_ones:(float *)blur_ones;
- (void)blur_n:(float *)blur_n;
- (const unsigned int *)blur_indices:(int)blur_indices n_blur_indices:(int *)n_blur_indices;
- (const void *)hash_table;
- (const unsigned int *)hash_matrix;
- (const unsigned int *)blur_table;
- (const unsigned int *)coord_indices;
- (const unsigned int *)coord_table;
- (const unsigned int *)interp_indices;
- (const unsigned int *)interp_table;
- (const char *)interp_pad;
- (int)_computeBilateralSpaceYCC444:(struct __IOSurface *)ycc444 region:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })region cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect sigma_s:(int)sigma_s sigma_r_luma:(int)sigma_r_luma sigma_r_chroma:(int)sigma_r_chroma;
- (void)_computeBlurIndices;
- (void)_computeCoordIndices;
- (void)_computeInterpIndices;
- (BOOL)_hashMapFindKey:(unsigned long long)key to:(unsigned int *)to;
- (void)_hashMapAddKey:(unsigned long long)key andValue:(unsigned int)value;
- (int)_addHashKeyAtX:(int)x Y:(int)y key:(unsigned long long)key isKeyExist:(BOOL *)exist;
@end

#endif /* CIBilateralGridHash_h */
