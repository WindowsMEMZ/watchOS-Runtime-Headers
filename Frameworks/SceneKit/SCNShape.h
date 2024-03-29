//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 599.201.0.0.0
//
#ifndef SCNShape_h
#define SCNShape_h
@import Foundation;

#include "SCNGeometry.h"

@class UIBezierPath;

@interface SCNShape : SCNGeometry {
  /* instance variables */
  float _discretizedStraightLineMaxLength;
  long long _primitiveType;
}

@property (copy, nonatomic) UIBezierPath *path;
@property (nonatomic) double extrusionDepth;
@property (nonatomic) long long chamferMode;
@property (nonatomic) double chamferRadius;
@property (copy, nonatomic) UIBezierPath *chamferProfile;

/* class methods */
+ (id)shapeWithPath:(id)path extrusionDepth:(double)depth;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (void)_syncObjCModel:(struct __C3DShapeGeometry { struct __C3DGeometry { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; atomic  x1; unsigned long long x2; } x0; void * x1; struct __CFString * x2; struct __CFString * x3; struct __CFDictionary * x4; struct __C3DScene * x5; long long x6; } x0; struct __C3DMesh * x1; struct __C3DMaterial * x2; struct __CFArray * x3; struct __CFSet * x4; struct __CFArray * x5; struct  * x6; unsigned int x7 :1; undefined * x8; struct { unsigned char x0; BOOL x1; struct { BOOL x0; unsigned char x1; unsigned char x2; unsigned char x3; } x2; struct __C3DMeshElement * x3; struct __C3DMeshSource * x4; struct __C3DMesh * x5; void * x6; void * x7; } x9; struct { unsigned char x0; float x1; unsigned int x2; unsigned char x3; union { struct { float x0; float x1; } x0; struct { float x0; } x1; struct { float x0; } x2; struct { unsigned char x0; unsigned int x1 :1; unsigned int x2 :1; } x3; } x4; } x10; unsigned char x11; } x0; struct { char x0; float x1; float x2; float x3; int x4; float x5; struct CGPath * x6; void * x7; struct CGPath * x8; void * x9; } x1; struct __C3DMesh * x2; unsigned char x3[16] } *)cmodel;
- (id)init;
- (id)initWithShapeGeometryRef:(struct __C3DShapeGeometry { struct __C3DGeometry { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; atomic  x1; unsigned long long x2; } x0; void * x1; struct __CFString * x2; struct __CFString * x3; struct __CFDictionary * x4; struct __C3DScene * x5; long long x6; } x0; struct __C3DMesh * x1; struct __C3DMaterial * x2; struct __CFArray * x3; struct __CFSet * x4; struct __CFArray * x5; struct  * x6; unsigned int x7 :1; undefined * x8; struct { unsigned char x0; BOOL x1; struct { BOOL x0; unsigned char x1; unsigned char x2; unsigned char x3; } x2; struct __C3DMeshElement * x3; struct __C3DMeshSource * x4; struct __C3DMesh * x5; void * x6; void * x7; } x9; struct { unsigned char x0; float x1; unsigned int x2; unsigned char x3; union { struct { float x0; float x1; } x0; struct { float x0; } x1; struct { float x0; } x2; struct { unsigned char x0; unsigned int x1 :1; unsigned int x2 :1; } x3; } x4; } x10; unsigned char x11; } x0; struct { char x0; float x1; float x2; float x3; int x4; float x5; struct CGPath * x6; void * x7; struct CGPath * x8; void * x9; } x1; struct __C3DMesh * x2; unsigned char x3[16] } *)ref;
- (id)initPresentationShapeGeometryWithShapeGeometryRef:(struct __C3DShapeGeometry { struct __C3DGeometry { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; atomic  x1; unsigned long long x2; } x0; void * x1; struct __CFString * x2; struct __CFString * x3; struct __CFDictionary * x4; struct __C3DScene * x5; long long x6; } x0; struct __C3DMesh * x1; struct __C3DMaterial * x2; struct __CFArray * x3; struct __CFSet * x4; struct __CFArray * x5; struct  * x6; unsigned int x7 :1; undefined * x8; struct { unsigned char x0; BOOL x1; struct { BOOL x0; unsigned char x1; unsigned char x2; unsigned char x3; } x2; struct __C3DMeshElement * x3; struct __C3DMeshSource * x4; struct __C3DMesh * x5; void * x6; void * x7; } x9; struct { unsigned char x0; float x1; unsigned int x2; unsigned char x3; union { struct { float x0; float x1; } x0; struct { float x0; } x1; struct { float x0; } x2; struct { unsigned char x0; unsigned int x1 :1; unsigned int x2 :1; } x3; } x4; } x10; unsigned char x11; } x0; struct { char x0; float x1; float x2; float x3; int x4; float x5; struct CGPath * x6; void * x7; struct CGPath * x8; void * x9; } x1; struct __C3DMesh * x2; unsigned char x3[16] } *)ref;
- (id)presentationGeometry;
- (id)copyAnimationChannelForKeyPath:(id)path animation:(id)animation;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)copy;
- (double)discretizedStraightLineMaxLength;
- (void)setDiscretizedStraightLineMaxLength:(double)length;
- (long long)primitiveType;
- (void)setPrimitiveType:(long long)type;
- (struct { char x0; double x1; double x2; int x3; double x4; void * x5; void * x6; })params;
- (BOOL)getBoundingBoxMin:(struct SCNVector3 { float x0; float x1; float x2; } *)min max:(struct SCNVector3 { float x0; float x1; float x2; } *)max;
- (BOOL)getBoundingSphereCenter:(struct SCNVector3 { float x0; float x1; float x2; } *)center radius:(double *)radius;
- (void)dealloc;
- (void)_customDecodingOfSCNShape:(id)scnshape;
- (void)_customEncodingOfSCNShape:(id)scnshape;
- (struct __C3DGeometry { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; atomic  x1; unsigned long long x2; } x0; void * x1; struct __CFString * x2; struct __CFString * x3; struct __CFDictionary * x4; struct __C3DScene * x5; long long x6; } x0; struct __C3DMesh * x1; struct __C3DMaterial * x2; struct __CFArray * x3; struct __CFSet * x4; struct __CFArray * x5; struct  * x6; unsigned int x7 :1; undefined * x8; struct { unsigned char x0; BOOL x1; struct { BOOL x0; unsigned char x1; unsigned char x2; unsigned char x3; } x2; struct __C3DMeshElement * x3; struct __C3DMeshSource * x4; struct __C3DMesh * x5; void * x6; void * x7; } x9; struct { unsigned char x0; float x1; unsigned int x2; unsigned char x3; union { struct { float x0; float x1; } x0; struct { float x0; } x1; struct { float x0; } x2; struct { unsigned char x0; unsigned int x1 :1; unsigned int x2 :1; } x3; } x4; } x10; unsigned char x11; } *)__createCFObject;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* SCNShape_h */
