//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 599.201.0.0.0
//
#ifndef SCNMTLSmoothNormalsDeformer_h
#define SCNMTLSmoothNormalsDeformer_h
@import Foundation;

#include "MTLBuffer-Protocol.h"
#include "SCNMTLComputePipeline.h"
#include "SCNMTLDeformer-Protocol.h"

@class NSString;

@interface SCNMTLSmoothNormalsDeformer : NSObject<SCNMTLDeformer> {
  /* instance variables */
  unsigned long long _currentFrameHash;
  unsigned int _baseVertexCount;
  NSObject<MTLBuffer> *_perVertexTrianglesOffsets;
  NSObject<MTLBuffer> *_perVertexTrianglesIndices;
  SCNMTLComputePipeline *_smoothNormalsPipeline;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (unsigned long long)requiredInputs;
+ (unsigned long long)supportedOutputs;
+ (unsigned long long)requiredOutputs;

/* instance methods */
- (void)dealloc;
- (unsigned long long)updateWithComputeContext:(id)context positions:(id)positions normals:(id)normals tangents:(id)tangents;
@end

#endif /* SCNMTLSmoothNormalsDeformer_h */
