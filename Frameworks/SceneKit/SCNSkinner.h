//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 599.201.0.0.0
//
#ifndef SCNSkinner_h
#define SCNSkinner_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"
#include "SCNGeometry.h"
#include "SCNGeometrySource.h"
#include "SCNNode.h"

@class NSArray;

@interface SCNSkinner : NSObject<NSSecureCoding> {
  /* instance variables */
  struct __C3DSkinner * _skinner;
  BOOL _bonesAndIndicesCompression;
}

@property (weak, nonatomic) SCNNode *skeleton;
@property (retain, nonatomic) SCNGeometry *baseGeometry;
@property (nonatomic) struct SCNMatrix4 { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; } baseGeometryBindTransform;
@property (readonly, nonatomic) NSArray *boneInverseBindTransforms;
@property (readonly, nonatomic) NSArray *bones;
@property (readonly, nonatomic) SCNGeometrySource *boneWeights;
@property (readonly, nonatomic) SCNGeometrySource *boneIndices;

/* class methods */
+ (id)skinnerWithSkinnerRef:(struct __C3DSkinner *)ref;
+ (struct __C3DSkinner *)createSkinnerWithBaseGeometry:(id)geometry bones:(id)bones boneWeights:(id)weights boneIndices:(id)indices;
+ (struct __C3DSkinner *)_createSkinnerWithVertexCount:(long long)count bones:(id)bones boneWeights:(id)weights boneIndices:(id)indices baseGeometry:(id)geometry;
+ (struct __C3DSkinner *)_createSkinnerWithCompressedData:(id)data bonesCount:(unsigned long long)count vertexCount:(unsigned long long)count;
+ (id)skinnerWithBaseGeometry:(id)geometry bones:(id)bones boneInverseBindTransforms:(id)transforms boneWeights:(id)weights boneIndices:(id)indices;
+ (id)_skinnerWithBaseGeometry:(id)geometry skinnableGeometry:(id)geometry bones:(id)bones boneInverseBindTransforms:(id)transforms bindMatrix:(struct SCNMatrix4 { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; })matrix;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithSkinnerRef:(struct __C3DSkinner *)ref;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)copy;
- (struct __C3DSkinner *)skinnerRef;
- (BOOL)_setSkeleton:(id)skeleton;
- (void)_syncObjCModel;
- (BOOL)_bonesAndIndicesCompression;
- (void)set_bonesAndIndicesCompression:(BOOL)compression;
- (void)_setBaseGeometry:(id)geometry;
- (id)joints;
- (void *)__CFObject;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (struct __C3DScene *)sceneRef;
- (id)scene;
@end

#endif /* SCNSkinner_h */
