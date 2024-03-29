//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 599.201.0.0.0
//
#ifndef SCNBox_h
#define SCNBox_h
@import Foundation;

#include "SCNGeometry.h"

@interface SCNBox : SCNGeometry {
  /* instance variables */
  double _boxwidth;
  double _boxheight;
  double _boxlength;
  double _boxchamferRadius;
  long long _boxwidthSegmentCount;
  long long _boxheightSegmentCount;
  long long _boxlengthSegmentCount;
  long long _boxchamferSegmentCount;
  long long _boxprimitiveType;
}

@property (nonatomic) double width;
@property (nonatomic) double height;
@property (nonatomic) double length;
@property (nonatomic) double chamferRadius;
@property (nonatomic) long long widthSegmentCount;
@property (nonatomic) long long heightSegmentCount;
@property (nonatomic) long long lengthSegmentCount;
@property (nonatomic) long long chamferSegmentCount;

/* class methods */
+ (id)boxWithWidth:(double)width height:(double)height length:(double)length chamferRadius:(double)radius;
+ (id)box;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithParametricGeometryRef:(struct __C3DParametricGeometry { struct __C3DGeometry { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; atomic  x1; unsigned long long x2; } x0; void * x1; struct __CFString * x2; struct __CFString * x3; struct __CFDictionary * x4; struct __C3DScene * x5; long long x6; } x0; struct __C3DMesh * x1; struct __C3DMaterial * x2; struct __CFArray * x3; struct __CFSet * x4; struct __CFArray * x5; struct  * x6; unsigned int x7 :1; undefined * x8; struct { unsigned char x0; BOOL x1; struct { BOOL x0; unsigned char x1; unsigned char x2; unsigned char x3; } x2; struct __C3DMeshElement * x3; struct __C3DMeshSource * x4; struct __C3DMesh * x5; void * x6; void * x7; } x9; struct { unsigned char x0; float x1; unsigned int x2; unsigned char x3; union { struct { float x0; float x1; } x0; struct { float x0; } x1; struct { float x0; } x2; struct { unsigned char x0; unsigned int x1 :1; unsigned int x2 :1; } x3; } x4; } x10; unsigned char x11; } x0; struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; int x12; int x13; int x14; int x15; int x16; int x17; int x18; int x19; int x20; int x21; int x22; unsigned int x23; } x1; struct { undefined * x0; undefined * x1; undefined * x2; undefined * x3; undefined * x4; undefined * x5; } x2; struct __CFData * x3; } *)ref;
- (struct __C3DGeometry { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; atomic  x1; unsigned long long x2; } x0; void * x1; struct __CFString * x2; struct __CFString * x3; struct __CFDictionary * x4; struct __C3DScene * x5; long long x6; } x0; struct __C3DMesh * x1; struct __C3DMaterial * x2; struct __CFArray * x3; struct __CFSet * x4; struct __CFArray * x5; struct  * x6; unsigned int x7 :1; undefined * x8; struct { unsigned char x0; BOOL x1; struct { BOOL x0; unsigned char x1; unsigned char x2; unsigned char x3; } x2; struct __C3DMeshElement * x3; struct __C3DMeshSource * x4; struct __C3DMesh * x5; void * x6; void * x7; } x9; struct { unsigned char x0; float x1; unsigned int x2; unsigned char x3; union { struct { float x0; float x1; } x0; struct { float x0; } x1; struct { float x0; } x2; struct { unsigned char x0; unsigned int x1 :1; unsigned int x2 :1; } x3; } x4; } x10; unsigned char x11; } *)__createCFObject;
- (id)initPresentationParametricGeometryWithParametricGeometryRef:(struct __C3DParametricGeometry { struct __C3DGeometry { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; atomic  x1; unsigned long long x2; } x0; void * x1; struct __CFString * x2; struct __CFString * x3; struct __CFDictionary * x4; struct __C3DScene * x5; long long x6; } x0; struct __C3DMesh * x1; struct __C3DMaterial * x2; struct __CFArray * x3; struct __CFSet * x4; struct __CFArray * x5; struct  * x6; unsigned int x7 :1; undefined * x8; struct { unsigned char x0; BOOL x1; struct { BOOL x0; unsigned char x1; unsigned char x2; unsigned char x3; } x2; struct __C3DMeshElement * x3; struct __C3DMeshSource * x4; struct __C3DMesh * x5; void * x6; void * x7; } x9; struct { unsigned char x0; float x1; unsigned int x2; unsigned char x3; union { struct { float x0; float x1; } x0; struct { float x0; } x1; struct { float x0; } x2; struct { unsigned char x0; unsigned int x1 :1; unsigned int x2 :1; } x3; } x4; } x10; unsigned char x11; } x0; struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; int x12; int x13; int x14; int x15; int x16; int x17; int x18; int x19; int x20; int x21; int x22; unsigned int x23; } x1; struct { undefined * x0; undefined * x1; undefined * x2; undefined * x3; undefined * x4; undefined * x5; } x2; struct __CFData * x3; } *)ref;
- (id)presentationBox;
- (id)presentationGeometry;
- (id)copyAnimationChannelForKeyPath:(id)path animation:(id)animation;
- (void)_syncObjCModel:(struct __C3DParametricGeometry { struct __C3DGeometry { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; atomic  x1; unsigned long long x2; } x0; void * x1; struct __CFString * x2; struct __CFString * x3; struct __CFDictionary * x4; struct __C3DScene * x5; long long x6; } x0; struct __C3DMesh * x1; struct __C3DMaterial * x2; struct __CFArray * x3; struct __CFSet * x4; struct __CFArray * x5; struct  * x6; unsigned int x7 :1; undefined * x8; struct { unsigned char x0; BOOL x1; struct { BOOL x0; unsigned char x1; unsigned char x2; unsigned char x3; } x2; struct __C3DMeshElement * x3; struct __C3DMeshSource * x4; struct __C3DMesh * x5; void * x6; void * x7; } x9; struct { unsigned char x0; float x1; unsigned int x2; unsigned char x3; union { struct { float x0; float x1; } x0; struct { float x0; } x1; struct { float x0; } x2; struct { unsigned char x0; unsigned int x1 :1; unsigned int x2 :1; } x3; } x4; } x10; unsigned char x11; } x0; struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; int x12; int x13; int x14; int x15; int x16; int x17; int x18; int x19; int x20; int x21; int x22; unsigned int x23; } x1; struct { undefined * x0; undefined * x1; undefined * x2; undefined * x3; undefined * x4; undefined * x5; } x2; struct __CFData * x3; } *)cmodel;
- (long long)primitiveType;
- (void)setPrimitiveType:(long long)type;
- (BOOL)getBoundingBoxMin:(struct SCNVector3 { float x0; float x1; float x2; } *)min max:(struct SCNVector3 { float x0; float x1; float x2; } *)max;
- (BOOL)getBoundingSphereCenter:(struct SCNVector3 { float x0; float x1; float x2; } *)center radius:(double *)radius;
- (id)description;
- (void)_setupObjCModelFrom:(id)from;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)copy;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* SCNBox_h */
